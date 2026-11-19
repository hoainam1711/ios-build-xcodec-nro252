#include "com/badlogic/gdx/scenes/scene2d/actions/AfterAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/AfterAction.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_AfterAction(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_AfterAction *) object;
	if (self->F_waitForActions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_waitForActions)->clazz)->markFunction)((jobject) self->F_waitForActions, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_AfterAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_AfterAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AfterAction:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_AfterAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_boolean_int(ctx, sp[1].o, (jint(0)), (jint(4)));
	((com_badlogic_gdx_scenes_scene2d_actions_AfterAction *) NULL_CHECK(sp[0].o))->F_waitForActions = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AfterAction:setTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(30);
	M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AfterAction:restart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_restart(ctx, (frame[0].o));
	LINE_NUMBER(35);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_delegate_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AfterAction:delegate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(40);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size) != (jint(1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	frame[3].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_3:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o));
	LINE_NUMBER(43);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, (frame[2].o), (frame[4].o), (jint(1)));
	frame[5].i = temp0;
	LINE_NUMBER(44);
	if ((frame[5].i) != (jint(-1))) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	}
label_8:;
	{
	LINE_NUMBER(41);
	INST_IINC(3, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_9;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean])(ctx, sp[0].o, (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_AfterAction[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_restart,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getPool_R_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setPool_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_getAction_R_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_delegate_float_R_boolean,
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
};

static FieldMetadata fields[] {
	{ "waitForActions", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_actions_AfterAction, F_waitForActions), "Lcom/badlogic/gdx/utils/Array;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_AfterAction, 0, "()V", 1 },
	{ "setTarget", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "restart", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_restart, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_restart, "()V", 1 },
	{ "delegate", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_delegate_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_AfterAction_delegate_float_R_boolean, "(F)Z", 4 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_AfterAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/AfterAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_AfterAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_AfterAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_AfterAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_AfterAction,
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
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_AfterAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_AfterAction);

}

