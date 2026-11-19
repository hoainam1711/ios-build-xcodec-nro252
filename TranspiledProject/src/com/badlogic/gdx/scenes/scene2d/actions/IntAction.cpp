#include "com/badlogic/gdx/scenes/scene2d/actions/IntAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/IntAction.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_IntAction(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_IntAction *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_IntAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_IntAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_IntAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(29);
	init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_start = (jint(0));
	LINE_NUMBER(31);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_end = (jint(1));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_IntAction_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_IntAction(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(35);
	init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_start = (frame[1].i);
	LINE_NUMBER(37);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_end = (frame[2].i);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_IntAction_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_IntAction(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(42);
	init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_float(ctx, (frame[0].o), (frame[3].f));
	LINE_NUMBER(43);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_start = (frame[1].i);
	LINE_NUMBER(44);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_end = (frame[2].i);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_IntAction_int_int_float_com_badlogic_gdx_math_Interpolation(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_IntAction(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(49);
	init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_float_com_badlogic_gdx_math_Interpolation(ctx, (frame[0].o), (frame[3].f), (frame[4].o));
	LINE_NUMBER(50);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_start = (frame[1].i);
	LINE_NUMBER(51);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_end = (frame[2].i);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:begin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_value = ((jint)((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_start);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(59);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(60);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_value = ((jint)((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_start);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(61);
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(62);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_value = ((jint)((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_end);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(64);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_value = (jint(((jfloat(((jint)((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_start))) + ((jfloat((((jint)((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_end) - ((jint)((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_start)))) * (frame[1].f)))));
	}
label_3:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setValue_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:setValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getStart_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:getStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_start);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setStart_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:setStart", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(83);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_start = (frame[1].i);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getEnd_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:getEnd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_end);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setEnd_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/IntAction:setEnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(92);
	((com_badlogic_gdx_scenes_scene2d_actions_IntAction *) NULL_CHECK((frame[0].o)))->F_end = (frame[1].i);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_IntAction[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_begin,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_update_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getTime_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setTime_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getDuration_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setDuration_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getInterpolation_R_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setInterpolation_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setReverse_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getValue_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setValue_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getStart_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setStart_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getEnd_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setEnd_int,
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
	{ "getValue", "()I" },
	{ "setValue", "(I)V" },
	{ "getStart", "()I" },
	{ "setStart", "(I)V" },
	{ "getEnd", "()I" },
	{ "setEnd", "(I)V" },
};

static FieldMetadata fields[] {
	{ "start", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_actions_IntAction, F_start), "I", 2 },
	{ "end", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_actions_IntAction, F_end), "I", 2 },
	{ "value", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_actions_IntAction, F_value), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_IntAction, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_IntAction_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_IntAction_int_int_float, 0, "(IIF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_IntAction_int_int_float_com_badlogic_gdx_math_Interpolation, 0, "(IIFLcom/badlogic/gdx/math/Interpolation;)V", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_begin, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_IntAction_begin, "()V", 4 },
	{ "update", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_update_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_IntAction_update_float, "(F)V", 4 },
	{ "getValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getValue_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getValue_R_int, "()I", 1 },
	{ "setValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setValue_int, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setValue_int, "(I)V", 1 },
	{ "getStart", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getStart_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getStart_R_int, "()I", 1 },
	{ "setStart", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setStart_int, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setStart_int, "(I)V", 1 },
	{ "getEnd", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getEnd_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_IntAction_getEnd_R_int, "()I", 1 },
	{ "setEnd", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setEnd_int, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_IntAction_setEnd_int, "(I)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_IntAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/IntAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_IntAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_IntAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_IntAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_IntAction,
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
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 39,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_IntAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_IntAction);

}

