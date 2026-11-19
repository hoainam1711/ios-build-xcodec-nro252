#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane_1.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane_1.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane_SplitPaneStyle.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_com_badlogic_gdx_scenes_scene2d_ui_SplitPane(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_scenes_scene2d_InputListener(ctx, (frame[0].o));
	LINE_NUMBER(86);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_draggingPointer = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane$1:touchDown", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(89);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_draggingPointer) == (jint(-1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(90);
	if ((frame[4].i) != 0) goto label_2;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_2;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_handleBounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(92);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_draggingPointer = (frame[4].i);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_handlePosition;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[1].o))->F_handleBounds;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[1].o))->F_handleBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp0, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane$1:touchUp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(101);
	if ((frame[4].i) != ((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_draggingPointer)) goto label_1;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_draggingPointer = (jint(-1));
	}
label_1:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane$1:touchDragged", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(105);
	if ((frame[4].i) == ((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_draggingPointer)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK(sp[0].o))->F_handle;
	frame[5].o = sp[0].o;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_vertical) != 0) goto label_3;
	}
	{
	LINE_NUMBER(109);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	frame[6].f = (temp0 - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getWidth_R_float])(ctx, sp[0].o);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	frame[7].f = (temp1 - temp2);
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_handlePosition;
	frame[8].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[6].f));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_handlePosition;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (frame[8].f);
	LINE_NUMBER(113);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), (frame[8].f));
	frame[8].f = temp3;
	LINE_NUMBER(114);
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[7].f), (frame[8].f));
	frame[8].f = temp4;
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_splitAmount = ((frame[8].f) / (frame[7].f));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(117);
	goto label_13;
	}
label_3:;
	{
	LINE_NUMBER(118);
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	frame[6].f = (temp0 - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getHeight_R_float])(ctx, sp[0].o);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	frame[7].f = (temp1 - temp2);
	LINE_NUMBER(120);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_handlePosition;
	frame[8].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[6].f));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_handlePosition;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (frame[8].f);
	LINE_NUMBER(122);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), (frame[8].f));
	frame[8].f = temp3;
	LINE_NUMBER(123);
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[7].f), (frame[8].f));
	frame[8].f = temp4;
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_splitAmount = ((jfloat(1)) - ((frame[8].f) / (frame[7].f)));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	}
label_13:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate])(ctx, sp[0].o);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane$1:mouseMoved", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[1].o))->F_handleBounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean])(ctx, sp[1].o, (frame[2].f), (frame[3].f));
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_cursorOverHandle = temp0;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
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
	{ "draggingPointer", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1, F_draggingPointer), "I", 0 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/SplitPane;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_com_badlogic_gdx_scenes_scene2d_ui_SplitPane, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/SplitPane;)V", 0 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V", 1 },
	{ "mouseMoved", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)Z", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/SplitPane$1",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_InputListener,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1);

}

