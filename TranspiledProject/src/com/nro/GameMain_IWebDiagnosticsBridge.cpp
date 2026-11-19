#include "com/nro/GameMain_IWebDiagnosticsBridge.h"
#include "com/nro/GameMain_IWebDiagnosticsBridge.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/nro/GameMain.h"

extern "C" {


void mark_com_nro_GameMain$IWebDiagnosticsBridge(jobject object, jint mark, jint depth) {
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
	auto self = (com_nro_GameMain$IWebDiagnosticsBridge *) object;
}

void clinit_com_nro_GameMain$IWebDiagnosticsBridge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_nro_GameMain$IWebDiagnosticsBridge[] {
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
	{ "reportMetrics", "(IIIIIIIIILjava/lang/String;IZ)V" },
	{ "reportEvent", "(Ljava/lang/String;Ljava/lang/String;)V" },
};

static MethodMetadata methods[] {
	{ "reportMetrics", 0, INDEX_com_nro_GameMain$IWebDiagnosticsBridge_reportMetrics_int_int_int_int_int_int_int_int_int_java_lang_String_int_boolean, "(IIIIIIIIILjava/lang/String;IZ)V", 1025 },
	{ "reportEvent", 0, INDEX_com_nro_GameMain$IWebDiagnosticsBridge_reportEvent_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1025 },
};

Class class_com_nro_GameMain$IWebDiagnosticsBridge{
		.nativeName = (intptr_t) "com/nro/GameMain$IWebDiagnosticsBridge",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_nro_GameMain$IWebDiagnosticsBridge),
		.classVtable = (intptr_t) vtable_com_nro_GameMain$IWebDiagnosticsBridge,
		.staticInitializer = (intptr_t) clinit_com_nro_GameMain$IWebDiagnosticsBridge,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_nro_GameMain$IWebDiagnosticsBridge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_nro_GameMain,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_nro_GameMain$IWebDiagnosticsBridge = registerClass(&class_com_nro_GameMain$IWebDiagnosticsBridge);

}

