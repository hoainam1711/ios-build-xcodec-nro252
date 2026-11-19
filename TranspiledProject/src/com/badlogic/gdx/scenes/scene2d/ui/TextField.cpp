#include "com/badlogic/gdx/scenes/scene2d/ui/TextField.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_OnscreenKeyboard.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/utils/Timer_Task.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_Undo.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_KeyRepeatTask.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldListener.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Widget.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldClickListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_DefaultOnscreenKeyboard.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldFilter.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Clipboard.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_1.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ChangeListener_ChangeEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/utils/PoolManager.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "com/badlogic/gdx/utils/FloatArray.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/utils/SnapshotArray.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Disableable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_UndoState.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/Input_OnscreenKeyboardType.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/utils/Timer.h"

extern "C" {

jchar SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_BACKSPACE;
jchar SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_CARRIAGE_RETURN;
jchar SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_NEWLINE;
jchar SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_TAB;
jchar SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_DELETE;
jchar SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_BULLET;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_DEFAULT_ONSCREEN_KEYBOARD;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp1;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp2;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp3;
jfloat SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_keyRepeatInitialTime;
jfloat SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_keyRepeatTime;
jint SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_undoMax;

void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_DEFAULT_ONSCREEN_KEYBOARD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_DEFAULT_ONSCREEN_KEYBOARD)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_DEFAULT_ONSCREEN_KEYBOARD, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp1)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp1, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp2, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp3)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp3, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_Widget(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextField *) object;
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_layout)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_layout)->clazz)->markFunction)((jobject) self->F_layout, mark, depth + 1);
	if (self->F_glyphPositions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glyphPositions)->clazz)->markFunction)((jobject) self->F_glyphPositions, mark, depth + 1);
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_messageText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messageText)->clazz)->markFunction)((jobject) self->F_messageText, mark, depth + 1);
	if (self->F_displayText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_displayText)->clazz)->markFunction)((jobject) self->F_displayText, mark, depth + 1);
	if (self->F_clipboard)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clipboard)->clazz)->markFunction)((jobject) self->F_clipboard, mark, depth + 1);
	if (self->F_inputListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputListener)->clazz)->markFunction)((jobject) self->F_inputListener, mark, depth + 1);
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
	if (self->F_filter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filter)->clazz)->markFunction)((jobject) self->F_filter, mark, depth + 1);
	if (self->F_keyboard)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyboard)->clazz)->markFunction)((jobject) self->F_keyboard, mark, depth + 1);
	if (self->F_undo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_undo)->clazz)->markFunction)((jobject) self->F_undo, mark, depth + 1);
	if (self->F_passwordBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_passwordBuffer)->clazz)->markFunction)((jobject) self->F_passwordBuffer, mark, depth + 1);
	if (self->F_autocompleteOptions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_autocompleteOptions)->clazz)->markFunction)((jobject) self->F_autocompleteOptions, mark, depth + 1);
	if (self->F_keyboardType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyboardType)->clazz)->markFunction)((jobject) self->F_keyboardType, mark, depth + 1);
	if (self->F_blinkTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blinkTask)->clazz)->markFunction)((jobject) self->F_blinkTask, mark, depth + 1);
	if (self->F_keyRepeatTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyRepeatTask)->clazz)->markFunction)((jobject) self->F_keyRepeatTask, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_TextField_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, sp[2].o)));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_TextField_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, sp[2].o)));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(147);
	init_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx, (frame[0].o));
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout);
	init_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_layout = (jref) sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_FloatArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_FloatArray);
	init_com_badlogic_gdx_utils_FloatArray(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_glyphPositions = (jref) sp[1].o;
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_DEFAULT_ONSCREEN_KEYBOARD;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyboard = (jref) sp[1].o;
	LINE_NUMBER(105);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_focusTraversal = (jint(1));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_onlyFontChars = (jint(1));
	LINE_NUMBER(106);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHAlign = (8);
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_int(ctx, sp[1].o, (clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx), (jint)SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_undoMax));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_undo = (jref) sp[1].o;
	LINE_NUMBER(112);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordCharacter = (8226);
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyboardType = (jref) sp[1].o;
	LINE_NUMBER(124);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_blinkTime = (jfloat(0.32f));
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextField$1_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_blinkTask = (jref) sp[1].o;
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask = (jref) sp[1].o;
	LINE_NUMBER(148);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Application_getClipboard_R_com_badlogic_gdx_utils_Clipboard) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getClipboard_R_com_badlogic_gdx_utils_Clipboard, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_clipboard = (jref) sp[1].o;
	LINE_NUMBER(150);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_initialize) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_initialize])(ctx, (frame[0].o));
	LINE_NUMBER(151);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setText_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_initialize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:initialize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_createInputListener_R_com_badlogic_gdx_scenes_scene2d_InputListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_createInputListener_R_com_badlogic_gdx_scenes_scene2d_InputListener])(ctx, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[1].o))->F_inputListener = (jref) sp[2].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_createInputListener_R_com_badlogic_gdx_scenes_scene2d_InputListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:createInputListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_TextField_letterUnderCursor_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:letterUnderCursor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(164);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, sp[0].o);
	jfloat temp2 = temp1 - ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_cursorX);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart));
	frame[1].f = (temp0 - (temp2 - temp3));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(166);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = (temp0 - temp1);
	}
label_3:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(168);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(169);
	frame[5].i = (jint(1));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(170);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))), (frame[1].f), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(171);
	if ((floatCompare((((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))) - (frame[1].f)), ((frame[1].f) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((frame[5].i) - (jint(1)))))), 1)) > 0) goto label_11;
	}
	INST_ILOAD(5);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return ((frame[5].i) - (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(169);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return ((frame[3].i) - (jint(1)));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField_isWordCharacter_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:isWordCharacter", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)SM_java_lang_Character_isLetterOrDigit_char_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_int_R_Array1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:wordUnderCursor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	frame[2].o = sp[0].o;
	LINE_NUMBER(184);
	frame[3].i = (frame[1].i);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[4].i = temp0;
	frame[5].i = (jint(0));
	frame[6].i = (frame[3].i);
	LINE_NUMBER(185);
	jint temp1 = frame[1].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp1 < temp2) goto label_6;
	}
	{
	LINE_NUMBER(186);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(187);
	frame[4].i = (jint(0));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(189);
	if ((frame[6].i) >= (frame[4].i)) goto label_10;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[6].i));
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_isWordCharacter_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_isWordCharacter_char_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_12;
	}
	{
	LINE_NUMBER(191);
	frame[4].i = (frame[6].i);
	LINE_NUMBER(192);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(189);
	INST_IINC(6, 1);
	goto label_6;
	}
label_10:;
	{
	LINE_NUMBER(195);
	frame[6].i = ((frame[3].i) - (jint(1)));
	}
label_15:;
	{
	if ((frame[6].i) <= (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[6].i));
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_isWordCharacter_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_isWordCharacter_char_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_17;
	}
	{
	LINE_NUMBER(197);
	frame[5].i = ((frame[6].i) + (jint(1)));
	LINE_NUMBER(198);
	goto label_9;
	}
label_17:;
	{
	LINE_NUMBER(195);
	INST_IINC(6, -1);
	goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[5].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (frame[4].i);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_float_R_Array1_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:wordUnderCursor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_letterUnderCursor_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_letterUnderCursor_float_R_int])(ctx, (frame[0].o), (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_int_R_Array1_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField_withinMaxLength_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:withinMaxLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(210);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength) <= 0) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength)) goto label_2;
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

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setMaxLength_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setMaxLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(214);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength = (frame[1].i);
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getMaxLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getMaxLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setAutocompleteOptions_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setAutocompleteOptions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(224);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_autocompleteOptions = (jref) (frame[1].o);
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setKeyboardType_com_badlogic_gdx_Input$OnscreenKeyboardType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setKeyboardType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_keyboardType = (jref) (frame[1].o);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPreventAutoCorrection_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setPreventAutoCorrection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(235);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_preventAutoCorrection = (frame[1].i);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setOnlyFontChars_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setOnlyFontChars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(242);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_onlyFontChars = (frame[1].i);
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setStyle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(247);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_font;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_font;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_textHeight = (temp0 - (temp1 * (jfloat(2))));
	LINE_NUMBER(250);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText])(ctx, sp[0].o);
label_4:;
	{
	LINE_NUMBER(251);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_calculateOffsets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:calculateOffsets", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getWidth_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(262);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(263);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[1].f = (temp0 - (temp1 + temp2));
	}
label_3:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(266);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_clamp_int_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), (jint(0)), ((frame[3].i) - (jint(1))));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	LINE_NUMBER(270);
	sp[0].o = frame[4].o;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(1))));
	frame[5].f = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp1)) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset));
	LINE_NUMBER(271);
	if ((floatCompare((frame[5].f), (jfloat(0)), 1)) > 0) goto label_8;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_renderOffset = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_renderOffset) - (frame[5].f));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(274);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[3].i) - (jint(1))), (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor) + (jint(1))));
	frame[6].i = temp0;
	LINE_NUMBER(275);
	frame[7].f = (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[6].i))) - (frame[1].f));
	LINE_NUMBER(276);
	if ((floatCompare((-((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset)), (frame[7].f), 1)) >= 0) goto label_10;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset = (-(frame[7].f));
	}
label_10:;
	{
	LINE_NUMBER(280);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(281);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((frame[3].i) - (jint(1)))));
	LINE_NUMBER(282);
	frame[8].i = ((frame[3].i) - (jint(2)));
	}
label_15:;
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_16;
	{
	LINE_NUMBER(283);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[8].i)));
	LINE_NUMBER(284);
	if ((floatCompare(((frame[7].f) - (frame[9].f)), (frame[1].f), -1)) <= 0) goto label_19;
	}
	goto label_16;
label_19:;
	{
	LINE_NUMBER(285);
	frame[6].f = (frame[9].f);
	LINE_NUMBER(282);
	INST_IINC(8, -1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(287);
	if ((floatCompare((-((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset)), (frame[6].f), -1)) <= 0) goto label_21;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset = (-(frame[6].f));
	}
label_21:;
	{
	LINE_NUMBER(290);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart = (jint(0));
	LINE_NUMBER(291);
	frame[8].f = (jfloat(0));
	LINE_NUMBER(292);
	frame[9].i = (jint(0));
	}
label_24:;
	{
	if ((frame[9].i) >= (frame[3].i)) goto label_25;
	}
	{
	LINE_NUMBER(293);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[9].i))), (-((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset)), -1)) < 0) goto label_27;
	}
	{
	LINE_NUMBER(294);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart = (frame[9].i);
	LINE_NUMBER(295);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[9].i)));
	LINE_NUMBER(296);
	goto label_25;
	}
label_27:;
	{
	LINE_NUMBER(292);
	INST_IINC(9, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(301);
	frame[9].i = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart) + (jint(1)));
	LINE_NUMBER(302);
	frame[10].f = ((frame[1].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset));
	LINE_NUMBER(303);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_displayText;
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (frame[3].i));
	frame[11].i = temp1;
	}
label_33:;
	{
	if ((frame[9].i) > (frame[11].i)) goto label_34;
	}
	{
	LINE_NUMBER(304);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[9].i))), (frame[10].f), -1)) <= 0) goto label_36;
	}
	goto label_34;
label_36:;
	{
	LINE_NUMBER(303);
	INST_IINC(9, 1);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[9].i) - (jint(1))));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_visibleTextEnd = temp0;
	LINE_NUMBER(307);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHAlign) & (8)) != 0) goto label_38;
	}
	{
	LINE_NUMBER(308);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset = ((((frame[1].f) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextEnd)))) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset)) + (frame[8].f));
	LINE_NUMBER(309);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHAlign) & (jint(1))) == 0) goto label_41;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset) * (jfloat(0.5f))));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_textOffset = (jfloat(temp0));
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(311);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset = ((frame[8].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset));
	}
label_41:;
	{
	LINE_NUMBER(314);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_42;
	}
	{
	LINE_NUMBER(315);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	frame[11].i = temp0;
	LINE_NUMBER(316);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	frame[12].i = temp1;
	LINE_NUMBER(317);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[11].i))) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart)))), (-((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset)));
	frame[13].f = temp2;
	LINE_NUMBER(318);
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[12].i))) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart)))), ((frame[1].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset)));
	frame[14].f = temp3;
	LINE_NUMBER(319);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionX = (frame[13].f);
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	jfloat temp4 = (frame[14].f) - (frame[13].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[1].o))->F_font;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionWidth = (temp4 - ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[1].o))->F_cursorX));
	}
label_42:;
	LINE_NUMBER(322);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getBackgroundDrawable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(325);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_hasKeyboardFocus_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_hasKeyboardFocus_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:draw", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(331);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_hasKeyboardFocus_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_hasKeyboardFocus_R_boolean])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(332);
	if ((frame[3].i) != ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_focused)) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_3;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_blinkTask;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Timer$Task_isScheduled_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_isScheduled_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(333);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_focused = (frame[3].i);
	LINE_NUMBER(334);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_blinkTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(335);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursorOn = (frame[3].i);
	LINE_NUMBER(336);
	if ((frame[3].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_blinkTask;
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_blinkTime), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_blinkTime));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_keyRepeatTask;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_cancel])(ctx, sp[0].o);
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(340);
	if ((frame[3].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(341);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursorOn = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[4].o = sp[0].o;
	LINE_NUMBER(344);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledFontColor;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledFontColor;
	sp += 1;
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(345);
	if ((frame[3].i) == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedFontColor;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedFontColor;
	sp += 1;
	goto label_13;
	}
label_14:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_fontColor;
	sp += 1;
	}
label_13:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(346);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_selection;
	frame[6].o = sp[0].o;
	LINE_NUMBER(347);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_cursor;
	frame[7].o = sp[0].o;
	LINE_NUMBER(348);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(351);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getX_R_float])(ctx, (frame[0].o));
	frame[10].f = temp0;
	LINE_NUMBER(352);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getY_R_float])(ctx, (frame[0].o));
	frame[11].f = temp1;
	LINE_NUMBER(353);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getWidth_R_float])(ctx, (frame[0].o));
	frame[12].f = temp2;
	LINE_NUMBER(354);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getHeight_R_float])(ctx, (frame[0].o));
	frame[13].f = temp3;
	LINE_NUMBER(356);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(357);
	frame[14].f = (jfloat(0));
	frame[15].f = (jfloat(0));
	LINE_NUMBER(358);
	if ((frame[8].o) == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(359);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float])(ctx, (frame[0].o), (frame[8].o), (frame[1].o), (frame[10].f), (frame[11].f), (frame[12].f), (frame[13].f));
	LINE_NUMBER(360);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[8].o)))(ctx, (frame[8].o));
	frame[14].f = temp0;
	LINE_NUMBER(361);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[8].o)))(ctx, (frame[8].o));
	frame[15].f = temp1;
	}
label_27:;
	{
	LINE_NUMBER(364);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getTextY_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getTextY_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_float])(ctx, (frame[0].o), (frame[4].o), (frame[8].o));
	frame[16].f = temp0;
	LINE_NUMBER(365);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_calculateOffsets) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_calculateOffsets])(ctx, (frame[0].o));
	LINE_NUMBER(367);
	if ((frame[3].i) == 0) goto label_33;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_33;
	}
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_33;
	{
	LINE_NUMBER(368);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawSelection_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawSelection_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float])(ctx, (frame[0].o), (frame[6].o), (frame[1].o), (frame[4].o), ((frame[10].f) + (frame[14].f)), ((frame[11].f) + (frame[16].f)));
	}
label_33:;
	{
	LINE_NUMBER(371);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_35;
	}
	{
	jfloat temp0 = -((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight);
	sp[0].f = temp0;
	sp += 1;
	goto label_36;
	}
label_35:;
	INST_FCONST(0);
label_36:;
	{
	sp -= 1;
	frame[17].f = sp[0].f;
	LINE_NUMBER(372);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_displayText;
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_38;
	}
	{
	LINE_NUMBER(373);
	if ((frame[3].i) == 0) goto label_40;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_41;
	}
label_40:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_messageText;
	if (sp[0].o == nullptr) goto label_41;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_messageFont;
	if (sp[0].o == nullptr) goto label_43;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_messageFont;
	sp += 1;
	goto label_44;
	}
label_43:;
	INST_ALOAD(4);
label_44:;
	{
	sp -= 1;
	frame[18].o = sp[0].o;
	LINE_NUMBER(375);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_messageFontColor;
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = frame[18].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[1].o))->F_messageFontColor;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[1].o))->F_r;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[1].o))->F_messageFontColor;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[1].o))->F_g;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[1].o))->F_messageFontColor;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[1].o))->F_b;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[1].o))->F_messageFontColor;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float])(ctx, sp[0].o, temp0, temp1, temp2, ((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[1].o))->F_a) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_a)) * (frame[2].f)));
	goto label_48;
	}
label_46:;
	{
	LINE_NUMBER(379);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float])(ctx, (frame[18].o), (jfloat(0.7f)), (jfloat(0.7f)), (jfloat(0.7f)), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_a) * (frame[2].f)));
	}
label_48:;
	{
	LINE_NUMBER(380);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawMessageText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawMessageText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[18].o), ((frame[10].f) + (frame[14].f)), (((frame[11].f) + (frame[16].f)) + (frame[17].f)), (((frame[12].f) - (frame[14].f)) - (frame[15].f)));
	LINE_NUMBER(381);
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[4].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(384);
	frame[19].i = ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[18].o)))->F_markupEnabled);
	LINE_NUMBER(385);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[18].o)))->F_markupEnabled = (jint(0));
	LINE_NUMBER(386);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float])(ctx, (frame[4].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_b), ((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_a) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_a)) * (frame[2].f)));
	LINE_NUMBER(387);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[4].o), ((frame[10].f) + (frame[14].f)), (((frame[11].f) + (frame[16].f)) + (frame[17].f)));
	LINE_NUMBER(388);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[18].o)))->F_markupEnabled = (frame[19].i);
	}
label_41:;
	{
	LINE_NUMBER(390);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_disabled) != 0) goto label_55;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursorOn) == 0) goto label_55;
	}
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_55;
	{
	LINE_NUMBER(391);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawCursor_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawCursor_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float])(ctx, (frame[0].o), (frame[7].o), (frame[1].o), (frame[4].o), ((frame[10].f) + (frame[14].f)), ((frame[11].f) + (frame[16].f)));
	}
label_55:;
	LINE_NUMBER(393);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getTextY_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getTextY", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(396);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getHeight_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(397);
	jfloat temp1 = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight) / (jfloat(2));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float])(ctx, (frame[1].o));
	frame[4].f = (temp1 + temp2);
	LINE_NUMBER(398);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(399);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[5].f = temp0;
	LINE_NUMBER(400);
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].f = ((temp1 + (((temp2 - temp3) - (frame[5].f)) / (jfloat(2)))) + (frame[5].f));
	LINE_NUMBER(401);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(402);
	frame[4].f = ((frame[4].f) + ((frame[3].f) / (jfloat(2))));
	}
label_7:;
	{
	LINE_NUMBER(404);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_usesIntegerPositions_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	frame[4].f = (jfloat((jint((frame[4].f)))));
	}
label_8:;
	{
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return (frame[4].f);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:drawBackground", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(409);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawSelection_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:drawSelection", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(414);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp0 = (((frame[4].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset)) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionX)) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset);
	jfloat temp1 = (frame[5].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float])(ctx, (frame[3].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, (temp1 - temp2), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionWidth), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight));
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:drawText", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(419);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_displayText;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[3].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset)), (frame[4].f), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextEnd), (jfloat(0)), (8), (jint(0)));
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawMessageText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:drawMessageText", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(423);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_messageText;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jint temp2 = jint(0);
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_messageText;
	jint temp3 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[3].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, temp3, (frame[5].f), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHAlign), (jint(0)), (((jobject) createStringLiteral(ctx, u8"..."_j))));
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawCursor_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:drawCursor", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(427);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp0 = (frame[4].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jint temp1 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor;
	LINE_NUMBER(428);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[2].o, temp1);
	jfloat temp3 = temp0 + temp2;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[2].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart));
	jfloat temp5 = (temp3 - temp4) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset);
	sp[2].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[3].o));
	jfloat temp6 = temp5 + ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[2].o))->F_cursorX);
	jfloat temp7 = (frame[5].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight);
	sp[2].o = frame[3].o;
	LINE_NUMBER(429);
	jfloat temp8 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float])(ctx, sp[2].o);
	jfloat temp9 = temp7 - temp8;
	jfloat temp10 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp11 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight;
	LINE_NUMBER(427);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp6, temp9, temp10, temp11);
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:updateDisplayText", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[1].o = sp[0].o;
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(435);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	frame[3].o = sp[0].o;
	LINE_NUMBER(436);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(438);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(439);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(440);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(441);
	sp[0].o = frame[5].o;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean])(ctx, (frame[2].o), (frame[7].i));
	sp += 1;
	if (temp1 == 0) goto label_10;
	}
	INST_ILOAD(7);
	goto label_11;
label_10:;
	INST_BIPUSH(32);
label_11:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(439);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(445);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode) == 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean])(ctx, (frame[2].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordCharacter));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	init_java_lang_StringBuilder_int(ctx, sp[1].o, temp0);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_passwordBuffer = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	if (temp0 <= (frame[4].i)) goto label_17;
	}
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (frame[4].i));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	frame[7].i = temp0;
	}
label_20:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_19;
	}
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordCharacter));
	LINE_NUMBER(450);
	INST_IINC(7, 1);
	goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_displayText = (jref) sp[1].o;
	goto label_23;
	}
label_14:;
	{
	LINE_NUMBER(455);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_displayText = (jref) (frame[6].o);
	}
label_23:;
	{
	LINE_NUMBER(457);
	frame[7].i = ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_markupEnabled);
	LINE_NUMBER(458);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_markupEnabled = (jint(0));
	LINE_NUMBER(459);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_layout;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_displayText;
	sp[2].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[2].o, (13), (32));
	sp[2].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[2].o, (10), (32));
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(460);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_markupEnabled = (frame[7].i);
	LINE_NUMBER(462);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	((func_com_badlogic_gdx_utils_FloatArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(463);
	frame[8].f = (jfloat(0));
	LINE_NUMBER(464);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_layout;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_layout;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[9].o)))->F_xAdvances;
	frame[10].o = sp[0].o;
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_first_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_first_R_float])(ctx, (frame[10].o));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_fontOffset = temp0;
	LINE_NUMBER(468);
	frame[11].i = (jint(1));
	frame[12].i = ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[10].o)))->F_size);
	}
label_36:;
	{
	if ((frame[11].i) >= (frame[12].i)) goto label_37;
	}
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(470);
	jfloat temp0 = frame[8].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, (frame[10].o), (frame[11].i));
	frame[8].f = (temp0 + temp1);
	LINE_NUMBER(468);
	INST_IINC(11, 1);
	goto label_36;
	}
label_37:;
	LINE_NUMBER(472);
	goto label_41;
label_30:;
	{
	LINE_NUMBER(473);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset = (jfloat(0));
	}
label_41:;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_visibleTextStart = temp1;
	LINE_NUMBER(477);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextEnd;
	jint temp3 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jint temp4 = (jint)SM_com_badlogic_gdx_math_MathUtils_clamp_int_int_int_R_int(ctx, temp2, temp3, (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_visibleTextEnd = temp4;
	LINE_NUMBER(479);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor) <= (frame[4].i)) goto label_45;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor = (frame[4].i);
	}
label_45:;
	{
	LINE_NUMBER(480);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart) <= (frame[4].i)) goto label_46;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart = (frame[4].i);
	}
label_46:;
	{
	LINE_NUMBER(481);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart) != ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor)) goto label_47;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection = (jint(0));
	}
label_47:;
	LINE_NUMBER(482);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_copy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(486);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode) != 0) goto label_1;
	}
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_clipboard;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, temp1);
	((func_com_badlogic_gdx_utils_Clipboard_setContents_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Clipboard, INDEX_com_badlogic_gdx_utils_Clipboard_setContents_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(489);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:cut", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(494);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut_boolean])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents));
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:cut", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(498);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode) != 0) goto label_1;
	}
	{
	LINE_NUMBER(499);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_copy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_copy])(ctx, (frame[0].o));
	LINE_NUMBER(500);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	frame[2].o = sp[0].o;
	LINE_NUMBER(501);
	frame[3].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor);
	frame[4].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart);
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int])(ctx, (frame[0].o), (frame[1].i));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	LINE_NUMBER(503);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp1 != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_undo;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int])(ctx, sp[0].o, (frame[2].o), (frame[3].i), (jint(1)), (frame[4].i));
	}
label_8:;
	{
	LINE_NUMBER(504);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(506);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:paste", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(509);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(510);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(511);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(512);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_4;
	}
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor) - ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart)));
	frame[4].i = (temp0 - temp1);
	}
label_4:;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(514);
	frame[6].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[7].i = temp0;
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_8;
	}
	{
	LINE_NUMBER(515);
	sp[0].o = frame[0].o;
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[3].o));
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_withinMaxLength_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_withinMaxLength_int_R_boolean])(ctx, sp[0].o, (temp0 + temp1));
	if (temp2 != 0) goto label_10;
	}
	goto label_8;
label_10:;
	{
	LINE_NUMBER(516);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[6].i));
	frame[8].i = temp0;
	LINE_NUMBER(517);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_writeEnters) == 0) goto label_12;
	}
	{
	if ((frame[8].i) == (10)) goto label_13;
	}
	{
	if ((frame[8].i) == (13)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(518);
	if ((frame[8].i) == (13)) goto label_14;
	}
	{
	if ((frame[8].i) != (10)) goto label_15;
	}
	goto label_14;
label_15:;
	{
	LINE_NUMBER(519);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_onlyFontChars) == 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean])(ctx, (frame[5].o), (frame[8].i));
	if (temp0 != 0) goto label_16;
	}
	goto label_14;
label_16:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_filter;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_filter;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter, INDEX_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[8].i));
	if (temp0 != 0) goto label_13;
	}
	goto label_14;
label_13:;
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[8].i));
	}
label_14:;
	{
	LINE_NUMBER(514);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(524);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(526);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	frame[6].o = sp[0].o;
	LINE_NUMBER(527);
	frame[7].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor);
	frame[8].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart);
	LINE_NUMBER(528);
	frame[9].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection);
	LINE_NUMBER(529);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_22;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int])(ctx, (frame[0].o), (frame[2].i));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	}
label_22:;
	{
	LINE_NUMBER(530);
	if ((frame[2].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(531);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String])(ctx, sp[2].o, temp0, sp[3].o, sp[4].o);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp1 != 0) goto label_25;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_23:;
	{
	LINE_NUMBER(533);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String])(ctx, sp[1].o, temp0, sp[2].o, sp[3].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	}
label_25:;
	{
	LINE_NUMBER(534);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_undo;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int])(ctx, sp[0].o, (frame[6].o), (frame[7].i), (frame[9].i), (frame[8].i));
	LINE_NUMBER(535);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = (temp0 + temp1);
	LINE_NUMBER(536);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText])(ctx, (frame[0].o));
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(540);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(541);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[3].o), (jint(0)), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[1].o = frame[3].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, temp1);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:delete", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(545);
	frame[2].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart);
	LINE_NUMBER(546);
	frame[3].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(547);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[2].i), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(548);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[2].i), (frame[3].i));
	frame[5].i = temp1;
	LINE_NUMBER(549);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp += 1;
	if ((frame[4].i) <= 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (jint(0)), (frame[4].i));
	sp += 1;
	goto label_6;
	}
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(550);
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp += 1;
	if (temp0 >= temp1) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_9;
	}
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(551);
	if ((frame[1].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(552);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[6].o));
	if (temp0 != 0) goto label_13;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(554);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[6].o);
	}
label_13:;
	{
	LINE_NUMBER(555);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection])(ctx, (frame[0].o));
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:undo", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(561);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo_boolean])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents));
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:undo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_undo;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canUndo_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canUndo_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_undo;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_undo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_undo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState])(ctx, sp[0].o, sp[1].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	frame[2].o = sp[0].o;
	LINE_NUMBER(567);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(568);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[2].o)))->F_text;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_undo;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelUndo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelUndo])(ctx, sp[0].o);
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(573);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[2].o)))->F_text;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(574);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[2].o)))->F_cursor);
	LINE_NUMBER(575);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[2].o)))->F_hasSelection);
	LINE_NUMBER(576);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[2].o)))->F_selectionStart);
	LINE_NUMBER(577);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText])(ctx, (frame[0].o));
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:redo", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(582);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo_boolean])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents));
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:redo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_undo;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canRedo_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canRedo_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_undo;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_redo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_redo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState])(ctx, sp[0].o, sp[1].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	frame[2].o = sp[0].o;
	LINE_NUMBER(588);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(589);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[2].o)))->F_text;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_undo;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelRedo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelRedo])(ctx, sp[0].o);
	LINE_NUMBER(591);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(594);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[2].o)))->F_text;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(595);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[2].o)))->F_cursor);
	LINE_NUMBER(596);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[2].o)))->F_hasSelection);
	LINE_NUMBER(597);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[2].o)))->F_selectionStart);
	LINE_NUMBER(598);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText])(ctx, (frame[0].o));
	LINE_NUMBER(599);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_next_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:next", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(607);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(608);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(609);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getParent_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getParent_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[3].o));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp2;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getX_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getX_R_float])(ctx, (frame[3].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getY_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getY_R_float])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, temp0, temp1);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(610);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp1;
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(612);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getActors_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getActors_R_com_badlogic_gdx_utils_Array])(ctx, (frame[2].o));
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_TextField_findNextTextField_com_badlogic_gdx_utils_Array_com_badlogic_gdx_scenes_scene2d_ui_TextField_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (frame[5].o), (frame[4].o), (frame[1].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(613);
	if ((frame[6].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(614);
	if ((frame[1].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[4].o), (jfloat(-3.402823e+38f)), (jfloat(-3.402823e+38f)));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[4].o), (jfloat(3.402823e+38f)), (jfloat(3.402823e+38f)));
	}
label_11:;
	{
	LINE_NUMBER(618);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getActors_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getActors_R_com_badlogic_gdx_utils_Array])(ctx, (frame[2].o));
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_TextField_findNextTextField_com_badlogic_gdx_utils_Array_com_badlogic_gdx_scenes_scene2d_ui_TextField_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (frame[5].o), (frame[4].o), (frame[1].i));
	frame[6].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(620);
	if ((frame[6].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_12:;
	{
	LINE_NUMBER(623);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, (frame[2].o), (frame[6].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(624);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_selectAll) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_selectAll])(ctx, (frame[6].o));
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_14:;
	{
	LINE_NUMBER(627);
	frame[3].o = (frame[6].o);
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(629);
	goto label_5;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_findNextTextField_com_badlogic_gdx_utils_Array_com_badlogic_gdx_scenes_scene2d_ui_TextField_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:findNextTextField", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(635);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_3;
	}
	{
	LINE_NUMBER(636);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	frame[8].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, sp[0].o));
	LINE_NUMBER(637);
	if ((isInstance(ctx, (frame[8].o), &class_com_badlogic_gdx_scenes_scene2d_ui_TextField)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(638);
	if ((frame[8].o) != (frame[0].o)) goto label_8;
	}
	goto label_9;
label_8:;
	{
	LINE_NUMBER(639);
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField, (frame[8].o)));
	LINE_NUMBER(640);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_isDisabled_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_9;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[9].o)))->F_focusTraversal) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_ascendantsVisible_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_ascendantsVisible_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_11;
	}
	goto label_9;
label_11:;
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[8].o));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp3;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float])(ctx, (frame[8].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float])(ctx, (frame[8].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, temp0, temp1);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(642);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[10].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_y), -1)) == 0) goto label_13;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[10].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_y), 1)) >= 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	if ((sp[0].i ^ (frame[5].i)) == 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_16;
label_13:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(643);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[10].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_y), -1)) != 0) goto label_18;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[10].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_x), -1)) <= 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 1;
	if ((sp[0].i ^ (frame[5].i)) == 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_21;
label_18:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(644);
	if ((frame[11].i) != 0) goto label_23;
	}
	INST_ILOAD(12);
	if ((--sp)->i != 0) goto label_23;
	goto label_9;
label_23:;
	{
	LINE_NUMBER(645);
	if ((frame[2].o) == nullptr) goto label_24;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[10].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y), -1)) == 0) goto label_25;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[10].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y), -1)) <= 0) goto label_26;
	}
	INST_ICONST(1);
	goto label_27;
label_26:;
	INST_ICONST(0);
label_27:;
	{
	sp -= 1;
	if ((sp[0].i ^ (frame[5].i)) == 0) goto label_25;
	}
label_24:;
	INST_ICONST(1);
	goto label_28;
label_25:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	frame[13].i = sp[0].i;
	LINE_NUMBER(646);
	if ((frame[13].i) != 0) goto label_30;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[10].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y), -1)) != 0) goto label_31;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[10].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x), 1)) >= 0) goto label_32;
	}
	INST_ICONST(1);
	goto label_33;
label_32:;
	INST_ICONST(0);
label_33:;
	{
	sp -= 1;
	if ((sp[0].i ^ (frame[5].i)) == 0) goto label_31;
	}
	INST_ICONST(1);
	goto label_34;
label_31:;
	INST_ICONST(0);
label_34:;
	INST_ISTORE(13);
label_30:;
	{
	LINE_NUMBER(647);
	if ((frame[13].i) == 0) goto label_35;
	}
	{
	LINE_NUMBER(648);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField, (frame[8].o)));
	LINE_NUMBER(649);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[3].o), (frame[10].o));
	}
label_35:;
	LINE_NUMBER(651);
	goto label_9;
label_6:;
	{
	if ((isInstance(ctx, (frame[8].o), &class_com_badlogic_gdx_scenes_scene2d_Group)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(652);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_getChildren_R_com_badlogic_gdx_utils_SnapshotArray) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, (frame[8].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getChildren_R_com_badlogic_gdx_utils_SnapshotArray])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, (frame[8].o))));
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_TextField_findNextTextField_com_badlogic_gdx_utils_Array_com_badlogic_gdx_scenes_scene2d_ui_TextField_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].i));
	frame[2].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(635);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getDefaultInputListener_R_com_badlogic_gdx_scenes_scene2d_InputListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getDefaultInputListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_inputListener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setTextFieldListener_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setTextFieldListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(663);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(664);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setTextFieldFilter_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setTextFieldFilter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(668);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_filter = (jref) (frame[1].o);
	LINE_NUMBER(669);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getTextFieldFilter_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getTextFieldFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(672);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_filter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setFocusTraversal_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setFocusTraversal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(677);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_focusTraversal = (frame[1].i);
	LINE_NUMBER(678);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getFocusTraversal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getFocusTraversal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_focusTraversal);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getMessageText_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getMessageText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(686);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_messageText;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setMessageText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setMessageText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(692);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_messageText = (jref) (frame[1].o);
	LINE_NUMBER(693);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_appendText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:appendText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(697);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(1);
label_1:;
	{
	LINE_NUMBER(699);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection])(ctx, (frame[0].o));
	LINE_NUMBER(700);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	LINE_NUMBER(701);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents));
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setText", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(706);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(1);
label_1:;
	{
	LINE_NUMBER(707);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(709);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection])(ctx, (frame[0].o));
	LINE_NUMBER(710);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	frame[2].o = sp[0].o;
	LINE_NUMBER(711);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(712);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(713);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_7:;
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_undo;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_clear])(ctx, sp[0].o);
	LINE_NUMBER(715);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor = (jint(0));
	LINE_NUMBER(716);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getText_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:changeText", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(725);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(726);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[2].o);
	LINE_NUMBER(727);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent)));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent, sp[0].o));
	LINE_NUMBER(728);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(729);
	if ((frame[4].i) == 0) goto label_5;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	}
label_5:;
	{
	LINE_NUMBER(730);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(731);
	if ((frame[4].i) != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setProgrammaticChangeEvents_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setProgrammaticChangeEvents", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(737);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents = (frame[1].i);
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getProgrammaticChangeEvents_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getProgrammaticChangeEvents", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(741);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getSelectionStart_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getSelectionStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(745);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getSelection_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getSelection", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(749);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSelection_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setSelection", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(754);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"selectionStart must be >= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(755);
	if ((frame[2].i) >= 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"selectionEnd must be >= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (frame[1].i));
	frame[1].i = temp1;
	LINE_NUMBER(757);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, (frame[2].i));
	frame[2].i = temp3;
	LINE_NUMBER(758);
	if ((frame[2].i) != (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(759);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection])(ctx, (frame[0].o));
	LINE_NUMBER(760);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(762);
	if ((frame[2].i) >= (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(763);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(764);
	frame[2].i = (frame[1].i);
	LINE_NUMBER(765);
	frame[1].i = (frame[3].i);
	}
label_8:;
	{
	LINE_NUMBER(768);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection = (jint(1));
	LINE_NUMBER(769);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart = (frame[1].i);
	LINE_NUMBER(770);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor = (frame[2].i);
	LINE_NUMBER(771);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_selectAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:selectAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(774);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSelection_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSelection_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:clearSelection", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(778);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection = (jint(0));
	LINE_NUMBER(779);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setCursorPosition_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setCursorPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(783);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cursorPosition must be >= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(784);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection])(ctx, (frame[0].o));
	LINE_NUMBER(785);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp2;
	LINE_NUMBER(786);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getCursorPosition_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getCursorPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(789);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getOnscreenKeyboard_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getOnscreenKeyboard", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_keyboard;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setOnscreenKeyboard_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setOnscreenKeyboard", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(798);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_keyboard = (jref) (frame[1].o);
	LINE_NUMBER(799);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setClipboard_com_badlogic_gdx_utils_Clipboard(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setClipboard", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(802);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_clipboard = (jref) (frame[1].o);
	LINE_NUMBER(803);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(806);
	popStackFrame(ctx);
	return (jfloat(150.0f));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getPrefHeight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(810);
	frame[1].f = (jfloat(0));
	frame[2].f = (jfloat(0));
	LINE_NUMBER(811);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(812);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 + temp2));
	frame[1].f = temp3;
	LINE_NUMBER(813);
	jfloat temp4 = frame[2].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	frame[2].f = temp6;
	}
label_3:;
	{
	LINE_NUMBER(815);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(816);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	LINE_NUMBER(817);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp3 = temp1 + temp2;
	LINE_NUMBER(816);
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp3);
	frame[1].f = temp4;
	LINE_NUMBER(818);
	jfloat temp5 = frame[2].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp7 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp5, temp6);
	frame[2].f = temp7;
	}
label_6:;
	{
	LINE_NUMBER(820);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(821);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	LINE_NUMBER(822);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp3 = temp1 + temp2;
	LINE_NUMBER(821);
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp3);
	frame[1].f = temp4;
	LINE_NUMBER(823);
	jfloat temp5 = frame[2].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp7 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp5, temp6);
	frame[2].f = temp7;
	}
label_11:;
	{
	LINE_NUMBER(825);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((frame[1].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight)), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setAlignment_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setAlignment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(831);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHAlign = (frame[1].i);
	LINE_NUMBER(832);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getAlignment_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getAlignment", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(835);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHAlign);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPasswordMode_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setPasswordMode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(841);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode = (frame[1].i);
	LINE_NUMBER(842);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText])(ctx, (frame[0].o));
	LINE_NUMBER(843);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField_isPasswordMode_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:isPasswordMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(846);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPasswordCharacter_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setPasswordCharacter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(853);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordCharacter = (frame[1].i);
	LINE_NUMBER(854);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode) == 0) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText])(ctx, sp[0].o);
label_2:;
	LINE_NUMBER(855);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setBlinkTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setBlinkTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(858);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_blinkTime = (frame[1].f);
	LINE_NUMBER(859);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setDisabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setDisabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(862);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_disabled = (frame[1].i);
	LINE_NUMBER(863);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField_isDisabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:isDisabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(866);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_disabled);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:moveCursor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(870);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(871);
	if ((frame[1].i) == 0) goto label_4;
	}
	INST_ICONST(0);
	goto label_5;
label_4:;
	INST_ICONST(-1);
label_5:;
	INST_ISTORE(4);
label_6:;
	{
	LINE_NUMBER(872);
	if ((frame[1].i) == 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor) + (jint(1));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	if (temp0 >= (frame[3].i)) goto label_8;
	}
	goto label_9;
label_7:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor) - (jint(1));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	if (temp0 <= (frame[3].i)) goto label_8;
	}
label_9:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_8;
	{
	LINE_NUMBER(873);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_continueCursor_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_continueCursor_int_int_R_boolean])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), (frame[4].i));
	if (temp0 != 0) goto label_6;
	}
	goto label_8;
label_8:;
	LINE_NUMBER(875);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField_continueCursor_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:continueCursor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((frame[1].i) + (frame[2].i)));
	frame[3].i = temp0;
	LINE_NUMBER(879);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_isWordCharacter_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_isWordCharacter_char_R_boolean])(ctx, (frame[0].o), (frame[3].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$000_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_com_badlogic_gdx_Input$OnscreenKeyboardType(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_keyboardType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$100_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_Array1_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:access$100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_autocompleteOptions;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$200_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:access$200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_messageText;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$300_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_preventAutoCorrection);
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$400_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$500_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:access$500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_undo;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_BACKSPACE = jint(8);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_CARRIAGE_RETURN = jint(13);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_NEWLINE = jint(10);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_TAB = jint(9);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_DELETE = jint(127);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_BULLET = jint(8226);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	{
	LINE_NUMBER(80);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_DEFAULT_ONSCREEN_KEYBOARD = sp[0].o;
	LINE_NUMBER(82);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp1 = sp[0].o;
	LINE_NUMBER(83);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp2 = sp[0].o;
	LINE_NUMBER(84);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp3 = sp[0].o;
	LINE_NUMBER(86);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_keyRepeatInitialTime = (jfloat(0.4f));
	LINE_NUMBER(87);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_keyRepeatTime = (jfloat(0.1f));
	LINE_NUMBER(88);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_undoMax = (10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getCaptureListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasActions_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearActions,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearListeners,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_firstAscendant_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasParent_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchable_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setVisible_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ascendantsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ancestorsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasKeyboardFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasScrollFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusTarget_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getUserObject_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setUserObject_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_moveBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_sizeChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRotation_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setRotation_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotateBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getName_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setName_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toFront,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toBack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipEnd,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_screenToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToParentCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToActorCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setDisabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_isDisabled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_initialize,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_createInputListener_R_com_badlogic_gdx_scenes_scene2d_InputListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_letterUnderCursor_float_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_isWordCharacter_char_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_int_R_Array1_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_float_R_Array1_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_withinMaxLength_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setMaxLength_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getMaxLength_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setAutocompleteOptions_Array1_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setKeyboardType_com_badlogic_gdx_Input$OnscreenKeyboardType,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPreventAutoCorrection_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setOnlyFontChars_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_calculateOffsets,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getTextY_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawSelection_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawMessageText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawCursor_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_copy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_next_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_findNextTextField_com_badlogic_gdx_utils_Array_com_badlogic_gdx_scenes_scene2d_ui_TextField_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getDefaultInputListener_R_com_badlogic_gdx_scenes_scene2d_InputListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setTextFieldListener_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setTextFieldFilter_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getTextFieldFilter_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setFocusTraversal_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getFocusTraversal_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getMessageText_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setMessageText_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_appendText_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setText_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getText_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setProgrammaticChangeEvents_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getProgrammaticChangeEvents_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getSelectionStart_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getSelection_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSelection_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_selectAll,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setCursorPosition_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getCursorPosition_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getOnscreenKeyboard_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setOnscreenKeyboard_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setClipboard_com_badlogic_gdx_utils_Clipboard,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setAlignment_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getAlignment_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPasswordMode_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_isPasswordMode_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPasswordCharacter_char,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setBlinkTime_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_continueCursor_int_int_R_boolean,
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
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "act", "(F)V" },
	{ "fire", "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z" },
	{ "notify", "(Lcom/badlogic/gdx/scenes/scene2d/Event;Z)Z" },
	{ "hit", "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "remove", "()Z" },
	{ "addListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getCaptureListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "removeAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "getActions", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getStage", "()Lcom/badlogic/gdx/scenes/scene2d/Stage;" },
	{ "setStage", "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V" },
	{ "isDescendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "isAscendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "firstAscendant", "(Ljava/lang/Class;)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "hasParent", "()Z" },
	{ "getParent", "()Lcom/badlogic/gdx/scenes/scene2d/Group;" },
	{ "setParent", "(Lcom/badlogic/gdx/scenes/scene2d/Group;)V" },
	{ "isTouchable", "()Z" },
	{ "getTouchable", "()Lcom/badlogic/gdx/scenes/scene2d/Touchable;" },
	{ "setTouchable", "(Lcom/badlogic/gdx/scenes/scene2d/Touchable;)V" },
	{ "isVisible", "()Z" },
	{ "setVisible", "(Z)V" },
	{ "ascendantsVisible", "()Z" },
	{ "ancestorsVisible", "()Z" },
	{ "hasKeyboardFocus", "()Z" },
	{ "hasScrollFocus", "()Z" },
	{ "isTouchFocusTarget", "()Z" },
	{ "isTouchFocusListener", "()Z" },
	{ "getUserObject", "()Ljava/lang/Object;" },
	{ "setUserObject", "(Ljava/lang/Object;)V" },
	{ "getX", "()F" },
	{ "getX", "(I)F" },
	{ "setX", "(F)V" },
	{ "setX", "(FI)V" },
	{ "getY", "()F" },
	{ "setY", "(F)V" },
	{ "setY", "(FI)V" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "positionChanged", "()V" },
	{ "sizeChanged", "()V" },
	{ "scaleChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "getOriginX", "()F" },
	{ "setOriginX", "(F)V" },
	{ "getOriginY", "()F" },
	{ "setOriginY", "(F)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "getScaleX", "()F" },
	{ "setScaleX", "(F)V" },
	{ "getScaleY", "()F" },
	{ "setScaleY", "(F)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "setZIndex", "(I)Z" },
	{ "getZIndex", "()I" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "stageToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "parentToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToScreenCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToStageCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToParentCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToAscendantCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToActorCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "drawDebug", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "drawDebugBounds", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "setDebug", "(Z)V" },
	{ "getDebug", "()Z" },
	{ "debug", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "layout", "()V" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "validate", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "needsLayout", "()Z" },
	{ "setDisabled", "(Z)V" },
	{ "isDisabled", "()Z" },
	{ "getStyle", "()Ljava/lang/Object;" },
	{ "setStyle", "(Ljava/lang/Object;)V" },
	{ "initialize", "()V" },
	{ "createInputListener", "()Lcom/badlogic/gdx/scenes/scene2d/InputListener;" },
	{ "letterUnderCursor", "(F)I" },
	{ "isWordCharacter", "(C)Z" },
	{ "wordUnderCursor", "(I)[I" },
	{ "wordUnderCursor", "(F)[I" },
	{ "withinMaxLength", "(I)Z" },
	{ "setMaxLength", "(I)V" },
	{ "getMaxLength", "()I" },
	{ "setAutocompleteOptions", "([Ljava/lang/String;)V" },
	{ "setKeyboardType", "(Lcom/badlogic/gdx/Input$OnscreenKeyboardType;)V" },
	{ "setPreventAutoCorrection", "(Z)V" },
	{ "setOnlyFontChars", "(Z)V" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldStyle;" },
	{ "calculateOffsets", "()V" },
	{ "getBackgroundDrawable", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "getTextY", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)F" },
	{ "drawBackground", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V" },
	{ "drawSelection", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;FF)V" },
	{ "drawText", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;FF)V" },
	{ "drawMessageText", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;FFF)V" },
	{ "drawCursor", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;FF)V" },
	{ "updateDisplayText", "()V" },
	{ "copy", "()V" },
	{ "cut", "()V" },
	{ "cut", "(Z)V" },
	{ "paste", "(Ljava/lang/String;Z)V" },
	{ "insert", "(ILjava/lang/CharSequence;Ljava/lang/String;)Ljava/lang/String;" },
	{ "delete", "(Z)I" },
	{ "undo", "()V" },
	{ "undo", "(Z)V" },
	{ "redo", "()V" },
	{ "redo", "(Z)V" },
	{ "next", "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;" },
	{ "findNextTextField", "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Z)Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;" },
	{ "getDefaultInputListener", "()Lcom/badlogic/gdx/scenes/scene2d/InputListener;" },
	{ "setTextFieldListener", "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldListener;)V" },
	{ "setTextFieldFilter", "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldFilter;)V" },
	{ "getTextFieldFilter", "()Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldFilter;" },
	{ "setFocusTraversal", "(Z)V" },
	{ "getFocusTraversal", "()Z" },
	{ "getMessageText", "()Ljava/lang/String;" },
	{ "setMessageText", "(Ljava/lang/String;)V" },
	{ "appendText", "(Ljava/lang/String;)V" },
	{ "setText", "(Ljava/lang/String;)V" },
	{ "getText", "()Ljava/lang/String;" },
	{ "changeText", "(Ljava/lang/String;Ljava/lang/String;)Z" },
	{ "setProgrammaticChangeEvents", "(Z)V" },
	{ "getProgrammaticChangeEvents", "()Z" },
	{ "getSelectionStart", "()I" },
	{ "getSelection", "()Ljava/lang/String;" },
	{ "setSelection", "(II)V" },
	{ "selectAll", "()V" },
	{ "clearSelection", "()V" },
	{ "setCursorPosition", "(I)V" },
	{ "getCursorPosition", "()I" },
	{ "getOnscreenKeyboard", "()Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$OnscreenKeyboard;" },
	{ "setOnscreenKeyboard", "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$OnscreenKeyboard;)V" },
	{ "setClipboard", "(Lcom/badlogic/gdx/utils/Clipboard;)V" },
	{ "setAlignment", "(I)V" },
	{ "getAlignment", "()I" },
	{ "setPasswordMode", "(Z)V" },
	{ "isPasswordMode", "()Z" },
	{ "setPasswordCharacter", "(C)V" },
	{ "setBlinkTime", "(F)V" },
	{ "moveCursor", "(ZZ)V" },
	{ "continueCursor", "(II)Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_Disableable, &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo,
	&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle,
	&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard,
	&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask,
	&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldClickListener,
	&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter,
	&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState,
	&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener,
	&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard,
	&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard,
};

static FieldMetadata fields[] {
	{ "BACKSPACE", &class_char, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_BACKSPACE, "C", 28 },
	{ "CARRIAGE_RETURN", &class_char, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_CARRIAGE_RETURN, "C", 28 },
	{ "NEWLINE", &class_char, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_NEWLINE, "C", 28 },
	{ "TAB", &class_char, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_TAB, "C", 28 },
	{ "DELETE", &class_char, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_DELETE, "C", 28 },
	{ "BULLET", &class_char, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_BULLET, "C", 28 },
	{ "DEFAULT_ONSCREEN_KEYBOARD", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_DEFAULT_ONSCREEN_KEYBOARD, "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$OnscreenKeyboard;", 9 },
	{ "tmp1", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp1, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "tmp2", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp2, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "tmp3", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_tmp3, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "keyRepeatInitialTime", &class_float, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_keyRepeatInitialTime, "F", 9 },
	{ "keyRepeatTime", &class_float, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_keyRepeatTime, "F", 9 },
	{ "undoMax", &class_int, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TextField_undoMax, "I", 9 },
	{ "text", &class_java_lang_String, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_text), "Ljava/lang/String;", 4 },
	{ "cursor", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_cursor), "I", 4 },
	{ "selectionStart", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_selectionStart), "I", 4 },
	{ "hasSelection", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_hasSelection), "Z", 4 },
	{ "writeEnters", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_writeEnters), "Z", 4 },
	{ "layout", &class_com_badlogic_gdx_graphics_g2d_GlyphLayout, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_layout), "Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 20 },
	{ "glyphPositions", &class_com_badlogic_gdx_utils_FloatArray, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_glyphPositions), "Lcom/badlogic/gdx/utils/FloatArray;", 20 },
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldStyle;", 0 },
	{ "messageText", &class_java_lang_String, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_messageText), "Ljava/lang/String;", 2 },
	{ "displayText", &class_java_lang_CharSequence, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_displayText), "Ljava/lang/CharSequence;", 4 },
	{ "clipboard", &class_com_badlogic_gdx_utils_Clipboard, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_clipboard), "Lcom/badlogic/gdx/utils/Clipboard;", 0 },
	{ "inputListener", &class_com_badlogic_gdx_scenes_scene2d_InputListener, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_inputListener), "Lcom/badlogic/gdx/scenes/scene2d/InputListener;", 0 },
	{ "listener", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_listener), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldListener;", 0 },
	{ "filter", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_filter), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldFilter;", 0 },
	{ "keyboard", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_keyboard), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$OnscreenKeyboard;", 0 },
	{ "focusTraversal", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_focusTraversal), "Z", 0 },
	{ "onlyFontChars", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_onlyFontChars), "Z", 0 },
	{ "disabled", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_disabled), "Z", 0 },
	{ "textHAlign", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_textHAlign), "I", 2 },
	{ "selectionX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_selectionX), "F", 2 },
	{ "selectionWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_selectionWidth), "F", 2 },
	{ "undo", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_undo), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$Undo;", 18 },
	{ "passwordMode", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_passwordMode), "Z", 0 },
	{ "passwordBuffer", &class_java_lang_StringBuilder, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_passwordBuffer), "Ljava/lang/StringBuilder;", 2 },
	{ "passwordCharacter", &class_char, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_passwordCharacter), "C", 2 },
	{ "fontOffset", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_fontOffset), "F", 4 },
	{ "textHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_textHeight), "F", 4 },
	{ "textOffset", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_textOffset), "F", 4 },
	{ "renderOffset", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_renderOffset), "F", 0 },
	{ "visibleTextStart", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_visibleTextStart), "I", 4 },
	{ "visibleTextEnd", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_visibleTextEnd), "I", 4 },
	{ "maxLength", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_maxLength), "I", 2 },
	{ "autocompleteOptions", getArrayClass(&class_java_lang_String, 1), offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_autocompleteOptions), "[Ljava/lang/String;", 2 },
	{ "keyboardType", &class_com_badlogic_gdx_Input$OnscreenKeyboardType, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_keyboardType), "Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 2 },
	{ "preventAutoCorrection", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_preventAutoCorrection), "Z", 2 },
	{ "focused", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_focused), "Z", 0 },
	{ "cursorOn", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_cursorOn), "Z", 0 },
	{ "blinkTime", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_blinkTime), "F", 0 },
	{ "blinkTask", &class_com_badlogic_gdx_utils_Timer$Task, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_blinkTask), "Lcom/badlogic/gdx/utils/Timer$Task;", 16 },
	{ "keyRepeatTask", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_keyRepeatTask), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$KeyRepeatTask;", 16 },
	{ "programmaticChangeEvents", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField, F_programmaticChangeEvents), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldStyle;)V", 1 },
	{ "initialize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_initialize, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_initialize, "()V", 4 },
	{ "createInputListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_createInputListener_R_com_badlogic_gdx_scenes_scene2d_InputListener, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_createInputListener_R_com_badlogic_gdx_scenes_scene2d_InputListener, "()Lcom/badlogic/gdx/scenes/scene2d/InputListener;", 4 },
	{ "letterUnderCursor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_letterUnderCursor_float_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_letterUnderCursor_float_R_int, "(F)I", 4 },
	{ "isWordCharacter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_isWordCharacter_char_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_isWordCharacter_char_R_boolean, "(C)Z", 4 },
	{ "wordUnderCursor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_int_R_Array1_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_int_R_Array1_int, "(I)[I", 4 },
	{ "wordUnderCursor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_float_R_Array1_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_wordUnderCursor_float_R_Array1_int, "(F)[I", 0 },
	{ "withinMaxLength", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_withinMaxLength_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_withinMaxLength_int_R_boolean, "(I)Z", 0 },
	{ "setMaxLength", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setMaxLength_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setMaxLength_int, "(I)V", 1 },
	{ "getMaxLength", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getMaxLength_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getMaxLength_R_int, "()I", 1 },
	{ "setAutocompleteOptions", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setAutocompleteOptions_Array1_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setAutocompleteOptions_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "setKeyboardType", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setKeyboardType_com_badlogic_gdx_Input$OnscreenKeyboardType, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setKeyboardType_com_badlogic_gdx_Input$OnscreenKeyboardType, "(Lcom/badlogic/gdx/Input$OnscreenKeyboardType;)V", 1 },
	{ "setPreventAutoCorrection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPreventAutoCorrection_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPreventAutoCorrection_boolean, "(Z)V", 1 },
	{ "setOnlyFontChars", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setOnlyFontChars_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setOnlyFontChars_boolean, "(Z)V", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldStyle;", 1 },
	{ "calculateOffsets", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_calculateOffsets, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_calculateOffsets, "()V", 4 },
	{ "getBackgroundDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "getTextY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getTextY_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getTextY_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_float, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)F", 4 },
	{ "drawBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 4 },
	{ "drawSelection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawSelection_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawSelection_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;FF)V", 4 },
	{ "drawText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;FF)V", 4 },
	{ "drawMessageText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawMessageText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawMessageText_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;FFF)V", 4 },
	{ "drawCursor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawCursor_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_drawCursor_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;FF)V", 4 },
	{ "updateDisplayText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_updateDisplayText, "()V", 4 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_copy, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_copy, "()V", 1 },
	{ "cut", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut, "()V", 1 },
	{ "cut", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_cut_boolean, "(Z)V", 0 },
	{ "paste", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_paste_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 0 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String, "(ILjava/lang/CharSequence;Ljava/lang/String;)Ljava/lang/String;", 0 },
	{ "delete", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_delete_boolean_R_int, "(Z)I", 0 },
	{ "undo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo, "()V", 1 },
	{ "undo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_undo_boolean, "(Z)V", 0 },
	{ "redo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo, "()V", 1 },
	{ "redo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_redo_boolean, "(Z)V", 0 },
	{ "next", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_next_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_next_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField, "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;", 1 },
	{ "findNextTextField", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_findNextTextField_com_badlogic_gdx_utils_Array_com_badlogic_gdx_scenes_scene2d_ui_TextField_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_findNextTextField_com_badlogic_gdx_utils_Array_com_badlogic_gdx_scenes_scene2d_ui_TextField_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField, "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Z)Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;", 2 },
	{ "getDefaultInputListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getDefaultInputListener_R_com_badlogic_gdx_scenes_scene2d_InputListener, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getDefaultInputListener_R_com_badlogic_gdx_scenes_scene2d_InputListener, "()Lcom/badlogic/gdx/scenes/scene2d/InputListener;", 1 },
	{ "setTextFieldListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setTextFieldListener_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setTextFieldListener_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldListener;)V", 1 },
	{ "setTextFieldFilter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setTextFieldFilter_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setTextFieldFilter_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldFilter;)V", 1 },
	{ "getTextFieldFilter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getTextFieldFilter_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getTextFieldFilter_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter, "()Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldFilter;", 1 },
	{ "setFocusTraversal", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setFocusTraversal_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setFocusTraversal_boolean, "(Z)V", 1 },
	{ "getFocusTraversal", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getFocusTraversal_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getFocusTraversal_R_boolean, "()Z", 1 },
	{ "getMessageText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getMessageText_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getMessageText_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setMessageText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setMessageText_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setMessageText_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "appendText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_appendText_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_appendText_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setText_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setText_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getText_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getText_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "changeText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean, "(Ljava/lang/String;Ljava/lang/String;)Z", 0 },
	{ "setProgrammaticChangeEvents", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setProgrammaticChangeEvents_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setProgrammaticChangeEvents_boolean, "(Z)V", 1 },
	{ "getProgrammaticChangeEvents", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getProgrammaticChangeEvents_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getProgrammaticChangeEvents_R_boolean, "()Z", 1 },
	{ "getSelectionStart", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getSelectionStart_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getSelectionStart_R_int, "()I", 1 },
	{ "getSelection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getSelection_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getSelection_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setSelection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSelection_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSelection_int_int, "(II)V", 1 },
	{ "selectAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_selectAll, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_selectAll, "()V", 1 },
	{ "clearSelection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_clearSelection, "()V", 1 },
	{ "setCursorPosition", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setCursorPosition_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setCursorPosition_int, "(I)V", 1 },
	{ "getCursorPosition", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getCursorPosition_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getCursorPosition_R_int, "()I", 1 },
	{ "getOnscreenKeyboard", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getOnscreenKeyboard_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getOnscreenKeyboard_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard, "()Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$OnscreenKeyboard;", 1 },
	{ "setOnscreenKeyboard", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setOnscreenKeyboard_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setOnscreenKeyboard_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$OnscreenKeyboard;)V", 1 },
	{ "setClipboard", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setClipboard_com_badlogic_gdx_utils_Clipboard, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setClipboard_com_badlogic_gdx_utils_Clipboard, "(Lcom/badlogic/gdx/utils/Clipboard;)V", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getPrefHeight_R_float, "()F", 1 },
	{ "setAlignment", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setAlignment_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setAlignment_int, "(I)V", 1 },
	{ "getAlignment", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getAlignment_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getAlignment_R_int, "()I", 1 },
	{ "setPasswordMode", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPasswordMode_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPasswordMode_boolean, "(Z)V", 1 },
	{ "isPasswordMode", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_isPasswordMode_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_isPasswordMode_R_boolean, "()Z", 1 },
	{ "setPasswordCharacter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPasswordCharacter_char, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setPasswordCharacter_char, "(C)V", 1 },
	{ "setBlinkTime", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setBlinkTime_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setBlinkTime_float, "(F)V", 1 },
	{ "setDisabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setDisabled_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setDisabled_boolean, "(Z)V", 1 },
	{ "isDisabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_isDisabled_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_isDisabled_R_boolean, "()Z", 1 },
	{ "moveCursor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_moveCursor_boolean_boolean, "(ZZ)V", 4 },
	{ "continueCursor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_continueCursor_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_continueCursor_int_int_R_boolean, "(II)Z", 4 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "access$000", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$000_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_com_badlogic_gdx_Input$OnscreenKeyboardType, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 4104 },
	{ "access$100", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$100_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_Array1_java_lang_String, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)[Ljava/lang/String;", 4104 },
	{ "access$200", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$200_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_java_lang_String, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)Ljava/lang/String;", 4104 },
	{ "access$300", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$300_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_boolean, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)Z", 4104 },
	{ "access$400", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$400_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_int, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)I", 4104 },
	{ "access$500", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$500_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$Undo;", 4104 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextField",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Widget,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextField),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextField,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 10,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 54,
		.nativeFields = (intptr_t) fields,
		.methodCount = 85,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 204,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextField = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextField);

}

