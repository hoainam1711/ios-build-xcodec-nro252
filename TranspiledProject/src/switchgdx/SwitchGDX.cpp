// iOS port of SwitchGDX (see the bundled SwitchGDX license).
#include "Clearwing.h"

#include <java/lang/String.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/ShortBuffer.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/DoubleBuffer.h>
#include <java/nio/IntBuffer.h>
#include <java/nio/LongBuffer.h>

#include <com/thelogicmaster/switchgdx/SwitchApplication.h>
#include <com/thelogicmaster/switchgdx/SwitchAudio.h>
#include <com/thelogicmaster/switchgdx/SwitchMusic.h>
#include <com/thelogicmaster/switchgdx/SwitchGraphics.h>
#include <com/thelogicmaster/switchgdx/SwitchGL.h>
#include <com/thelogicmaster/switchgdx/SwitchSound.h>
#include <com/thelogicmaster/switchgdx/SwitchFiles.h>
#include <com/thelogicmaster/switchgdx/SwitchInput.h>
#include <com/thelogicmaster/switchgdx/SwitchNet.h>
#include <com/thelogicmaster/switchgdx/SwitchApplication_SwitchClipboard.h>
#include <com/badlogic/gdx/utils/GdxRuntimeException.h>
#include <com/badlogic/gdx/graphics/g2d/Gdx2DPixmap.h>
#include <com/badlogic/gdx/graphics/glutils/ETC1.h>
#include <com/badlogic/gdx/utils/BufferUtils.h>
#include <com/badlogic/gdx/math/Matrix4.h>
#include <cstring>
#include <mutex>
#include <vector>
#include <utility>
#include <SDL.h>
#include <SDL_mixer.h>
#include "glad/gles2.h"
#include "IOSPlatform.h"
#include "switchgdx/gdx_buffer_utils.h"
#include "switchgdx/gdx_matrix4.h"
#include "switchgdx/gdx2d.h"
#include "switchgdx/etc1_utils.h"
static std::mutex audioCallbackLock;
static std::vector<int> soundFinishedEvents;
static bool musicFinishedEvent;
static bool audioOpen;
void onMusicFinished() {
    std::lock_guard lock{audioCallbackLock};
    musicFinishedEvent = true;
}

void onSoundFinished(int channel) {
    std::lock_guard lock{audioCallbackLock};
    soundFinishedEvents.push_back(channel);
}

void *getBufferAddress(jcontext ctx, java_nio_Buffer *buffer) {
    if (!buffer)
        return nullptr;
    int typeSize = 1;
    if (isInstance(ctx, (jobject) buffer, &class_java_nio_ByteBuffer))
        typeSize = sizeof(jbyte);
    else if (isInstance(ctx, (jobject) buffer, &class_java_nio_FloatBuffer))
        typeSize = sizeof(jfloat);
    else if (isInstance(ctx, (jobject) buffer, &class_java_nio_IntBuffer))
        typeSize = sizeof(jint);
    else if (isInstance(ctx, (jobject) buffer, &class_java_nio_ShortBuffer))
        typeSize = sizeof(jshort);
    else if (isInstance(ctx, (jobject) buffer, &class_java_nio_CharBuffer))
        typeSize = sizeof(jchar);
    else if (isInstance(ctx, (jobject) buffer, &class_java_nio_LongBuffer))
        typeSize = sizeof(jlong);
    else if (isInstance(ctx, (jobject) buffer, &class_java_nio_DoubleBuffer))
        typeSize = sizeof(jdouble);
    return (char*)buffer->F_address + typeSize * buffer->F_position;
}

void *getBufferAddress(java_nio_ByteBuffer *buffer) {
    return (char*)buffer->parent.F_address + sizeof(jbyte) * buffer->parent.F_position;
}

void *getBufferAddress(java_nio_ShortBuffer *buffer) {
    return (char*)buffer->parent.F_address + sizeof(jshort) * buffer->parent.F_position;
}

void *getBufferAddress(java_nio_CharBuffer *buffer) {
    return (char*)buffer->parent.F_address + sizeof(jchar) * buffer->parent.F_position;
}

void *getBufferAddress(java_nio_IntBuffer *buffer) {
    return (char*)buffer->parent.F_address + sizeof(jint) * buffer->parent.F_position;
}

void *getBufferAddress(java_nio_LongBuffer *buffer) {
    return (char*)buffer->parent.F_address + sizeof(jlong) * buffer->parent.F_position;
}

void *getBufferAddress(java_nio_FloatBuffer *buffer) {
    return (char*)buffer->parent.F_address + sizeof(jfloat) * buffer->parent.F_position;
}

void *getBufferAddress(java_nio_DoubleBuffer *buffer) {
    return (char*)buffer->parent.F_address + sizeof(jdouble) * buffer->parent.F_position;
}

void iosOpenAudio() {
    Mix_Init(MIX_INIT_MP3 | MIX_INIT_OGG);
    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) != 0) {
        SDL_LogWarn(SDL_LOG_CATEGORY_AUDIO, "SDL_mixer: %s", Mix_GetError());
        return;
    }
    Mix_AllocateChannels(32);
    audioOpen = true;
    Mix_HookMusicFinished(onMusicFinished);
    Mix_ChannelFinished(onSoundFinished);
}

void iosDrainAudio(jcontext ctx) {
    std::vector<int> finished;
    bool music;
    {
        std::lock_guard lock{audioCallbackLock};
        finished.swap(soundFinishedEvents);
        music = std::exchange(musicFinishedEvent, false);
    }
    if (music) SM_com_thelogicmaster_switchgdx_SwitchAudio_onMusicFinished(ctx);
    for (int channel : finished) SM_com_thelogicmaster_switchgdx_SwitchAudio_onSoundFinished_int(ctx, channel);
}

void iosCloseAudio() {
    Mix_ChannelFinished(nullptr);
    Mix_HookMusicFinished(nullptr);
    Mix_CloseAudio();
    audioOpen = false;
    Mix_Quit();
}

void iosLifecycleChanged(int state) {
    if (audioOpen) Mix_PauseAudio(state == 3 ? 0 : 1);
    SM_com_thelogicmaster_switchgdx_SwitchApplication_lifecycle_int(getThreadContext(), state);
}

extern "C" {

void SM_com_thelogicmaster_switchgdx_SwitchApplication_init_boolean(jcontext ctx, jbool vsync) {
    if (!*iosLocalRoot())
        constructAndThrowMsg<&class_com_badlogic_gdx_utils_GdxRuntimeException, init_java_lang_RuntimeException_java_lang_String>(
            ctx, "Could not create Application Support in the iOS sandbox");
    if (!iosOpenVideo(vsync) || !gladLoadGLES2((GLADloadfunc)SDL_GL_GetProcAddress)) {
        std::string error = std::string("Could not open the iOS GLES2 drawable: ") + SDL_GetError();
        iosCloseVideo();
        constructAndThrowMsg<&class_com_badlogic_gdx_utils_GdxRuntimeException, init_java_lang_RuntimeException_java_lang_String>(ctx, error.c_str());
    }
    iosOpenAudio();
}

jint SM_com_thelogicmaster_switchgdx_SwitchApplication_update_R_int(jcontext ctx) {
    int state = iosPumpEvents();
    if (state == 1) iosDrainAudio(ctx);
    return state;
}

void SM_com_thelogicmaster_switchgdx_SwitchApplication_present(jcontext) { iosSwapDrawable(); }
void SM_com_thelogicmaster_switchgdx_SwitchApplication_dispose(jcontext) {
    iosCloseAudio();
    iosCloseVideo();
}

jobject M_com_thelogicmaster_switchgdx_SwitchFiles_getLocalStoragePath_R_java_lang_String(jcontext ctx, jobject) {
    return (jobject)stringFromNative(ctx, iosLocalRoot());
}

jobject SM_com_thelogicmaster_switchgdx_SwitchFiles_internalRoot_R_java_lang_String(jcontext ctx) {
    return (jobject)stringFromNative(ctx, iosInternalRoot());
}

jint M_com_thelogicmaster_switchgdx_SwitchGraphics_getWidth_R_int(jcontext, jobject) {
    int width = 0;
    iosDrawableSize(&width, nullptr);
    return width;
}

jint M_com_thelogicmaster_switchgdx_SwitchGraphics_getHeight_R_int(jcontext, jobject) {
    int height = 0;
    iosDrawableSize(nullptr, &height);
    return height;
}

jint SM_com_thelogicmaster_switchgdx_SwitchInput_pollInput_Array1_int_R_int(jcontext ctx, jobject values) {
    auto data = (jarray)values;
    if (!data || data->length < 3) throwIOException(ctx, "Expected 3 input fields");
    return iosPollInput((jint *)data->data);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_setOnscreenKeyboardVisible_boolean(jcontext, jobject, jbool visible) {
    if (visible) SDL_StartTextInput();
    else SDL_StopTextInput();
}

jbool SM_com_thelogicmaster_switchgdx_SwitchInput_beginTextInput_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_boolean(
        jcontext ctx, jobject title, jobject text, jobject hint, jobject type) {
    auto value = [&](jobject s) { return s ? stringToNative(ctx, (jstring)s) : ""; };
    return iosBeginTextInput(value(title), value(text), value(hint), value(type));
}

jobject SM_com_thelogicmaster_switchgdx_SwitchInput_takeText_R_java_lang_String(jcontext ctx) {
    return (jobject)stringFromNative(ctx, iosTakeText());
}

jbool M_com_thelogicmaster_switchgdx_SwitchNet_openURI_java_lang_String_R_boolean(jcontext ctx, jobject, jobject uri) {
    return uri && SDL_OpenURL(stringToNative(ctx, (jstring)uri)) == 0;
}

jbool M_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_hasContents_R_boolean(jcontext, jobject) {
    return SDL_HasClipboardText();
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_getContents_R_java_lang_String(jcontext ctx, jobject) {
    char *text = SDL_GetClipboardText();
    auto result = (jobject)stringFromNative(ctx, text ? text : "");
    SDL_free(text);
    return result;
}

void M_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_setContents_java_lang_String(jcontext ctx, jobject, jobject text) {
    SDL_SetClipboardText(text ? stringToNative(ctx, (jstring)text) : "");
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_create_java_lang_String(jcontext ctx, jobject self, jobject file) {
    auto music = Mix_LoadMUS(stringToNative(ctx, (jstring) file));
    if (!music)
        constructAndThrowMsg<&class_com_badlogic_gdx_utils_GdxRuntimeException, init_java_lang_RuntimeException_java_lang_String>(ctx, Mix_GetError());
    ((com_thelogicmaster_switchgdx_SwitchMusic *) self)->F_handle = (jlong)music;
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_start_boolean(jcontext ctx, jobject self, jbool looping) {
    Mix_PlayMusic((Mix_Music*)((com_thelogicmaster_switchgdx_SwitchMusic *) self)->F_handle, looping ? -1 : 0);
}

void SM_com_thelogicmaster_switchgdx_SwitchMusic_resume(jcontext ctx) {
    Mix_ResumeMusic();
}

void SM_com_thelogicmaster_switchgdx_SwitchMusic_pause0(jcontext ctx) {
    Mix_PauseMusic();
}

void SM_com_thelogicmaster_switchgdx_SwitchMusic_stop0(jcontext ctx) {
    Mix_HaltMusic();
}

void SM_com_thelogicmaster_switchgdx_SwitchMusic_setVolume0_float(jcontext ctx, jfloat volume) {
    Mix_VolumeMusic((int)(volume * MIX_MAX_VOLUME));
}

void SM_com_thelogicmaster_switchgdx_SwitchMusic_setPosition0_float(jcontext ctx, jfloat position) {
    Mix_RewindMusic();
    Mix_SetMusicPosition(position);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_dispose0(jcontext ctx, jobject self) {
    auto& handle = ((com_thelogicmaster_switchgdx_SwitchMusic *) self)->F_handle;
    if (!handle)
        return;
    Mix_FreeMusic((Mix_Music *)handle);
    handle = 0;
}

void M_com_thelogicmaster_switchgdx_SwitchSound_create_java_lang_String(jcontext ctx, jobject self, jobject file) {
    auto sound = Mix_LoadWAV(stringToNative(ctx, (jstring) file));
    if (!sound)
        constructAndThrowMsg<&class_com_badlogic_gdx_utils_GdxRuntimeException, init_java_lang_RuntimeException_java_lang_String>(ctx, Mix_GetError());
    ((com_thelogicmaster_switchgdx_SwitchSound *) self)->F_handle = (jlong)sound;
}

void M_com_thelogicmaster_switchgdx_SwitchSound_create_Array1_byte(jcontext ctx, jobject self, jobject wavData) {
    auto data = (jarray)wavData;
    auto buffer = SDL_RWFromMem(data->data, data->length);
    auto sound = Mix_LoadWAV_RW(buffer, true);
    if (!sound)
        constructAndThrowMsg<&class_com_badlogic_gdx_utils_GdxRuntimeException, init_java_lang_RuntimeException_java_lang_String>(ctx, Mix_GetError());
    ((com_thelogicmaster_switchgdx_SwitchSound *) self)->F_handle = (jlong)sound;
}

void M_com_thelogicmaster_switchgdx_SwitchSound_dispose0(jcontext ctx, jobject self) {
    auto &handle = ((com_thelogicmaster_switchgdx_SwitchSound *) self)->F_handle;
    if (!handle)
        return;
    Mix_FreeChunk((Mix_Chunk *)handle);
    handle = 0;
}

jint M_com_thelogicmaster_switchgdx_SwitchSound_play0_boolean_R_int(jcontext ctx, jobject self, jbool looping) {
    return Mix_PlayChannel(-1, (Mix_Chunk*)((com_thelogicmaster_switchgdx_SwitchSound *) self)->F_handle, looping ? -1 : 0);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_setLooping0_int_boolean(jcontext ctx, jobject self, jint channel, jbool looping) {
    Mix_PlayChannel(channel, (Mix_Chunk*)((com_thelogicmaster_switchgdx_SwitchSound *) self)->F_handle, looping ? -1 : 0);
}

void SM_com_thelogicmaster_switchgdx_SwitchSound_stop0_int(jcontext ctx, jint channel) {
    Mix_HaltChannel(channel);
}

void SM_com_thelogicmaster_switchgdx_SwitchSound_pause0_int(jcontext ctx, jint channel) {
    Mix_Pause(channel);
}

void SM_com_thelogicmaster_switchgdx_SwitchSound_resume0_int(jcontext ctx, jint channel) {
    Mix_Resume(channel);
}

void SM_com_thelogicmaster_switchgdx_SwitchSound_setPitch0_int_float(jcontext ctx, jint channel, jfloat pitch) {
    // Todo: Custom pitch changing effect based on: https://gist.github.com/hydren/ea794e65e95c7713c00c88f74b71f8b1
}

void SM_com_thelogicmaster_switchgdx_SwitchSound_setVolume0_int_float(jcontext ctx, jint channel, jfloat volume) {
    Mix_Volume(channel, (int)(volume * MIX_MAX_VOLUME));
}

void SM_com_thelogicmaster_switchgdx_SwitchSound_setPan0_int_float(jcontext ctx, jint channel, jfloat pan) {
    uint8_t left, right;
    if (pan <= 0) {
        left = 255;
        right = (uint8_t)((1 + pan) * 255);
    } else {
        left = (uint8_t)((1 - pan) * 255);
        right = 255;
    }
    Mix_SetPanning(channel, left, right);
}

jlong SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_create_int_boolean_R_long(jcontext ctx, jint param0, jbool param1) {
    return 0; // Todo
}

void SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_sample_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
    // Todo
}

void SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose_long(jcontext ctx, jlong param0) {
    // Todo
}

void SM_com_badlogic_gdx_utils_BufferUtils_freeMemory_java_nio_ByteBuffer(jcontext ctx, jobject buffer) {
    auto memory = (char *) ((java_nio_Buffer *) buffer)->F_address;
    if (memory) {
        delete[] memory;
        ((java_nio_Buffer *) buffer)->F_address = 0;
    }
}

jobject SM_com_badlogic_gdx_utils_BufferUtils_newDisposableByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint size) {
    return SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, size);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_getBufferAddress_java_nio_Buffer_R_long(jcontext ctx, jobject buffer) {
    return ((java_nio_Buffer *) buffer)->F_address;
}

void SM_com_badlogic_gdx_utils_BufferUtils_clear_java_nio_ByteBuffer_int(jcontext ctx, jobject buffer, jint numBytes) {
    memset((void *) ((java_nio_Buffer *) buffer)->F_address, 0, numBytes);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_float_java_nio_Buffer_int_int(jcontext ctx, jobject src, jobject dst, jint numFloats, jint offset) {
    memcpy((float *) ((java_nio_Buffer *) dst)->F_address, (float *) ((jarray) src)->data + offset, numFloats << 2);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_byte_int_java_nio_Buffer_int_int(jcontext ctx, jobject src, jint srcOffset, jobject dst, jint dstOffset, jint numBytes) {
    memcpy((char *) ((java_nio_Buffer *) dst)->F_address + dstOffset, (jbyte *) ((jarray) src)->data + srcOffset, numBytes);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_char_int_java_nio_Buffer_int_int(jcontext ctx, jobject src, jint srcOffset, jobject dst, jint dstOffset, jint numBytes) {
    memcpy((char *) ((java_nio_Buffer *) dst)->F_address + dstOffset, (jchar *) ((jarray) src)->data + srcOffset, numBytes);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_short_int_java_nio_Buffer_int_int(jcontext ctx, jobject src, jint srcOffset, jobject dst, jint dstOffset, jint numBytes) {
    memcpy((char *) ((java_nio_Buffer *) dst)->F_address + dstOffset, (jshort *) ((jarray) src)->data + srcOffset, numBytes);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_int_int_java_nio_Buffer_int_int(jcontext ctx, jobject src, jint srcOffset, jobject dst, jint dstOffset, jint numBytes) {
    memcpy((char *) ((java_nio_Buffer *) dst)->F_address + dstOffset, (jint *) ((jarray) src)->data + srcOffset, numBytes);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_long_int_java_nio_Buffer_int_int(jcontext ctx, jobject src, jint srcOffset, jobject dst, jint dstOffset, jint numBytes) {
    memcpy((char *) ((java_nio_Buffer *) dst)->F_address + dstOffset, (jlong *) ((jarray) src)->data + srcOffset, numBytes);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_float_int_java_nio_Buffer_int_int(jcontext ctx, jobject src, jint srcOffset, jobject dst, jint dstOffset, jint numBytes) {
    memcpy((char *) ((java_nio_Buffer *) dst)->F_address + dstOffset, (jfloat *) ((jarray) src)->data + srcOffset, numBytes);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_double_int_java_nio_Buffer_int_int(jcontext ctx, jobject src, jint srcOffset, jobject dst, jint dstOffset, jint numBytes) {
    memcpy((char *) ((java_nio_Buffer *) dst)->F_address + dstOffset, (jdouble *) ((jarray) src)->data + srcOffset, numBytes);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_java_nio_Buffer_int_java_nio_Buffer_int_int(jcontext ctx, jobject src, jint srcOffset, jobject dst, jint dstOffset, jint numBytes) {
    memcpy((char *) ((java_nio_Buffer *) dst)->F_address + dstOffset, (char *) ((java_nio_Buffer *) src)->F_address + srcOffset, numBytes);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transformV4M4Jni_java_nio_Buffer_int_int_Array1_float_int(jcontext ctx, jobject data, jint strideInBytes, jint count, jobject matrix, jint offsetInBytes) {
    transform<4, 4>((float *) ((java_nio_Buffer *) data)->F_address, strideInBytes / 4, count, (float *) ((jarray) matrix)->data, offsetInBytes / 4);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transformV4M4Jni_Array1_float_int_int_Array1_float_int(jcontext ctx, jobject data, jint strideInBytes, jint count, jobject matrix, jint offsetInBytes) {
    transform<4, 4>((float *) ((jarray) data)->data, strideInBytes / 4, count, (float *) ((jarray) matrix)->data, offsetInBytes / 4);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transformV3M4Jni_java_nio_Buffer_int_int_Array1_float_int(jcontext ctx, jobject data, jint strideInBytes, jint count, jobject matrix, jint offsetInBytes) {
    transform<3, 4>((float *) ((java_nio_Buffer *) data)->F_address, strideInBytes / 4, count, (float *) ((jarray) matrix)->data, offsetInBytes / 4);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transformV3M4Jni_Array1_float_int_int_Array1_float_int(jcontext ctx, jobject data, jint strideInBytes, jint count, jobject matrix, jint offsetInBytes) {
    transform<3, 4>((float *) ((jarray) data)->data, strideInBytes / 4, count, (float *) ((jarray) matrix)->data, offsetInBytes / 4);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transformV2M4Jni_java_nio_Buffer_int_int_Array1_float_int(jcontext ctx, jobject data, jint strideInBytes, jint count, jobject matrix, jint offsetInBytes) {
    transform<2, 4>((float *) ((java_nio_Buffer *) data)->F_address, strideInBytes / 4, count, (float *) ((jarray) matrix)->data, offsetInBytes / 4);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transformV2M4Jni_Array1_float_int_int_Array1_float_int(jcontext ctx, jobject data, jint strideInBytes, jint count, jobject matrix, jint offsetInBytes) {
    transform<2, 4>((float *) ((jarray) data)->data, strideInBytes / 4, count, (float *) ((jarray) matrix)->data, offsetInBytes / 4);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transformV3M3Jni_java_nio_Buffer_int_int_Array1_float_int(jcontext ctx, jobject data, jint strideInBytes, jint count, jobject matrix, jint offsetInBytes) {
    transform<3, 3>((float *) ((java_nio_Buffer *) data)->F_address, strideInBytes / 4, count, (float *) ((jarray) matrix)->data, offsetInBytes / 4);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transformV3M3Jni_Array1_float_int_int_Array1_float_int(jcontext ctx, jobject data, jint strideInBytes, jint count, jobject matrix, jint offsetInBytes) {
    transform<3, 3>((float *) ((jarray) data)->data, strideInBytes / 4, count, (float *) ((jarray) matrix)->data, offsetInBytes / 4);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transformV2M3Jni_java_nio_Buffer_int_int_Array1_float_int(jcontext ctx, jobject data, jint strideInBytes, jint count, jobject matrix, jint offsetInBytes) {
    transform<2, 3>((float *) ((java_nio_Buffer *) data)->F_address, strideInBytes / 4, count, (float *) ((jarray) matrix)->data, offsetInBytes / 4);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transformV2M3Jni_Array1_float_int_int_Array1_float_int(jcontext ctx, jobject data, jint strideInBytes, jint count, jobject matrix, jint offsetInBytes) {
    transform<2, 3>((float *) ((jarray) data)->data, strideInBytes / 4, count, (float *) ((jarray) matrix)->data, offsetInBytes / 4);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_java_nio_Buffer_int_int_R_long(jcontext ctx, jobject vertex, jint vertexOffsetInBytes, jint strideInBytes, jobject vertices, jint verticesOffsetInBytes, jint numVertices) {
    return find(&((float *) ((java_nio_Buffer *) vertex)->F_address)[vertexOffsetInBytes / 4], strideInBytes / 4, &((float *) ((java_nio_Buffer *) vertices)->F_address)[verticesOffsetInBytes / 4], numVertices);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_java_nio_Buffer_int_int_R_long(jcontext ctx, jobject vertex, jint vertexOffsetInBytes, jint strideInBytes, jobject vertices, jint verticesOffsetInBytes, jint numVertices) {
    return find(&((float *) ((jarray) vertex)->data)[vertexOffsetInBytes / 4], strideInBytes / 4, &((float *) ((java_nio_Buffer *) vertices)->F_address)[verticesOffsetInBytes / 4], numVertices);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_Array1_float_int_int_R_long(jcontext ctx, jobject vertex, jint vertexOffsetInBytes, jint strideInBytes, jobject vertices, jint verticesOffsetInBytes, jint numVertices) {
    return find(&((float *) ((java_nio_Buffer *) vertex)->F_address)[vertexOffsetInBytes / 4], strideInBytes / 4, &((float *) ((jarray) vertices)->data)[verticesOffsetInBytes / 4], numVertices);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_Array1_float_int_int_R_long(jcontext ctx, jobject vertex, jint vertexOffsetInBytes, jint strideInBytes, jobject vertices, jint verticesOffsetInBytes, jint numVertices) {
    return find(&((float *) ((jarray) vertex)->data)[vertexOffsetInBytes / 4], strideInBytes / 4, &((float *) ((jarray) vertices)->data)[verticesOffsetInBytes / 4], numVertices);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_java_nio_Buffer_int_int_float_R_long(jcontext ctx, jobject vertex, jint vertexOffsetInBytes, jint strideInBytes, jobject vertices, jint verticesOffsetInBytes, jint numVertices, jfloat epsilon) {
    return find(&((float *) ((java_nio_Buffer *) vertex)->F_address)[vertexOffsetInBytes / 4], strideInBytes / 4, &((float *) ((java_nio_Buffer *) vertices)->F_address)[verticesOffsetInBytes / 4], numVertices, epsilon);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_java_nio_Buffer_int_int_float_R_long(jcontext ctx, jobject vertex, jint vertexOffsetInBytes, jint strideInBytes, jobject vertices, jint verticesOffsetInBytes, jint numVertices, jfloat epsilon) {
    return find(&((float *) ((jarray) vertex)->data)[vertexOffsetInBytes / 4], strideInBytes / 4, &((float *) ((java_nio_Buffer *) vertices)->F_address)[verticesOffsetInBytes / 4], numVertices, epsilon);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_Array1_float_int_int_float_R_long(jcontext ctx, jobject vertex, jint vertexOffsetInBytes, jint strideInBytes, jobject vertices, jint verticesOffsetInBytes, jint numVertices, jfloat epsilon) {
    return find(&((float *) ((java_nio_Buffer *) vertex)->F_address)[vertexOffsetInBytes / 4], strideInBytes / 4, &((float *) ((jarray) vertices)->data)[verticesOffsetInBytes / 4], numVertices, epsilon);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_Array1_float_int_int_float_R_long(jcontext ctx, jobject vertex, jint vertexOffsetInBytes, jint strideInBytes, jobject vertices, jint verticesOffsetInBytes, jint numVertices, jfloat epsilon) {
    return find(&((float *) ((jarray) vertex)->data)[vertexOffsetInBytes / 4], strideInBytes / 4, &((float *) ((jarray) vertices)->data)[verticesOffsetInBytes / 4], numVertices, epsilon);
}

void SM_com_badlogic_gdx_math_Matrix4_mulVec_Array1_float_Array1_float_int_int_int(jcontext ctx, jobject mat, jobject vecs, jint offset, jint numVecs, jint stride) {
    auto vecPtr = (float *) ((jarray) vecs)->data + offset;
    for (int i = 0; i < numVecs; i++) {
        matrix4_mulVec((float *) ((jarray) mat)->data, vecPtr);
        vecPtr += stride;
    }
}

void SM_com_badlogic_gdx_math_Matrix4_prj_Array1_float_Array1_float_int_int_int(jcontext ctx, jobject mat, jobject vecs, jint offset, jint numVecs, jint stride) {
    auto vecPtr = (float *) ((jarray) vecs)->data + offset;
    for (int i = 0; i < numVecs; i++) {
        matrix4_proj((float *) ((jarray) mat)->data, vecPtr);
        vecPtr += stride;
    }
}

void SM_com_badlogic_gdx_math_Matrix4_rot_Array1_float_Array1_float_int_int_int(jcontext ctx, jobject mat, jobject vecs, jint offset, jint numVecs, jint stride) {
    auto vecPtr = (float *) ((jarray) vecs)->data + offset;
    for (int i = 0; i < numVecs; i++) {
        matrix4_rot((float *) ((jarray) mat)->data, vecPtr);
        vecPtr += stride;
    }
}

jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_load_Array1_long_Array1_byte_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject nativeData, jobject buffer, jint offset, jint len) {
    auto pixmap = gdx2d_load((unsigned char *) ((jarray) buffer)->data + offset, len);
    if (!pixmap)
        return nullptr;
    auto pixelBuffer = gcAllocProtected(ctx, &class_java_nio_ByteBuffer);
    init_java_nio_ByteBuffer_long_int_boolean(ctx, pixelBuffer, (jlong) pixmap->pixels, (jint) (pixmap->width * pixmap->height * gdx2d_bytes_per_pixel(pixmap->format)), false);
    unprotectObject(pixelBuffer);
    auto nativeDataPtr = (jlong *) ((jarray) nativeData)->data;
    nativeDataPtr[0] = (jlong) pixmap;
    nativeDataPtr[1] = pixmap->width;
    nativeDataPtr[2] = pixmap->height;
    nativeDataPtr[3] = pixmap->format;
    return pixelBuffer;
}

jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_loadByteBuffer_Array1_long_java_nio_ByteBuffer_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject nativeData, jobject buffer, jint offset, jint len) {
    auto pixmap = gdx2d_load((unsigned char *) ((java_nio_Buffer *) buffer)->F_address + offset, len);
    if (!pixmap)
        return nullptr;
    auto pixelBuffer = gcAllocProtected(ctx, &class_java_nio_ByteBuffer);
    init_java_nio_ByteBuffer_long_int_boolean(ctx, pixelBuffer, (jlong) pixmap->pixels, (jint) (pixmap->width * pixmap->height * gdx2d_bytes_per_pixel(pixmap->format)), false);
    unprotectObject(pixelBuffer);
    auto nativeDataPtr = (jlong *) ((jarray) nativeData)->data;
    nativeDataPtr[0] = (jlong) pixmap;
    nativeDataPtr[1] = pixmap->width;
    nativeDataPtr[2] = pixmap->height;
    nativeDataPtr[3] = pixmap->format;
    return pixelBuffer;
}

jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_newPixmap_Array1_long_int_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject nativeData, jint width, jint height, jint format) {
    auto pixmap = gdx2d_new(width, height, format);
    if (!pixmap)
        return nullptr;
    auto pixelBuffer = gcAllocProtected(ctx, &class_java_nio_ByteBuffer);
    init_java_nio_ByteBuffer_long_int_boolean(ctx, pixelBuffer, (jlong) pixmap->pixels, (jint) (pixmap->width * pixmap->height * gdx2d_bytes_per_pixel(pixmap->format)), false);
    unprotectObject(pixelBuffer);
    auto nativeDataPtr = (jlong *) ((jarray) nativeData)->data;
    nativeDataPtr[0] = (jlong) pixmap;
    nativeDataPtr[1] = pixmap->width;
    nativeDataPtr[2] = pixmap->height;
    nativeDataPtr[3] = pixmap->format;
    return pixelBuffer;
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_free_long(jcontext ctx, jlong pixmap) {
    gdx2d_free((gdx2d_pixmap *) pixmap);
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_long_int(jcontext ctx, jlong pixmap, jint color) {
    gdx2d_clear((gdx2d_pixmap *) pixmap, color);
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_long_int_int_int(jcontext ctx, jlong pixmap, jint x, jint y, jint color) {
    gdx2d_set_pixel((gdx2d_pixmap *) pixmap, x, y, color);
}

jint SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_long_int_int_R_int(jcontext ctx, jlong pixmap, jint x, jint y) {
    return (jint) gdx2d_get_pixel((gdx2d_pixmap *) pixmap, x, y);
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_long_int_int_int_int_int(jcontext ctx, jlong pixmap, jint x, jint y, jint x2, jint y2, jint color) {
    gdx2d_draw_line((gdx2d_pixmap *) pixmap, x, y, x2, y2, color);
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_long_int_int_int_int_int(jcontext ctx, jlong pixmap, jint x, jint y, jint width, jint height, jint color) {
    gdx2d_draw_rect((gdx2d_pixmap *) pixmap, x, y, width, height, color);
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_long_int_int_int_int(jcontext ctx, jlong pixmap, jint x, jint y, jint radius, jint color) {
    gdx2d_draw_circle((gdx2d_pixmap *) pixmap, x, y, radius, color);
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_long_int_int_int_int_int(jcontext ctx, jlong pixmap, jint x, jint y, jint width, jint height, jint color) {
    gdx2d_fill_rect((gdx2d_pixmap *) pixmap, x, y, width, height, color);
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_long_int_int_int_int(jcontext ctx, jlong pixmap, jint x, jint y, jint radius, jint color) {
    gdx2d_fill_circle((gdx2d_pixmap *) pixmap, x, y, radius, color);
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_long_int_int_int_int_int_int_int(jcontext ctx, jlong pixmap, jint x1, jint y1, jint x2, jint y2, jint x3, jint y3, jint color) {
    gdx2d_fill_triangle((gdx2d_pixmap *) pixmap, x1, y1, x2, y2, x3, y3, color);
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_long_long_int_int_int_int_int_int_int_int(jcontext ctx, jlong src, jlong dst, jint srcX, jint srcY, jint srcWidth, jint srcHeight, jint dstX, jint dstY, jint dstWidth, jint dstHeight) {
    gdx2d_draw_pixmap((gdx2d_pixmap *) src, (gdx2d_pixmap *) dst, srcX, srcY, srcWidth, srcHeight, dstX, dstY, dstWidth, dstHeight);
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_long_int(jcontext ctx, jlong src, jint blend) {
    gdx2d_set_blend((gdx2d_pixmap *) src, blend);
}

void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_long_int(jcontext ctx, jlong src, jint scale) {
    gdx2d_set_scale((gdx2d_pixmap *) src, scale);
}

jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFailureReason_R_java_lang_String(jcontext ctx) {
    return (jobject) stringFromNative(ctx, gdx2d_get_failure_reason());
}

jint SM_com_badlogic_gdx_graphics_glutils_ETC1_getCompressedDataSize_int_int_R_int(jcontext ctx, jint width, jint height) {
    return (jint) etc1_get_encoded_data_size(width, height);
}

void SM_com_badlogic_gdx_graphics_glutils_ETC1_formatHeader_java_nio_ByteBuffer_int_int_int(jcontext ctx, jobject header, jint offset, jint width, jint height) {
    etc1_pkm_format_header((etc1_byte *) ((java_nio_Buffer *) header)->F_address + offset, width, height);
}

jint SM_com_badlogic_gdx_graphics_glutils_ETC1_getWidthPKM_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject header, jint offset) {
    return (jint) etc1_pkm_get_width((etc1_byte *) ((java_nio_Buffer *) header)->F_address + offset);
}

jint SM_com_badlogic_gdx_graphics_glutils_ETC1_getHeightPKM_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject header, jint offset) {
    return (jint) etc1_pkm_get_height((etc1_byte *) ((java_nio_Buffer *) header)->F_address + offset);
}

jbool SM_com_badlogic_gdx_graphics_glutils_ETC1_isValidPKM_java_nio_ByteBuffer_int_R_boolean(jcontext ctx, jobject header, jint offset) {
    return etc1_pkm_is_valid((etc1_byte *) ((java_nio_Buffer *) header)->F_address + offset);
}

void SM_com_badlogic_gdx_graphics_glutils_ETC1_decodeImage_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int_int_int(jcontext ctx, jobject compressedData, jint offset, jobject decodedData, jint offsetDec, jint width, jint height, jint pixelSize) {
    etc1_decode_image((etc1_byte *) ((java_nio_Buffer *) compressedData)->F_address + offset, (etc1_byte *) ((java_nio_Buffer *) decodedData)->F_address + offsetDec, width, height, pixelSize, width * pixelSize);
}

jobject SM_com_badlogic_gdx_graphics_glutils_ETC1_encodeImage_java_nio_ByteBuffer_int_int_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject imageData, jint offset, jint width, jint height, jint pixelSize) {
    auto compressedSize = etc1_get_encoded_data_size(width, height);
    auto compressedData = (etc1_byte *) malloc(compressedSize);
    etc1_encode_image((etc1_byte *) ((java_nio_Buffer *) imageData)->F_address + offset, width, height, pixelSize, width * pixelSize, compressedData);
    auto pixelBuffer = gcAllocProtected(ctx, &class_java_nio_ByteBuffer);
    init_java_nio_ByteBuffer_long_int(ctx, pixelBuffer, (jlong) compressedData, (jint) compressedSize);
    unprotectObject(pixelBuffer);
    return pixelBuffer;
}

jobject SM_com_badlogic_gdx_graphics_glutils_ETC1_encodeImagePKM_java_nio_ByteBuffer_int_int_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject imageData, jint offset, jint width, jint height, jint pixelSize) {
    auto compressedSize = etc1_get_encoded_data_size(width, height);
    auto compressed = (etc1_byte *) malloc(compressedSize + ETC_PKM_HEADER_SIZE);
    etc1_pkm_format_header(compressed, width, height);
    etc1_encode_image((etc1_byte *) ((java_nio_Buffer *) imageData)->F_address + offset, width, height, pixelSize, width * pixelSize, compressed + ETC_PKM_HEADER_SIZE);
    auto pixelBuffer = gcAllocProtected(ctx, &class_java_nio_ByteBuffer);
    init_java_nio_ByteBuffer_long_int(ctx, pixelBuffer, (jlong) compressed, (jint) compressedSize);
    unprotectObject(pixelBuffer);
    return pixelBuffer;
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glActiveTexture_int(jcontext ctx, jobject self, jint texture) {
    glActiveTexture(texture);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBindTexture_int_int(jcontext ctx, jobject self, jint target, jint texture) {
    glBindTexture(target, texture);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBlendFunc_int_int(jcontext ctx, jobject self, jint sfactor, jint dfactor) {
    glBlendFunc(sfactor, dfactor);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glClear_int(jcontext ctx, jobject self, jint mask) {
    glClear(mask);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glClearColor_float_float_float_float(jcontext ctx, jobject self, jfloat red, jfloat green, jfloat blue, jfloat alpha) {
    glClearColor(red, green, blue, alpha);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glClearDepthf_float(jcontext ctx, jobject self, jfloat depth) {
    glClearDepthf(depth);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glClearStencil_int(jcontext ctx, jobject self, jint s) {
    glClearStencil(s);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glColorMask_boolean_boolean_boolean_boolean(jcontext ctx, jobject self, jbool red, jbool green, jbool blue, jbool alpha) {
    glColorMask(red, green, blue, alpha);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint target, jint level, jint internalformat, jint width, jint height, jint border, jint imageSize, jobject data) {
    glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, (void *) getBufferAddress(ctx, (java_nio_Buffer *) data));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint target, jint level, jint xoffset, jint yoffset, jint width, jint height, jint format, jint imageSize, jobject data) {
    glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, (void *) getBufferAddress(ctx, (java_nio_Buffer *) data));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glCopyTexImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint target, jint level, jint internalformat, jint x, jint y, jint width, jint height, jint border) {
    glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glCopyTexSubImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint target, jint level, jint xoffset, jint yoffset, jint x, jint y, jint width, jint height) {
    glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glCullFace_int(jcontext ctx, jobject self, jint mode) {
    glCullFace(mode);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDeleteTextures_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint n, jobject textures) {
    glDeleteTextures(n, (GLuint *) getBufferAddress((java_nio_IntBuffer *) textures));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDeleteTexture_int(jcontext ctx, jobject self, jint texture) {
    glDeleteTextures(1, (GLuint *) &texture);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDepthFunc_int(jcontext ctx, jobject self, jint func) {
    glDepthFunc(func);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDepthMask_boolean(jcontext ctx, jobject self, jbool flag) {
    glDepthMask(flag);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDepthRangef_float_float(jcontext ctx, jobject self, jfloat zNear, jfloat zFar) {
    glDepthRangef(zNear, zFar);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDisable_int(jcontext ctx, jobject self, jint cap) {
    glDisable(cap);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDrawArrays_int_int_int(jcontext ctx, jobject self, jint mode, jint first, jint count) {
    glDrawArrays(mode, first, count);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDrawElements_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint mode, jint count, jint type, jobject indices) {
    glDrawElements(mode, count, type, (void *) getBufferAddress(ctx, (java_nio_Buffer *) indices));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glEnable_int(jcontext ctx, jobject self, jint cap) {
    glEnable(cap);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glFinish(jcontext ctx, jobject self) {
    glFinish();
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glFlush(jcontext ctx, jobject self) {
    glFlush();
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glFrontFace_int(jcontext ctx, jobject self, jint mode) {
    glFrontFace(mode);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGenTextures_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint n, jobject textures) {
    glGenTextures(n, (GLuint *) getBufferAddress((java_nio_IntBuffer *) textures));
}

jint M_com_thelogicmaster_switchgdx_SwitchGL_glGenTexture_R_int(jcontext ctx, jobject self) {
    GLuint texture;
    glGenTextures(1, &texture);
    return (jint) texture;
}

jint M_com_thelogicmaster_switchgdx_SwitchGL_glGetError_R_int(jcontext ctx, jobject self) {
    return (jint) glGetError();
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetIntegerv_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint pname, jobject params) {
    auto value = (GLint *)getBufferAddress((java_nio_IntBuffer *)params);
    glGetIntegerv(pname, value);
    if (pname == GL_FRAMEBUFFER_BINDING && (GLuint)*value == iosDefaultFramebuffer()) *value = 0;
}

jobject M_com_thelogicmaster_switchgdx_SwitchGL_glGetString_int_R_java_lang_String(jcontext ctx, jobject self, jint name) {
    return (jobject) stringFromNative(ctx, (char *) glGetString(name));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glHint_int_int(jcontext ctx, jobject self, jint target, jint mode) {
    glHint(target, mode);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glLineWidth_float(jcontext ctx, jobject self, jfloat width) {
    glLineWidth(width);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glPixelStorei_int_int(jcontext ctx, jobject self, jint pname, jint param) {
    glPixelStorei(pname, param);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glPolygonOffset_float_float(jcontext ctx, jobject self, jfloat factor, jfloat units) {
    glPolygonOffset(factor, units);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glReadPixels_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint x, jint y, jint width, jint height, jint format, jint type, jobject pixels) {
    glReadPixels(x, y, width, height, format, type, (void *) getBufferAddress(ctx, (java_nio_Buffer *) pixels));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glScissor_int_int_int_int(jcontext ctx, jobject self, jint x, jint y, jint width, jint height) {
    glScissor(x, y, width, height);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glStencilFunc_int_int_int(jcontext ctx, jobject self, jint func, jint ref, jint mask) {
    glStencilFunc(func, ref, mask);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glStencilMask_int(jcontext ctx, jobject self, jint mask) {
    glStencilMask(mask);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glStencilOp_int_int_int(jcontext ctx, jobject self, jint fail, jint zfail, jint zpass) {
    glStencilOp(fail, zfail, zpass);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint target, jint level, jint internalformat, jint width, jint height, jint border, jint format, jint type, jobject pixels) {
    glTexImage2D(target, level, internalformat, width, height, border, format, type, (void *) getBufferAddress(ctx, (java_nio_Buffer *) pixels));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glTexParameterf_int_int_float(jcontext ctx, jobject self, jint target, jint pname, jfloat param) {
    glTexParameterf(target, pname, param);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint target, jint level, jint xoffset, jint yoffset, jint width, jint height, jint format, jint type, jobject pixels) {
    glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, (void *) getBufferAddress(ctx, (java_nio_Buffer *) pixels));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glViewport_int_int_int_int(jcontext ctx, jobject self, jint x, jint y, jint width, jint height) {
    glViewport(x, y, width, height);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glAttachShader_int_int(jcontext ctx, jobject self, jint program, jint shader) {
    glAttachShader(program, shader);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBindAttribLocation_int_int_java_lang_String(jcontext ctx, jobject self, jint program, jint index, jobject name) {
    glBindAttribLocation(program, index, stringToNative(ctx, (jstring) name));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBindBuffer_int_int(jcontext ctx, jobject self, jint target, jint buffer) {
    glBindBuffer(target, buffer);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBindFramebuffer_int_int(jcontext ctx, jobject self, jint target, jint framebuffer) {
    glBindFramebuffer(target, framebuffer ? (GLuint)framebuffer : iosDefaultFramebuffer());
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBindRenderbuffer_int_int(jcontext ctx, jobject self, jint target, jint renderbuffer) {
    glBindRenderbuffer(target, renderbuffer);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBlendColor_float_float_float_float(jcontext ctx, jobject self, jfloat red, jfloat green, jfloat blue, jfloat alpha) {
    glBlendColor(red, green, blue, alpha);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBlendEquation_int(jcontext ctx, jobject self, jint mode) {
    glBlendEquation(mode);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBlendEquationSeparate_int_int(jcontext ctx, jobject self, jint modeRGB, jint modeAlpha) {
    glBlendEquationSeparate(modeRGB, modeAlpha);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBlendFuncSeparate_int_int_int_int(jcontext ctx, jobject self, jint srcRGB, jint dstRGB, jint srcAlpha, jint dstAlpha) {
    glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBufferData_int_int_java_nio_Buffer_int(jcontext ctx, jobject self, jint target, jint size, jobject buffer, jint usage) {
    glBufferData(target, size, (void *) getBufferAddress(ctx, (java_nio_Buffer *) buffer), usage);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glBufferSubData_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint target, jint offset, jint size, jobject data) {
    glBufferSubData(target, offset, size, (void *) getBufferAddress(ctx, (java_nio_Buffer *) data));
}

jint M_com_thelogicmaster_switchgdx_SwitchGL_glCheckFramebufferStatus_int_R_int(jcontext ctx, jobject self, jint target) {
    return (jint) glCheckFramebufferStatus(target);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glCompileShader_int(jcontext ctx, jobject self, jint shader) {
    glCompileShader(shader);
}

jint M_com_thelogicmaster_switchgdx_SwitchGL_glCreateProgram_R_int(jcontext ctx, jobject self) {
    return (int) glCreateProgram();
}

jint M_com_thelogicmaster_switchgdx_SwitchGL_glCreateShader_int_R_int(jcontext ctx, jobject self, jint type) {
    return (int) glCreateShader(type);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDeleteBuffer_int(jcontext ctx, jobject self, jint buffer) {
    glDeleteBuffers(1, (GLuint *) &buffer);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDeleteBuffers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint n, jobject buffers) {
    glDeleteBuffers(n, (GLuint *) getBufferAddress((java_nio_IntBuffer *) buffers));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDeleteFramebuffer_int(jcontext ctx, jobject self, jint framebuffer) {
    glDeleteFramebuffers(1, (GLuint *) &framebuffer);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDeleteFramebuffers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint n, jobject framebuffers) {
    glDeleteFramebuffers(n, (GLuint *) getBufferAddress((java_nio_IntBuffer *) framebuffers));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDeleteProgram_int(jcontext ctx, jobject self, jint program) {
    glDeleteProgram(program);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDeleteRenderbuffer_int(jcontext ctx, jobject self, jint renderbuffer) {
    glDeleteRenderbuffers(1, (GLuint *) &renderbuffer);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDeleteRenderbuffers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint n, jobject renderbuffers) {
    glDeleteRenderbuffers(n, (GLuint *) getBufferAddress((java_nio_IntBuffer *) renderbuffers));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDeleteShader_int(jcontext ctx, jobject self, jint shader) {
    glDeleteShader(shader);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDetachShader_int_int(jcontext ctx, jobject self, jint program, jint shader) {
    glDetachShader(program, shader);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDisableVertexAttribArray_int(jcontext ctx, jobject self, jint index) {
    glDisableVertexAttribArray(index);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glDrawElements_int_int_int_int(jcontext ctx, jobject self, jint mode, jint count, jint type, jint indices) {
    glDrawElements(mode, count, type, (void *) (jlong) indices);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glEnableVertexAttribArray_int(jcontext ctx, jobject self, jint index) {
    glEnableVertexAttribArray(index);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glFramebufferRenderbuffer_int_int_int_int(jcontext ctx, jobject self, jint target, jint attachment, jint renderbuffertarget, jint renderbuffer) {
    glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glFramebufferTexture2D_int_int_int_int_int(jcontext ctx, jobject self, jint target, jint attachment, jint textarget, jint texture, jint level) {
    glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

jint M_com_thelogicmaster_switchgdx_SwitchGL_glGenBuffer_R_int(jcontext ctx, jobject self) {
    GLuint buffer;
    glGenBuffers(1, &buffer);
    return (jint) buffer;
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGenBuffers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint n, jobject buffers) {
    glGenBuffers(n, (GLuint *) getBufferAddress((java_nio_IntBuffer *) buffers));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGenerateMipmap_int(jcontext ctx, jobject self, jint target) {
    glGenerateMipmap(target);
}

jint M_com_thelogicmaster_switchgdx_SwitchGL_glGenFramebuffer_R_int(jcontext ctx, jobject self) {
    GLuint buffer;
    glGenFramebuffers(1, &buffer);
    return (jint) buffer;
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGenFramebuffers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint n, jobject framebuffers) {
    glGenFramebuffers(n, (GLuint *) getBufferAddress((java_nio_IntBuffer *) framebuffers));
}

jint M_com_thelogicmaster_switchgdx_SwitchGL_glGenRenderbuffer_R_int(jcontext ctx, jobject self) {
    GLuint buffer;
    glGenRenderbuffers(1, &buffer);
    return (jint) buffer;
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGenRenderbuffers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint n, jobject renderbuffers) {
    glGenRenderbuffers(n, (GLuint *) getBufferAddress((java_nio_IntBuffer *) renderbuffers));
}

jobject M_com_thelogicmaster_switchgdx_SwitchGL_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String(jcontext ctx, jobject self, jint program, jint index, jobject size, jobject type) {
    char buffer[64];
    glGetActiveAttrib(program, index, 63, nullptr, (GLint *) getBufferAddress((java_nio_IntBuffer *) size), (GLenum *) getBufferAddress((java_nio_IntBuffer *) type), buffer);
    return (jobject) stringFromNative(ctx, buffer);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGL_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String(jcontext ctx, jobject self, jint program, jint index, jobject size, jobject type) {
    char buffer[64];
    glGetActiveUniform(program, index, 63, nullptr, (GLint *) getBufferAddress((java_nio_IntBuffer *) size), (GLenum *) getBufferAddress((java_nio_IntBuffer *) type), buffer);
    return (jobject) stringFromNative(ctx, buffer);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetAttachedShaders_int_int_java_nio_Buffer_java_nio_IntBuffer(jcontext ctx, jobject self, jint program, jint maxcount, jobject count, jobject shaders) {
    glGetAttachedShaders(program, maxcount, (GLsizei *) getBufferAddress(ctx, (java_nio_Buffer *) count), (GLuint *) getBufferAddress((java_nio_IntBuffer *) shaders));
}

jint M_com_thelogicmaster_switchgdx_SwitchGL_glGetAttribLocation_int_java_lang_String_R_int(jcontext ctx, jobject self, jint program, jobject name) {
    return glGetAttribLocation(program, stringToNative(ctx, (jstring) name));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetBooleanv_int_java_nio_Buffer(jcontext ctx, jobject self, jint pname, jobject params) {
    glGetBooleanv(pname, (GLboolean *) getBufferAddress(ctx, (java_nio_Buffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetBufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint target, jint pname, jobject params) {
    glGetBufferParameteriv(target, pname, (GLint *) getBufferAddress((java_nio_IntBuffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetFloatv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint pname, jobject params) {
    glGetFloatv(pname, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint target, jint attachment, jint pname, jobject params) {
    glGetFramebufferAttachmentParameteriv(target, attachment, pname, (GLint *) getBufferAddress((java_nio_IntBuffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetProgramiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint program, jint pname, jobject params) {
    glGetProgramiv(program, pname, (GLint *) getBufferAddress((java_nio_IntBuffer *) params));
}

jobject M_com_thelogicmaster_switchgdx_SwitchGL_glGetProgramInfoLog_int_R_java_lang_String(jcontext ctx, jobject self, jint program) {
    char buffer[128];
    glGetProgramInfoLog(program, 127, nullptr, buffer);
    return (jobject) stringFromNative(ctx, buffer);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint target, jint pname, jobject params) {
    glGetRenderbufferParameteriv(target, pname, (GLint *) getBufferAddress((java_nio_IntBuffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetShaderiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint shader, jint pname, jobject params) {
    glGetShaderiv(shader, pname, (GLint *) getBufferAddress((java_nio_IntBuffer *) params));
}

jobject M_com_thelogicmaster_switchgdx_SwitchGL_glGetShaderInfoLog_int_R_java_lang_String(jcontext ctx, jobject self, jint program) {
    char buffer[128];
    glGetShaderInfoLog(program, 127, nullptr, buffer);
    return (jobject) stringFromNative(ctx, buffer);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer(jcontext ctx, jobject self, jint shadertype, jint precisiontype, jobject range, jobject precision) {
    glGetShaderPrecisionFormat(shadertype, precisiontype, (GLint *) getBufferAddress((java_nio_IntBuffer *) range), (GLint *) getBufferAddress((java_nio_IntBuffer *) precision));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetTexParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint target, jint pname, jobject params) {
    glGetTexParameterfv(target, pname, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetTexParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint target, jint pname, jobject params) {
    glGetTexParameteriv(target, pname, (GLint *) getBufferAddress((java_nio_IntBuffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetUniformfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint program, jint location, jobject params) {
    glGetUniformfv(program, location, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetUniformiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint program, jint location, jobject params) {
    glGetUniformiv(program, location, (GLint *) getBufferAddress((java_nio_IntBuffer *) params));
}

jint M_com_thelogicmaster_switchgdx_SwitchGL_glGetUniformLocation_int_java_lang_String_R_int(jcontext ctx, jobject self, jint program, jobject name) {
    return glGetUniformLocation(program, stringToNative(ctx, (jstring) name));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetVertexAttribfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint index, jint pname, jobject params) {
    glGetVertexAttribfv(index, pname, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetVertexAttribiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint index, jint pname, jobject params) {
    glGetVertexAttribiv(index, pname, (GLint *) getBufferAddress((java_nio_IntBuffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glGetVertexAttribPointerv_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint index, jint pname, jobject pointer) {
    glGetVertexAttribPointerv(index, pname, (void **) getBufferAddress(ctx, (java_nio_Buffer *) pointer));
}

jbool M_com_thelogicmaster_switchgdx_SwitchGL_glIsBuffer_int_R_boolean(jcontext ctx, jobject self, jint buffer) {
    return glIsBuffer(buffer);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGL_glIsEnabled_int_R_boolean(jcontext ctx, jobject self, jint cap) {
    return glIsEnabled(cap);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGL_glIsFramebuffer_int_R_boolean(jcontext ctx, jobject self, jint framebuffer) {
    return glIsFramebuffer(framebuffer);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGL_glIsProgram_int_R_boolean(jcontext ctx, jobject self, jint program) {
    return glIsProgram(program);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGL_glIsRenderbuffer_int_R_boolean(jcontext ctx, jobject self, jint renderbuffer) {
    return glIsRenderbuffer(renderbuffer);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGL_glIsShader_int_R_boolean(jcontext ctx, jobject self, jint shader) {
    return glIsShader(shader);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGL_glIsTexture_int_R_boolean(jcontext ctx, jobject self, jint texture) {
    return glIsTexture(texture);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glLinkProgram_int(jcontext ctx, jobject self, jint program) {
    glLinkProgram(program);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glReleaseShaderCompiler(jcontext ctx, jobject self) {
    glReleaseShaderCompiler();
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glRenderbufferStorage_int_int_int_int(jcontext ctx, jobject self, jint target, jint internalformat, jint width, jint height) {
    glRenderbufferStorage(target, internalformat, width, height);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glSampleCoverage_float_boolean(jcontext ctx, jobject self, jfloat value, jbool invert) {
    glSampleCoverage(value, invert);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glShaderBinary_int_java_nio_IntBuffer_int_java_nio_Buffer_int(jcontext ctx, jobject self, jint n, jobject shaders, jint binaryformat, jobject binary, jint length) {
    glShaderBinary(n, (GLuint *) getBufferAddress((java_nio_IntBuffer *) shaders), binaryformat, (void *) getBufferAddress(ctx, (java_nio_Buffer *) binary), length);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glShaderSource_int_java_lang_String(jcontext ctx, jobject self, jint shader, jobject sourceObject) {
    auto source = stringToNative(ctx, (jstring) sourceObject);
    glShaderSource(shader, 1, &source, nullptr);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glStencilFuncSeparate_int_int_int_int(jcontext ctx, jobject self, jint face, jint func, jint ref, jint mask) {
    glStencilFuncSeparate(face, func, ref, mask);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glStencilMaskSeparate_int_int(jcontext ctx, jobject self, jint face, jint mask) {
    glStencilMaskSeparate(face, mask);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glStencilOpSeparate_int_int_int_int(jcontext ctx, jobject self, jint face, jint fail, jint zfail, jint zpass) {
    glStencilOpSeparate(face, fail, zfail, zpass);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glTexParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint target, jint pname, jobject params) {
    glTexParameterfv(target, pname, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glTexParameteri_int_int_int(jcontext ctx, jobject self, jint target, jint pname, jint param) {
    glTexParameteri(target, pname, param);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glTexParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint target, jint pname, jobject params) {
    glTexParameteriv(target, pname, (GLint *) getBufferAddress((java_nio_IntBuffer *) params));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform1f_int_float(jcontext ctx, jobject self, jint location, jfloat x) {
    glUniform1f(location, x);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform1fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint location, jint count, jobject v) {
    glUniform1fv(location, count, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) v));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform1fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint location, jint count, jobject v, jint offset) {
    glUniform1fv(location, count, (GLfloat *) ((jarray) v)->data + offset);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform1i_int_int(jcontext ctx, jobject self, jint location, jint x) {
    glUniform1i(location, x);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform1iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint location, jint count, jobject v) {
    glUniform1iv(location, count, (GLint *) getBufferAddress((java_nio_IntBuffer *) v));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform1iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint location, jint count, jobject v, jint offset) {
    glUniform1iv(location, count, (GLint *) ((jarray) v)->data + offset);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform2f_int_float_float(jcontext ctx, jobject self, jint location, jfloat x, jfloat y) {
    glUniform2f(location, x, y);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform2fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint location, jint count, jobject v) {
    glUniform2fv(location, count, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) v));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform2fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint location, jint count, jobject v, jint offset) {
    glUniform2fv(location, count, (GLfloat *) ((jarray) v)->data + offset);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform2i_int_int_int(jcontext ctx, jobject self, jint location, jint x, jint y) {
    glUniform2i(location, x, y);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform2iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint location, jint count, jobject v) {
    glUniform2iv(location, count, (GLint *) getBufferAddress((java_nio_IntBuffer *) v));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform2iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint location, jint count, jobject v, jint offset) {
    glUniform2iv(location, count, (GLint *) ((jarray) v)->data + offset);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform3f_int_float_float_float(jcontext ctx, jobject self, jint location, jfloat x, jfloat y, jfloat z) {
    glUniform3f(location, x, y, z);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform3fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint location, jint count, jobject v) {
    glUniform3fv(location, count, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) v));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform3fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint location, jint count, jobject v, jint offset) {
    glUniform3fv(location, count, (GLfloat *) ((jarray) v)->data + offset);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform3i_int_int_int_int(jcontext ctx, jobject self, jint location, jint x, jint y, jint z) {
    glUniform3i(location, x, y, z);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform3iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint location, jint count, jobject v) {
    glUniform3iv(location, count, (GLint *) getBufferAddress((java_nio_IntBuffer *) v));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform3iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint location, jint count, jobject v, jint offset) {
    glUniform3iv(location, count, (GLint *) ((jarray) v)->data + offset);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform4f_int_float_float_float_float(jcontext ctx, jobject self, jint location, jfloat x, jfloat y, jfloat z, jfloat w) {
    glUniform4f(location, x, y, z, w);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform4fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint location, jint count, jobject v) {
    glUniform4fv(location, count, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) v));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform4fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint location, jint count, jobject v, jint offset) {
    glUniform4fv(location, count, (GLfloat *) ((jarray) v)->data + offset);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform4i_int_int_int_int_int(jcontext ctx, jobject self, jint location, jint x, jint y, jint z, jint w) {
    glUniform4i(location, x, y, z, w);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform4iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint location, jint count, jobject v) {
    glUniform4iv(location, count, (GLint *) getBufferAddress((java_nio_IntBuffer *) v));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniform4iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint location, jint count, jobject v, jint offset) {
    glUniform4iv(location, count, (GLint *) ((jarray) v)->data + offset);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint location, jint count, jbool transpose, jobject value) {
    glUniformMatrix2fv(location, count, transpose, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) value));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniformMatrix2fv_int_int_boolean_Array1_float_int(jcontext ctx, jobject self, jint location, jint count, jbool transpose, jobject value, jint offset) {
    glUniformMatrix2fv(location, count, transpose, (GLfloat *) ((jarray) value)->data + offset);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint location, jint count, jbool transpose, jobject value) {
    glUniformMatrix3fv(location, count, transpose, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) value));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniformMatrix3fv_int_int_boolean_Array1_float_int(jcontext ctx, jobject self, jint location, jint count, jbool transpose, jobject value, jint offset) {
    glUniformMatrix3fv(location, count, transpose, (GLfloat *) ((jarray) value)->data + offset);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint location, jint count, jbool transpose, jobject value) {
    glUniformMatrix4fv(location, count, transpose, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) value));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUniformMatrix4fv_int_int_boolean_Array1_float_int(jcontext ctx, jobject self, jint location, jint count, jbool transpose, jobject value, jint offset) {
    glUniformMatrix4fv(location, count, transpose, (GLfloat *) ((jarray) value)->data + offset);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glUseProgram_int(jcontext ctx, jobject self, jint program) {
    glUseProgram(program);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glValidateProgram_int(jcontext ctx, jobject self, jint program) {
    glValidateProgram(program);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glVertexAttrib1f_int_float(jcontext ctx, jobject self, jint indx, jfloat x) {
    glVertexAttrib1f(indx, x);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glVertexAttrib1fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint indx, jobject values) {
    glVertexAttrib1fv(indx, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) values));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glVertexAttrib2f_int_float_float(jcontext ctx, jobject self, jint indx, jfloat x, jfloat y) {
    glVertexAttrib2f(indx, x, y);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glVertexAttrib2fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint indx, jobject values) {
    glVertexAttrib2fv(indx, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) values));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glVertexAttrib3f_int_float_float_float(jcontext ctx, jobject self, jint indx, jfloat x, jfloat y, jfloat z) {
    glVertexAttrib3f(indx, x, y, z);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glVertexAttrib3fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint indx, jobject values) {
    glVertexAttrib3fv(indx, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) values));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glVertexAttrib4f_int_float_float_float_float(jcontext ctx, jobject self, jint indx, jfloat x, jfloat y, jfloat z, jfloat w) {
    glVertexAttrib4f(indx, x, y, z, w);
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glVertexAttrib4fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint indx, jobject values) {
    glVertexAttrib4fv(indx, (GLfloat *) getBufferAddress((java_nio_FloatBuffer *) values));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer(jcontext ctx, jobject self, jint index, jint size, jint type, jbool normalized, jint stride, jobject ptr) {
    glVertexAttribPointer(index, size, type, normalized, stride, getBufferAddress(ctx, (java_nio_Buffer *) ptr));
}

void M_com_thelogicmaster_switchgdx_SwitchGL_glVertexAttribPointer_int_int_int_boolean_int_int(jcontext ctx, jobject self, jint index, jint size, jint type, jbool normalized, jint stride, jint ptr) {
    glVertexAttribPointer(index, size, type, normalized, stride, (void *) (jlong) ptr);
}

}
