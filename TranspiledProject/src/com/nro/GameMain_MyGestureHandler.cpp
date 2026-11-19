#include "com/nro/GameMain_MyGestureHandler.h"
#include "com/badlogic/gdx/input/GestureDetector_GestureListener.h"
#include "java/lang/Object.h"
#include "com/nro/GameMain_MyGestureHandler.h"
#include "com/nro/GameMain.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_nro_GameMain$MyGestureHandler(jobject object, jint mark, jint depth) {
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
	auto self = (com_nro_GameMain$MyGestureHandler *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_nro_GameMain$MyGestureHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_nro_GameMain$MyGestureHandler_com_nro_GameMain(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyGestureHandler:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain$MyGestureHandler(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	((com_nro_GameMain$MyGestureHandler *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(177);
	((com_nro_GameMain$MyGestureHandler *) NULL_CHECK((frame[0].o)))->F_initialScale = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyGestureHandler_touchDown_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyGestureHandler:touchDown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyGestureHandler_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyGestureHandler:zoom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyGestureHandler_tap_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyGestureHandler:tap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyGestureHandler_longPress_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyGestureHandler:longPress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyGestureHandler_fling_float_float_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyGestureHandler:fling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyGestureHandler_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyGestureHandler:pan", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyGestureHandler_panStop_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyGestureHandler:panStop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyGestureHandler_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyGestureHandler:pinch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_nro_GameMain$MyGestureHandler_pinchStop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyGestureHandler:pinchStop", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_nro_GameMain$MyGestureHandler[] {
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
	(void *) M_com_nro_GameMain$MyGestureHandler_touchDown_float_float_int_int_R_boolean,
	(void *) M_com_nro_GameMain$MyGestureHandler_tap_float_float_int_int_R_boolean,
	(void *) M_com_nro_GameMain$MyGestureHandler_longPress_float_float_R_boolean,
	(void *) M_com_nro_GameMain$MyGestureHandler_fling_float_float_int_R_boolean,
	(void *) M_com_nro_GameMain$MyGestureHandler_pan_float_float_float_float_R_boolean,
	(void *) M_com_nro_GameMain$MyGestureHandler_panStop_float_float_int_int_R_boolean,
	(void *) M_com_nro_GameMain$MyGestureHandler_zoom_float_float_R_boolean,
	(void *) M_com_nro_GameMain$MyGestureHandler_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_nro_GameMain$MyGestureHandler_pinchStop,
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

static FieldMetadata fields[] {
	{ "initialScale", &class_float, offsetof(com_nro_GameMain$MyGestureHandler, F_initialScale), "F", 1 },
	{ "this$0", &class_com_nro_GameMain, offsetof(com_nro_GameMain$MyGestureHandler, F_this$0), "Lcom/nro/GameMain;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_nro_GameMain$MyGestureHandler_com_nro_GameMain, 0, "(Lcom/nro/GameMain;)V", 0 },
	{ "touchDown", (intptr_t) M_com_nro_GameMain$MyGestureHandler_touchDown_float_float_int_int_R_boolean, VTABLE_com_nro_GameMain$MyGestureHandler_touchDown_float_float_int_int_R_boolean, "(FFII)Z", 1 },
	{ "zoom", (intptr_t) M_com_nro_GameMain$MyGestureHandler_zoom_float_float_R_boolean, VTABLE_com_nro_GameMain$MyGestureHandler_zoom_float_float_R_boolean, "(FF)Z", 1 },
	{ "tap", (intptr_t) M_com_nro_GameMain$MyGestureHandler_tap_float_float_int_int_R_boolean, VTABLE_com_nro_GameMain$MyGestureHandler_tap_float_float_int_int_R_boolean, "(FFII)Z", 1 },
	{ "longPress", (intptr_t) M_com_nro_GameMain$MyGestureHandler_longPress_float_float_R_boolean, VTABLE_com_nro_GameMain$MyGestureHandler_longPress_float_float_R_boolean, "(FF)Z", 1 },
	{ "fling", (intptr_t) M_com_nro_GameMain$MyGestureHandler_fling_float_float_int_R_boolean, VTABLE_com_nro_GameMain$MyGestureHandler_fling_float_float_int_R_boolean, "(FFI)Z", 1 },
	{ "pan", (intptr_t) M_com_nro_GameMain$MyGestureHandler_pan_float_float_float_float_R_boolean, VTABLE_com_nro_GameMain$MyGestureHandler_pan_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "panStop", (intptr_t) M_com_nro_GameMain$MyGestureHandler_panStop_float_float_int_int_R_boolean, VTABLE_com_nro_GameMain$MyGestureHandler_panStop_float_float_int_int_R_boolean, "(FFII)Z", 1 },
	{ "pinch", (intptr_t) M_com_nro_GameMain$MyGestureHandler_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_nro_GameMain$MyGestureHandler_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "pinchStop", (intptr_t) M_com_nro_GameMain$MyGestureHandler_pinchStop, VTABLE_com_nro_GameMain$MyGestureHandler_pinchStop, "()V", 1 },
};

Class class_com_nro_GameMain$MyGestureHandler{
		.nativeName = (intptr_t) "com/nro/GameMain$MyGestureHandler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_nro_GameMain$MyGestureHandler),
		.classVtable = (intptr_t) vtable_com_nro_GameMain$MyGestureHandler,
		.staticInitializer = (intptr_t) clinit_com_nro_GameMain$MyGestureHandler,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_nro_GameMain$MyGestureHandler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_nro_GameMain,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_nro_GameMain$MyGestureHandler = registerClass(&class_com_nro_GameMain$MyGestureHandler);

}

