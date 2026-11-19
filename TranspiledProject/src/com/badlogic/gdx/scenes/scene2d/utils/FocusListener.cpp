#include "com/badlogic/gdx/scenes/scene2d/utils/FocusListener.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/FocusListener_1.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/FocusListener.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/FocusListener_FocusEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/FocusListener_FocusEvent_Type.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_FocusListener(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_FocusListener *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_FocusListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_utils_FocusListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_FocusListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener:handle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(29);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent, (frame[1].o)));
	LINE_NUMBER(30);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$1_$SwitchMap$com$badlogic$gdx$scenes$scene2d$utils$FocusListener$FocusEvent$Type;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_getType_R_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_getType_R_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_3;
		case 2: goto label_4;
		default: goto label_5;
	}
	}
label_3:;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isFocused_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isFocused_R_boolean])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_keyboardFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_keyboardFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	LINE_NUMBER(33);
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isFocused_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isFocused_R_boolean])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_scrollFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_scrollFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	}
label_5:;
	{
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_keyboardFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener:keyboardFocusChanged", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_scrollFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/FocusListener:scrollFocusChanged", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_FocusListener[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_keyboardFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_scrollFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean,
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
	{ "handle", "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z" },
	{ "keyboardFocusChanged", "(Lcom/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent;Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)V" },
	{ "scrollFocusChanged", "(Lcom/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent;Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_EventListener, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_FocusListener, 0, "()V", 1 },
	{ "handle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z", 1 },
	{ "keyboardFocusChanged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_keyboardFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_keyboardFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent;Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)V", 1 },
	{ "scrollFocusChanged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_scrollFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener_scrollFocusChanged_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_com_badlogic_gdx_scenes_scene2d_Actor_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/utils/FocusListener$FocusEvent;Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/FocusListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_FocusListener),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_FocusListener,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_FocusListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_FocusListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_FocusListener = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener);

}

