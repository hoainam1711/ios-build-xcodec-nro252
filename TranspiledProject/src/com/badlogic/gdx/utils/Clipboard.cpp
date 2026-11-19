#include "com/badlogic/gdx/utils/Clipboard.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Clipboard.h"
#include "java/lang/String.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Clipboard(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Clipboard *) object;
}

void clinit_com_badlogic_gdx_utils_Clipboard(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_utils_Clipboard[] {
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
	{ "hasContents", "()Z" },
	{ "getContents", "()Ljava/lang/String;" },
	{ "setContents", "(Ljava/lang/String;)V" },
};

static MethodMetadata methods[] {
	{ "hasContents", 0, INDEX_com_badlogic_gdx_utils_Clipboard_hasContents_R_boolean, "()Z", 1025 },
	{ "getContents", 0, INDEX_com_badlogic_gdx_utils_Clipboard_getContents_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "setContents", 0, INDEX_com_badlogic_gdx_utils_Clipboard_setContents_java_lang_String, "(Ljava/lang/String;)V", 1025 },
};

Class class_com_badlogic_gdx_utils_Clipboard{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Clipboard",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Clipboard),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Clipboard,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Clipboard,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Clipboard,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Clipboard = registerClass(&class_com_badlogic_gdx_utils_Clipboard);

}

