#include "com/badlogic/gdx/scenes/scene2d/actions/RemoveListenerAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/RemoveListenerAction.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction *) object;
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_Action(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RemoveListenerAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RemoveListenerAction:act", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(29);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction *) NULL_CHECK((frame[0].o)))->F_capture) == 0) goto label_1;
	}
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction *) NULL_CHECK((frame[0].o)))->F_listener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction *) NULL_CHECK((frame[0].o)))->F_listener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_getListener_R_com_badlogic_gdx_scenes_scene2d_EventListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RemoveListenerAction:getListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction *) NULL_CHECK((frame[0].o)))->F_listener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_setListener_com_badlogic_gdx_scenes_scene2d_EventListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RemoveListenerAction:setListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	((com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_getCapture_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RemoveListenerAction:getCapture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction *) NULL_CHECK((frame[0].o)))->F_capture);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_setCapture_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RemoveListenerAction:setCapture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(49);
	((com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction *) NULL_CHECK((frame[0].o)))->F_capture = (frame[1].i);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/RemoveListenerAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	M_com_badlogic_gdx_scenes_scene2d_Action_reset(ctx, (frame[0].o));
	LINE_NUMBER(54);
	((com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (jobject(nullptr));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_act_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_restart,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getPool_R_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setPool_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_getListener_R_com_badlogic_gdx_scenes_scene2d_EventListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_setListener_com_badlogic_gdx_scenes_scene2d_EventListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_getCapture_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_setCapture_boolean,
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
	{ "getListener", "()Lcom/badlogic/gdx/scenes/scene2d/EventListener;" },
	{ "setListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)V" },
	{ "getCapture", "()Z" },
	{ "setCapture", "(Z)V" },
};

static FieldMetadata fields[] {
	{ "listener", &class_com_badlogic_gdx_scenes_scene2d_EventListener, offsetof(com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction, F_listener), "Lcom/badlogic/gdx/scenes/scene2d/EventListener;", 2 },
	{ "capture", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction, F_capture), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction, 0, "()V", 1 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_act_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_act_float_R_boolean, "(F)Z", 1 },
	{ "getListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_getListener_R_com_badlogic_gdx_scenes_scene2d_EventListener, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_getListener_R_com_badlogic_gdx_scenes_scene2d_EventListener, "()Lcom/badlogic/gdx/scenes/scene2d/EventListener;", 1 },
	{ "setListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_setListener_com_badlogic_gdx_scenes_scene2d_EventListener, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_setListener_com_badlogic_gdx_scenes_scene2d_EventListener, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)V", 1 },
	{ "getCapture", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_getCapture_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_getCapture_R_boolean, "()Z", 1 },
	{ "setCapture", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_setCapture_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_setCapture_boolean, "(Z)V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction_reset, "()V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/RemoveListenerAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_Action,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction,
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
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_RemoveListenerAction);

}

