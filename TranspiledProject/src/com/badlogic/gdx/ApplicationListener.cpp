#include "com/badlogic/gdx/ApplicationListener.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/ApplicationListener.h"

extern "C" {


void mark_com_badlogic_gdx_ApplicationListener(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_ApplicationListener *) object;
}

void clinit_com_badlogic_gdx_ApplicationListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_ApplicationListener[] {
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
	{ "create", "()V" },
	{ "resize", "(II)V" },
	{ "render", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "dispose", "()V" },
};

static MethodMetadata methods[] {
	{ "create", 0, INDEX_com_badlogic_gdx_ApplicationListener_create, "()V", 1025 },
	{ "resize", 0, INDEX_com_badlogic_gdx_ApplicationListener_resize_int_int, "(II)V", 1025 },
	{ "render", 0, INDEX_com_badlogic_gdx_ApplicationListener_render, "()V", 1025 },
	{ "pause", 0, INDEX_com_badlogic_gdx_ApplicationListener_pause, "()V", 1025 },
	{ "resume", 0, INDEX_com_badlogic_gdx_ApplicationListener_resume, "()V", 1025 },
	{ "dispose", 0, INDEX_com_badlogic_gdx_ApplicationListener_dispose, "()V", 1025 },
};

Class class_com_badlogic_gdx_ApplicationListener{
		.nativeName = (intptr_t) "com/badlogic/gdx/ApplicationListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_ApplicationListener),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_ApplicationListener,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_ApplicationListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_ApplicationListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_ApplicationListener = registerClass(&class_com_badlogic_gdx_ApplicationListener);

}

