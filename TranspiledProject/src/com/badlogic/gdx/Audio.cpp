#include "com/badlogic/gdx/Audio.h"
#include "com/badlogic/gdx/audio/Music.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/audio/AudioDevice.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/audio/AudioRecorder.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/Audio.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/audio/Sound.h"

extern "C" {


void mark_com_badlogic_gdx_Audio(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_Audio *) object;
}

void clinit_com_badlogic_gdx_Audio(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_Audio[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "dispose", "()V" },
	{ "newAudioDevice", "(IZ)Lcom/badlogic/gdx/audio/AudioDevice;" },
	{ "newAudioRecorder", "(IZ)Lcom/badlogic/gdx/audio/AudioRecorder;" },
	{ "newSound", "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/audio/Sound;" },
	{ "newMusic", "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/audio/Music;" },
	{ "switchOutputDevice", "(Ljava/lang/String;)Z" },
	{ "getAvailableOutputDevices", "()[Ljava/lang/String;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static MethodMetadata methods[] {
	{ "newAudioDevice", 0, INDEX_com_badlogic_gdx_Audio_newAudioDevice_int_boolean_R_com_badlogic_gdx_audio_AudioDevice, "(IZ)Lcom/badlogic/gdx/audio/AudioDevice;", 1025 },
	{ "newAudioRecorder", 0, INDEX_com_badlogic_gdx_Audio_newAudioRecorder_int_boolean_R_com_badlogic_gdx_audio_AudioRecorder, "(IZ)Lcom/badlogic/gdx/audio/AudioRecorder;", 1025 },
	{ "newSound", 0, INDEX_com_badlogic_gdx_Audio_newSound_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Sound, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/audio/Sound;", 1025 },
	{ "newMusic", 0, INDEX_com_badlogic_gdx_Audio_newMusic_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Music, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/audio/Music;", 1025 },
	{ "switchOutputDevice", 0, INDEX_com_badlogic_gdx_Audio_switchOutputDevice_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1025 },
	{ "getAvailableOutputDevices", 0, INDEX_com_badlogic_gdx_Audio_getAvailableOutputDevices_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1025 },
};

Class class_com_badlogic_gdx_Audio{
		.nativeName = (intptr_t) "com/badlogic/gdx/Audio",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Audio),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Audio,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Audio,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Audio,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Audio = registerClass(&class_com_badlogic_gdx_Audio);

}

