#include "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment = (12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:begin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getX_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getX_int_R_float])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment));
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK(sp[0].o))->F_startX = temp0;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getY_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getY_int_R_float])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment));
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK(sp[0].o))->F_startY = temp1;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(35);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(36);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startX);
	LINE_NUMBER(37);
	frame[3].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startY);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(38);
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(39);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endX);
	LINE_NUMBER(40);
	frame[3].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endY);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(42);
	frame[2].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startX) + ((((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endX) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startX)) * (frame[1].f)));
	LINE_NUMBER(43);
	frame[3].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startY) + ((((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endY) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startY)) * (frame[1].f)));
	}
label_5:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float_int])(ctx, sp[0].o, (frame[2].f), (frame[3].f), ((jint)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_reset(ctx, (frame[0].o));
	LINE_NUMBER(50);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment = (12);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setStartPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:setStartPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(54);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startX = (frame[1].f);
	LINE_NUMBER(55);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startY = (frame[2].f);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:setPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(59);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endX = (frame[1].f);
	LINE_NUMBER(60);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endY = (frame[2].f);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setPosition_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:setPosition", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(64);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endX = (frame[1].f);
	LINE_NUMBER(65);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endY = (frame[2].f);
	LINE_NUMBER(66);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment = (frame[3].i);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endX);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:setX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(74);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endX = (frame[1].f);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:setY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(82);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endY = (frame[1].f);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getStartX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:getStartX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startX);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getStartY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:getStartY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startY);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getAlignment_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:getAlignment", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setAlignment_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction:setAlignment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(100);
	((com_badlogic_gdx_scenes_scene2d_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment = (frame[1].i);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_act_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_restart,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getPool_R_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setPool_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_finish,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_begin,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_update_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getTime_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setTime_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getDuration_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setDuration_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getInterpolation_R_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setInterpolation_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setReverse_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setStartPosition_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setPosition_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setPosition_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getStartX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getStartY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getAlignment_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setAlignment_int,
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
	{ "setStartPosition", "(FF)V" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "getX", "()F" },
	{ "setX", "(F)V" },
	{ "getY", "()F" },
	{ "setY", "(F)V" },
	{ "getStartX", "()F" },
	{ "getStartY", "()F" },
	{ "getAlignment", "()I" },
	{ "setAlignment", "(I)V" },
};

static FieldMetadata fields[] {
	{ "startX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_MoveToAction, F_startX), "F", 2 },
	{ "startY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_MoveToAction, F_startY), "F", 2 },
	{ "endX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_MoveToAction, F_endX), "F", 2 },
	{ "endY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_MoveToAction, F_endY), "F", 2 },
	{ "alignment", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_actions_MoveToAction, F_alignment), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction, 0, "()V", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_begin, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_begin, "()V", 4 },
	{ "update", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_update_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_update_float, "(F)V", 4 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_reset, "()V", 1 },
	{ "setStartPosition", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setStartPosition_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setStartPosition_float_float, "(FF)V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setPosition_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setPosition_float_float, "(FF)V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setPosition_float_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setPosition_float_float_int, "(FFI)V", 1 },
	{ "getX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getX_R_float, "()F", 1 },
	{ "setX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setX_float, "(F)V", 1 },
	{ "getY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getY_R_float, "()F", 1 },
	{ "setY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setY_float, "(F)V", 1 },
	{ "getStartX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getStartX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getStartX_R_float, "()F", 1 },
	{ "getStartY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getStartY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getStartY_R_float, "()F", 1 },
	{ "getAlignment", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getAlignment_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_getAlignment_R_int, "()I", 1 },
	{ "setAlignment", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setAlignment_int, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction_setAlignment_int, "(I)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/MoveToAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_MoveToAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_MoveToAction);

}

