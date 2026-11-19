#include "com/badlogic/gdx/scenes/scene2d/actions/DelayAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/FinishableAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/DelayAction.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_DelayAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_DelayAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_DelayAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelayAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_DelayAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(ctx, (frame[0].o));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelayAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_DelayAction(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(27);
	init_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_delegate_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelayAction:delegate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(32);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK(sp[0].o))->F_time) + (frame[1].f));
	LINE_NUMBER(34);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration), 1)) >= 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(35);
	frame[1].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration));
	}
label_1:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean])(ctx, sp[0].o, (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelayAction:finish", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelayAction:restart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_restart(ctx, (frame[0].o));
	LINE_NUMBER(48);
	((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_getTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelayAction:getTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_setTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelayAction:setTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(58);
	((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].f);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_getDuration_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelayAction:getDuration", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_setDuration_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelayAction:setDuration", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(67);
	((com_badlogic_gdx_scenes_scene2d_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_DelayAction[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_act_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_restart,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getPool_R_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setPool_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_getAction_R_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_delegate_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_finish,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_getTime_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_setTime_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_getDuration_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_setDuration_float,
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
	{ "setAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "getAction", "()Lcom/badlogic/gdx/scenes/scene2d/Action;" },
	{ "delegate", "(F)Z" },
	{ "finish", "()V" },
	{ "getTime", "()F" },
	{ "setTime", "(F)V" },
	{ "getDuration", "()F" },
	{ "setDuration", "(F)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_actions_FinishableAction, };

static FieldMetadata fields[] {
	{ "duration", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_DelayAction, F_duration), "F", 2 },
	{ "time", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_DelayAction, F_time), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_DelayAction, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_float, 0, "(F)V", 1 },
	{ "delegate", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_delegate_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_delegate_float_R_boolean, "(F)Z", 4 },
	{ "finish", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_finish, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_finish, "()V", 1 },
	{ "restart", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_restart, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_restart, "()V", 1 },
	{ "getTime", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_getTime_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_getTime_R_float, "()F", 1 },
	{ "setTime", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_setTime_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_setTime_float, "(F)V", 1 },
	{ "getDuration", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_getDuration_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_getDuration_R_float, "()F", 1 },
	{ "setDuration", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_setDuration_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelayAction_setDuration_float, "(F)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_DelayAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/DelayAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_DelayAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_DelayAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_DelayAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_DelayAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_DelayAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_DelayAction);

}

