#include "com/badlogic/gdx/scenes/scene2d/actions/SizeToAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/SizeToAction.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeToAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeToAction:begin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK(sp[0].o))->F_startWidth = temp0;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK(sp[0].o))->F_startHeight = temp1;
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeToAction:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(32);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(33);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_startWidth);
	LINE_NUMBER(34);
	frame[3].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_startHeight);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(35);
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(36);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_endWidth);
	LINE_NUMBER(37);
	frame[3].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_endHeight);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(39);
	frame[2].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_startWidth) + ((((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_endWidth) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_startWidth)) * (frame[1].f)));
	LINE_NUMBER(40);
	frame[3].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_startHeight) + ((((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_endHeight) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_startHeight)) * (frame[1].f)));
	}
label_5:;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeToAction:setSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(46);
	((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_endWidth = (frame[1].f);
	LINE_NUMBER(47);
	((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_endHeight = (frame[2].f);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_getWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeToAction:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_endWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeToAction:setWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(55);
	((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_endWidth = (frame[1].f);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeToAction:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_endHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SizeToAction:setHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(63);
	((com_badlogic_gdx_scenes_scene2d_actions_SizeToAction *) NULL_CHECK((frame[0].o)))->F_endHeight = (frame[1].f);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_begin,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_update_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getTime_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setTime_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getDuration_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setDuration_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getInterpolation_R_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setInterpolation_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setReverse_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setSize_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_getWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_getHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setHeight_float,
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
	{ "setSize", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
};

static FieldMetadata fields[] {
	{ "startWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_SizeToAction, F_startWidth), "F", 2 },
	{ "startHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_SizeToAction, F_startHeight), "F", 2 },
	{ "endWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_SizeToAction, F_endWidth), "F", 2 },
	{ "endHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_SizeToAction, F_endHeight), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction, 0, "()V", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_begin, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_begin, "()V", 4 },
	{ "update", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_update_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_update_float, "(F)V", 4 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setSize_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setSize_float_float, "(FF)V", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_getWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_getWidth_R_float, "()F", 1 },
	{ "setWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setWidth_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setWidth_float, "(F)V", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_getHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_getHeight_R_float, "()F", 1 },
	{ "setHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setHeight_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction_setHeight_float, "(F)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/SizeToAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_SizeToAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_SizeToAction);

}

