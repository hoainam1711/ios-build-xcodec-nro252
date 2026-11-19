#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldClickListener.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_OnscreenKeyboard.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/utils/Timer_Task.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ClickListener.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_Undo.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldStyle.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_KeyRepeatTask.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldListener.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/UIUtils.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldClickListener.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/utils/Clipboard.h"
#include "com/badlogic/gdx/Input.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldFilter.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/utils/Timer.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_com_badlogic_gdx_scenes_scene2d_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1026);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:clicked", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1028);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_getTapCount_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_getTapCount_R_int])(ctx, (frame[0].o));
	frame[4].i = (temp0 % (jint(4)));
	LINE_NUMBER(1029);
	if ((frame[4].i) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(1030);
	if ((frame[4].i) != (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(1031);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_float_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_float_R_Array1_int])(ctx, sp[0].o, (frame[2].f));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1032);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSelection_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSelection_int_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(1)))));
	}
label_3:;
	{
	LINE_NUMBER(1034);
	if ((frame[4].i) != (jint(3))) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_selectAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_selectAll])(ctx, sp[0].o);
	}
label_6:;
	LINE_NUMBER(1035);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:touchDown", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1038);
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1039);
	if ((frame[4].i) != 0) goto label_2;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_2;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1040);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_disabled) == 0) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(1041);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_setCursorPosition_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_setCursorPosition_float_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionStart = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_cursor);
	LINE_NUMBER(1043);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1044);
	if ((frame[6].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(1045);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyboard;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard, INDEX_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1046);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection = (jint(1));
	LINE_NUMBER(1047);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:touchDragged", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1051);
	M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i));
	LINE_NUMBER(1052);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_setCursorPosition_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_setCursorPosition_float_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(1053);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:touchUp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1056);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionStart;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 != ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor)) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1057);
	M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i));
	LINE_NUMBER(1058);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_setCursorPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:setCursorPosition", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_letterUnderCursor_float_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_letterUnderCursor_float_R_int])(ctx, sp[1].o, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	LINE_NUMBER(1063);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursorOn = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_focused);
	LINE_NUMBER(1064);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_blinkTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(1065);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_focused) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_blinkTask;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_blinkTime;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task(ctx, sp[0].o, temp0, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_blinkTime));
	}
label_4:;
	LINE_NUMBER(1066);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goHome_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:goHome", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = (jint(0));
	LINE_NUMBER(1070);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goEnd_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:goEnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1073);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	LINE_NUMBER(1074);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:keyDown", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1077);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_disabled) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursorOn = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_focused);
	LINE_NUMBER(1080);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_blinkTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_focused) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_blinkTask;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_blinkTime;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task(ctx, sp[0].o, temp0, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_blinkTime));
	}
label_4:;
	{
	LINE_NUMBER(1083);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_hasKeyboardFocus_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_hasKeyboardFocus_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(1085);
	frame[3].i = (jint(0));
	LINE_NUMBER(1086);
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_ctrl_R_boolean(ctx);
	frame[4].i = temp0;
	LINE_NUMBER(1087);
	if ((frame[4].i) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_passwordMode) != 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1088);
	frame[6].i = (jint(1));
	LINE_NUMBER(1090);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1091);
	switch((frame[2].i)) {
		case 29: goto label_14;
		case 31: goto label_15;
		case 50: goto label_16;
		case 52: goto label_17;
		case 53: goto label_18;
		case 54: goto label_19;
		case 124: goto label_15;
		default: goto label_20;
	}
	}
label_16:;
	{
	LINE_NUMBER(1093);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_clipboard;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Clipboard_getContents_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Clipboard, INDEX_com_badlogic_gdx_utils_Clipboard_getContents_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(1094);
	frame[3].i = (jint(1));
	LINE_NUMBER(1095);
	goto label_12;
	}
label_15:;
	{
	LINE_NUMBER(1098);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_copy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_copy])(ctx, sp[0].o);
	LINE_NUMBER(1099);
	popStackFrame(ctx);
	return (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(1101);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(1102);
	popStackFrame(ctx);
	return (jint(1));
	}
label_14:;
	{
	LINE_NUMBER(1104);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_selectAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_selectAll])(ctx, sp[0].o);
	LINE_NUMBER(1105);
	popStackFrame(ctx);
	return (jint(1));
	}
label_19:;
	{
	LINE_NUMBER(1107);
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_shift_R_boolean(ctx);
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(1108);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo_boolean])(ctx, sp[0].o, (jint(1)));
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(1110);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo_boolean])(ctx, sp[0].o, (jint(1)));
	}
label_28:;
	{
	LINE_NUMBER(1111);
	popStackFrame(ctx);
	return (jint(1));
	}
label_18:;
	{
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(1114);
	popStackFrame(ctx);
	return (jint(1));
	}
label_20:;
	{
	LINE_NUMBER(1116);
	frame[6].i = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(1120);
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_shift_R_boolean(ctx);
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(1121);
	switch((frame[2].i)) {
		case 112: goto label_32;
		case 124: goto label_33;
		default: goto label_34;
	}
	}
label_33:;
	{
	LINE_NUMBER(1123);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_clipboard;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Clipboard_getContents_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Clipboard, INDEX_com_badlogic_gdx_utils_Clipboard_getContents_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(1124);
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(1126);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut_boolean])(ctx, sp[0].o, (jint(1)));
	}
label_34:;
	{
	LINE_NUMBER(1132);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[7].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor);
	LINE_NUMBER(1135);
	switch((frame[2].i)) {
		case 3: goto label_37;
		case 21: goto label_38;
		case 22: goto label_39;
		case 123: goto label_40;
		default: goto label_41;
	}
	}
label_38:;
	{
	LINE_NUMBER(1137);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean])(ctx, sp[0].o, (jint(0)), (frame[5].i));
	LINE_NUMBER(1138);
	frame[3].i = (jint(1));
	LINE_NUMBER(1139);
	frame[6].i = (jint(1));
	LINE_NUMBER(1140);
	goto label_45;
	}
label_39:;
	{
	LINE_NUMBER(1142);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean])(ctx, sp[0].o, (jint(1)), (frame[5].i));
	LINE_NUMBER(1143);
	frame[3].i = (jint(1));
	LINE_NUMBER(1144);
	frame[6].i = (jint(1));
	LINE_NUMBER(1145);
	goto label_45;
	}
label_37:;
	{
	LINE_NUMBER(1147);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goHome_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goHome_boolean])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(1148);
	frame[6].i = (jint(1));
	LINE_NUMBER(1149);
	goto label_45;
	}
label_40:;
	{
	LINE_NUMBER(1151);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goEnd_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goEnd_boolean])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(1152);
	frame[6].i = (jint(1));
	LINE_NUMBER(1153);
	goto label_45;
	}
label_41:;
	LINE_NUMBER(1155);
	goto label_53;
label_45:;
	{
	LINE_NUMBER(1157);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection) != 0) goto label_54;
	}
	{
	LINE_NUMBER(1158);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionStart = (frame[7].i);
	LINE_NUMBER(1159);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection = (jint(1));
	}
label_54:;
	LINE_NUMBER(1161);
	goto label_53;
label_30:;
	{
	LINE_NUMBER(1164);
	switch((frame[2].i)) {
		case 3: goto label_57;
		case 21: goto label_58;
		case 22: goto label_59;
		case 123: goto label_60;
		default: goto label_53;
	}
	}
label_58:;
	{
	LINE_NUMBER(1166);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean])(ctx, sp[0].o, (jint(0)), (frame[5].i));
	LINE_NUMBER(1167);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection])(ctx, sp[0].o);
	LINE_NUMBER(1168);
	frame[3].i = (jint(1));
	LINE_NUMBER(1169);
	frame[6].i = (jint(1));
	LINE_NUMBER(1170);
	goto label_53;
	}
label_59:;
	{
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean])(ctx, sp[0].o, (jint(1)), (frame[5].i));
	LINE_NUMBER(1173);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection])(ctx, sp[0].o);
	LINE_NUMBER(1174);
	frame[3].i = (jint(1));
	LINE_NUMBER(1175);
	frame[6].i = (jint(1));
	LINE_NUMBER(1176);
	goto label_53;
	}
label_57:;
	{
	LINE_NUMBER(1178);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goHome_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goHome_boolean])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(1179);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection])(ctx, sp[0].o);
	LINE_NUMBER(1180);
	frame[6].i = (jint(1));
	LINE_NUMBER(1181);
	goto label_53;
	}
label_60:;
	{
	LINE_NUMBER(1183);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goEnd_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goEnd_boolean])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(1184);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection])(ctx, sp[0].o);
	LINE_NUMBER(1185);
	frame[6].i = (jint(1));
	}
label_53:;
	{
	LINE_NUMBER(1190);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_cursor;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_text;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	jint temp3 = (jint)SM_com_badlogic_gdx_math_MathUtils_clamp_int_int_int_R_int(ctx, temp0, temp1, temp2);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp3;
	LINE_NUMBER(1192);
	if ((frame[3].i) == 0) goto label_75;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_75:;
	{
	LINE_NUMBER(1193);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:scheduleKeyRepeatTask", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1197);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_isScheduled_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_isScheduled_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask *) NULL_CHECK(sp[0].o))->F_keycode) == (frame[1].i)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1198);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask *) NULL_CHECK(sp[0].o))->F_keycode = (frame[1].i);
	LINE_NUMBER(1199);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_cancel])(ctx, sp[0].o);
	LINE_NUMBER(1200);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task(ctx, sp[0].o, (clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx), (jfloat)SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_keyRepeatInitialTime), (clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx), (jfloat)SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_keyRepeatTime));
	}
label_2:;
	LINE_NUMBER(1202);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:keyUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1205);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_disabled) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1206);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_cancel])(ctx, sp[0].o);
	LINE_NUMBER(1207);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_checkFocusTraversal_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:checkFocusTraversal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1215);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_focusTraversal) == 0) goto label_1;
	}
	{
	if ((frame[1].i) == (9)) goto label_2;
	}
	{
	if ((frame[1].i) == (13)) goto label_3;
	}
	{
	if ((frame[1].i) != (10)) goto label_1;
	}
label_3:;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	(sp++)->i = SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isAndroid;
	if ((--sp)->i != 0) goto label_2;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	(sp++)->i = SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isIos;
	if ((--sp)->i == 0) goto label_1;
label_2:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener:keyTyped", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1220);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_disabled) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1223);
	switch((frame[2].i)) {
		case 8: goto label_2;
		case 9: goto label_2;
		case 10: goto label_2;
		case 11: goto label_3;
		case 12: goto label_3;
		case 13: goto label_2;
		default: goto label_3;
	}
	}
label_2:;
	LINE_NUMBER(1228);
	goto label_4;
label_3:;
	{
	LINE_NUMBER(1230);
	if ((frame[2].i) >= (32)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(1233);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_hasKeyboardFocus_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_hasKeyboardFocus_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(1235);
	if ((clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx), (jint)SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isMac) == 0) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (63));
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(1237);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_checkFocusTraversal_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_checkFocusTraversal_char_R_boolean])(ctx, (frame[0].o), (frame[2].i));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1238);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_shift_R_boolean(ctx);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_next_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_next_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1239);
	if ((frame[3].o) != nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyboard;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard_close) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard, INDEX_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard_close, sp[0].o))(ctx, sp[0].o);
	}
label_10:;
	LINE_NUMBER(1240);
	goto label_11;
label_7:;
	{
	LINE_NUMBER(1241);
	if ((frame[2].i) == (13)) goto label_12;
	}
	{
	if ((frame[2].i) != (10)) goto label_13;
	}
label_12:;
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(1242);
	if ((frame[2].i) != (127)) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1243);
	if ((frame[2].i) != (8)) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1244);
	if ((frame[3].i) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_writeEnters;
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_22:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_onlyFontChars) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, sp[0].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean])(ctx, sp[0].o, (frame[2].i));
	if (temp0 == 0) goto label_25;
	}
label_24:;
	INST_ICONST(1);
	goto label_23;
label_25:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1245);
	if ((frame[5].i) != 0) goto label_27;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_28;
label_27:;
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1246);
	if ((frame[6].i) != 0) goto label_31;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_11;
label_31:;
	{
	LINE_NUMBER(1247);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_text;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1248);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[9].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[10].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionStart);
	LINE_NUMBER(1249);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[11].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection);
	LINE_NUMBER(1250);
	if ((frame[7].i) == 0) goto label_36;
	}
	{
	LINE_NUMBER(1251);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection) == 0) goto label_38;
	}
	{
	LINE_NUMBER(1252);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int])(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	goto label_36;
	}
label_38:;
	{
	LINE_NUMBER(1254);
	if ((frame[5].i) == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor) <= 0) goto label_40;
	}
	{
	LINE_NUMBER(1255);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[2].o))->F_text;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, temp0, (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[3].o))->F_cursor) - (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[2].o))->F_text;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[3].o))->F_cursor;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[3].o))->F_cursor = (temp1 - (jint(1)));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, temp1);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(1256);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_renderOffset = (jfloat(0));
	}
label_40:;
	{
	LINE_NUMBER(1258);
	if ((frame[4].i) == 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_36;
	}
	{
	LINE_NUMBER(1259);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[2].o))->F_text;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, temp0, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[3].o))->F_cursor));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[2].o))->F_text;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[3].o))->F_cursor) + (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	}
label_36:;
	{
	LINE_NUMBER(1263);
	if ((frame[6].i) == 0) goto label_44;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_44;
	{
	LINE_NUMBER(1265);
	if ((frame[3].i) != 0) goto label_46;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_filter;
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_filter;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter, INDEX_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[2].i));
	if (temp0 != 0) goto label_46;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_46:;
	{
	LINE_NUMBER(1266);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(temp1))->F_hasSelection) == 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp0 - ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionStart)));
	sp[0].i = temp1;
	sp += 1;
	goto label_48;
	}
label_47:;
	INST_ICONST(0);
label_48:;
	{
	sp -= 3;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_withinMaxLength_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_withinMaxLength_int_R_boolean])(ctx, sp[0].o, (sp[1].i - sp[2].i));
	if (temp0 != 0) goto label_49;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_49:;
	{
	LINE_NUMBER(1267);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection) == 0) goto label_50;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int])(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	}
label_50:;
	{
	LINE_NUMBER(1268);
	if ((frame[3].i) == 0) goto label_51;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	goto label_52;
label_51:;
	INST_ILOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, sp[0].i);
	sp++;
label_52:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1269);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[2].o))->F_cursor;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[2].o))->F_cursor = (temp0 + (jint(1)));
	sp[2].o = frame[12].o;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[3].o))->F_text;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String])(ctx, sp[1].o, temp0, sp[2].o, sp[3].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	}
label_44:;
	{
	LINE_NUMBER(1271);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_text;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[8].o));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(1272);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[2].o))->F_text;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_55;
	}
	{
	LINE_NUMBER(1273);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$500_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo(ctx, sp[0].o);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_keyTyped_java_lang_String_int_boolean_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_keyTyped_java_lang_String_int_boolean_int])(ctx, sp[0].o, (frame[8].o), (frame[9].i), (frame[11].i), (frame[10].i));
	LINE_NUMBER(1274);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText])(ctx, sp[0].o);
	goto label_11;
	}
label_55:;
	{
	LINE_NUMBER(1276);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = (frame[9].i);
	LINE_NUMBER(1277);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection = (frame[11].i);
	LINE_NUMBER(1278);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionStart = (frame[10].i);
	}
label_11:;
	{
	LINE_NUMBER(1283);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_listener;
	if (sp[0].o == nullptr) goto label_60;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_listener;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener_keyTyped_com_badlogic_gdx_scenes_scene2d_ui_TextField_char) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener, INDEX_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener_keyTyped_com_badlogic_gdx_scenes_scene2d_ui_TextField_char, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[2].i));
	}
label_60:;
	{
	LINE_NUMBER(1284);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_cancel,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_setCursorPosition_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goHome_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goEnd_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_checkFocusTraversal_char_R_boolean,
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
	{ "setCursorPosition", "(FF)V" },
	{ "goHome", "(Z)V" },
	{ "goEnd", "(Z)V" },
	{ "scheduleKeyRepeatTask", "(I)V" },
	{ "checkFocusTraversal", "(C)Z" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_com_badlogic_gdx_scenes_scene2d_ui_TextField, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)V", 1 },
	{ "clicked", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)V", 1 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V", 1 },
	{ "setCursorPosition", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_setCursorPosition_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_setCursorPosition_float_float, "(FF)V", 4 },
	{ "goHome", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goHome_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goHome_boolean, "(Z)V", 4 },
	{ "goEnd", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goEnd_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_goEnd_boolean, "(Z)V", 4 },
	{ "keyDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z", 1 },
	{ "scheduleKeyRepeatTask", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_int, "(I)V", 4 },
	{ "keyUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z", 1 },
	{ "checkFocusTraversal", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_checkFocusTraversal_char_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_checkFocusTraversal_char_R_boolean, "(C)Z", 4 },
	{ "keyTyped", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;C)Z", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldClickListener",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_utils_ClickListener,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_TextField,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener);

}

