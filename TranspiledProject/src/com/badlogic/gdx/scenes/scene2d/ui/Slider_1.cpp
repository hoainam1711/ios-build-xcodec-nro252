#include "com/badlogic/gdx/scenes/scene2d/ui/Slider_1.h"
#include "com/badlogic/gdx/utils/PoolManager.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Slider_1.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Slider.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ChangeListener_ChangeEvent.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Slider$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_InputListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Slider$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_com_badlogic_gdx_scenes_scene2d_ui_Slider(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Slider$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_scenes_scene2d_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider$1:touchDown", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_disabled) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK(sp[0].o))->F_button) == (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK(sp[0].o))->F_button) == (frame[5].i)) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK(sp[0].o))->F_draggingPointer) == (jint(-1))) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK(sp[0].o))->F_draggingPointer = (frame[4].i);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_calculatePositionAndValue_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_calculatePositionAndValue_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider$1:touchUp", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(79);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK(sp[0].o))->F_draggingPointer)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK(sp[0].o))->F_draggingPointer = (jint(-1));
	LINE_NUMBER(82);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_isTouchFocusCancel_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isTouchFocusCancel_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_calculatePositionAndValue_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_calculatePositionAndValue_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	if (temp0 != 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(84);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent)));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent, sp[0].o));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(86);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	}
label_4:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider$1:touchDragged", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_calculatePositionAndValue_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_calculatePositionAndValue_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider$1:enter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(95);
	if ((frame[4].i) != (jint(-1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK(sp[0].o))->F_mouseOver = (jint(1));
	}
label_1:;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider$1:exit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(99);
	if ((frame[4].i) != (jint(-1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK(sp[0].o))->F_mouseOver = (jint(0));
	}
label_1:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Slider$1[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean,
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
	{ "touchDown", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z" },
	{ "touchUp", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V" },
	{ "touchDragged", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V" },
	{ "mouseMoved", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)Z" },
	{ "enter", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "exit", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "scrolled", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFFF)Z" },
	{ "keyDown", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z" },
	{ "keyUp", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z" },
	{ "keyTyped", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;C)Z" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_Slider, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Slider$1, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/Slider;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_com_badlogic_gdx_scenes_scene2d_ui_Slider, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Slider;)V", 0 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V", 1 },
	{ "enter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "exit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Slider$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Slider$1",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_InputListener,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Slider$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Slider$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Slider$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Slider$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Slider$1 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Slider$1);

}

