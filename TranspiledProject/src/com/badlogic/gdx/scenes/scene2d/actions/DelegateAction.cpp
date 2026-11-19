#include "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) object;
	if (self->F_action)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_action)->clazz)->markFunction)((jobject) self->F_action, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_Action(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setAction_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction:setAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action = (jref) (frame[1].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_getAction_R_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction:getAction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction:act", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_getPool_R_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_getPool_R_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(41);
	((func_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(43);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_delegate_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_delegate_float_R_boolean])(ctx, (frame[0].o), (frame[1].f));
	frame[3].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(45);
	((func_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(45);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(46);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction:restart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	((func_com_badlogic_gdx_scenes_scene2d_Action_restart) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_restart])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	M_com_badlogic_gdx_scenes_scene2d_Action_reset(ctx, (frame[0].o));
	LINE_NUMBER(55);
	((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action = (jref) (jobject(nullptr));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction:setActor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	((func_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(60);
	M_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction:setTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	((func_com_badlogic_gdx_scenes_scene2d_Action_setTarget_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_setTarget_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(65);
	M_com_badlogic_gdx_scenes_scene2d_Action_setTarget_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Action_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	sp += 1;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction[] {
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
	(void *) nullptr,
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
	{ "action", &class_com_badlogic_gdx_scenes_scene2d_Action, offsetof(com_badlogic_gdx_scenes_scene2d_actions_DelegateAction, F_action), "Lcom/badlogic/gdx/scenes/scene2d/Action;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction, 0, "()V", 1 },
	{ "setAction", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setAction_com_badlogic_gdx_scenes_scene2d_Action, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setAction_com_badlogic_gdx_scenes_scene2d_Action, "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "getAction", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_getAction_R_com_badlogic_gdx_scenes_scene2d_Action, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_getAction_R_com_badlogic_gdx_scenes_scene2d_Action, "()Lcom/badlogic/gdx/scenes/scene2d/Action;", 1 },
	{ "delegate", 0, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_delegate_float_R_boolean, "(F)Z", 1028 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_act_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_act_float_R_boolean, "(F)Z", 17 },
	{ "restart", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_restart, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_restart, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_reset, "()V", 1 },
	{ "setActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "setTarget", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/DelegateAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_Action,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_DelegateAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_DelegateAction);

}

