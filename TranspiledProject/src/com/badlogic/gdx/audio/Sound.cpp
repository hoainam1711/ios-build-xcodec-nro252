#include "com/badlogic/gdx/audio/Sound.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/audio/Sound.h"

extern "C" {


void mark_com_badlogic_gdx_audio_Sound(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_audio_Sound *) object;
}

void clinit_com_badlogic_gdx_audio_Sound(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_audio_Sound[] {
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
	{ "play", "()J" },
	{ "play", "(F)J" },
	{ "play", "(FFF)J" },
	{ "loop", "()J" },
	{ "loop", "(F)J" },
	{ "loop", "(FFF)J" },
	{ "stop", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "stop", "(J)V" },
	{ "pause", "(J)V" },
	{ "resume", "(J)V" },
	{ "setLooping", "(JZ)V" },
	{ "setPitch", "(JF)V" },
	{ "setVolume", "(JF)V" },
	{ "setPan", "(JFF)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static MethodMetadata methods[] {
	{ "play", 0, INDEX_com_badlogic_gdx_audio_Sound_play_R_long, "()J", 1025 },
	{ "play", 0, INDEX_com_badlogic_gdx_audio_Sound_play_float_R_long, "(F)J", 1025 },
	{ "play", 0, INDEX_com_badlogic_gdx_audio_Sound_play_float_float_float_R_long, "(FFF)J", 1025 },
	{ "loop", 0, INDEX_com_badlogic_gdx_audio_Sound_loop_R_long, "()J", 1025 },
	{ "loop", 0, INDEX_com_badlogic_gdx_audio_Sound_loop_float_R_long, "(F)J", 1025 },
	{ "loop", 0, INDEX_com_badlogic_gdx_audio_Sound_loop_float_float_float_R_long, "(FFF)J", 1025 },
	{ "stop", 0, INDEX_com_badlogic_gdx_audio_Sound_stop, "()V", 1025 },
	{ "pause", 0, INDEX_com_badlogic_gdx_audio_Sound_pause, "()V", 1025 },
	{ "resume", 0, INDEX_com_badlogic_gdx_audio_Sound_resume, "()V", 1025 },
	{ "dispose", 0, INDEX_com_badlogic_gdx_audio_Sound_dispose, "()V", 1025 },
	{ "stop", 0, INDEX_com_badlogic_gdx_audio_Sound_stop_long, "(J)V", 1025 },
	{ "pause", 0, INDEX_com_badlogic_gdx_audio_Sound_pause_long, "(J)V", 1025 },
	{ "resume", 0, INDEX_com_badlogic_gdx_audio_Sound_resume_long, "(J)V", 1025 },
	{ "setLooping", 0, INDEX_com_badlogic_gdx_audio_Sound_setLooping_long_boolean, "(JZ)V", 1025 },
	{ "setPitch", 0, INDEX_com_badlogic_gdx_audio_Sound_setPitch_long_float, "(JF)V", 1025 },
	{ "setVolume", 0, INDEX_com_badlogic_gdx_audio_Sound_setVolume_long_float, "(JF)V", 1025 },
	{ "setPan", 0, INDEX_com_badlogic_gdx_audio_Sound_setPan_long_float_float, "(JFF)V", 1025 },
};

Class class_com_badlogic_gdx_audio_Sound{
		.nativeName = (intptr_t) "com/badlogic/gdx/audio/Sound",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_audio_Sound),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_audio_Sound,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_audio_Sound,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_audio_Sound,
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
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_audio_Sound = registerClass(&class_com_badlogic_gdx_audio_Sound);

}

