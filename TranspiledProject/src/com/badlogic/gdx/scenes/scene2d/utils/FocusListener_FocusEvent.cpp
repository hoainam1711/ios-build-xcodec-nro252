#include "com/badlogic/gdx/scenes/scene2d/utils/FocusListener_FocusEvent.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/FocusListener.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/FocusListener_FocusEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/FocusListener_FocusEvent_Type.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_Event(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_relatedActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_relatedActor)->clazz)->markFunction)((jobject) self->F_relatedActor, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_Event(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(51);
	init_com_badlogic_gdx_scenes_scene2d_Event(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	M_com_badlogic_gdx_scenes_scene2d_Event_reset(ctx, (frame[0].o));
	LINE_NUMBER(58);
	((com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent *) NULL_CHECK((frame[0].o)))->F_relatedActor = (jref) (jobject(nullptr));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isFocused_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent:isFocused", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent *) NULL_CHECK((frame[0].o)))->F_focused);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent:setFocused", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(66);
	((com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent *) NULL_CHECK((frame[0].o)))->F_focused = (frame[1].i);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_getType_R_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setType_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent:setType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	((com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent:getRelatedActor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent *) NULL_CHECK((frame[0].o)))->F_relatedActor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent:setRelatedActor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	((com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent *) NULL_CHECK((frame[0].o)))->F_relatedActor = (jref) (frame[1].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_reset,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isFocused_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_getType_R_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setType_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor,
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
	{ "isFocused", "()Z" },
	{ "setFocused", "(Z)V" },
	{ "getType", "()Lcom/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent$Type;" },
	{ "setType", "(Lcom/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent$Type;)V" },
	{ "getRelatedActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setRelatedActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type,
};

static FieldMetadata fields[] {
	{ "focused", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent, F_focused), "Z", 2 },
	{ "type", &class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type, offsetof(com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent, F_type), "Lcom/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent$Type;", 2 },
	{ "relatedActor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent, F_relatedActor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent, 0, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_reset, "()V", 1 },
	{ "isFocused", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isFocused_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isFocused_R_boolean, "()Z", 1 },
	{ "setFocused", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean, "(Z)V", 1 },
	{ "getType", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_getType_R_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_getType_R_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type, "()Lcom/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent$Type;", 1 },
	{ "setType", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setType_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setType_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type, "(Lcom/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent$Type;)V", 1 },
	{ "getRelatedActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "setRelatedActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_Event,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent);

}

