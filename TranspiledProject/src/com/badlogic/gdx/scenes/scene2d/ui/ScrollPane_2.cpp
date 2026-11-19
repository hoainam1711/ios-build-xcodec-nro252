#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_2.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent_Type.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_2.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_pan_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$2:pan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollX) != 0) goto label_2;
	}
	INST_FCONST(0);
	INST_FSTORE(4);
label_2:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollY) != 0) goto label_3;
	}
	INST_FCONST(0);
	INST_FSTORE(5);
label_3:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX) - (frame[4].f));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY) + (frame[5].f));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clamp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clamp])(ctx, sp[0].o);
	LINE_NUMBER(199);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_cancelTouchFocus) == 0) goto label_7;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_8;
	}
	{
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) == 0) goto label_7;
	}
label_8:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancelTouchFocus) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancelTouchFocus])(ctx, sp[0].o);
	}
label_7:;
	LINE_NUMBER(200);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_fling_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$2:fling", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(203);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[2].f));
	if ((floatCompare(temp0, (jfloat(150.0f)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollX) == 0) goto label_1;
	}
	INST_FLOAD(2);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 1;
	frame[5].f = sp[0].f;
	LINE_NUMBER(204);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[3].f));
	if ((floatCompare(temp0, (jfloat(150.0f)), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollY) == 0) goto label_4;
	}
	{
	jfloat temp0 = -(frame[3].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_FCONST(0);
label_5:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(205);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) != 0) goto label_7;
	}
	{
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) == 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_cancelTouchFocus) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancelTouchFocus) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancelTouchFocus])(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_fling_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_fling_float_float_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_flingTime), (frame[5].f), (frame[6].f));
	}
label_8:;
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$2:handle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(212);
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getType_R_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getType_R_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, (frame[1].o))));
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_touchDown;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flingTimer = (jfloat(0));
	}
label_3:;
	{
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(215);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_InputEvent)) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_isTouchFocusCancel_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isTouchFocusCancel_R_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, (frame[1].o))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancel])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tap_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_longPress_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_fling_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_pan_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_panStop_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_zoom_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pinch_com_badlogic_gdx_scenes_scene2d_InputEvent_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getTouchDownTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	{ "touchDown", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V" },
	{ "touchUp", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V" },
	{ "tap", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V" },
	{ "longPress", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;FF)Z" },
	{ "fling", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V" },
	{ "pan", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFFF)V" },
	{ "panStop", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V" },
	{ "zoom", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)V" },
	{ "pinch", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)V" },
	{ "getGestureDetector", "()Lcom/badlogic/gdx/input/GestureDetector;" },
	{ "getTouchDownTarget", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane;)V", 0 },
	{ "pan", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_pan_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_pan_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFFF)V", 1 },
	{ "fling", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_fling_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_fling_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V", 1 },
	{ "handle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$2",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2);

}

