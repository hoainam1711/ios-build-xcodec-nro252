#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_1.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_1.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_scenes_scene2d_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$1:touchDown", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_draggingPointer) == (jint(-1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(118);
	if ((frame[4].i) != 0) goto label_2;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_2;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flickScroll) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean])(ctx, sp[0].o, (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_fadeAlpha), (jfloat(0)), -1)) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollBarTouch) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollX) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(126);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_stop) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_stop])(ctx, (frame[1].o));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hKnobBounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_hKnobBounds;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK(sp[0].o))->F_handlePosition = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_touchScrollH = (jint(1));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_draggingPointer = (frame[4].i);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_amountX;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_actorArea;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width;
	jfloat temp2 = frame[2].f;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_hKnobBounds;
	jobject temp3 = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if ((floatCompare(temp2, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(temp3))->F_x), 1)) >= 0) goto label_16;
	}
	INST_ICONST(-1);
	goto label_17;
label_16:;
	INST_ICONST(1);
label_17:;
	{
	sp -= 4;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollX_float])(ctx, sp[0].o, (sp[1].f + (sp[2].f * (jfloat(sp[3].i)))));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollBarTouch) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollY) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(139);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_stop) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_stop])(ctx, (frame[1].o));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vKnobBounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_vKnobBounds;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK(sp[0].o))->F_handlePosition = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_touchScrollV = (jint(1));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_draggingPointer = (frame[4].i);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_amountY;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_actorArea;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height;
	jfloat temp2 = frame[3].f;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_vKnobBounds;
	jobject temp3 = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if ((floatCompare(temp2, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(temp3))->F_y), 1)) >= 0) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(-1);
label_30:;
	{
	sp -= 4;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollY_float])(ctx, sp[0].o, (sp[1].f + (sp[2].f * (jfloat(sp[3].i)))));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (jint(1));
	}
label_19:;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$1:touchUp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(155);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_draggingPointer)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancel])(ctx, sp[0].o);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$1:touchDragged", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(160);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_draggingPointer)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_touchScrollH) == 0) goto label_2;
	}
	{
	LINE_NUMBER(162);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	frame[5].f = (temp0 - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(163);
	frame[6].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_handlePosition) + (frame[5].f));
	LINE_NUMBER(164);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_handlePosition = (frame[6].f);
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x), (frame[6].f));
	frame[6].f = temp1;
	LINE_NUMBER(166);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds;
	jfloat temp3 = temp2 + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hKnobBounds;
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp3 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width)), (frame[6].f));
	frame[6].f = temp4;
	LINE_NUMBER(167);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds;
	jfloat temp5 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hKnobBounds;
	frame[7].f = (temp5 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width));
	LINE_NUMBER(168);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = frame[6].f;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_hScrollBounds;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentX_float])(ctx, sp[0].o, ((temp0 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_x)) / (frame[7].f)));
	}
label_10:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(170);
	goto label_12;
	}
label_2:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_touchScrollV) == 0) goto label_12;
	}
	{
	LINE_NUMBER(171);
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	frame[5].f = (temp0 - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(172);
	frame[6].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_handlePosition) + (frame[5].f));
	LINE_NUMBER(173);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_handlePosition = (frame[6].f);
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y), (frame[6].f));
	frame[6].f = temp1;
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds;
	jfloat temp3 = temp2 + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vKnobBounds;
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp3 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height)), (frame[6].f));
	frame[6].f = temp4;
	LINE_NUMBER(176);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds;
	jfloat temp5 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vKnobBounds;
	frame[7].f = (temp5 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height));
	LINE_NUMBER(177);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = frame[6].f;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_vScrollBounds;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentY_float])(ctx, sp[0].o, (temp0 - ((temp1 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_y)) / (frame[7].f))));
	}
label_20:;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	}
label_12:;
	LINE_NUMBER(180);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$1:mouseMoved", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flickScroll) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean])(ctx, sp[0].o, (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean,
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
	{ "handlePosition", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1, F_handlePosition), "F", 2 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane;)V", 0 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V", 1 },
	{ "mouseMoved", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)Z", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$1",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_InputListener,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1,
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
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1);

}

