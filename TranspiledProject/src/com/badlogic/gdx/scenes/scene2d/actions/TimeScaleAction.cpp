#include "com/badlogic/gdx/scenes/scene2d/actions/TimeScaleAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/TimeScaleAction.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TimeScaleAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_delegate_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TimeScaleAction:delegate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean])(ctx, sp[0].o, ((frame[1].f) * ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction *) NULL_CHECK((frame[0].o)))->F_scale)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_getScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TimeScaleAction:getScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction *) NULL_CHECK((frame[0].o)))->F_scale);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_setScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/TimeScaleAction:setScale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(34);
	((com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction *) NULL_CHECK((frame[0].o)))->F_scale = (frame[1].f);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_restart,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getPool_R_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setPool_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_getAction_R_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_delegate_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_getScale_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_setScale_float,
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
	{ "getScale", "()F" },
	{ "setScale", "(F)V" },
};

static FieldMetadata fields[] {
	{ "scale", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction, F_scale), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction, 0, "()V", 1 },
	{ "delegate", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_delegate_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_delegate_float_R_boolean, "(F)Z", 4 },
	{ "getScale", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_getScale_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_getScale_R_float, "()F", 1 },
	{ "setScale", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_setScale_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction_setScale_float, "(F)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/TimeScaleAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_TimeScaleAction);

}

