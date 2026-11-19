#include "com/badlogic/gdx/scenes/scene2d/actions/RepeatAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/FinishableAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/RepeatAction.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"

extern "C" {

jint SF_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_FOREVER;

void mark_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_FOREVER = jint(-1);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RepeatAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_delegate_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RepeatAction:delegate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(28);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK((frame[0].o)))->F_executedCount) != ((jint)((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK((frame[0].o)))->F_repeatCount)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean])(ctx, sp[0].o, (frame[1].f));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(30);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK((frame[0].o)))->F_finished) == 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(31);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK((frame[0].o)))->F_repeatCount) <= 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK(sp[0].o))->F_executedCount = (((jint)((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK(sp[0].o))->F_executedCount) + (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(32);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK((frame[0].o)))->F_executedCount) != ((jint)((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK((frame[0].o)))->F_repeatCount)) goto label_6;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	((func_com_badlogic_gdx_scenes_scene2d_Action_restart) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_restart])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RepeatAction:finish", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK((frame[0].o)))->F_finished = (jint(1));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RepeatAction:restart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_restart(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK((frame[0].o)))->F_executedCount = (jint(0));
	LINE_NUMBER(46);
	((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK((frame[0].o)))->F_finished = (jint(0));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_setCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RepeatAction:setCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(51);
	((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK((frame[0].o)))->F_repeatCount = (frame[1].i);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_getCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RepeatAction:getCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_actions_RepeatAction *) NULL_CHECK((frame[0].o)))->F_repeatCount);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_restart,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getPool_R_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setPool_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_getAction_R_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_delegate_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_finish,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_setCount_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_getCount_R_int,
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
	{ "setCount", "(I)V" },
	{ "getCount", "()I" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_actions_FinishableAction, };

static FieldMetadata fields[] {
	{ "FOREVER", &class_int, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_FOREVER, "I", 25 },
	{ "repeatCount", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_actions_RepeatAction, F_repeatCount), "I", 2 },
	{ "executedCount", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_actions_RepeatAction, F_executedCount), "I", 2 },
	{ "finished", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_actions_RepeatAction, F_finished), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction, 0, "()V", 1 },
	{ "delegate", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_delegate_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_delegate_float_R_boolean, "(F)Z", 4 },
	{ "finish", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_finish, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_finish, "()V", 1 },
	{ "restart", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_restart, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_restart, "()V", 1 },
	{ "setCount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_setCount_int, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_setCount_int, "(I)V", 1 },
	{ "getCount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_getCount_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction_getCount_R_int, "()I", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/RepeatAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_RepeatAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_RepeatAction);

}

