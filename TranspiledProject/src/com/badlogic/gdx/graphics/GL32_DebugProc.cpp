#include "com/badlogic/gdx/graphics/GL32_DebugProc.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/GL32.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/GL32_DebugProc.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_GL32$DebugProc(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_GL32$DebugProc *) object;
}

void clinit_com_badlogic_gdx_graphics_GL32$DebugProc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_graphics_GL32$DebugProc[] {
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
	{ "onMessage", "(IIIILjava/lang/String;)V" },
};

static MethodMetadata methods[] {
	{ "onMessage", 0, INDEX_com_badlogic_gdx_graphics_GL32$DebugProc_onMessage_int_int_int_int_java_lang_String, "(IIIILjava/lang/String;)V", 1025 },
};

Class class_com_badlogic_gdx_graphics_GL32$DebugProc{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/GL32$DebugProc",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_GL32$DebugProc),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_GL32$DebugProc,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_GL32$DebugProc,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_GL32$DebugProc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_GL32,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_GL32$DebugProc = registerClass(&class_com_badlogic_gdx_graphics_GL32$DebugProc);

}

