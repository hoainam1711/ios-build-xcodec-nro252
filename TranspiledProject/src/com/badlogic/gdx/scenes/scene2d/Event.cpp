#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/utils/Pool_Poolable.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_Event(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_Event *) object;
	if (self->F_stage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stage)->clazz)->markFunction)((jobject) self->F_stage, mark, depth + 1);
	if (self->F_targetActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetActor)->clazz)->markFunction)((jobject) self->F_targetActor, mark, depth + 1);
	if (self->F_listenerActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listenerActor)->clazz)->markFunction)((jobject) self->F_listenerActor, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_Event(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_Event(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_Event(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_bubbles = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Event_handle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:handle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_handled = (jint(1));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Event_cancel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:cancel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_cancelled = (jint(1));
	LINE_NUMBER(58);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_stopped = (jint(1));
	LINE_NUMBER(59);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_handled = (jint(1));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Event_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_stopped = (jint(1));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Event_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_stage = (jref) (jobject(nullptr));
	LINE_NUMBER(70);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_targetActor = (jref) (jobject(nullptr));
	LINE_NUMBER(71);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_listenerActor = (jref) (jobject(nullptr));
	LINE_NUMBER(72);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_capture = (jint(0));
	LINE_NUMBER(73);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_bubbles = (jint(1));
	LINE_NUMBER(74);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_handled = (jint(0));
	LINE_NUMBER(75);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_stopped = (jint(0));
	LINE_NUMBER(76);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_cancelled = (jint(0));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:getTarget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_targetActor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Event_setTarget_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:setTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_targetActor = (jref) (frame[1].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Event_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:getListenerActor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_listenerActor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Event_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:setListenerActor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_listenerActor = (jref) (frame[1].o);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Event_getBubbles_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:getBubbles", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_bubbles);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Event_setBubbles_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:setBubbles", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(104);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_bubbles = (frame[1].i);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Event_isHandled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:isHandled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_handled);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:isStopped", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_stopped);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:isCancelled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_cancelled);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Event_setCapture_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:setCapture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(123);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_capture = (frame[1].i);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Event_isCapture_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:isCapture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_capture);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Event_setStage_com_badlogic_gdx_scenes_scene2d_Stage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:setStage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_stage = (jref) (frame[1].o);
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Event_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Event:getStage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Event *) NULL_CHECK((frame[0].o)))->F_stage;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_Event[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_handle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_cancel,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_stop,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getBubbles_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setBubbles_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isHandled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setCapture_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isCapture_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage,
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
	{ "handle", "()V" },
	{ "cancel", "()V" },
	{ "stop", "()V" },
	{ "getTarget", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setTarget", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getListenerActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setListenerActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getBubbles", "()Z" },
	{ "setBubbles", "(Z)V" },
	{ "isHandled", "()Z" },
	{ "isStopped", "()Z" },
	{ "isCancelled", "()Z" },
	{ "setCapture", "(Z)V" },
	{ "isCapture", "()Z" },
	{ "setStage", "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V" },
	{ "getStage", "()Lcom/badlogic/gdx/scenes/scene2d/Stage;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "stage", &class_com_badlogic_gdx_scenes_scene2d_Stage, offsetof(com_badlogic_gdx_scenes_scene2d_Event, F_stage), "Lcom/badlogic/gdx/scenes/scene2d/Stage;", 2 },
	{ "targetActor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_Event, F_targetActor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "listenerActor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_Event, F_listenerActor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "capture", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Event, F_capture), "Z", 2 },
	{ "bubbles", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Event, F_bubbles), "Z", 2 },
	{ "handled", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Event, F_handled), "Z", 2 },
	{ "stopped", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Event, F_stopped), "Z", 2 },
	{ "cancelled", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Event, F_cancelled), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_Event, 0, "()V", 1 },
	{ "handle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_handle, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_handle, "()V", 1 },
	{ "cancel", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_cancel, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_cancel, "()V", 1 },
	{ "stop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_stop, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_stop, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_reset, "()V", 1 },
	{ "getTarget", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "setTarget", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_setTarget_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_setTarget_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "getListenerActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "setListenerActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "getBubbles", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_getBubbles_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_getBubbles_R_boolean, "()Z", 1 },
	{ "setBubbles", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_setBubbles_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_setBubbles_boolean, "(Z)V", 1 },
	{ "isHandled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_isHandled_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isHandled_R_boolean, "()Z", 1 },
	{ "isStopped", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean, "()Z", 1 },
	{ "isCancelled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean, "()Z", 1 },
	{ "setCapture", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_setCapture_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_setCapture_boolean, "(Z)V", 1 },
	{ "isCapture", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_isCapture_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isCapture_R_boolean, "()Z", 1 },
	{ "setStage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_setStage_com_badlogic_gdx_scenes_scene2d_Stage, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_setStage_com_badlogic_gdx_scenes_scene2d_Stage, "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V", 1 },
	{ "getStage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Event_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage, VTABLE_com_badlogic_gdx_scenes_scene2d_Event_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage, "()Lcom/badlogic/gdx/scenes/scene2d/Stage;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_Event{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/Event",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_Event),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_Event,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_Event,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_Event,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_Event = registerClass(&class_com_badlogic_gdx_scenes_scene2d_Event);

}

