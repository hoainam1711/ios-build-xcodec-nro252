#include "com/badlogic/gdx/ApplicationLogger.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/ApplicationLogger.h"
#include "java/lang/String.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_com_badlogic_gdx_ApplicationLogger(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_ApplicationLogger *) object;
}

void clinit_com_badlogic_gdx_ApplicationLogger(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_ApplicationLogger[] {
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
	{ "log", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "log", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V" },
	{ "debug", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "debug", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V" },
};

static MethodMetadata methods[] {
	{ "log", 0, INDEX_com_badlogic_gdx_ApplicationLogger_log_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1025 },
	{ "log", 0, INDEX_com_badlogic_gdx_ApplicationLogger_log_java_lang_String_java_lang_String_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", 1025 },
	{ "error", 0, INDEX_com_badlogic_gdx_ApplicationLogger_error_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1025 },
	{ "error", 0, INDEX_com_badlogic_gdx_ApplicationLogger_error_java_lang_String_java_lang_String_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", 1025 },
	{ "debug", 0, INDEX_com_badlogic_gdx_ApplicationLogger_debug_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1025 },
	{ "debug", 0, INDEX_com_badlogic_gdx_ApplicationLogger_debug_java_lang_String_java_lang_String_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", 1025 },
};

Class class_com_badlogic_gdx_ApplicationLogger{
		.nativeName = (intptr_t) "com/badlogic/gdx/ApplicationLogger",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_ApplicationLogger),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_ApplicationLogger,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_ApplicationLogger,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_ApplicationLogger,
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
static bool registered_com_badlogic_gdx_ApplicationLogger = registerClass(&class_com_badlogic_gdx_ApplicationLogger);

}

