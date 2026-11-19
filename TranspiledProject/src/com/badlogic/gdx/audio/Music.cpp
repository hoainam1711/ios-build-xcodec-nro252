#include "com/badlogic/gdx/audio/Music.h"
#include "com/badlogic/gdx/audio/Music.h"
#include "com/badlogic/gdx/audio/Music_OnCompletionListener.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

extern "C" {


void mark_com_badlogic_gdx_audio_Music(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_audio_Music *) object;
}

void clinit_com_badlogic_gdx_audio_Music(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_audio_Music[] {
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
	{ "play", "()V" },
	{ "pause", "()V" },
	{ "stop", "()V" },
	{ "isPlaying", "()Z" },
	{ "setLooping", "(Z)V" },
	{ "isLooping", "()Z" },
	{ "setVolume", "(F)V" },
	{ "getVolume", "()F" },
	{ "setPan", "(FF)V" },
	{ "setPosition", "(F)V" },
	{ "getPosition", "()F" },
	{ "setOnCompletionListener", "(Lcom/badlogic/gdx/audio/Music$OnCompletionListener;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_audio_Music$OnCompletionListener,
};

static MethodMetadata methods[] {
	{ "play", 0, INDEX_com_badlogic_gdx_audio_Music_play, "()V", 1025 },
	{ "pause", 0, INDEX_com_badlogic_gdx_audio_Music_pause, "()V", 1025 },
	{ "stop", 0, INDEX_com_badlogic_gdx_audio_Music_stop, "()V", 1025 },
	{ "isPlaying", 0, INDEX_com_badlogic_gdx_audio_Music_isPlaying_R_boolean, "()Z", 1025 },
	{ "setLooping", 0, INDEX_com_badlogic_gdx_audio_Music_setLooping_boolean, "(Z)V", 1025 },
	{ "isLooping", 0, INDEX_com_badlogic_gdx_audio_Music_isLooping_R_boolean, "()Z", 1025 },
	{ "setVolume", 0, INDEX_com_badlogic_gdx_audio_Music_setVolume_float, "(F)V", 1025 },
	{ "getVolume", 0, INDEX_com_badlogic_gdx_audio_Music_getVolume_R_float, "()F", 1025 },
	{ "setPan", 0, INDEX_com_badlogic_gdx_audio_Music_setPan_float_float, "(FF)V", 1025 },
	{ "setPosition", 0, INDEX_com_badlogic_gdx_audio_Music_setPosition_float, "(F)V", 1025 },
	{ "getPosition", 0, INDEX_com_badlogic_gdx_audio_Music_getPosition_R_float, "()F", 1025 },
	{ "dispose", 0, INDEX_com_badlogic_gdx_audio_Music_dispose, "()V", 1025 },
	{ "setOnCompletionListener", 0, INDEX_com_badlogic_gdx_audio_Music_setOnCompletionListener_com_badlogic_gdx_audio_Music$OnCompletionListener, "(Lcom/badlogic/gdx/audio/Music$OnCompletionListener;)V", 1025 },
};

Class class_com_badlogic_gdx_audio_Music{
		.nativeName = (intptr_t) "com/badlogic/gdx/audio/Music",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_audio_Music),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_audio_Music,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_audio_Music,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_audio_Music,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_audio_Music = registerClass(&class_com_badlogic_gdx_audio_Music);

}

