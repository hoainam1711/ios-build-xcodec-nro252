#include "com/badlogic/gdx/input/GestureDetector.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/input/GestureDetector_GestureListener.h"
#include "com/badlogic/gdx/input/GestureDetector_1.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/InputAdapter.h"
#include "com/badlogic/gdx/input/GestureDetector.h"
#include "com/badlogic/gdx/Input.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Timer_Task.h"
#include "com/badlogic/gdx/input/GestureDetector_VelocityTracker.h"
#include "com/badlogic/gdx/input/GestureDetector_GestureAdapter.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/utils/Timer.h"
#include "com/badlogic/gdx/utils/TimeUtils.h"

extern "C" {


void mark_com_badlogic_gdx_input_GestureDetector(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_InputAdapter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_input_GestureDetector *) object;
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
	if (self->F_tracker)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tracker)->clazz)->markFunction)((jobject) self->F_tracker, mark, depth + 1);
	if (self->F_pointer1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointer1)->clazz)->markFunction)((jobject) self->F_pointer1, mark, depth + 1);
	if (self->F_pointer2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointer2)->clazz)->markFunction)((jobject) self->F_pointer2, mark, depth + 1);
	if (self->F_initialPointer1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initialPointer1)->clazz)->markFunction)((jobject) self->F_initialPointer1, mark, depth + 1);
	if (self->F_initialPointer2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initialPointer2)->clazz)->markFunction)((jobject) self->F_initialPointer2, mark, depth + 1);
	if (self->F_longPressTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_longPressTask)->clazz)->markFunction)((jobject) self->F_longPressTask, mark, depth + 1);
}

void clinit_com_badlogic_gdx_input_GestureDetector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_InputAdapter(ctx);
}

void init_com_badlogic_gdx_input_GestureDetector_com_badlogic_gdx_input_GestureDetector$GestureListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_input_GestureDetector(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	init_com_badlogic_gdx_input_GestureDetector_float_float_float_float_com_badlogic_gdx_input_GestureDetector$GestureListener(ctx, (frame[0].o), (jfloat(20.0f)), (jfloat(0.4f)), (jfloat(1.1f)), (jfloat(2.147484e+09f)), (frame[1].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_input_GestureDetector_float_float_float_float_com_badlogic_gdx_input_GestureDetector$GestureListener(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_input_GestureDetector(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(77);
	init_com_badlogic_gdx_input_GestureDetector_float_float_float_float_float_com_badlogic_gdx_input_GestureDetector$GestureListener(ctx, (frame[0].o), (frame[1].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_input_GestureDetector_float_float_float_float_float_com_badlogic_gdx_input_GestureDetector$GestureListener(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_input_GestureDetector(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(90);
	init_com_badlogic_gdx_InputAdapter(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_input_GestureDetector$VelocityTracker(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_input_GestureDetector$VelocityTracker);
	init_com_badlogic_gdx_input_GestureDetector$VelocityTracker(ctx, sp[1].o);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_tracker = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_pointer1 = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_pointer2 = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_initialPointer1 = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_initialPointer2 = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_input_GestureDetector$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_input_GestureDetector$1);
	init_com_badlogic_gdx_input_GestureDetector$1_com_badlogic_gdx_input_GestureDetector(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_longPressTask = (jref) sp[1].o;
	LINE_NUMBER(91);
	if ((frame[6].o) != nullptr) goto label_8;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(92);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleWidth = (frame[1].f);
	LINE_NUMBER(93);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleHeight = (frame[2].f);
	LINE_NUMBER(94);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapCountInterval = (jlong(((frame[3].f) * (jfloat(1.000000e+09f)))));
	LINE_NUMBER(95);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressSeconds = (frame[4].f);
	LINE_NUMBER(96);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_maxFlingDelay = (jlong(((frame[5].f) * (jfloat(1.000000e+09f)))));
	LINE_NUMBER(97);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[6].o);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector_touchDown_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:touchDown", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_com_badlogic_gdx_input_GestureDetector_touchDown_float_float_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_touchDown_float_float_int_int_R_boolean])(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector_touchDown_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:touchDown", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(106);
	if ((frame[3].i) <= (jint(1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(108);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jlong temp0 = (jlong)((func_com_badlogic_gdx_Input_getCurrentEventTime_R_long) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getCurrentEventTime_R_long, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_touchDownTime = temp0;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	((func_com_badlogic_gdx_input_GestureDetector$VelocityTracker_start_float_float_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector$VelocityTracker_start_float_float_long])(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((jlong)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_touchDownTime));
	LINE_NUMBER(112);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp1 = (jint)((func_com_badlogic_gdx_Input_isTouched_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isTouched_int_R_boolean, sp[0].o))(ctx, sp[0].o, (jint(1)));
	if (temp1 == 0) goto label_7;
	}
	{
	LINE_NUMBER(114);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	LINE_NUMBER(115);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching = (jint(1));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	goto label_13;
	}
label_7:;
	{
	LINE_NUMBER(121);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(1));
	LINE_NUMBER(122);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching = (jint(0));
	LINE_NUMBER(123);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressFired = (jint(0));
	LINE_NUMBER(124);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterX = (frame[1].f);
	LINE_NUMBER(125);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterY = (frame[2].f);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Timer$Task_isScheduled_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_isScheduled_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressSeconds));
	goto label_13;
	}
label_2:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(131);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	LINE_NUMBER(132);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching = (jint(1));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	}
label_13:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	jint temp0 = (jint)((func_com_badlogic_gdx_input_GestureDetector$GestureListener_touchDown_float_float_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_input_GestureDetector$GestureListener, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_touchDown_float_float_int_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:touchDragged", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_com_badlogic_gdx_input_GestureDetector_touchDragged_float_float_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_touchDragged_float_float_int_R_boolean])(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector_touchDragged_float_float_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:touchDragged", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(146);
	if ((frame[3].i) <= (jint(1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(147);
	if (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressFired) == 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(149);
	if ((frame[3].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	}
label_5:;
	{
	LINE_NUMBER(155);
	if (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching) == 0) goto label_6;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[2].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	sp[3].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[4].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	jint temp0 = (jint)((func_com_badlogic_gdx_input_GestureDetector$GestureListener_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_input_GestureDetector$GestureListener, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[4].i = temp0;
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[2].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[2].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float])(ctx, sp[1].o, sp[2].o);
	jint temp3 = (jint)((func_com_badlogic_gdx_input_GestureDetector$GestureListener_zoom_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_input_GestureDetector$GestureListener, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_zoom_float_float_R_boolean, sp[0].o))(ctx, sp[0].o, temp1, temp2);
	if (temp3 != 0) goto label_9;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_10;
label_9:;
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jlong temp2 = (jlong)((func_com_badlogic_gdx_Input_getCurrentEventTime_R_long) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getCurrentEventTime_R_long, sp[1].o))(ctx, sp[1].o);
	((func_com_badlogic_gdx_input_GestureDetector$VelocityTracker_update_float_float_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector$VelocityTracker_update_float_float_long])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(164);
	if (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle) == 0) goto label_13;
	}
	{
	jint temp0 = (jint)M_com_badlogic_gdx_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean(ctx, (frame[0].o), (frame[1].f), (frame[2].f), ((jfloat)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterX), ((jfloat)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterY));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(166);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(170);
	if (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle) != 0) goto label_16;
	}
	{
	LINE_NUMBER(171);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning = (jint(1));
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[1].o))->F_deltaX;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	jint temp3 = (jint)((func_com_badlogic_gdx_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_input_GestureDetector$GestureListener, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((com_badlogic_gdx_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[1].o))->F_deltaY));
	popStackFrame(ctx);
	return temp3;
	}
label_16:;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector_touchUp_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:touchUp", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_com_badlogic_gdx_input_GestureDetector_touchUp_float_float_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_touchUp_float_float_int_int_R_boolean])(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector_touchUp_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:touchUp", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(184);
	if ((frame[3].i) <= (jint(1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(187);
	if (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)M_com_badlogic_gdx_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean(ctx, (frame[0].o), (frame[1].f), (frame[2].f), ((jfloat)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterX), ((jfloat)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleCenterY));
	if (temp0 != 0) goto label_2;
	}
	{
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(189);
	frame[5].i = ((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning);
	LINE_NUMBER(190);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning = (jint(0));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(193);
	if (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressFired) == 0) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(195);
	if (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle) == 0) goto label_7;
	}
	{
	LINE_NUMBER(197);
	if (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapButton) != (frame[4].i)) goto label_9;
	}
	{
	if (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapPointer) != (frame[3].i)) goto label_9;
	}
	{
	jlong temp0 = (jlong)SM_com_badlogic_gdx_utils_TimeUtils_nanoTime_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapTime)), ((jlong)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapCountInterval))) > 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapX;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapY;
	LINE_NUMBER(198);
	jint temp4 = (jint)M_com_badlogic_gdx_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	if (temp4 != 0) goto label_11;
	}
label_9:;
	{
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapCount = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_tapCount = (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_tapCount) + (jint(1)));
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_com_badlogic_gdx_utils_TimeUtils_nanoTime_R_long(ctx);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_lastTapTime = temp0;
	LINE_NUMBER(201);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapX = (frame[1].f);
	LINE_NUMBER(202);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapY = (frame[2].f);
	LINE_NUMBER(203);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapButton = (frame[4].i);
	LINE_NUMBER(204);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_lastTapPointer = (frame[3].i);
	LINE_NUMBER(205);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_touchDownTime = (jlong(0));
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	jint temp1 = (jint)((func_com_badlogic_gdx_input_GestureDetector$GestureListener_tap_float_float_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_input_GestureDetector$GestureListener, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_tap_float_float_int_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapCount), (frame[4].i));
	popStackFrame(ctx);
	return temp1;
	}
label_7:;
	{
	LINE_NUMBER(209);
	if (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching) == 0) goto label_19;
	}
	{
	LINE_NUMBER(211);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pinching = (jint(0));
	LINE_NUMBER(212);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_com_badlogic_gdx_input_GestureDetector$GestureListener_pinchStop) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_input_GestureDetector$GestureListener, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_pinchStop, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(213);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning = (jint(1));
	LINE_NUMBER(215);
	if ((frame[3].i) != 0) goto label_24;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer2;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jlong temp2 = (jlong)((func_com_badlogic_gdx_Input_getCurrentEventTime_R_long) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getCurrentEventTime_R_long, sp[1].o))(ctx, sp[1].o);
	((func_com_badlogic_gdx_input_GestureDetector$VelocityTracker_start_float_float_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector$VelocityTracker_start_float_float_long])(ctx, sp[0].o, temp0, temp1, temp2);
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_pointer1;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jlong temp2 = (jlong)((func_com_badlogic_gdx_Input_getCurrentEventTime_R_long) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getCurrentEventTime_R_long, sp[1].o))(ctx, sp[1].o);
	((func_com_badlogic_gdx_input_GestureDetector$VelocityTracker_start_float_float_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector$VelocityTracker_start_float_float_long])(ctx, sp[0].o, temp0, temp1, temp2);
	}
label_26:;
	{
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(226);
	frame[6].i = (jint(0));
	LINE_NUMBER(227);
	if ((frame[5].i) == 0) goto label_28;
	}
	{
	if (((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning) != 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	jint temp0 = (jint)((func_com_badlogic_gdx_input_GestureDetector$GestureListener_panStop_float_float_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_input_GestureDetector$GestureListener, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_panStop_float_float_int_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].i), (frame[4].i));
	frame[6].i = temp0;
	}
label_28:;
	{
	LINE_NUMBER(230);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jlong temp0 = (jlong)((func_com_badlogic_gdx_Input_getCurrentEventTime_R_long) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getCurrentEventTime_R_long, sp[0].o))(ctx, sp[0].o);
	frame[7].l = temp0;
	LINE_NUMBER(231);
	if ((longCompare(((frame[7].l) - ((jlong)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_touchDownTime)), ((jlong)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_maxFlingDelay))) > 0) goto label_30;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	((func_com_badlogic_gdx_input_GestureDetector$VelocityTracker_update_float_float_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector$VelocityTracker_update_float_float_long])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[7].l));
	LINE_NUMBER(233);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_listener;
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_input_GestureDetector$VelocityTracker_getVelocityX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector$VelocityTracker_getVelocityX_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_input_GestureDetector$VelocityTracker_getVelocityY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector$VelocityTracker_getVelocityY_R_float])(ctx, sp[1].o);
	jint temp2 = (jint)((func_com_badlogic_gdx_input_GestureDetector$GestureListener_fling_float_float_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_input_GestureDetector$GestureListener, INDEX_com_badlogic_gdx_input_GestureDetector$GestureListener_fling_float_float_int_R_boolean, sp[0].o))(ctx, sp[0].o, temp0, temp1, (frame[4].i));
	if (temp2 != 0) goto label_33;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_34;
label_33:;
	INST_ICONST(1);
	goto label_35;
label_34:;
	INST_ICONST(0);
label_35:;
	INST_ISTORE(6);
label_30:;
	{
	LINE_NUMBER(235);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_touchDownTime = (jlong(0));
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector_touchCancelled_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:touchCancelled", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(241);
	((func_com_badlogic_gdx_input_GestureDetector_cancel) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_cancel])(ctx, (frame[0].o));
	LINE_NUMBER(242);
	jint temp0 = (jint)M_com_badlogic_gdx_InputAdapter_touchCancelled_int_int_int_int_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_input_GestureDetector_cancel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:cancel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(248);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressFired = (jint(1));
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector_isLongPressed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:isLongPressed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_com_badlogic_gdx_input_GestureDetector_isLongPressed_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_isLongPressed_float_R_boolean])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressSeconds));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector_isLongPressed_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:isLongPressed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(259);
	if ((longCompare(((jlong)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_touchDownTime), (jlong(0)))) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(260);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_utils_TimeUtils_nanoTime_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_touchDownTime)), (jlong(((frame[1].f) * (jfloat(1.000000e+09f))))))) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector_isPanning_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:isPanning", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_input_GestureDetector_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(269);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_touchDownTime = (jlong(0));
	LINE_NUMBER(270);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_panning = (jint(0));
	LINE_NUMBER(271);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	LINE_NUMBER(272);
	sp[0].o = (jobject)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tracker;
	((com_badlogic_gdx_input_GestureDetector$VelocityTracker *) NULL_CHECK(sp[0].o))->F_lastTime = (jlong(0));
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:isWithinTapRectangle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(276);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - (frame[3].f)));
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleWidth), 1)) >= 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - (frame[4].f)));
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleHeight), 1)) >= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_input_GestureDetector_invalidateTapSquare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:invalidateTapSquare", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_inTapRectangle = (jint(0));
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_input_GestureDetector_setTapSquareSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:setTapSquareSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(285);
	((func_com_badlogic_gdx_input_GestureDetector_setTapRectangleSize_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_setTapRectangleSize_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[1].f));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_input_GestureDetector_setTapRectangleSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:setTapRectangleSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(289);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleWidth = (frame[1].f);
	LINE_NUMBER(290);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapRectangleHeight = (frame[2].f);
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_input_GestureDetector_setTapCountInterval_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:setTapCountInterval", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(296);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_tapCountInterval = (jlong(((frame[1].f) * (jfloat(1.000000e+09f)))));
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_input_GestureDetector_setLongPressSeconds_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:setLongPressSeconds", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(300);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_longPressSeconds = (frame[1].f);
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_input_GestureDetector_setMaxFlingDelay_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/GestureDetector:setMaxFlingDelay", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(304);
	((com_badlogic_gdx_input_GestureDetector *) NULL_CHECK((frame[0].o)))->F_maxFlingDelay = (frame[1].l);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_input_GestureDetector[] {
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
	(void *) M_com_badlogic_gdx_InputAdapter_keyDown_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_keyUp_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_keyTyped_char_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_touchDown_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_touchUp_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_touchCancelled_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_touchDragged_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_mouseMoved_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_scrolled_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_touchDown_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_touchDragged_float_float_int_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_touchUp_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_cancel,
	(void *) M_com_badlogic_gdx_input_GestureDetector_isLongPressed_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_isLongPressed_float_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_isPanning_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_reset,
	(void *) M_com_badlogic_gdx_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector_invalidateTapSquare,
	(void *) M_com_badlogic_gdx_input_GestureDetector_setTapSquareSize_float,
	(void *) M_com_badlogic_gdx_input_GestureDetector_setTapRectangleSize_float_float,
	(void *) M_com_badlogic_gdx_input_GestureDetector_setTapCountInterval_float,
	(void *) M_com_badlogic_gdx_input_GestureDetector_setLongPressSeconds_float,
	(void *) M_com_badlogic_gdx_input_GestureDetector_setMaxFlingDelay_long,
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
	{ "touchDown", "(FFII)Z" },
	{ "touchDragged", "(FFI)Z" },
	{ "touchUp", "(FFII)Z" },
	{ "cancel", "()V" },
	{ "isLongPressed", "()Z" },
	{ "isLongPressed", "(F)Z" },
	{ "isPanning", "()Z" },
	{ "reset", "()V" },
	{ "isWithinTapRectangle", "(FFFF)Z" },
	{ "invalidateTapSquare", "()V" },
	{ "setTapSquareSize", "(F)V" },
	{ "setTapRectangleSize", "(FF)V" },
	{ "setTapCountInterval", "(F)V" },
	{ "setLongPressSeconds", "(F)V" },
	{ "setMaxFlingDelay", "(J)V" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_input_GestureDetector$GestureListener,
	&class_com_badlogic_gdx_input_GestureDetector$VelocityTracker,
	&class_com_badlogic_gdx_input_GestureDetector$GestureAdapter,
};

static FieldMetadata fields[] {
	{ "listener", &class_com_badlogic_gdx_input_GestureDetector$GestureListener, offsetof(com_badlogic_gdx_input_GestureDetector, F_listener), "Lcom/badlogic/gdx/input/GestureDetector$GestureListener;", 16 },
	{ "tapRectangleWidth", &class_float, offsetof(com_badlogic_gdx_input_GestureDetector, F_tapRectangleWidth), "F", 2 },
	{ "tapRectangleHeight", &class_float, offsetof(com_badlogic_gdx_input_GestureDetector, F_tapRectangleHeight), "F", 2 },
	{ "tapCountInterval", &class_long, offsetof(com_badlogic_gdx_input_GestureDetector, F_tapCountInterval), "J", 2 },
	{ "longPressSeconds", &class_float, offsetof(com_badlogic_gdx_input_GestureDetector, F_longPressSeconds), "F", 2 },
	{ "maxFlingDelay", &class_long, offsetof(com_badlogic_gdx_input_GestureDetector, F_maxFlingDelay), "J", 2 },
	{ "inTapRectangle", &class_boolean, offsetof(com_badlogic_gdx_input_GestureDetector, F_inTapRectangle), "Z", 2 },
	{ "tapCount", &class_int, offsetof(com_badlogic_gdx_input_GestureDetector, F_tapCount), "I", 2 },
	{ "lastTapTime", &class_long, offsetof(com_badlogic_gdx_input_GestureDetector, F_lastTapTime), "J", 2 },
	{ "lastTapX", &class_float, offsetof(com_badlogic_gdx_input_GestureDetector, F_lastTapX), "F", 2 },
	{ "lastTapY", &class_float, offsetof(com_badlogic_gdx_input_GestureDetector, F_lastTapY), "F", 2 },
	{ "lastTapButton", &class_int, offsetof(com_badlogic_gdx_input_GestureDetector, F_lastTapButton), "I", 2 },
	{ "lastTapPointer", &class_int, offsetof(com_badlogic_gdx_input_GestureDetector, F_lastTapPointer), "I", 2 },
	{ "longPressFired", &class_boolean, offsetof(com_badlogic_gdx_input_GestureDetector, F_longPressFired), "Z", 0 },
	{ "pinching", &class_boolean, offsetof(com_badlogic_gdx_input_GestureDetector, F_pinching), "Z", 2 },
	{ "panning", &class_boolean, offsetof(com_badlogic_gdx_input_GestureDetector, F_panning), "Z", 2 },
	{ "tracker", &class_com_badlogic_gdx_input_GestureDetector$VelocityTracker, offsetof(com_badlogic_gdx_input_GestureDetector, F_tracker), "Lcom/badlogic/gdx/input/GestureDetector$VelocityTracker;", 18 },
	{ "tapRectangleCenterX", &class_float, offsetof(com_badlogic_gdx_input_GestureDetector, F_tapRectangleCenterX), "F", 2 },
	{ "tapRectangleCenterY", &class_float, offsetof(com_badlogic_gdx_input_GestureDetector, F_tapRectangleCenterY), "F", 2 },
	{ "touchDownTime", &class_long, offsetof(com_badlogic_gdx_input_GestureDetector, F_touchDownTime), "J", 2 },
	{ "pointer1", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_input_GestureDetector, F_pointer1), "Lcom/badlogic/gdx/math/Vector2;", 0 },
	{ "pointer2", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_input_GestureDetector, F_pointer2), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "initialPointer1", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_input_GestureDetector, F_initialPointer1), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "initialPointer2", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_input_GestureDetector, F_initialPointer2), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "longPressTask", &class_com_badlogic_gdx_utils_Timer$Task, offsetof(com_badlogic_gdx_input_GestureDetector, F_longPressTask), "Lcom/badlogic/gdx/utils/Timer$Task;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_input_GestureDetector_com_badlogic_gdx_input_GestureDetector$GestureListener, 0, "(Lcom/badlogic/gdx/input/GestureDetector$GestureListener;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_input_GestureDetector_float_float_float_float_com_badlogic_gdx_input_GestureDetector$GestureListener, 0, "(FFFFLcom/badlogic/gdx/input/GestureDetector$GestureListener;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_input_GestureDetector_float_float_float_float_float_com_badlogic_gdx_input_GestureDetector$GestureListener, 0, "(FFFFFLcom/badlogic/gdx/input/GestureDetector$GestureListener;)V", 1 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_touchDown_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector_touchDown_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_touchDown_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector_touchDown_float_float_int_int_R_boolean, "(FFII)Z", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_touchDragged_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector_touchDragged_int_int_int_R_boolean, "(III)Z", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_touchDragged_float_float_int_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector_touchDragged_float_float_int_R_boolean, "(FFI)Z", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_touchUp_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector_touchUp_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_touchUp_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector_touchUp_float_float_int_int_R_boolean, "(FFII)Z", 1 },
	{ "touchCancelled", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_touchCancelled_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector_touchCancelled_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "cancel", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_cancel, VTABLE_com_badlogic_gdx_input_GestureDetector_cancel, "()V", 1 },
	{ "isLongPressed", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_isLongPressed_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector_isLongPressed_R_boolean, "()Z", 1 },
	{ "isLongPressed", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_isLongPressed_float_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector_isLongPressed_float_R_boolean, "(F)Z", 1 },
	{ "isPanning", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_isPanning_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector_isPanning_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_reset, VTABLE_com_badlogic_gdx_input_GestureDetector_reset, "()V", 1 },
	{ "isWithinTapRectangle", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean, "(FFFF)Z", 2 },
	{ "invalidateTapSquare", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_invalidateTapSquare, VTABLE_com_badlogic_gdx_input_GestureDetector_invalidateTapSquare, "()V", 1 },
	{ "setTapSquareSize", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_setTapSquareSize_float, VTABLE_com_badlogic_gdx_input_GestureDetector_setTapSquareSize_float, "(F)V", 1 },
	{ "setTapRectangleSize", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_setTapRectangleSize_float_float, VTABLE_com_badlogic_gdx_input_GestureDetector_setTapRectangleSize_float_float, "(FF)V", 1 },
	{ "setTapCountInterval", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_setTapCountInterval_float, VTABLE_com_badlogic_gdx_input_GestureDetector_setTapCountInterval_float, "(F)V", 1 },
	{ "setLongPressSeconds", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_setLongPressSeconds_float, VTABLE_com_badlogic_gdx_input_GestureDetector_setLongPressSeconds_float, "(F)V", 1 },
	{ "setMaxFlingDelay", (intptr_t) M_com_badlogic_gdx_input_GestureDetector_setMaxFlingDelay_long, VTABLE_com_badlogic_gdx_input_GestureDetector_setMaxFlingDelay_long, "(J)V", 1 },
};

Class class_com_badlogic_gdx_input_GestureDetector{
		.nativeName = (intptr_t) "com/badlogic/gdx/input/GestureDetector",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_InputAdapter,
		.size = sizeof(com_badlogic_gdx_input_GestureDetector),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_input_GestureDetector,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_input_GestureDetector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_input_GestureDetector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 25,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_input_GestureDetector = registerClass(&class_com_badlogic_gdx_input_GestureDetector);

}

