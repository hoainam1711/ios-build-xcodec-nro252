#ifndef HEADER_com_badlogic_gdx_Audio
#define HEADER_com_badlogic_gdx_Audio

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Audio {
	java_lang_Object parent;
} com_badlogic_gdx_Audio;

extern Class class_com_badlogic_gdx_Audio;


#define INDEX_com_badlogic_gdx_Audio_newAudioDevice_int_boolean_R_com_badlogic_gdx_audio_AudioDevice 0
typedef jobject (*func_com_badlogic_gdx_Audio_newAudioDevice_int_boolean_R_com_badlogic_gdx_audio_AudioDevice)(jcontext ctx, jobject self, jint param0, jbool param1);
#define INDEX_com_badlogic_gdx_Audio_newAudioRecorder_int_boolean_R_com_badlogic_gdx_audio_AudioRecorder 1
typedef jobject (*func_com_badlogic_gdx_Audio_newAudioRecorder_int_boolean_R_com_badlogic_gdx_audio_AudioRecorder)(jcontext ctx, jobject self, jint param0, jbool param1);
#define INDEX_com_badlogic_gdx_Audio_newSound_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Sound 2
typedef jobject (*func_com_badlogic_gdx_Audio_newSound_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Sound)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Audio_newMusic_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Music 3
typedef jobject (*func_com_badlogic_gdx_Audio_newMusic_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Music)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Audio_switchOutputDevice_java_lang_String_R_boolean 4
typedef jbool (*func_com_badlogic_gdx_Audio_switchOutputDevice_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Audio_getAvailableOutputDevices_R_Array1_java_lang_String 5
typedef jobject (*func_com_badlogic_gdx_Audio_getAvailableOutputDevices_R_Array1_java_lang_String)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_Audio(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Audio(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
