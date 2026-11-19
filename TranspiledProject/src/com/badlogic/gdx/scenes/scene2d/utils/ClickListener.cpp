#include "com/badlogic/gdx/scenes/scene2d/utils/ClickListener.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ClickListener.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/utils/TimeUtils.h"

extern "C" {

jfloat SF_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_visualPressedDuration;

void mark_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) object;
}

void init_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(48);
	init_com_badlogic_gdx_scenes_scene2d_InputListener(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize = (jfloat(14.0f));
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX = (jfloat(-1.0f));
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY = (jfloat(-1.0f));
	LINE_NUMBER(37);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer = (jint(-1));
	LINE_NUMBER(38);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedButton = (jint(-1));
	LINE_NUMBER(42);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCountInterval = (jlong(400000000ll));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(52);
	init_com_badlogic_gdx_scenes_scene2d_InputListener(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize = (jfloat(14.0f));
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX = (jfloat(-1.0f));
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY = (jfloat(-1.0f));
	LINE_NUMBER(37);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer = (jint(-1));
	LINE_NUMBER(38);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedButton = (jint(-1));
	LINE_NUMBER(42);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCountInterval = (jlong(400000000ll));
	LINE_NUMBER(53);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_button = (frame[1].i);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:touchDown", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(57);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(58);
	if ((frame[4].i) != 0) goto label_2;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_button) == (jint(-1))) goto label_2;
	}
	{
	if ((frame[5].i) == ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_button)) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(59);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed = (jint(1));
	LINE_NUMBER(60);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer = (frame[4].i);
	LINE_NUMBER(61);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedButton = (frame[5].i);
	LINE_NUMBER(62);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX = (frame[2].f);
	LINE_NUMBER(63);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY = (frame[3].f);
	LINE_NUMBER(64);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setVisualPressed_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setVisualPressed_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:touchDragged", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(69);
	if ((frame[4].i) != ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer)) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean])(ctx, sp[1].o, sp[2].o, (frame[2].f), (frame[3].f));
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK(sp[0].o))->F_pressed = temp0;
	LINE_NUMBER(71);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed) != 0) goto label_4;
	}
	{
	LINE_NUMBER(73);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_invalidateTapSquare) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_invalidateTapSquare])(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:touchUp", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(78);
	if ((frame[4].i) != ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer)) goto label_1;
	}
	{
	LINE_NUMBER(79);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) != 0) goto label_3;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f));
	frame[6].i = temp0;
	LINE_NUMBER(82);
	if ((frame[6].i) == 0) goto label_6;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_6;
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_button) == (jint(-1))) goto label_6;
	}
	{
	if ((frame[5].i) == ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_button)) goto label_6;
	}
	INST_ICONST(0);
	INST_ISTORE(6);
label_6:;
	{
	LINE_NUMBER(83);
	if ((frame[6].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(84);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_utils_TimeUtils_nanoTime_R_long(ctx);
	frame[7].l = temp0;
	LINE_NUMBER(85);
	if ((longCompare(((frame[7].l) - ((jlong)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_lastTapTime)), ((jlong)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCountInterval))) <= 0) goto label_9;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCount = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK(sp[0].o))->F_tapCount = (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK(sp[0].o))->F_tapCount) + (jint(1)));
	LINE_NUMBER(87);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_lastTapTime = (frame[7].l);
	LINE_NUMBER(88);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	}
label_3:;
	{
	LINE_NUMBER(91);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed = (jint(0));
	LINE_NUMBER(92);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer = (jint(-1));
	LINE_NUMBER(93);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedButton = (jint(-1));
	LINE_NUMBER(94);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) == 0) goto label_15;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_over = ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelledOver);
	}
label_15:;
	{
	LINE_NUMBER(95);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled = (jint(0));
	}
label_1:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:enter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(100);
	if ((frame[4].i) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(101);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) != 0) goto label_3;
	}
	{
	LINE_NUMBER(102);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_over = (jint(1));
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(104);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelledOver = (jint(1));
	}
label_1:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:exit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(109);
	if ((frame[4].i) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(110);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) != 0) goto label_3;
	}
	{
	LINE_NUMBER(111);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_over = (jint(0));
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(113);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelledOver = (jint(0));
	}
label_1:;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_cancel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:cancel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer) == (jint(-1))) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled) == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(120);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled = (jint(1));
	LINE_NUMBER(121);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelledOver = ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_over);
	LINE_NUMBER(122);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_over = (jint(0));
	LINE_NUMBER(123);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed = (jint(0));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:clicked", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:isOver", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o), (frame[2].f), (frame[3].f), (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(132);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_float_float_R_boolean])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:inTapSquare", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(137);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX), (jfloat(-1.0f)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY), (jfloat(-1.0f)), -1)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(138);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX)));
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize), 1)) >= 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY)));
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize), 1)) >= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:inTapSquare", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX), (jfloat(-1.0f)), -1)) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_invalidateTapSquare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:invalidateTapSquare", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX = (jfloat(-1.0f));
	LINE_NUMBER(149);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY = (jfloat(-1.0f));
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isPressed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:isPressed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isVisualPressed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:isVisualPressed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed) == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(161);
	if ((longCompare(((jlong)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_visualPressedTime), (jlong(0)))) > 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(162);
	jlong temp0 = (jlong)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_visualPressedTime;
	jlong temp1 = (jlong)SM_com_badlogic_gdx_utils_TimeUtils_millis_R_long(ctx);
	if ((longCompare(temp0, temp1)) <= 0) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(163);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_visualPressedTime = (jlong(0));
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setVisualPressed_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:setVisualPressed", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(169);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_com_badlogic_gdx_utils_TimeUtils_millis_R_long(ctx);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK(sp[0].o))->F_visualPressedTime = (temp0 + (jlong(((clinit_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(ctx), (jfloat)SF_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_visualPressedDuration) * (jfloat(1000.0f))))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(172);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_visualPressedTime = (jlong(0));
	}
label_3:;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:isOver", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_over) != 0) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapSquareSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:setTapSquareSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(181);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize = (frame[1].f);
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTapSquareSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:getTapSquareSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapSquareSize);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapCountInterval_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:setTapCountInterval", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(191);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCountInterval = (jlong(((frame[1].f) * (jfloat(1.000000e+09f)))));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTapCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:getTapCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCount);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:setTapCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(200);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_tapCount = (frame[1].i);
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTouchDownX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:getTouchDownX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownX);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTouchDownY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:getTouchDownY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_touchDownY);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getPressedButton_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:getPressedButton", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedButton);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getPressedPointer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:getPressedPointer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getButton_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:getButton", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_button);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setButton_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:setButton", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(228);
	((com_badlogic_gdx_scenes_scene2d_utils_ClickListener *) NULL_CHECK((frame[0].o)))->F_button = (frame[1].i);
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ClickListener:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(ctx);
	{
	LINE_NUMBER(34);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_visualPressedDuration = (jfloat(0.1f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_ClickListener[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_cancel,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_invalidateTapSquare,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isPressed_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isVisualPressed_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setVisualPressed_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapSquareSize_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTapSquareSize_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapCountInterval_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTapCount_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapCount_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTouchDownX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTouchDownY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getPressedButton_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getPressedPointer_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getButton_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setButton_int,
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
	{ "cancel", "()V" },
	{ "clicked", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)V" },
	{ "isOver", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;FF)Z" },
	{ "inTapSquare", "(FF)Z" },
	{ "inTapSquare", "()Z" },
	{ "invalidateTapSquare", "()V" },
	{ "isPressed", "()Z" },
	{ "isVisualPressed", "()Z" },
	{ "setVisualPressed", "(Z)V" },
	{ "isOver", "()Z" },
	{ "setTapSquareSize", "(F)V" },
	{ "getTapSquareSize", "()F" },
	{ "setTapCountInterval", "(F)V" },
	{ "getTapCount", "()I" },
	{ "setTapCount", "(I)V" },
	{ "getTouchDownX", "()F" },
	{ "getTouchDownY", "()F" },
	{ "getPressedButton", "()I" },
	{ "getPressedPointer", "()I" },
	{ "getButton", "()I" },
	{ "setButton", "(I)V" },
};

static FieldMetadata fields[] {
	{ "visualPressedDuration", &class_float, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_visualPressedDuration, "F", 9 },
	{ "tapSquareSize", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_tapSquareSize), "F", 2 },
	{ "touchDownX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_touchDownX), "F", 2 },
	{ "touchDownY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_touchDownY), "F", 2 },
	{ "pressedPointer", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_pressedPointer), "I", 2 },
	{ "pressedButton", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_pressedButton), "I", 2 },
	{ "button", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_button), "I", 2 },
	{ "pressed", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_pressed), "Z", 2 },
	{ "over", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_over), "Z", 2 },
	{ "cancelled", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_cancelled), "Z", 2 },
	{ "cancelledOver", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_cancelledOver), "Z", 2 },
	{ "visualPressedTime", &class_long, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_visualPressedTime), "J", 2 },
	{ "tapCountInterval", &class_long, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_tapCountInterval), "J", 2 },
	{ "tapCount", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_tapCount), "I", 2 },
	{ "lastTapTime", &class_long, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener, F_lastTapTime), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_ClickListener, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_int, 0, "(I)V", 1 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V", 1 },
	{ "enter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "exit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "cancel", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_cancel, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_cancel, "()V", 1 },
	{ "clicked", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)V", 1 },
	{ "isOver", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;FF)Z", 1 },
	{ "inTapSquare", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_float_float_R_boolean, "(FF)Z", 1 },
	{ "inTapSquare", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_R_boolean, "()Z", 1 },
	{ "invalidateTapSquare", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_invalidateTapSquare, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_invalidateTapSquare, "()V", 1 },
	{ "isPressed", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isPressed_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isPressed_R_boolean, "()Z", 1 },
	{ "isVisualPressed", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isVisualPressed_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isVisualPressed_R_boolean, "()Z", 1 },
	{ "setVisualPressed", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setVisualPressed_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setVisualPressed_boolean, "(Z)V", 1 },
	{ "isOver", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_R_boolean, "()Z", 1 },
	{ "setTapSquareSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapSquareSize_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapSquareSize_float, "(F)V", 1 },
	{ "getTapSquareSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTapSquareSize_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTapSquareSize_R_float, "()F", 1 },
	{ "setTapCountInterval", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapCountInterval_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapCountInterval_float, "(F)V", 1 },
	{ "getTapCount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTapCount_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTapCount_R_int, "()I", 1 },
	{ "setTapCount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapCount_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapCount_int, "(I)V", 1 },
	{ "getTouchDownX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTouchDownX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTouchDownX_R_float, "()F", 1 },
	{ "getTouchDownY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTouchDownY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTouchDownY_R_float, "()F", 1 },
	{ "getPressedButton", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getPressedButton_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getPressedButton_R_int, "()I", 1 },
	{ "getPressedPointer", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getPressedPointer_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getPressedPointer_R_int, "()I", 1 },
	{ "getButton", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getButton_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getButton_R_int, "()I", 1 },
	{ "setButton", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setButton_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setButton_int, "(I)V", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_ClickListener, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_ClickListener{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/ClickListener",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_InputListener,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_ClickListener),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_ClickListener,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_ClickListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_ClickListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_ClickListener = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_ClickListener);

}

