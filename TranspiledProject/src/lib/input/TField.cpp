#include "lib/input/TField.h"
#include "lib/input/TField.h"
#include "java/lang/StringBuilder.h"
#include "lib/input/VietnameseTextUtils.h"
#include "nro/IActionListener.h"
#include "main/GameCanvas.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "javax/microedition/lcdui/Image.h"
#include "com/nro/GameMain.h"
#include "nro/Command.h"
#include "lib/mSystem.h"
#include "java/lang/Math.h"
#include "lib/mFont.h"
#include "com/badlogic/gdx/Input_TextInputListener.h"
#include "lib/mGraphics.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/nro/GameMain_IWebInputBridge.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "lib/input/TField_3.h"
#include "lib/input/TField_1.h"
#include "lib/input/TField_2.h"
#include "com/nro/GameMain_IWebPlatformInfo.h"
#include "nro/Rms.h"
#include "java/lang/System.h"

extern "C" {

jint SF_lib_input_TField_typeXpeed;
jobject SF_lib_input_TField_MAX_TIME_TO_CONFIRM_KEY;
jint SF_lib_input_TField_CARET_HEIGHT;
jobject SF_lib_input_TField_print;
jobject SF_lib_input_TField_printA;
jbool SF_lib_input_TField_isQwerty;
jint SF_lib_input_TField_typingModeAreaWidth;
jint SF_lib_input_TField_changeModeKey;
jobject SF_lib_input_TField_myTexture2der;
jobject SF_lib_input_TField_imgTf;
jobject SF_lib_input_TField_currentTField;
jobject SF_lib_input_TField_focusedTField;
jbool SF_lib_input_TField_isOpeningDialog;
jlong SF_lib_input_TField_lastTimeCloseDialog;

void mark_lib_input_TField(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_input_TField_MAX_TIME_TO_CONFIRM_KEY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_input_TField_MAX_TIME_TO_CONFIRM_KEY)->clazz)->markFunction)((jobject) SF_lib_input_TField_MAX_TIME_TO_CONFIRM_KEY, mark, depth + 1);
		if (SF_lib_input_TField_print)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_input_TField_print)->clazz)->markFunction)((jobject) SF_lib_input_TField_print, mark, depth + 1);
		if (SF_lib_input_TField_printA)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_input_TField_printA)->clazz)->markFunction)((jobject) SF_lib_input_TField_printA, mark, depth + 1);
		if (SF_lib_input_TField_myTexture2der)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_input_TField_myTexture2der)->clazz)->markFunction)((jobject) SF_lib_input_TField_myTexture2der, mark, depth + 1);
		if (SF_lib_input_TField_imgTf)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_input_TField_imgTf)->clazz)->markFunction)((jobject) SF_lib_input_TField_imgTf, mark, depth + 1);
		if (SF_lib_input_TField_currentTField)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_input_TField_currentTField)->clazz)->markFunction)((jobject) SF_lib_input_TField_currentTField, mark, depth + 1);
		if (SF_lib_input_TField_focusedTField)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_input_TField_focusedTField)->clazz)->markFunction)((jobject) SF_lib_input_TField_focusedTField, mark, depth + 1);
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
	auto self = (lib_input_TField *) object;
	if (self->F_f)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_f)->clazz)->markFunction)((jobject) self->F_f, mark, depth + 1);
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_passwordText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_passwordText)->clazz)->markFunction)((jobject) self->F_passwordText, mark, depth + 1);
	if (self->F_paintedText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_paintedText)->clazz)->markFunction)((jobject) self->F_paintedText, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_cmdClear)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdClear)->clazz)->markFunction)((jobject) self->F_cmdClear, mark, depth + 1);
	if (self->F_cmdDoneAction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdDoneAction)->clazz)->markFunction)((jobject) self->F_cmdDoneAction, mark, depth + 1);
	if (self->F_cmdCancelAction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdCancelAction)->clazz)->markFunction)((jobject) self->F_cmdCancelAction, mark, depth + 1);
}

jbool M_lib_input_TField_hasSelection_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:hasSelection", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor) < 0) goto label_1;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor) == ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos)) goto label_1;
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

jint M_lib_input_TField_getSelectionStart_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:getSelectionStart", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos);
	}
label_1:;
	{
	LINE_NUMBER(74);
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint M_lib_input_TField_getSelectionEnd_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:getSelectionEnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos);
	}
label_1:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_clearSelection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:clearSelection", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_selectAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:selectAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(90);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(0));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = temp0;
	LINE_NUMBER(92);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(93);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(95);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	}
label_6:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_lib_input_TField_getSelectedOrAllText_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:getSelectedOrAllText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) == (jint(2))) goto label_1;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_2:;
	{
	LINE_NUMBER(103);
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_lib_input_TField_getSelectionStart_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_getSelectionStart_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_lib_input_TField_getSelectionEnd_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_getSelectionEnd_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_lib_input_TField_deleteSelection_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:deleteSelection", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_lib_input_TField_getSelectionStart_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_getSelectionStart_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(114);
	jint temp1 = (jint)((func_lib_input_TField_getSelectionEnd_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_getSelectionEnd_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, (jint(0)), (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(116);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos = (frame[1].i);
	LINE_NUMBER(117);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	LINE_NUMBER(118);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(119);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(120);
	M_lib_input_TField_setPasswordTest(ctx, (frame[0].o));
	LINE_NUMBER(121);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(122);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_lib_input_TField_isAllowedChar_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:isAllowedChar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(127);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(128);
	if ((frame[1].i) < (48)) goto label_3;
	}
	{
	if ((frame[1].i) > (57)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(130);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(3))) goto label_5;
	}
	{
	LINE_NUMBER(131);
	if ((frame[1].i) < (48)) goto label_7;
	}
	{
	if ((frame[1].i) <= (57)) goto label_8;
	}
label_7:;
	{
	if ((frame[1].i) < (65)) goto label_9;
	}
	{
	if ((frame[1].i) <= (90)) goto label_8;
	}
label_9:;
	{
	if ((frame[1].i) < (97)) goto label_10;
	}
	{
	if ((frame[1].i) > (122)) goto label_10;
	}
label_8:;
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_insertText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:insertText", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)SM_lib_input_VietnameseTextUtils_sanitizeForSingleLine_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(141);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(144);
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((func_lib_input_TField_deleteSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_deleteSelection_R_boolean])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(147);
	M_lib_input_TField_clampCaret(ctx, (frame[0].o));
	LINE_NUMBER(148);
	frame[3].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(149);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[3].i));
	jint temp1 = (jint)SM_lib_input_VietnameseTextUtils_isCombiningMark_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_10;
	}
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(151);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) <= 0) goto label_13;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) == 0) goto label_14;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(2))) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) - (jint(1))));
	frame[5].i = temp0;
	LINE_NUMBER(153);
	jint temp1 = (jint)SM_lib_input_VietnameseTextUtils_composePair_char_char_R_char(ctx, (frame[5].i), (frame[4].i));
	frame[6].i = temp1;
	LINE_NUMBER(154);
	if ((frame[6].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, (jint(0)), (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) - (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[6].i));
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(158);
	INST_IINC(3, 1);
	LINE_NUMBER(159);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(161);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_19;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_maxTextLenght)) goto label_19;
	}
	{
	LINE_NUMBER(162);
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_maxTextLenght;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[4].i = (temp0 - temp1);
	LINE_NUMBER(163);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (temp2 - (frame[3].i)), (frame[4].i));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, temp3);
	frame[5].o = sp[0].o;
	LINE_NUMBER(164);
	frame[6].i = (frame[3].i);
	}
label_23:;
	{
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_24;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[5].o));
	if (temp0 >= (frame[4].i)) goto label_24;
	}
	{
	LINE_NUMBER(165);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(166);
	jint temp1 = (jint)SM_lib_input_VietnameseTextUtils_isCombiningMark_char_R_boolean(ctx, (frame[7].i));
	if (temp1 == 0) goto label_27;
	}
	LINE_NUMBER(167);
	goto label_29;
label_27:;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)M_lib_input_TField_isAllowedChar_char_R_boolean(ctx, (frame[0].o), (frame[7].i));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[7].i));
	}
label_29:;
	{
	LINE_NUMBER(164);
	INST_IINC(6, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(173);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[5].o));
	if (temp0 <= 0) goto label_19;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, (jint(0)), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].o));
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos;
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[5].o));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = (temp0 + temp1);
	}
label_19:;
	{
	LINE_NUMBER(179);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(180);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(181);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	LINE_NUMBER(182);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(183);
	M_lib_input_TField_setPasswordTest(ctx, (frame[0].o));
	LINE_NUMBER(184);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_doChangeToTextBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:doChangeToTextBox", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isAndroid) != 0) goto label_1;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isIOS;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	(sp++)->l = jlong(200ll);
	goto label_3;
label_2:;
	(sp++)->l = jlong(50ll);
label_3:;
	{
	sp -= 1;
	frame[1].l = sp[0].l;
	LINE_NUMBER(189);
	if ((clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_isOpeningDialog) != 0) goto label_5;
	}
	{
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - (clinit_lib_input_TField(ctx), (jlong)SF_lib_input_TField_lastTimeCloseDialog)), (frame[1].l))) >= 0) goto label_6;
	}
label_5:;
	LINE_NUMBER(190);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(192);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_isOpeningDialog = (jint(1));
	LINE_NUMBER(193);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	if (sp[0].o == nullptr) goto label_8;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->o = SF_com_nro_GameMain_webPlatformInfo;
	if ((--sp)->o == nullptr) goto label_8;
	{
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webPlatformInfo;
	jint temp0 = (jint)((func_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebPlatformInfo, INDEX_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(194);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_currentTField = (frame[0].o);
	LINE_NUMBER(195);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 1;
	goto label_12;
	}
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Nh\u1eadp v\u0103n b\u1ea3n"_j));
label_12:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(196);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType;
	jint temp1 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_maxTextLenght;
	clinit_lib_input_TField$1(ctx);
	sp[3].o = gcAlloc(ctx, &class_lib_input_TField$1);
	init_lib_input_TField$1_lib_input_TField(ctx, sp[3].o, (frame[0].o));
	((func_com_nro_GameMain$IWebInputBridge_openPrompt_java_lang_String_java_lang_String_int_int_com_badlogic_gdx_Input$TextInputListener) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebInputBridge, INDEX_com_nro_GameMain$IWebInputBridge_openPrompt_java_lang_String_java_lang_String_int_int_com_badlogic_gdx_Input$TextInputListener, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o);
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(221);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isAndroid) == 0) goto label_15;
	}
	{
	LINE_NUMBER(222);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	clinit_lib_input_TField$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField$2);
	init_lib_input_TField$2_lib_input_TField(ctx, sp[1].o, (frame[0].o));
	LINE_NUMBER(250);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 2;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 1;
	goto label_19;
	}
label_18:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Nh\u1eadp v\u0103n b\u1ea3n"_j));
label_19:;
	{
	sp -= 3;
	sp[3].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, (frame[0].o));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8""_j));
	LINE_NUMBER(222);
	((func_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}
label_15:;
	{
	LINE_NUMBER(253);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isIOS) == 0) goto label_22;
	}
	{
	LINE_NUMBER(254);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	clinit_lib_input_TField$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField$3);
	init_lib_input_TField$3_lib_input_TField(ctx, sp[1].o, (frame[0].o));
	LINE_NUMBER(282);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 2;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 1;
	goto label_26;
	}
label_25:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Enter text"_j));
label_26:;
	{
	sp -= 3;
	sp[3].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, (frame[0].o));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8""_j));
	LINE_NUMBER(254);
	((func_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}
label_22:;
	{
	LINE_NUMBER(285);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_isOpeningDialog = (jint(0));
	LINE_NUMBER(286);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(287);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	((func_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean, sp[0].o))(ctx, sp[0].o, (jint(1)));
	}
label_30:;
	LINE_NUMBER(289);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_lib_input_TField(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_TField(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(291);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lockArrow = (jint(0));
	LINE_NUMBER(27);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_f = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(28);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(29);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_passwordText = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(30);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_paintedText = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(31);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos = (jint(0));
	LINE_NUMBER(32);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	LINE_NUMBER(33);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_counter = (jint(0));
	LINE_NUMBER(34);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_maxTextLenght = (500);
	LINE_NUMBER(35);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX = (jint(0));
	LINE_NUMBER(36);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(37);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(38);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_indexOfActiveChar = (jint(0));
	LINE_NUMBER(39);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(40);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType = (jint(0));
	LINE_NUMBER(43);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode = (jint(0));
	LINE_NUMBER(46);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(49);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showSubTextField = (jint(1));
	LINE_NUMBER(50);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isPaintMouse = (jint(1));
	LINE_NUMBER(292);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(293);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	jint temp0 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_22:;
	INST_BIPUSH(12);
label_23:;
	{
	sp -= 1;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_CARET_HEIGHT = (sp[0].i + (jint(1)));
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_DELETE;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (1000), (jobject(nullptr)));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdClear = (jref) sp[1].o;
	LINE_NUMBER(295);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_typingModeAreaWidth = (jint(0));
	LINE_NUMBER(296);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_isQwerty = (jint(1));
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_clampCaret(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:clampCaret", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(301);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_1:;
	{
	LINE_NUMBER(303);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(304);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos = (jint(0));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(305);
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= temp1) goto label_5;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = temp0;
	}
label_5:;
	{
	LINE_NUMBER(308);
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= temp1) goto label_7;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_selectionAnchor = temp0;
	}
label_7:;
	LINE_NUMBER(311);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_TField_backspace(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:backspace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(314);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(315);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(316);
	jint temp0 = (jint)((func_lib_input_TField_deleteSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_deleteSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	LINE_NUMBER(317);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(319);
	M_lib_input_TField_clampCaret(ctx, (frame[0].o));
	LINE_NUMBER(320);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) <= 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, (jint(0)), (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) - (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos) - (jint(1)));
	LINE_NUMBER(323);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(324);
	M_lib_input_TField_setPasswordTest(ctx, (frame[0].o));
	LINE_NUMBER(325);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	}
label_6:;
	LINE_NUMBER(327);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_TField_forwardDelete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:forwardDelete", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(331);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(332);
	jint temp0 = (jint)((func_lib_input_TField_deleteSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_deleteSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	LINE_NUMBER(333);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(335);
	M_lib_input_TField_clampCaret(ctx, (frame[0].o));
	LINE_NUMBER(336);
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, (jint(0)), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) + (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(338);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(339);
	M_lib_input_TField_setPasswordTest(ctx, (frame[0].o));
	LINE_NUMBER(340);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	}
label_6:;
	LINE_NUMBER(342);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_lib_input_TField_findPrevWordBoundary_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:findPrevWordBoundary", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_TField(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(345);
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, temp2);
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp3);
	frame[2].i = temp4;
	}
label_1:;
	{
	LINE_NUMBER(346);
	if ((frame[2].i) <= 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) - (jint(1))));
	jint temp1 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(347);
	INST_IINC(2, -1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(349);
	if ((frame[2].i) <= 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) - (jint(1))));
	jint temp1 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_4;
	}
	{
	LINE_NUMBER(350);
	INST_IINC(2, -1);
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint SM_lib_input_TField_findNextWordBoundary_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:findNextWordBoundary", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_TField(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(356);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(357);
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, temp2);
	frame[3].i = temp3;
	}
label_2:;
	{
	LINE_NUMBER(358);
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	jint temp1 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_3;
	}
	{
	LINE_NUMBER(359);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(361);
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	jint temp1 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_5;
	}
	{
	LINE_NUMBER(362);
	INST_IINC(3, 1);
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_deletePrevWord(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:deletePrevWord", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(368);
	jint temp0 = (jint)((func_lib_input_TField_deleteSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_deleteSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(369);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(371);
	M_lib_input_TField_clampCaret(ctx, (frame[0].o));
	LINE_NUMBER(372);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
label_4:;
	LINE_NUMBER(373);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(375);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(2))) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)SM_lib_input_TField_findPrevWordBoundary_java_lang_String_int_R_int(ctx, sp[0].o, ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, (jint(0)), (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(377);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos = (frame[1].i);
	LINE_NUMBER(378);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(379);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(380);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(381);
	M_lib_input_TField_setPasswordTest(ctx, (frame[0].o));
	LINE_NUMBER(382);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_deleteNextWord(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:deleteNextWord", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(386);
	jint temp0 = (jint)((func_lib_input_TField_deleteSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_deleteSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(387);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(389);
	M_lib_input_TField_clampCaret(ctx, (frame[0].o));
	LINE_NUMBER(390);
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 < temp1) goto label_4;
	}
	LINE_NUMBER(391);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(393);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(2))) goto label_6;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)SM_lib_input_TField_findNextWordBoundary_java_lang_String_int_R_int(ctx, sp[0].o, ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, (jint(0)), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(395);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(396);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(397);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(398);
	M_lib_input_TField_setPasswordTest(ctx, (frame[0].o));
	LINE_NUMBER(399);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_moveCaretLeft_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:moveCaretLeft", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(403);
	M_lib_input_TField_clampCaret(ctx, (frame[0].o));
	LINE_NUMBER(404);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(405);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(406);
	if ((frame[1].i) != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(407);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_lib_input_TField_getSelectionStart_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_getSelectionStart_R_int])(ctx, (frame[0].o));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = temp0;
	LINE_NUMBER(408);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	LINE_NUMBER(409);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(410);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(413);
	if ((frame[1].i) == 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(414);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos);
	}
label_10:;
	{
	LINE_NUMBER(416);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(417);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) == (jint(2))) goto label_14;
	}
	{
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)SM_lib_input_TField_findPrevWordBoundary_java_lang_String_int_R_int(ctx, sp[1].o, ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = temp0;
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(420);
	sp[0].o = frame[0].o;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos) - (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(423);
	if ((frame[1].i) != 0) goto label_16;
	}
	{
	LINE_NUMBER(424);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(425);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor) != ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos)) goto label_18;
	}
	{
	LINE_NUMBER(426);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	}
label_18:;
	{
	LINE_NUMBER(428);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(429);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_moveCaretRight_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:moveCaretRight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(433);
	M_lib_input_TField_clampCaret(ctx, (frame[0].o));
	LINE_NUMBER(434);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(435);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(436);
	if ((frame[1].i) != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(437);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_lib_input_TField_getSelectionEnd_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_getSelectionEnd_R_int])(ctx, (frame[0].o));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = temp0;
	LINE_NUMBER(438);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	LINE_NUMBER(439);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(440);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(443);
	if ((frame[1].i) == 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(444);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos);
	}
label_10:;
	{
	LINE_NUMBER(446);
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_12;
	}
	{
	LINE_NUMBER(447);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) == (jint(2))) goto label_14;
	}
	{
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)SM_lib_input_TField_findNextWordBoundary_java_lang_String_int_R_int(ctx, sp[1].o, ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = temp0;
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(450);
	sp[0].o = frame[0].o;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos) + (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(453);
	if ((frame[1].i) != 0) goto label_16;
	}
	{
	LINE_NUMBER(454);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(455);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor) != ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos)) goto label_18;
	}
	{
	LINE_NUMBER(456);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	}
label_18:;
	{
	LINE_NUMBER(458);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(459);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_moveCaretHome_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:moveCaretHome", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(463);
	M_lib_input_TField_clampCaret(ctx, (frame[0].o));
	LINE_NUMBER(464);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(465);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(466);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(467);
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(468);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(471);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(473);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos = (jint(0));
	LINE_NUMBER(474);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor) != ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos)) goto label_9;
	}
	{
	LINE_NUMBER(475);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	}
label_9:;
	{
	LINE_NUMBER(477);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(478);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(479);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_moveCaretEnd_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:moveCaretEnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(482);
	M_lib_input_TField_clampCaret(ctx, (frame[0].o));
	LINE_NUMBER(483);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(484);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(485);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(486);
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(487);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(490);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = temp0;
	LINE_NUMBER(493);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor) != ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos)) goto label_9;
	}
	{
	LINE_NUMBER(494);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	}
label_9:;
	{
	LINE_NUMBER(496);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(497);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(501);
	((func_lib_input_TField_backspace) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_backspace])(ctx, (frame[0].o));
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_lib_input_TField_measurePaintedWidth_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:measurePaintedWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(505);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_lib_input_TField_setOffset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:setOffset", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(509);
	M_lib_input_TField_clampCaret(ctx, (frame[0].o));
	LINE_NUMBER(510);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(2))) goto label_2;
	}
	{
	LINE_NUMBER(511);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_passwordText;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_paintedText = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_paintedText = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_paintedText;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(516);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_paintedText = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_5:;
	{
	LINE_NUMBER(518);
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_paintedText;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[1].i = temp2;
	LINE_NUMBER(519);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_paintedText;
	jint temp3 = (jint)M_lib_input_TField_measurePaintedWidth_java_lang_String_R_int(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp3;
	LINE_NUMBER(520);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_paintedText;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)), (frame[1].i));
	jint temp4 = (jint)M_lib_input_TField_measurePaintedWidth_java_lang_String_R_int(ctx, sp[0].o, sp[1].o);
	frame[3].i = temp4;
	LINE_NUMBER(522);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX) >= 0) goto label_10;
	}
	{
	if (((frame[2].i) + ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX)) >= ((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_width) - (6)) - (13))) goto label_10;
	}
	{
	LINE_NUMBER(523);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX = ((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_width) - (10)) - (frame[2].i));
	}
label_10:;
	{
	LINE_NUMBER(526);
	if ((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX) + (frame[3].i)) > 0) goto label_12;
	}
	{
	LINE_NUMBER(527);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX = ((-(frame[3].i)) + (40));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(528);
	if ((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX) + (frame[3].i)) < (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_width) - (22))) goto label_14;
	}
	{
	LINE_NUMBER(529);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX = (((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_width) - (10)) - (frame[3].i)) - (12));
	}
label_14:;
	{
	LINE_NUMBER(532);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX) > 0) goto label_16;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_width) > 0) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(533);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX = (jint(0));
	}
label_17:;
	LINE_NUMBER(535);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_TField_keyPressedAscii_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:keyPressedAscii", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(538);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) == (jint(2))) goto label_1;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(3))) goto label_2;
	}
label_1:;
	{
	if ((frame[1].i) < (48)) goto label_3;
	}
	{
	if ((frame[1].i) <= (57)) goto label_2;
	}
label_3:;
	{
	if ((frame[1].i) < (65)) goto label_4;
	}
	{
	if ((frame[1].i) <= (90)) goto label_2;
	}
label_4:;
	{
	if ((frame[1].i) < (97)) goto label_5;
	}
	{
	if ((frame[1].i) > (122)) goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(539);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (jchar((frame[1].i))));
	((func_lib_input_TField_insertText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_insertText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(541);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_lib_input_TField_keyPressed_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:keyPressed", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(544);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isFocus) == 0) goto label_1;
	}
	{
	LINE_NUMBER(545);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(547);
	if ((frame[1].i) == (8)) goto label_3;
	}
	{
	if ((frame[1].i) == (-8)) goto label_3;
	}
	{
	if ((frame[1].i) != (204)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(548);
	((func_lib_input_TField_backspace) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_backspace])(ctx, (frame[0].o));
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(551);
	if ((frame[1].i) != (127)) goto label_6;
	}
	{
	LINE_NUMBER(552);
	((func_lib_input_TField_forwardDelete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_forwardDelete])(ctx, (frame[0].o));
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(555);
	if ((frame[1].i) == (14)) goto label_9;
	}
	{
	if ((frame[1].i) != (-3)) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(556);
	((func_lib_input_TField_moveCaretLeft_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_moveCaretLeft_boolean_boolean])(ctx, (frame[0].o), (jint(0)), (jint(0)));
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(559);
	if ((frame[1].i) == (15)) goto label_12;
	}
	{
	if ((frame[1].i) != (-4)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(560);
	((func_lib_input_TField_moveCaretRight_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_moveCaretRight_boolean_boolean])(ctx, (frame[0].o), (jint(0)), (jint(0)));
	LINE_NUMBER(561);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(563);
	if ((frame[1].i) != (19)) goto label_15;
	}
	{
	LINE_NUMBER(564);
	((func_lib_input_TField_backspace) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_backspace])(ctx, (frame[0].o));
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(568);
	if ((frame[1].i) < (65)) goto label_18;
	}
	{
	if ((frame[1].i) > (122)) goto label_18;
	}
	clinit_lib_input_TField(ctx);
	(sp++)->i = SF_lib_input_TField_isQwerty;
	if ((--sp)->i != 0) goto label_18;
	{
	LINE_NUMBER(569);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_isQwerty = (jint(1));
	LINE_NUMBER(570);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_typingModeAreaWidth = (jint(0));
	LINE_NUMBER(571);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"qwerty"_j))), (jint(1)));
	}
label_18:;
	{
	LINE_NUMBER(574);
	if ((clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_isQwerty) == 0) goto label_22;
	}
	{
	LINE_NUMBER(575);
	if ((frame[1].i) < (32)) goto label_22;
	}
	{
	LINE_NUMBER(576);
	M_lib_input_TField_keyPressedAscii_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return (jint(0));
	}
label_22:;
	{
	LINE_NUMBER(581);
	if ((frame[1].i) != (clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_changeModeKey)) goto label_26;
	}
	{
	LINE_NUMBER(582);
	sp[0].o = frame[0].o;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_mode = (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_mode) + (jint(1)));
	LINE_NUMBER(583);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode) <= (jint(3))) goto label_29;
	}
	{
	LINE_NUMBER(584);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode = (jint(0));
	}
label_29:;
	{
	LINE_NUMBER(587);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(1));
	LINE_NUMBER(588);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (frame[1].i);
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return (jint(0));
	}
label_26:;
	{
	LINE_NUMBER(591);
	if ((frame[1].i) != (42)) goto label_33;
	}
	{
	LINE_NUMBER(592);
	frame[1].i = (58);
	}
label_33:;
	{
	LINE_NUMBER(595);
	if ((frame[1].i) != (35)) goto label_35;
	}
	{
	LINE_NUMBER(596);
	frame[1].i = (59);
	}
label_35:;
	{
	LINE_NUMBER(599);
	if ((frame[1].i) < (48)) goto label_37;
	}
	{
	if ((frame[1].i) > (59)) goto label_37;
	}
	{
	LINE_NUMBER(600);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) == 0) goto label_39;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) == (jint(2))) goto label_39;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) == (jint(3))) goto label_39;
	}
	{
	LINE_NUMBER(601);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(1))) goto label_41;
	}
	{
	LINE_NUMBER(602);
	M_lib_input_TField_keyPressedAscii_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(603);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(1));
	goto label_41;
	}
label_39:;
	{
	LINE_NUMBER(607);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) == (jint(2))) goto label_44;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) == (jint(3))) goto label_44;
	}
	{
	LINE_NUMBER(608);
	clinit_lib_input_TField(ctx);
	sp[0].o = (jobject)SF_lib_input_TField_print;
	frame[2].o = sp[0].o;
	goto label_47;
	}
label_44:;
	{
	LINE_NUMBER(610);
	clinit_lib_input_TField(ctx);
	sp[0].o = (jobject)SF_lib_input_TField_printA;
	frame[2].o = sp[0].o;
	}
label_47:;
	{
	LINE_NUMBER(615);
	if ((frame[1].i) != ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey)) goto label_48;
	}
	{
	LINE_NUMBER(616);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_indexOfActiveChar) + (jint(1));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)))));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_indexOfActiveChar = (temp0 % temp1);
	LINE_NUMBER(617);
	jint temp2 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)))))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)))), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_indexOfActiveChar));
	frame[3].i = temp2;
	LINE_NUMBER(618);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode) != 0) goto label_52;
	}
	{
	LINE_NUMBER(619);
	jint temp0 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, (frame[3].i));
	frame[3].i = temp0;
	goto label_54;
	}
label_52:;
	{
	LINE_NUMBER(620);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(1))) goto label_55;
	}
	{
	LINE_NUMBER(621);
	jint temp0 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, (frame[3].i));
	frame[3].i = temp0;
	goto label_54;
	}
label_55:;
	{
	LINE_NUMBER(622);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(2))) goto label_57;
	}
	{
	LINE_NUMBER(623);
	jint temp0 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, (frame[3].i));
	frame[3].i = temp0;
	goto label_54;
	}
label_57:;
	{
	LINE_NUMBER(625);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)))));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[3].i = temp1;
	}
label_54:;
	{
	LINE_NUMBER(628);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)), (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) - (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(629);
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_60;
	}
	{
	LINE_NUMBER(630);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos;
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, temp1);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_60:;
	{
	LINE_NUMBER(633);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[4].o);
	LINE_NUMBER(634);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = (jobject)SF_lib_input_TField_MAX_TIME_TO_CONFIRM_KEY;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_keyInActiveState = ((jint)ARRAY_ACCESS(jint, sp[1].o, (clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_typeXpeed)));
	LINE_NUMBER(635);
	M_lib_input_TField_setPasswordTest(ctx, (frame[0].o));
	goto label_64;
	}
label_48:;
	{
	LINE_NUMBER(636);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_maxTextLenght)) goto label_64;
	}
	{
	LINE_NUMBER(637);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(1))) goto label_66;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey) == (-1984)) goto label_66;
	}
	{
	LINE_NUMBER(638);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode = (jint(0));
	}
label_66:;
	{
	LINE_NUMBER(641);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_indexOfActiveChar = (jint(0));
	LINE_NUMBER(642);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)))))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)))), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_indexOfActiveChar));
	frame[3].i = temp0;
	LINE_NUMBER(643);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode) != 0) goto label_70;
	}
	{
	LINE_NUMBER(644);
	jint temp0 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, (frame[3].i));
	frame[3].i = temp0;
	goto label_72;
	}
label_70:;
	{
	LINE_NUMBER(645);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(1))) goto label_73;
	}
	{
	LINE_NUMBER(646);
	jint temp0 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, (frame[3].i));
	frame[3].i = temp0;
	goto label_72;
	}
label_73:;
	{
	LINE_NUMBER(647);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(2))) goto label_75;
	}
	{
	LINE_NUMBER(648);
	jint temp0 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, (frame[3].i));
	frame[3].i = temp0;
	goto label_72;
	}
label_75:;
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) - (48)))));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[3].i = temp1;
	}
label_72:;
	{
	LINE_NUMBER(653);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(654);
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_78;
	}
	{
	LINE_NUMBER(655);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos;
	sp[2].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, temp1);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_78:;
	{
	LINE_NUMBER(658);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[4].o);
	LINE_NUMBER(659);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = (jobject)SF_lib_input_TField_MAX_TIME_TO_CONFIRM_KEY;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_keyInActiveState = ((jint)ARRAY_ACCESS(jint, sp[1].o, (clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_typeXpeed)));
	LINE_NUMBER(660);
	sp[0].o = frame[0].o;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos) + (jint(1)));
	LINE_NUMBER(661);
	M_lib_input_TField_setPasswordTest(ctx, (frame[0].o));
	LINE_NUMBER(662);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	}
label_64:;
	{
	LINE_NUMBER(665);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (frame[1].i);
	LINE_NUMBER(666);
	goto label_41;
	}
label_37:;
	{
	LINE_NUMBER(668);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_indexOfActiveChar = (jint(0));
	LINE_NUMBER(669);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (frame[1].i);
	}
label_41:;
	{
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:paint", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(677);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showSubTextField) == 0) goto label_1;
	}
	{
	LINE_NUMBER(678);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	}
label_1:;
	{
	LINE_NUMBER(681);
	frame[2].i = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isFocus);
	LINE_NUMBER(682);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(683);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_passwordText;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_paintedText = (jref) sp[1].o;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(685);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_paintedText = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_paintedText;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(688);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_paintedText = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_7:;
	{
	LINE_NUMBER(691);
	frame[3].i = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(692);
	frame[4].i = (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_y) - (jint(1)));
	LINE_NUMBER(693);
	frame[5].i = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_width);
	LINE_NUMBER(694);
	frame[6].i = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_height);
	LINE_NUMBER(695);
	frame[7].i = (((6) + ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX)) + ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(696);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	jint temp0 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_BIPUSH(12);
label_15:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(697);
	frame[9].i = (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_y) + ((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_height) - (frame[8].i)) / (jint(2))));
	LINE_NUMBER(698);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_name;
	frame[10].o = sp[0].o;
	LINE_NUMBER(699);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_paintedText;
	frame[11].o = sp[0].o;
	LINE_NUMBER(700);
	frame[12].o = (frame[1].o);
	LINE_NUMBER(701);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(703);
	if ((frame[2].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(704);
	sp[0].o = frame[1].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = (jobject)SF_lib_input_TField_imgTf;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (81), (29), (27), (jint(0)), (frame[3].i), (frame[4].i), (jint(0)));
	LINE_NUMBER(705);
	sp[0].o = frame[1].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = (jobject)SF_lib_input_TField_imgTf;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (135), (29), (27), (jint(0)), (((frame[3].i) + (frame[5].i)) - (29)), (frame[4].i), (jint(0)));
	LINE_NUMBER(706);
	sp[0].o = frame[1].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = (jobject)SF_lib_input_TField_imgTf;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (108), (29), (27), (jint(0)), (((frame[3].i) + (frame[5].i)) - (58)), (frame[4].i), (jint(0)));
	LINE_NUMBER(708);
	frame[13].i = (jint(0));
	}
label_27:;
	{
	if ((frame[13].i) >= (((frame[5].i) - (58)) / (29))) goto label_28;
	}
	{
	LINE_NUMBER(709);
	sp[0].o = frame[12].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = (jobject)SF_lib_input_TField_imgTf;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (108), (29), (27), (jint(0)), (((frame[3].i) + (29)) + ((frame[13].i) * (29))), (frame[4].i), (jint(0)));
	LINE_NUMBER(708);
	INST_IINC(13, 1);
	goto label_27;
	}
label_22:;
	{
	LINE_NUMBER(712);
	sp[0].o = frame[1].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = (jobject)SF_lib_input_TField_imgTf;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (29), (27), (jint(0)), (frame[3].i), (frame[4].i), (jint(0)));
	LINE_NUMBER(713);
	sp[0].o = frame[1].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = (jobject)SF_lib_input_TField_imgTf;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (54), (29), (27), (jint(0)), (((frame[3].i) + (frame[5].i)) - (29)), (frame[4].i), (jint(0)));
	LINE_NUMBER(714);
	sp[0].o = frame[1].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = (jobject)SF_lib_input_TField_imgTf;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (27), (29), (27), (jint(0)), (((frame[3].i) + (frame[5].i)) - (58)), (frame[4].i), (jint(0)));
	LINE_NUMBER(716);
	frame[13].i = (jint(0));
	}
label_34:;
	{
	if ((frame[13].i) >= (((frame[5].i) - (58)) / (29))) goto label_28;
	}
	{
	LINE_NUMBER(717);
	sp[0].o = frame[12].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = (jobject)SF_lib_input_TField_imgTf;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (27), (29), (27), (jint(0)), (((frame[3].i) + (29)) + ((frame[13].i) * (29))), (frame[4].i), (jint(0)));
	LINE_NUMBER(716);
	INST_IINC(13, 1);
	goto label_34;
	}
label_28:;
	{
	LINE_NUMBER(721);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[12].o), ((frame[3].i) + (jint(3))), ((frame[4].i) + (jint(1))), ((frame[5].i) - (jint(4))), (frame[6].i));
	LINE_NUMBER(722);
	if ((frame[2].i) == 0) goto label_38;
	}
	{
	jint temp0 = (jint)((func_lib_input_TField_hasSelection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_hasSelection_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_38;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[11].o));
	if (temp0 != 0) goto label_38;
	}
	{
	LINE_NUMBER(723);
	jint temp0 = (jint)((func_lib_input_TField_getSelectionStart_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_getSelectionStart_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[11].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[14].i = temp2;
	LINE_NUMBER(724);
	jint temp3 = (jint)((func_lib_input_TField_getSelectionEnd_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_getSelectionEnd_R_int])(ctx, (frame[0].o));
	jint temp4 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[11].o));
	jint temp5 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp3, temp4);
	frame[15].i = temp5;
	LINE_NUMBER(725);
	jint temp6 = frame[7].i;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[11].o), (jint(0)), (frame[14].i));
	jint temp7 = (jint)M_lib_input_TField_measurePaintedWidth_java_lang_String_R_int(ctx, sp[0].o, sp[1].o);
	frame[16].i = (temp6 + temp7);
	LINE_NUMBER(726);
	jint temp8 = frame[7].i;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[11].o), (jint(0)), (frame[15].i));
	jint temp9 = (jint)M_lib_input_TField_measurePaintedWidth_java_lang_String_R_int(ctx, sp[0].o, sp[1].o);
	frame[17].i = (temp8 + temp9);
	LINE_NUMBER(727);
	if ((frame[17].i) <= (frame[16].i)) goto label_38;
	}
	{
	LINE_NUMBER(728);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(3900150)));
	LINE_NUMBER(729);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (frame[16].i), ((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_y) + ((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_height) - (clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_CARET_HEIGHT)) / (jint(2)))) + (jint(1))), ((frame[17].i) - (frame[16].i)), (clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_CARET_HEIGHT));
	}
label_38:;
	{
	LINE_NUMBER(733);
	if ((frame[11].o) == nullptr) goto label_46;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_46;
	}
	{
	LINE_NUMBER(734);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[12].o), (frame[11].o), (frame[7].i), (frame[9].i), (jint(0)));
	goto label_48;
	}
label_46:;
	{
	LINE_NUMBER(735);
	if ((frame[10].o) == nullptr) goto label_48;
	}
	{
	LINE_NUMBER(736);
	if ((frame[2].i) == 0) goto label_50;
	}
	{
	LINE_NUMBER(737);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_focus;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[12].o), (frame[10].o), (frame[7].i), ((frame[9].i) + (jint(2))), (jint(0)));
	goto label_48;
	}
label_50:;
	{
	LINE_NUMBER(739);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_unfocus;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[12].o), (frame[10].o), (frame[7].i), ((frame[9].i) + (jint(2))), (jint(0)));
	}
label_48:;
	{
	LINE_NUMBER(743);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(744);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isFocus) == 0) goto label_53;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isPaintMouse) == 0) goto label_53;
	}
	{
	LINE_NUMBER(745);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState) != 0) goto label_55;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter) > 0) goto label_56;
	}
	{
	if (((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_counter) / (jint(5))) % (jint(2))) != 0) goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(746);
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[11].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[14].i = temp2;
	LINE_NUMBER(747);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(7999781)));
	LINE_NUMBER(748);
	sp[0].o = frame[1].o;
	jint temp3 = ((7) + ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX)) + ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_x);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[11].o), (jint(0)), (frame[14].i));
	jint temp4 = (jint)M_lib_input_TField_measurePaintedWidth_java_lang_String_R_int(ctx, sp[1].o, sp[2].o);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, sp[0].o, ((temp3 + temp4) - (jint(1))), ((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_y) + ((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_height) - (clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_CARET_HEIGHT)) / (jint(2)))) + (jint(1))), (jint(1)), (clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_CARET_HEIGHT));
	}
label_55:;
	{
	LINE_NUMBER(751);
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(752);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	if (sp[0].o == nullptr) goto label_53;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_53;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isTouch;
	if ((--sp)->i == 0) goto label_53;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_53;
	{
	LINE_NUMBER(753);
	sp[0].o = frame[1].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = (jobject)SF_lib_input_TField_myTexture2der;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_width)) - (13)), ((((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_y) + (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_height) / (jint(2)))) + (jint(1))), (jint(3)));
	}
label_53:;
	LINE_NUMBER(756);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_TField_setPasswordTest(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:setPasswordTest", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(759);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(760);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(761);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(762);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (42));
	LINE_NUMBER(761);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(764);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState) <= 0) goto label_8;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) <= 0) goto label_8;
	}
	{
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 > temp1) goto label_8;
	}
	{
	LINE_NUMBER(765);
	sp[0].o = frame[1].o;
	jint temp0 = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) - (jint(1));
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos) - (jint(1))));
	((func_java_lang_StringBuilder_setCharAt_int_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setCharAt_int_char])(ctx, sp[0].o, temp0, temp1);
	}
label_8:;
	{
	LINE_NUMBER(767);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_passwordText = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(769);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_TField_placeCaretAtPointerX_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:placeCaretAtPointerX", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(772);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(2))) goto label_1;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_passwordText;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((lib_input_TField *) NULL_CHECK(sp[-1].o))->F_text;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(773);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_4;
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_8b;
	if ((--sp)->o != nullptr) goto label_5;
label_4:;
	{
	LINE_NUMBER(774);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	sp += 1;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = sp[1].i;
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(777);
	frame[3].i = ((frame[1].i) - (((6) + ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_offsetX)) + ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_x)));
	LINE_NUMBER(778);
	if ((frame[3].i) > 0) goto label_10;
	}
	{
	LINE_NUMBER(779);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos = (jint(0));
	LINE_NUMBER(780);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(782);
	frame[4].i = (jint(0));
	LINE_NUMBER(783);
	frame[5].i = (jint(1));
	}
label_14:;
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 > temp1) goto label_15;
	}
	{
	LINE_NUMBER(784);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (jint(0)), (frame[5].i));
	jint temp0 = (jint)M_lib_input_TField_measurePaintedWidth_java_lang_String_R_int(ctx, sp[0].o, sp[1].o);
	frame[6].i = temp0;
	LINE_NUMBER(785);
	if ((frame[3].i) >= (((frame[4].i) + (frame[6].i)) / (jint(2)))) goto label_18;
	}
	{
	LINE_NUMBER(786);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos = ((frame[5].i) - (jint(1)));
	LINE_NUMBER(787);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(789);
	frame[4].i = (frame[6].i);
	LINE_NUMBER(783);
	INST_IINC(5, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(791);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = temp0;
	LINE_NUMBER(792);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(795);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isPaintMouse = (jint(1));
	LINE_NUMBER(796);
	sp[0].o = frame[0].o;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_counter = (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_counter) + (jint(1)));
	LINE_NUMBER(798);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_lib_input_TField(ctx);
	sp[0].o = (jobject)SF_lib_input_TField_currentTField;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	{
	LINE_NUMBER(799);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	sp[0].o = (jobject)((func_com_nro_GameMain$IWebInputBridge_pollLiveText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebInputBridge, INDEX_com_nro_GameMain$IWebInputBridge_pollLiveText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(800);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(801);
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(805);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(806);
	sp[0].o = frame[0].o;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_keyInActiveState = (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_keyInActiveState) - (jint(1)));
	LINE_NUMBER(807);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState) != 0) goto label_7;
	}
	{
	LINE_NUMBER(808);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_indexOfActiveChar = (jint(0));
	LINE_NUMBER(809);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(1))) goto label_12;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey) == (clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_changeModeKey)) goto label_12;
	}
	{
	LINE_NUMBER(810);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_mode = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(813);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(814);
	M_lib_input_TField_setPasswordTest(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(818);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(819);
	sp[0].o = frame[0].o;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_showCaretCounter = (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_showCaretCounter) - (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(822);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isAndroid) != 0) goto label_17;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isIOS;
	if ((--sp)->i == 0) goto label_18;
label_17:;
	(sp++)->l = jlong(200ll);
	goto label_19;
label_18:;
	(sp++)->l = jlong(50ll);
label_19:;
	{
	sp -= 1;
	frame[1].l = sp[0].l;
	LINE_NUMBER(823);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - (clinit_lib_input_TField(ctx), (jlong)SF_lib_input_TField_lastTimeCloseDialog)), (frame[1].l))) >= 0) goto label_21;
	}
	{
	LINE_NUMBER(824);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(825);
	popStackFrame(ctx);
	return;
	}
label_21:;
	{
	LINE_NUMBER(828);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_24;
	}
	{
	LINE_NUMBER(829);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_26;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isFocus) == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_26;
	}
	{
	jint temp0 = (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_width)) - (22);
	jint temp1 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = 22;
	jint temp3 = (jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_height;
	LINE_NUMBER(830);
	jint temp4 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, temp3);
	if (temp4 == 0) goto label_26;
	}
	{
	LINE_NUMBER(831);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(832);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_caretPos = (jint(0));
	LINE_NUMBER(833);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	LINE_NUMBER(834);
	M_lib_input_TField_setPasswordTest(ctx, (frame[0].o));
	LINE_NUMBER(835);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(836);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(1));
	LINE_NUMBER(837);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = (frame[0].o);
	LINE_NUMBER(838);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(839);
	popStackFrame(ctx);
	return;
	}
label_26:;
	{
	LINE_NUMBER(842);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_height));
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(843);
	frame[3].i = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isFocus);
	LINE_NUMBER(844);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(1));
	LINE_NUMBER(845);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = (frame[0].o);
	LINE_NUMBER(846);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	LINE_NUMBER(847);
	if ((frame[3].i) != 0) goto label_43;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isPC;
	if ((--sp)->i == 0) goto label_44;
label_43:;
	{
	LINE_NUMBER(848);
	M_lib_input_TField_placeCaretAtPointerX_int(ctx, (frame[0].o), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px));
	}
label_44:;
	{
	LINE_NUMBER(850);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_showCaretCounter = (10);
	LINE_NUMBER(851);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	LINE_NUMBER(852);
	((func_lib_input_TField_doChangeToTextBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_doChangeToTextBox])(ctx, (frame[0].o));
	LINE_NUMBER(853);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(854);
	popStackFrame(ctx);
	return;
	}
label_37:;
	{
	LINE_NUMBER(857);
	frame[3].i = ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isFocus);
	LINE_NUMBER(858);
	if ((frame[3].i) == 0) goto label_50;
	}
	{
	clinit_lib_input_TField(ctx);
	sp[0].o = (jobject)SF_lib_input_TField_focusedTField;
	if (sp[0].o != (frame[0].o)) goto label_50;
	}
	{
	LINE_NUMBER(859);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = (jobject(nullptr));
	}
label_50:;
	{
	LINE_NUMBER(861);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(0));
	LINE_NUMBER(862);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	LINE_NUMBER(864);
	if ((frame[3].i) == 0) goto label_24;
	}
	{
	LINE_NUMBER(865);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	if (sp[0].o == nullptr) goto label_55;
	}
	{
	clinit_lib_input_TField(ctx);
	sp[0].o = (jobject)SF_lib_input_TField_currentTField;
	if (sp[0].o != (frame[0].o)) goto label_55;
	}
	{
	LINE_NUMBER(866);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	((func_com_nro_GameMain$IWebInputBridge_closePrompt) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebInputBridge, INDEX_com_nro_GameMain$IWebInputBridge_closePrompt, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(867);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_currentTField = (jobject(nullptr));
	}
label_55:;
	{
	LINE_NUMBER(869);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isIOS) != 0) goto label_58;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isAndroid;
	if ((--sp)->i == 0) goto label_24;
label_58:;
	clinit_com_badlogic_gdx_Gdx(ctx);
	(sp++)->o = SF_com_badlogic_gdx_Gdx_input;
	if ((--sp)->o == nullptr) goto label_24;
	{
	LINE_NUMBER(870);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	((func_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean, sp[0].o))(ctx, sp[0].o, (jint(0)));
	}
label_24:;
	LINE_NUMBER(874);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_lib_input_TField_getText_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:getText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(877);
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_setText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:setText", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(881);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(882);
	sp[0].o = (jobject)SM_lib_input_VietnameseTextUtils_sanitizeForSingleLine_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(883);
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) == (jint(1))) goto label_4;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType) != (jint(3))) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(884);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	LINE_NUMBER(885);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_8;
	}
	{
	LINE_NUMBER(886);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(887);
	jint temp1 = (jint)M_lib_input_TField_isAllowedChar_char_R_boolean(ctx, (frame[0].o), (frame[5].i));
	if (temp1 == 0) goto label_11;
	}
	{
	LINE_NUMBER(888);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[5].i));
	}
label_11:;
	{
	LINE_NUMBER(885);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(891);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(893);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 <= ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_maxTextLenght)) goto label_13;
	}
	{
	LINE_NUMBER(894);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (jint(0)), ((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_maxTextLenght));
	frame[2].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(896);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_lastKey = (-1984);
	LINE_NUMBER(897);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_keyInActiveState = (jint(0));
	LINE_NUMBER(898);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_indexOfActiveChar = (jint(0));
	LINE_NUMBER(899);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_selectionAnchor = (jint(-1));
	LINE_NUMBER(900);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[2].o);
	LINE_NUMBER(901);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_paintedText = (jref) (frame[2].o);
	LINE_NUMBER(902);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_caretPos = temp0;
	LINE_NUMBER(903);
	M_lib_input_TField_setPasswordTest(ctx, (frame[0].o));
	LINE_NUMBER(904);
	M_lib_input_TField_setOffset(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(906);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_TField_setMaxTextLenght_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:setMaxTextLenght", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(909);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_maxTextLenght = (frame[1].i);
	LINE_NUMBER(910);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_setIputType_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:setIputType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(913);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_inputType = (frame[1].i);
	LINE_NUMBER(914);
	((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_maxTextLenght = (500);
	LINE_NUMBER(915);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:perform", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(918);
	if ((frame[1].i) != (1000)) goto label_1;
	}
	{
	LINE_NUMBER(919);
	((func_lib_input_TField_backspace) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_TField_backspace])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(921);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_lib_input_TField(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_TField(ctx);
	{
	LINE_NUMBER(22);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_typeXpeed = (jint(2));
	LINE_NUMBER(23);
	sp[0].o = (jobject) createArray(ctx, &class_int, (7));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (18);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (14);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (11);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (9);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(2));
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_MAX_TIME_TO_CONFIRM_KEY = sp[0].o;
	LINE_NUMBER(24);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_CARET_HEIGHT = (jint(0));
	LINE_NUMBER(25);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (12));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8" 0"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8".,@?!_1\"/$-():*+<=>;%&~#%^&*{}[];'/1"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"abc2\u00e1\u00e0\u1ea3\u00e3\u1ea1\u00e2\u1ea5\u1ea7\u1ea9\u1eab\u1ead\u0103\u1eaf\u1eb1\u1eb3\u1eb5\u1eb72"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"def3\u0111\u00e9\u00e8\u1ebb\u1ebd\u1eb9\u00ea\u1ebf\u1ec1\u1ec3\u1ec5\u1ec73"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"ghi4\u00ed\u00ec\u1ec9\u0129\u1ecb4"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"jkl5"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"mno6\u00f3\u00f2\u1ecf\u00f5\u1ecd\u00f4\u1ed1\u1ed3\u1ed5\u1ed7\u1ed9\u01a1\u1edb\u1edd\u1edf\u1ee1\u1ee36"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"pqrs7"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"tuv8\u00fa\u00f9\u1ee7\u0169\u1ee5\u01b0\u1ee9\u1eeb\u1eed\u1eef\u1ef18"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"wxyz9\u00fd\u1ef3\u1ef7\u1ef9\u1ef59"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"*"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"#"_j)));
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_print = sp[0].o;
	LINE_NUMBER(26);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (12));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"0"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"1"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"abc2"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"def3"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"ghi4"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"jkl5"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"mno6"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"pqrs7"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"tuv8"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"wxyz9"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"0"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"0"_j)));
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_printA = sp[0].o;
	LINE_NUMBER(41);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_isQwerty = (jint(1));
	LINE_NUMBER(54);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_changeModeKey = (11);
	LINE_NUMBER(55);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2der.png"_j))));
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_myTexture2der = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dtf.png"_j))));
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_imgTf = sp[0].o;
	LINE_NUMBER(63);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_isOpeningDialog = (jint(0));
	LINE_NUMBER(64);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_lastTimeCloseDialog = (jlong(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_input_TField[] {
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
	(void *) M_lib_input_TField_perform_int_java_lang_Object,
	(void *) M_lib_input_TField_hasSelection_R_boolean,
	(void *) M_lib_input_TField_getSelectionStart_R_int,
	(void *) M_lib_input_TField_getSelectionEnd_R_int,
	(void *) M_lib_input_TField_clearSelection,
	(void *) M_lib_input_TField_selectAll,
	(void *) M_lib_input_TField_getSelectedOrAllText_R_java_lang_String,
	(void *) M_lib_input_TField_deleteSelection_R_boolean,
	(void *) M_lib_input_TField_isAllowedChar_char_R_boolean,
	(void *) M_lib_input_TField_insertText_java_lang_String,
	(void *) M_lib_input_TField_doChangeToTextBox,
	(void *) M_lib_input_TField_clampCaret,
	(void *) M_lib_input_TField_backspace,
	(void *) M_lib_input_TField_forwardDelete,
	(void *) M_lib_input_TField_deletePrevWord,
	(void *) M_lib_input_TField_deleteNextWord,
	(void *) M_lib_input_TField_moveCaretLeft_boolean_boolean,
	(void *) M_lib_input_TField_moveCaretRight_boolean_boolean,
	(void *) M_lib_input_TField_moveCaretHome_boolean,
	(void *) M_lib_input_TField_moveCaretEnd_boolean,
	(void *) M_lib_input_TField_clear,
	(void *) M_lib_input_TField_measurePaintedWidth_java_lang_String_R_int,
	(void *) M_lib_input_TField_setOffset,
	(void *) M_lib_input_TField_keyPressedAscii_int,
	(void *) M_lib_input_TField_keyPressed_int_R_boolean,
	(void *) M_lib_input_TField_paint_lib_mGraphics,
	(void *) M_lib_input_TField_setPasswordTest,
	(void *) M_lib_input_TField_placeCaretAtPointerX_int,
	(void *) M_lib_input_TField_update,
	(void *) M_lib_input_TField_getText_R_java_lang_String,
	(void *) M_lib_input_TField_setText_java_lang_String,
	(void *) M_lib_input_TField_setMaxTextLenght_int,
	(void *) M_lib_input_TField_setIputType_int,
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
	{ "perform", "(ILjava/lang/Object;)V" },
	{ "hasSelection", "()Z" },
	{ "getSelectionStart", "()I" },
	{ "getSelectionEnd", "()I" },
	{ "clearSelection", "()V" },
	{ "selectAll", "()V" },
	{ "getSelectedOrAllText", "()Ljava/lang/String;" },
	{ "deleteSelection", "()Z" },
	{ "isAllowedChar", "(C)Z" },
	{ "insertText", "(Ljava/lang/String;)V" },
	{ "doChangeToTextBox", "()V" },
	{ "clampCaret", "()V" },
	{ "backspace", "()V" },
	{ "forwardDelete", "()V" },
	{ "deletePrevWord", "()V" },
	{ "deleteNextWord", "()V" },
	{ "moveCaretLeft", "(ZZ)V" },
	{ "moveCaretRight", "(ZZ)V" },
	{ "moveCaretHome", "(Z)V" },
	{ "moveCaretEnd", "(Z)V" },
	{ "clear", "()V" },
	{ "measurePaintedWidth", "(Ljava/lang/String;)I" },
	{ "setOffset", "()V" },
	{ "keyPressedAscii", "(I)V" },
	{ "keyPressed", "(I)Z" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "setPasswordTest", "()V" },
	{ "placeCaretAtPointerX", "(I)V" },
	{ "update", "()V" },
	{ "getText", "()Ljava/lang/String;" },
	{ "setText", "(Ljava/lang/String;)V" },
	{ "setMaxTextLenght", "(I)V" },
	{ "setIputType", "(I)V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "x", &class_int, offsetof(lib_input_TField, F_x), "I", 1 },
	{ "y", &class_int, offsetof(lib_input_TField, F_y), "I", 1 },
	{ "width", &class_int, offsetof(lib_input_TField, F_width), "I", 1 },
	{ "height", &class_int, offsetof(lib_input_TField, F_height), "I", 1 },
	{ "isFocus", &class_boolean, offsetof(lib_input_TField, F_isFocus), "Z", 1 },
	{ "lockArrow", &class_boolean, offsetof(lib_input_TField, F_lockArrow), "Z", 2 },
	{ "typeXpeed", &class_int, (intptr_t) &SF_lib_input_TField_typeXpeed, "I", 10 },
	{ "MAX_TIME_TO_CONFIRM_KEY", getArrayClass(&class_int, 1), (intptr_t) &SF_lib_input_TField_MAX_TIME_TO_CONFIRM_KEY, "[I", 26 },
	{ "CARET_HEIGHT", &class_int, (intptr_t) &SF_lib_input_TField_CARET_HEIGHT, "I", 10 },
	{ "print", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_lib_input_TField_print, "[Ljava/lang/String;", 10 },
	{ "printA", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_lib_input_TField_printA, "[Ljava/lang/String;", 10 },
	{ "f", &class_java_lang_String, offsetof(lib_input_TField, F_f), "Ljava/lang/String;", 1 },
	{ "text", &class_java_lang_String, offsetof(lib_input_TField, F_text), "Ljava/lang/String;", 2 },
	{ "passwordText", &class_java_lang_String, offsetof(lib_input_TField, F_passwordText), "Ljava/lang/String;", 2 },
	{ "paintedText", &class_java_lang_String, offsetof(lib_input_TField, F_paintedText), "Ljava/lang/String;", 2 },
	{ "caretPos", &class_int, offsetof(lib_input_TField, F_caretPos), "I", 2 },
	{ "selectionAnchor", &class_int, offsetof(lib_input_TField, F_selectionAnchor), "I", 2 },
	{ "counter", &class_int, offsetof(lib_input_TField, F_counter), "I", 2 },
	{ "maxTextLenght", &class_int, offsetof(lib_input_TField, F_maxTextLenght), "I", 2 },
	{ "offsetX", &class_int, offsetof(lib_input_TField, F_offsetX), "I", 2 },
	{ "lastKey", &class_int, offsetof(lib_input_TField, F_lastKey), "I", 2 },
	{ "keyInActiveState", &class_int, offsetof(lib_input_TField, F_keyInActiveState), "I", 2 },
	{ "indexOfActiveChar", &class_int, offsetof(lib_input_TField, F_indexOfActiveChar), "I", 2 },
	{ "showCaretCounter", &class_int, offsetof(lib_input_TField, F_showCaretCounter), "I", 2 },
	{ "inputType", &class_int, offsetof(lib_input_TField, F_inputType), "I", 2 },
	{ "isQwerty", &class_boolean, (intptr_t) &SF_lib_input_TField_isQwerty, "Z", 9 },
	{ "typingModeAreaWidth", &class_int, (intptr_t) &SF_lib_input_TField_typingModeAreaWidth, "I", 10 },
	{ "mode", &class_int, offsetof(lib_input_TField, F_mode), "I", 2 },
	{ "changeModeKey", &class_int, (intptr_t) &SF_lib_input_TField_changeModeKey, "I", 10 },
	{ "h", &class_boolean, offsetof(lib_input_TField, F_h), "Z", 1 },
	{ "name", &class_java_lang_String, offsetof(lib_input_TField, F_name), "Ljava/lang/String;", 1 },
	{ "cmdClear", &class_nro_Command, offsetof(lib_input_TField, F_cmdClear), "Lnro/Command;", 1 },
	{ "myTexture2der", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_lib_input_TField_myTexture2der, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "showSubTextField", &class_boolean, offsetof(lib_input_TField, F_showSubTextField), "Z", 2 },
	{ "isPaintMouse", &class_boolean, offsetof(lib_input_TField, F_isPaintMouse), "Z", 1 },
	{ "imgTf", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_lib_input_TField_imgTf, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "currentTField", &class_lib_input_TField, (intptr_t) &SF_lib_input_TField_currentTField, "Llib/input/TField;", 9 },
	{ "focusedTField", &class_lib_input_TField, (intptr_t) &SF_lib_input_TField_focusedTField, "Llib/input/TField;", 9 },
	{ "cmdDoneAction", &class_nro_Command, offsetof(lib_input_TField, F_cmdDoneAction), "Lnro/Command;", 1 },
	{ "cmdCancelAction", &class_nro_Command, offsetof(lib_input_TField, F_cmdCancelAction), "Lnro/Command;", 1 },
	{ "isOpeningDialog", &class_boolean, (intptr_t) &SF_lib_input_TField_isOpeningDialog, "Z", 9 },
	{ "lastTimeCloseDialog", &class_long, (intptr_t) &SF_lib_input_TField_lastTimeCloseDialog, "J", 9 },
};

static MethodMetadata methods[] {
	{ "hasSelection", (intptr_t) M_lib_input_TField_hasSelection_R_boolean, VTABLE_lib_input_TField_hasSelection_R_boolean, "()Z", 17 },
	{ "getSelectionStart", (intptr_t) M_lib_input_TField_getSelectionStart_R_int, VTABLE_lib_input_TField_getSelectionStart_R_int, "()I", 17 },
	{ "getSelectionEnd", (intptr_t) M_lib_input_TField_getSelectionEnd_R_int, VTABLE_lib_input_TField_getSelectionEnd_R_int, "()I", 17 },
	{ "clearSelection", (intptr_t) M_lib_input_TField_clearSelection, VTABLE_lib_input_TField_clearSelection, "()V", 17 },
	{ "selectAll", (intptr_t) M_lib_input_TField_selectAll, VTABLE_lib_input_TField_selectAll, "()V", 17 },
	{ "getSelectedOrAllText", (intptr_t) M_lib_input_TField_getSelectedOrAllText_R_java_lang_String, VTABLE_lib_input_TField_getSelectedOrAllText_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "deleteSelection", (intptr_t) M_lib_input_TField_deleteSelection_R_boolean, VTABLE_lib_input_TField_deleteSelection_R_boolean, "()Z", 17 },
	{ "isAllowedChar", (intptr_t) M_lib_input_TField_isAllowedChar_char_R_boolean, VTABLE_lib_input_TField_isAllowedChar_char_R_boolean, "(C)Z", 2 },
	{ "insertText", (intptr_t) M_lib_input_TField_insertText_java_lang_String, VTABLE_lib_input_TField_insertText_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "doChangeToTextBox", (intptr_t) M_lib_input_TField_doChangeToTextBox, VTABLE_lib_input_TField_doChangeToTextBox, "()V", 17 },
	{ "<init>", (intptr_t) init_lib_input_TField, 0, "()V", 1 },
	{ "clampCaret", (intptr_t) M_lib_input_TField_clampCaret, VTABLE_lib_input_TField_clampCaret, "()V", 2 },
	{ "backspace", (intptr_t) M_lib_input_TField_backspace, VTABLE_lib_input_TField_backspace, "()V", 17 },
	{ "forwardDelete", (intptr_t) M_lib_input_TField_forwardDelete, VTABLE_lib_input_TField_forwardDelete, "()V", 17 },
	{ "findPrevWordBoundary", (intptr_t) SM_lib_input_TField_findPrevWordBoundary_java_lang_String_int_R_int, 0, "(Ljava/lang/String;I)I", 10 },
	{ "findNextWordBoundary", (intptr_t) SM_lib_input_TField_findNextWordBoundary_java_lang_String_int_R_int, 0, "(Ljava/lang/String;I)I", 10 },
	{ "deletePrevWord", (intptr_t) M_lib_input_TField_deletePrevWord, VTABLE_lib_input_TField_deletePrevWord, "()V", 17 },
	{ "deleteNextWord", (intptr_t) M_lib_input_TField_deleteNextWord, VTABLE_lib_input_TField_deleteNextWord, "()V", 17 },
	{ "moveCaretLeft", (intptr_t) M_lib_input_TField_moveCaretLeft_boolean_boolean, VTABLE_lib_input_TField_moveCaretLeft_boolean_boolean, "(ZZ)V", 17 },
	{ "moveCaretRight", (intptr_t) M_lib_input_TField_moveCaretRight_boolean_boolean, VTABLE_lib_input_TField_moveCaretRight_boolean_boolean, "(ZZ)V", 17 },
	{ "moveCaretHome", (intptr_t) M_lib_input_TField_moveCaretHome_boolean, VTABLE_lib_input_TField_moveCaretHome_boolean, "(Z)V", 17 },
	{ "moveCaretEnd", (intptr_t) M_lib_input_TField_moveCaretEnd_boolean, VTABLE_lib_input_TField_moveCaretEnd_boolean, "(Z)V", 17 },
	{ "clear", (intptr_t) M_lib_input_TField_clear, VTABLE_lib_input_TField_clear, "()V", 17 },
	{ "measurePaintedWidth", (intptr_t) M_lib_input_TField_measurePaintedWidth_java_lang_String_R_int, VTABLE_lib_input_TField_measurePaintedWidth_java_lang_String_R_int, "(Ljava/lang/String;)I", 2 },
	{ "setOffset", (intptr_t) M_lib_input_TField_setOffset, VTABLE_lib_input_TField_setOffset, "()V", 2 },
	{ "keyPressedAscii", (intptr_t) M_lib_input_TField_keyPressedAscii_int, VTABLE_lib_input_TField_keyPressedAscii_int, "(I)V", 2 },
	{ "keyPressed", (intptr_t) M_lib_input_TField_keyPressed_int_R_boolean, VTABLE_lib_input_TField_keyPressed_int_R_boolean, "(I)Z", 17 },
	{ "paint", (intptr_t) M_lib_input_TField_paint_lib_mGraphics, VTABLE_lib_input_TField_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "setPasswordTest", (intptr_t) M_lib_input_TField_setPasswordTest, VTABLE_lib_input_TField_setPasswordTest, "()V", 2 },
	{ "placeCaretAtPointerX", (intptr_t) M_lib_input_TField_placeCaretAtPointerX_int, VTABLE_lib_input_TField_placeCaretAtPointerX_int, "(I)V", 2 },
	{ "update", (intptr_t) M_lib_input_TField_update, VTABLE_lib_input_TField_update, "()V", 17 },
	{ "getText", (intptr_t) M_lib_input_TField_getText_R_java_lang_String, VTABLE_lib_input_TField_getText_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "setText", (intptr_t) M_lib_input_TField_setText_java_lang_String, VTABLE_lib_input_TField_setText_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "setMaxTextLenght", (intptr_t) M_lib_input_TField_setMaxTextLenght_int, VTABLE_lib_input_TField_setMaxTextLenght_int, "(I)V", 17 },
	{ "setIputType", (intptr_t) M_lib_input_TField_setIputType_int, VTABLE_lib_input_TField_setIputType_int, "(I)V", 17 },
	{ "perform", (intptr_t) M_lib_input_TField_perform_int_java_lang_Object, VTABLE_lib_input_TField_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "<clinit>", (intptr_t) clinit_lib_input_TField, 0, "()V", 8 },
};

Class class_lib_input_TField{
		.nativeName = (intptr_t) "lib/input/TField",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_input_TField),
		.classVtable = (intptr_t) vtable_lib_input_TField,
		.staticInitializer = (intptr_t) clinit_lib_input_TField,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_input_TField,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 42,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_input_TField = registerClass(&class_lib_input_TField);

}

