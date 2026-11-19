#include "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/FinishableAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_Action(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) object;
	if (self->F_interpolation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interpolation)->clazz)->markFunction)((jobject) self->F_interpolation, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_Action(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(34);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_float_com_badlogic_gdx_math_Interpolation(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(38);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	LINE_NUMBER(39);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(40);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation = (jref) (frame[2].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:act", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(44);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_complete) == 0) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getPool_R_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getPool_R_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(46);
	((func_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(48);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_began) != 0) goto label_9;
	}
	{
	LINE_NUMBER(49);
	((func_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_begin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_begin])(ctx, (frame[0].o));
	LINE_NUMBER(50);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_began = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK(sp[0].o))->F_time) + (frame[1].f));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration), -1)) < 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK(sp[0].o))->F_complete = sp[1].i;
	LINE_NUMBER(54);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_complete) == 0) goto label_16;
	}
	INST_FCONST(1);
	goto label_17;
label_16:;
	{
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration);
	sp[0].f = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(55);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Interpolation_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_R_float])(ctx, sp[0].o, (frame[3].f));
	frame[3].f = temp0;
	}
label_19:;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_reverse) == 0) goto label_20;
	}
	{
	jfloat temp0 = (jfloat(1)) - (frame[3].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_21;
	}
label_20:;
	INST_FLOAD(3);
label_21:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_update_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_update_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(57);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_complete) == 0) goto label_23;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end])(ctx, sp[0].o);
label_23:;
	{
	LINE_NUMBER(58);
	frame[4].i = ((jint)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_complete);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(60);
	((func_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(60);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(61);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:begin", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:end", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:finish", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration);
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:restart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(85);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_began = (jint(0));
	LINE_NUMBER(86);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_complete = (jint(0));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	M_com_badlogic_gdx_scenes_scene2d_Action_reset(ctx, (frame[0].o));
	LINE_NUMBER(91);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_reverse = (jint(0));
	LINE_NUMBER(92);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation = (jref) (jobject(nullptr));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:getTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:setTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(102);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].f);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getDuration_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:getDuration", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setDuration_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:setDuration", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(111);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getInterpolation_R_com_badlogic_gdx_math_Interpolation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:getInterpolation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setInterpolation_com_badlogic_gdx_math_Interpolation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:setInterpolation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation = (jref) (frame[1].o);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isReverse_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:isReverse", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_reverse);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setReverse_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:setReverse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(128);
	((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_reverse = (frame[1].i);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isComplete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction:isComplete", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_complete);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_act_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_restart,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getPool_R_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setPool_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_finish,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_begin,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getTime_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setTime_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getDuration_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setDuration_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getInterpolation_R_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setInterpolation_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setReverse_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isComplete_R_boolean,
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
	{ "reset", "()V" },
	{ "act", "(F)Z" },
	{ "restart", "()V" },
	{ "setActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setTarget", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getTarget", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "getPool", "()Lcom/badlogic/gdx/utils/Pool;" },
	{ "setPool", "(Lcom/badlogic/gdx/utils/Pool;)V" },
	{ "finish", "()V" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "update", "(F)V" },
	{ "getTime", "()F" },
	{ "setTime", "(F)V" },
	{ "getDuration", "()F" },
	{ "setDuration", "(F)V" },
	{ "getInterpolation", "()Lcom/badlogic/gdx/math/Interpolation;" },
	{ "setInterpolation", "(Lcom/badlogic/gdx/math/Interpolation;)V" },
	{ "isReverse", "()Z" },
	{ "setReverse", "(Z)V" },
	{ "isComplete", "()Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_actions_FinishableAction, };

static FieldMetadata fields[] {
	{ "duration", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_TemporalAction, F_duration), "F", 2 },
	{ "time", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_TemporalAction, F_time), "F", 2 },
	{ "interpolation", &class_com_badlogic_gdx_math_Interpolation, offsetof(com_badlogic_gdx_scenes_scene2d_actions_TemporalAction, F_interpolation), "Lcom/badlogic/gdx/math/Interpolation;", 2 },
	{ "reverse", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_actions_TemporalAction, F_reverse), "Z", 2 },
	{ "began", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_actions_TemporalAction, F_began), "Z", 2 },
	{ "complete", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_actions_TemporalAction, F_complete), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_float, 0, "(F)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_float_com_badlogic_gdx_math_Interpolation, 0, "(FLcom/badlogic/gdx/math/Interpolation;)V", 1 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_act_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_act_float_R_boolean, "(F)Z", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_begin, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_begin, "()V", 4 },
	{ "end", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end, "()V", 4 },
	{ "update", 0, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_update_float, "(F)V", 1028 },
	{ "finish", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_finish, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_finish, "()V", 1 },
	{ "restart", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_restart, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_restart, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_reset, "()V", 1 },
	{ "getTime", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getTime_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getTime_R_float, "()F", 1 },
	{ "setTime", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setTime_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setTime_float, "(F)V", 1 },
	{ "getDuration", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getDuration_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getDuration_R_float, "()F", 1 },
	{ "setDuration", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setDuration_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setDuration_float, "(F)V", 1 },
	{ "getInterpolation", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getInterpolation_R_com_badlogic_gdx_math_Interpolation, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getInterpolation_R_com_badlogic_gdx_math_Interpolation, "()Lcom/badlogic/gdx/math/Interpolation;", 1 },
	{ "setInterpolation", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setInterpolation_com_badlogic_gdx_math_Interpolation, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setInterpolation_com_badlogic_gdx_math_Interpolation, "(Lcom/badlogic/gdx/math/Interpolation;)V", 1 },
	{ "isReverse", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isReverse_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isReverse_R_boolean, "()Z", 1 },
	{ "setReverse", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setReverse_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setReverse_boolean, "(Z)V", 1 },
	{ "isComplete", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isComplete_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isComplete_R_boolean, "()Z", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_Action,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_TemporalAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction);

}

