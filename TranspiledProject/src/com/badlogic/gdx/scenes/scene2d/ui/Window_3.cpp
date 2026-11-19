#include "com/badlogic/gdx/scenes/scene2d/ui/Window_3.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Window_3.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Window.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Window$3(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Window$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Window$3_com_badlogic_gdx_scenes_scene2d_ui_Window(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_scenes_scene2d_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_updateEdge_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$3:updateEdge", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[3].f = ((jfloat(((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_resizeBorder))) / (jfloat(2)));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float])(ctx, sp[0].o);
	frame[4].f = temp0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float])(ctx, sp[0].o);
	frame[5].f = temp1;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadTop_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadTop_R_float])(ctx, sp[0].o);
	frame[6].f = temp2;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadLeft_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadLeft_R_float])(ctx, sp[0].o);
	frame[7].f = temp3;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadBottom_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadBottom_R_float])(ctx, sp[0].o);
	frame[8].f = temp4;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadRight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadRight_R_float])(ctx, sp[0].o);
	frame[9].f = temp5;
	LINE_NUMBER(99);
	frame[10].f = (frame[7].f);
	frame[11].f = ((frame[4].f) - (frame[9].f));
	frame[12].f = (frame[8].f);
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge = (jint(0));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_isResizable) == 0) goto label_12;
	}
	{
	if ((floatCompare((frame[1].f), ((frame[10].f) - (frame[3].f)), -1)) < 0) goto label_12;
	}
	{
	if ((floatCompare((frame[1].f), ((frame[11].f) + (frame[3].f)), 1)) > 0) goto label_12;
	}
	{
	if ((floatCompare((frame[2].f), ((frame[12].f) - (frame[3].f)), -1)) < 0) goto label_12;
	}
	{
	LINE_NUMBER(102);
	if ((floatCompare((frame[1].f), ((frame[10].f) + (frame[3].f)), 1)) >= 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) | (8));
	}
label_14:;
	{
	LINE_NUMBER(103);
	if ((floatCompare((frame[1].f), ((frame[11].f) - (frame[3].f)), -1)) <= 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) | (16));
	}
label_15:;
	{
	LINE_NUMBER(104);
	if ((floatCompare((frame[2].f), ((frame[12].f) + (frame[3].f)), 1)) >= 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) | (jint(4)));
	}
label_16:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) == 0) goto label_17;
	}
	{
	frame[3].f = ((frame[3].f) + (jfloat(25.0f)));
	}
label_17:;
	{
	LINE_NUMBER(106);
	if ((floatCompare((frame[1].f), ((frame[10].f) + (frame[3].f)), 1)) >= 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) | (8));
	}
label_18:;
	{
	LINE_NUMBER(107);
	if ((floatCompare((frame[1].f), ((frame[11].f) - (frame[3].f)), -1)) <= 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) | (16));
	}
label_19:;
	{
	LINE_NUMBER(108);
	if ((floatCompare((frame[2].f), ((frame[12].f) + (frame[3].f)), 1)) >= 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) | (jint(4)));
	}
label_12:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_isMovable) == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) != 0) goto label_20;
	}
	{
	if ((floatCompare((frame[2].f), (frame[5].f), 1)) > 0) goto label_20;
	}
	{
	if ((floatCompare((frame[2].f), ((frame[5].f) - (frame[6].f)), -1)) < 0) goto label_20;
	}
	{
	if ((floatCompare((frame[1].f), (frame[10].f), -1)) < 0) goto label_20;
	}
	{
	if ((floatCompare((frame[1].f), (frame[11].f), 1)) > 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge = (32);
	}
label_20:;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$3:touchDown", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(114);
	if ((frame[5].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(115);
	M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_updateEdge_float_float(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp += 1;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_dragging = sp[1].i;
	LINE_NUMBER(117);
	((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_startX = (frame[2].f);
	LINE_NUMBER(118);
	((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_startY = (frame[3].f);
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[2].f;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK(sp[0].o))->F_lastX = (temp0 - temp1);
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	jfloat temp2 = frame[3].f;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK(sp[0].o))->F_lastY = (temp2 - temp3);
	}
label_1:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_isModal) == 0) goto label_11;
	}
label_10:;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$3:touchUp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_dragging = (jint(0));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$3:touchDragged", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_dragging) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float])(ctx, sp[0].o);
	frame[5].f = temp0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float])(ctx, sp[0].o);
	frame[6].f = temp1;
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_R_float])(ctx, sp[0].o);
	frame[7].f = temp2;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_R_float])(ctx, sp[0].o);
	frame[8].f = temp3;
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getMinWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getMinWidth_R_float])(ctx, sp[0].o);
	frame[9].f = temp4;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getMaxWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getMaxWidth_R_float])(ctx, sp[0].o);
	frame[10].f = temp5;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getMinHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getMinHeight_R_float])(ctx, sp[0].o);
	frame[11].f = temp6;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getMaxHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getMaxHeight_R_float])(ctx, sp[0].o);
	frame[12].f = temp7;
	LINE_NUMBER(136);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_keepWithinStage) == 0) goto label_11;
	}
	INST_ALOAD(13);
	if ((--sp)->o == nullptr) goto label_11;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getParent_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getParent_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getRoot_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getRoot_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[13].o));
	if (sp[0].o != sp[1].o) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(139);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) & (32)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(140);
	frame[15].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_startX));
	frame[16].f = ((frame[3].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_startY));
	LINE_NUMBER(141);
	frame[7].f = ((frame[7].f) + (frame[15].f));
	LINE_NUMBER(142);
	frame[8].f = ((frame[8].f) + (frame[16].f));
	}
label_14:;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) & (8)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(145);
	frame[15].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_startX));
	LINE_NUMBER(146);
	if ((floatCompare(((frame[5].f) - (frame[15].f)), (frame[9].f), 1)) >= 0) goto label_22;
	}
	{
	frame[15].f = (-((frame[9].f) - (frame[5].f)));
	}
label_22:;
	{
	LINE_NUMBER(147);
	if ((frame[14].i) == 0) goto label_23;
	}
	{
	if ((floatCompare(((frame[7].f) + (frame[15].f)), (jfloat(0)), 1)) >= 0) goto label_23;
	}
	{
	frame[15].f = (-(frame[7].f));
	}
label_23:;
	{
	LINE_NUMBER(148);
	frame[5].f = ((frame[5].f) - (frame[15].f));
	LINE_NUMBER(149);
	frame[7].f = ((frame[7].f) + (frame[15].f));
	}
label_19:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) & (jint(4))) == 0) goto label_25;
	}
	{
	LINE_NUMBER(152);
	frame[15].f = ((frame[3].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_startY));
	LINE_NUMBER(153);
	if ((floatCompare(((frame[6].f) - (frame[15].f)), (frame[11].f), 1)) >= 0) goto label_28;
	}
	{
	frame[15].f = (-((frame[11].f) - (frame[6].f)));
	}
label_28:;
	{
	LINE_NUMBER(154);
	if ((frame[14].i) == 0) goto label_29;
	}
	{
	if ((floatCompare(((frame[8].f) + (frame[15].f)), (jfloat(0)), 1)) >= 0) goto label_29;
	}
	{
	frame[15].f = (-(frame[8].f));
	}
label_29:;
	{
	LINE_NUMBER(155);
	frame[6].f = ((frame[6].f) - (frame[15].f));
	LINE_NUMBER(156);
	frame[8].f = ((frame[8].f) + (frame[15].f));
	}
label_25:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) & (16)) == 0) goto label_31;
	}
	{
	LINE_NUMBER(159);
	frame[15].f = (((frame[2].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_lastX)) - (frame[5].f));
	LINE_NUMBER(160);
	if ((floatCompare(((frame[5].f) + (frame[15].f)), (frame[9].f), 1)) >= 0) goto label_34;
	}
	{
	frame[15].f = ((frame[9].f) - (frame[5].f));
	}
label_34:;
	{
	LINE_NUMBER(161);
	if ((frame[14].i) == 0) goto label_35;
	}
	{
	jfloat temp0 = ((frame[7].f) + (frame[5].f)) + (frame[15].f);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float])(ctx, (frame[13].o));
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_35;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float])(ctx, (frame[13].o));
	frame[15].f = ((temp0 - (frame[7].f)) - (frame[5].f));
	}
label_35:;
	{
	LINE_NUMBER(162);
	frame[5].f = ((frame[5].f) + (frame[15].f));
	}
label_31:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_edge) & (jint(2))) == 0) goto label_36;
	}
	{
	LINE_NUMBER(165);
	frame[15].f = (((frame[3].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_lastY)) - (frame[6].f));
	LINE_NUMBER(166);
	if ((floatCompare(((frame[6].f) + (frame[15].f)), (frame[11].f), 1)) >= 0) goto label_39;
	}
	{
	frame[15].f = ((frame[11].f) - (frame[6].f));
	}
label_39:;
	{
	LINE_NUMBER(167);
	if ((frame[14].i) == 0) goto label_40;
	}
	{
	jfloat temp0 = ((frame[8].f) + (frame[6].f)) + (frame[15].f);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float])(ctx, (frame[13].o));
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_40;
	}
	{
	LINE_NUMBER(168);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float])(ctx, (frame[13].o));
	frame[15].f = ((temp0 - (frame[8].f)) - (frame[6].f));
	}
label_40:;
	{
	LINE_NUMBER(169);
	frame[6].f = ((frame[6].f) + (frame[15].f));
	}
label_36:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[7].f));
	jfloat temp1 = jfloat(temp0);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[8].f));
	jfloat temp3 = jfloat(temp2);
	jint temp4 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[5].f));
	jfloat temp5 = jfloat(temp4);
	jint temp6 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[6].f));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setBounds_float_float_float_float])(ctx, sp[0].o, temp1, temp3, temp5, (jfloat(temp6)));
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$3:mouseMoved", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(175);
	M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_updateEdge_float_float(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_isModal);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$3:scrolled", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_isModal);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$3:keyDown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_isModal);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$3:keyUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_isModal);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$3:keyTyped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_isModal);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Window$3[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_updateEdge_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_R_boolean,
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
	{ "updateEdge", "(FF)V" },
	{ "scrolled", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)Z" },
};

static FieldMetadata fields[] {
	{ "startX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window$3, F_startX), "F", 0 },
	{ "startY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window$3, F_startY), "F", 0 },
	{ "lastX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window$3, F_lastX), "F", 0 },
	{ "lastY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window$3, F_lastY), "F", 0 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_Window, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window$3, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/Window;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Window$3_com_badlogic_gdx_scenes_scene2d_ui_Window, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Window;)V", 0 },
	{ "updateEdge", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_updateEdge_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window$3_updateEdge_float_float, "(FF)V", 2 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window$3_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V", 1 },
	{ "mouseMoved", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window$3_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)Z", 1 },
	{ "scrolled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window$3_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)Z", 1 },
	{ "keyDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z", 1 },
	{ "keyUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z", 1 },
	{ "keyTyped", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window$3_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;C)Z", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Window$3{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Window$3",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_InputListener,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Window$3),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Window$3,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Window$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Window$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Window$3 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Window$3);

}

