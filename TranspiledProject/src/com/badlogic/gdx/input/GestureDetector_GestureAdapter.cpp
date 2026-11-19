#include "com/badlogic/gdx/input/GestureDetector_GestureAdapter.h"
#include "com/badlogic/gdx/input/GestureDetector_GestureListener.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/input/GestureDetector.h"
#include "com/badlogic/gdx/input/GestureDetector_GestureAdapter.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_input_GestureDetector$GestureAdapter(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_input_GestureDetector$GestureAdapter *) object;
}

void clinit_com_badlogic_gdx_input_GestureDetector$GestureAdapter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_input_GestureDetector$GestureAdapter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector$GestureAdapter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_input_GestureDetector$GestureAdapter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(357);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_touchDown_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector$GestureAdapter:touchDown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_tap_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector$GestureAdapter:tap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_longPress_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector$GestureAdapter:longPress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_fling_float_float_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector$GestureAdapter:fling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector$GestureAdapter:pan", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_panStop_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector$GestureAdapter:panStop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector$GestureAdapter:zoom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector$GestureAdapter:pinch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pinchStop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector$GestureAdapter:pinchStop", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(400);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_input_GestureDetector$GestureAdapter[] {
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
	(void *) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_touchDown_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_tap_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_longPress_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_fling_float_float_int_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pan_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_panStop_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_zoom_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pinchStop,
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

static jclass interfaces[] { &class_com_badlogic_gdx_input_GestureDetector$GestureListener, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_input_GestureDetector$GestureAdapter, 0, "()V", 1 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_touchDown_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector$GestureAdapter_touchDown_float_float_int_int_R_boolean, "(FFII)Z", 1 },
	{ "tap", (intptr_t) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_tap_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector$GestureAdapter_tap_float_float_int_int_R_boolean, "(FFII)Z", 1 },
	{ "longPress", (intptr_t) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_longPress_float_float_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector$GestureAdapter_longPress_float_float_R_boolean, "(FF)Z", 1 },
	{ "fling", (intptr_t) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_fling_float_float_int_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector$GestureAdapter_fling_float_float_int_R_boolean, "(FFI)Z", 1 },
	{ "pan", (intptr_t) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pan_float_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pan_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "panStop", (intptr_t) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_panStop_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector$GestureAdapter_panStop_float_float_int_int_R_boolean, "(FFII)Z", 1 },
	{ "zoom", (intptr_t) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_zoom_float_float_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector$GestureAdapter_zoom_float_float_R_boolean, "(FF)Z", 1 },
	{ "pinch", (intptr_t) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "pinchStop", (intptr_t) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pinchStop, VTABLE_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pinchStop, "()V", 1 },
};

Class class_com_badlogic_gdx_input_GestureDetector$GestureAdapter{
		.nativeName = (intptr_t) "com/badlogic/gdx/input/GestureDetector$GestureAdapter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_input_GestureDetector$GestureAdapter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_input_GestureDetector$GestureAdapter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_input_GestureDetector$GestureAdapter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_input_GestureDetector$GestureAdapter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_input_GestureDetector,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_input_GestureDetector$GestureAdapter = registerClass(&class_com_badlogic_gdx_input_GestureDetector$GestureAdapter);

}

