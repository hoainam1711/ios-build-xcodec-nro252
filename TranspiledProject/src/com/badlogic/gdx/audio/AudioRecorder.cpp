#include "com/badlogic/gdx/audio/AudioRecorder.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/audio/AudioRecorder.h"
#include "com/badlogic/gdx/utils/Disposable.h"

extern "C" {


void mark_com_badlogic_gdx_audio_AudioRecorder(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_audio_AudioRecorder *) object;
}

void clinit_com_badlogic_gdx_audio_AudioRecorder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_audio_AudioRecorder[] {
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
	{ "read", "([SII)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static MethodMetadata methods[] {
	{ "read", 0, INDEX_com_badlogic_gdx_audio_AudioRecorder_read_Array1_short_int_int, "([SII)V", 1025 },
	{ "dispose", 0, INDEX_com_badlogic_gdx_audio_AudioRecorder_dispose, "()V", 1025 },
};

Class class_com_badlogic_gdx_audio_AudioRecorder{
		.nativeName = (intptr_t) "com/badlogic/gdx/audio/AudioRecorder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_audio_AudioRecorder),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_audio_AudioRecorder,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_audio_AudioRecorder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_audio_AudioRecorder,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_audio_AudioRecorder = registerClass(&class_com_badlogic_gdx_audio_AudioRecorder);

}

