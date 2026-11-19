#include "com/badlogic/gdx/InputProcessor.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/InputProcessor.h"

extern "C" {


void mark_com_badlogic_gdx_InputProcessor(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_InputProcessor *) object;
}

void clinit_com_badlogic_gdx_InputProcessor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_InputProcessor[] {
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
	{ "keyDown", "(I)Z" },
	{ "keyUp", "(I)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIII)Z" },
	{ "touchUp", "(IIII)Z" },
	{ "touchCancelled", "(IIII)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
};

static MethodMetadata methods[] {
	{ "keyDown", 0, INDEX_com_badlogic_gdx_InputProcessor_keyDown_int_R_boolean, "(I)Z", 1025 },
	{ "keyUp", 0, INDEX_com_badlogic_gdx_InputProcessor_keyUp_int_R_boolean, "(I)Z", 1025 },
	{ "keyTyped", 0, INDEX_com_badlogic_gdx_InputProcessor_keyTyped_char_R_boolean, "(C)Z", 1025 },
	{ "touchDown", 0, INDEX_com_badlogic_gdx_InputProcessor_touchDown_int_int_int_int_R_boolean, "(IIII)Z", 1025 },
	{ "touchUp", 0, INDEX_com_badlogic_gdx_InputProcessor_touchUp_int_int_int_int_R_boolean, "(IIII)Z", 1025 },
	{ "touchCancelled", 0, INDEX_com_badlogic_gdx_InputProcessor_touchCancelled_int_int_int_int_R_boolean, "(IIII)Z", 1025 },
	{ "touchDragged", 0, INDEX_com_badlogic_gdx_InputProcessor_touchDragged_int_int_int_R_boolean, "(III)Z", 1025 },
	{ "mouseMoved", 0, INDEX_com_badlogic_gdx_InputProcessor_mouseMoved_int_int_R_boolean, "(II)Z", 1025 },
	{ "scrolled", 0, INDEX_com_badlogic_gdx_InputProcessor_scrolled_float_float_R_boolean, "(FF)Z", 1025 },
};

Class class_com_badlogic_gdx_InputProcessor{
		.nativeName = (intptr_t) "com/badlogic/gdx/InputProcessor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_InputProcessor),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_InputProcessor,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_InputProcessor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_InputProcessor,
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
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_InputProcessor = registerClass(&class_com_badlogic_gdx_InputProcessor);

}

