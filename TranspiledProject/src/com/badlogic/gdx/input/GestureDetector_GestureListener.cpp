#include "com/badlogic/gdx/input/GestureDetector_GestureListener.h"
#include "com/badlogic/gdx/input/GestureDetector_GestureListener.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/input/GestureDetector.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_input_GestureDetector$GestureListener(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_input_GestureDetector$GestureListener *) object;
}

void clinit_com_badlogic_gdx_input_GestureDetector$GestureListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_input_GestureDetector$GestureListener[] {
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
	{ "touchDown", "(FFII)Z" },
	{ "tap", "(FFII)Z" },
	{ "longPress", "(FF)Z" },
	{ "fling", "(FFI)Z" },
	{ "pan", "(FFFF)Z" },
	{ "panStop", "(FFII)Z" },
	{ "zoom", "(FF)Z" },
	{ "pinch", "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "pinchStop", "()V" },
};

static MethodMetadata methods[] {
	{ "touchDown", 0, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_touchDown_float_float_int_int_R_boolean, "(FFII)Z", 1025 },
	{ "tap", 0, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_tap_float_float_int_int_R_boolean, "(FFII)Z", 1025 },
	{ "longPress", 0, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_longPress_float_float_R_boolean, "(FF)Z", 1025 },
	{ "fling", 0, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_fling_float_float_int_R_boolean, "(FFI)Z", 1025 },
	{ "pan", 0, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean, "(FFFF)Z", 1025 },
	{ "panStop", 0, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_panStop_float_float_int_int_R_boolean, "(FFII)Z", 1025 },
	{ "zoom", 0, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_zoom_float_float_R_boolean, "(FF)Z", 1025 },
	{ "pinch", 0, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Z", 1025 },
	{ "pinchStop", 0, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_pinchStop, "()V", 1025 },
};

Class class_com_badlogic_gdx_input_GestureDetector$GestureListener{
		.nativeName = (intptr_t) "com/badlogic/gdx/input/GestureDetector$GestureListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_input_GestureDetector$GestureListener),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_input_GestureDetector$GestureListener,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_input_GestureDetector$GestureListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_input_GestureDetector$GestureListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_input_GestureDetector,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
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
static bool registered_com_badlogic_gdx_input_GestureDetector$GestureListener = registerClass(&class_com_badlogic_gdx_input_GestureDetector$GestureListener);

}

