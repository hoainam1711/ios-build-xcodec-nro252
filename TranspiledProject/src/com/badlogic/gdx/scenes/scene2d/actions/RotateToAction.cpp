#include "com/badlogic/gdx/scenes/scene2d/actions/RotateToAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/RotateToAction.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RotateToAction:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection = (jint(0));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RotateToAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(41);
	init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection = (jint(0));
	LINE_NUMBER(42);
	((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection = (frame[1].i);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RotateToAction:begin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getRotation_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getRotation_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK(sp[0].o))->F_start = temp0;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RotateToAction:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(51);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(52);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_start);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(53);
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(54);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_end);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(55);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection) == 0) goto label_8;
	}
	{
	LINE_NUMBER(56);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_lerpAngleDeg_float_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_start), ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_end), (frame[1].f));
	frame[2].f = temp0;
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(58);
	frame[2].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_start) + ((((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_end) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_start)) * (frame[1].f)));
	}
label_4:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setRotation_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setRotation_float])(ctx, sp[0].o, (frame[2].f));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_getRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RotateToAction:getRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_end);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_setRotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RotateToAction:setRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(67);
	((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_end = (frame[1].f);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_isUseShortestDirection_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RotateToAction:isUseShortestDirection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_setUseShortestDirection_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RotateToAction:setUseShortestDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(75);
	((com_badlogic_gdx_scenes_scene2d_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection = (frame[1].i);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_begin,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_update_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getTime_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setTime_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getDuration_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setDuration_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getInterpolation_R_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setInterpolation_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setReverse_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_getRotation_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_setRotation_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_isUseShortestDirection_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_setUseShortestDirection_boolean,
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
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "isUseShortestDirection", "()Z" },
	{ "setUseShortestDirection", "(Z)V" },
};

static FieldMetadata fields[] {
	{ "start", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_RotateToAction, F_start), "F", 2 },
	{ "end", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_RotateToAction, F_end), "F", 2 },
	{ "useShortestDirection", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_actions_RotateToAction, F_useShortestDirection), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_boolean, 0, "(Z)V", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_begin, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_begin, "()V", 4 },
	{ "update", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_update_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_update_float, "(F)V", 4 },
	{ "getRotation", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_getRotation_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_getRotation_R_float, "()F", 1 },
	{ "setRotation", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_setRotation_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_setRotation_float, "(F)V", 1 },
	{ "isUseShortestDirection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_isUseShortestDirection_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_isUseShortestDirection_R_boolean, "()Z", 1 },
	{ "setUseShortestDirection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_setUseShortestDirection_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction_setUseShortestDirection_boolean, "(Z)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/RotateToAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_RotateToAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_RotateToAction);

}

