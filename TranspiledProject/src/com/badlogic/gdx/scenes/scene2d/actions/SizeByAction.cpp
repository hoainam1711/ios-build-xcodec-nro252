#include "com/badlogic/gdx/scenes/scene2d/actions/SizeByAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/SizeByAction.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/RelativeTemporalAction.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_actions_RelativeTemporalAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_SizeByAction *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_actions_RelativeTemporalAction(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeByAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_com_badlogic_gdx_scenes_scene2d_actions_RelativeTemporalAction(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_updateRelative_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeByAction:updateRelative", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((func_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float_float])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountWidth) * (frame[1].f)), (((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountHeight) * (frame[1].f)));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmount_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeByAction:setAmount", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(29);
	((com_badlogic_gdx_scenes_scene2d_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountWidth = (frame[1].f);
	LINE_NUMBER(30);
	((com_badlogic_gdx_scenes_scene2d_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountHeight = (frame[2].f);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_getAmountWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeByAction:getAmountWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmountWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeByAction:setAmountWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(38);
	((com_badlogic_gdx_scenes_scene2d_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountWidth = (frame[1].f);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_getAmountHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeByAction:getAmountHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmountHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeByAction:setAmountHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(46);
	((com_badlogic_gdx_scenes_scene2d_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountHeight = (frame[1].f);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RelativeTemporalAction_begin,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RelativeTemporalAction_update_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getTime_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setTime_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getDuration_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setDuration_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getInterpolation_R_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setInterpolation_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setReverse_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_updateRelative_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmount_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_getAmountWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmountWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_getAmountHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmountHeight_float,
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
	{ "updateRelative", "(F)V" },
	{ "setAmount", "(FF)V" },
	{ "getAmountWidth", "()F" },
	{ "setAmountWidth", "(F)V" },
	{ "getAmountHeight", "()F" },
	{ "setAmountHeight", "(F)V" },
};

static FieldMetadata fields[] {
	{ "amountWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_SizeByAction, F_amountWidth), "F", 2 },
	{ "amountHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_SizeByAction, F_amountHeight), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction, 0, "()V", 1 },
	{ "updateRelative", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_updateRelative_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_updateRelative_float, "(F)V", 4 },
	{ "setAmount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmount_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmount_float_float, "(FF)V", 1 },
	{ "getAmountWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_getAmountWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_getAmountWidth_R_float, "()F", 1 },
	{ "setAmountWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmountWidth_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmountWidth_float, "(F)V", 1 },
	{ "getAmountHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_getAmountHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_getAmountHeight_R_float, "()F", 1 },
	{ "setAmountHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmountHeight_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction_setAmountHeight_float, "(F)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/SizeByAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_actions_RelativeTemporalAction,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_SizeByAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 39,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_SizeByAction);

}

