#include "nro/ClientInput.h"
#include "lib/mFont.h"
#include "nro/GameScr.h"
#include "lib/input/TField.h"
#include "java/lang/StringBuilder.h"
#include "nro/IActionListener.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "lib/input/ChatTextField.h"
#include "java/lang/String.h"
#include "nro/ClientInput.h"
#include "nro/Res.h"
#include "nro/PopUp.h"
#include "nro/mScreen.h"
#include "com/nro/GameMain.h"
#include "nro/Command.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_ClientInput_instance;

void mark_nro_ClientInput(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ClientInput_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ClientInput_instance)->clazz)->markFunction)((jobject) SF_nro_ClientInput_instance, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_mScreen(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_ClientInput *) object;
	if (self->F_tf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tf)->clazz)->markFunction)((jobject) self->F_tf, mark, depth + 1);
	if (self->F_strPaint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strPaint)->clazz)->markFunction)((jobject) self->F_strPaint, mark, depth + 1);
	if (self->F_string1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_string1)->clazz)->markFunction)((jobject) self->F_string1, mark, depth + 1);
	if (self->F_i)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_i)->clazz)->markFunction)((jobject) self->F_i, mark, depth + 1);
}

void clinit_nro_ClientInput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
}

void init_nro_ClientInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientInput:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientInput(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_nro_mScreen(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ClientInput_gI_R_nro_ClientInput(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientInput:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientInput(ctx);
	{
	LINE_NUMBER(24);
	clinit_nro_ClientInput(ctx);
	sp[0].o = (jobject)SF_nro_ClientInput_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(25);
	clinit_nro_ClientInput(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ClientInput);
	init_nro_ClientInput(ctx, sp[0].o);
	clinit_nro_ClientInput(ctx);
	SF_nro_ClientInput_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(28);
	clinit_nro_ClientInput(ctx);
	sp[0].o = (jobject)SF_nro_ClientInput_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_nro_ClientInput_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientInput:switchToMe", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(5))) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (jint(1))) goto label_2;
	}
label_1:;
	{
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(3))) goto label_3;
	}
	{
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_lib_input_ChatTextField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_ChatTextField);
	init_lib_input_ChatTextField(ctx, sp[1].o);
	((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_i = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_string1;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_strChat = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_f;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_to = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(37);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow = (jint(1));
	LINE_NUMBER(38);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(39);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_10;
	}
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(43);
	((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	LINE_NUMBER(44);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	}
label_10:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_nro_ClientInput_getActiveField_R_lib_input_TField(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientInput:getActiveField", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(54);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (((jint)((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_isFocus) == 0) goto label_7;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}
label_7:;
	{
	LINE_NUMBER(54);
	INST_IINC(1, 1);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_nro_ClientInput_cycleFocus_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientInput:cycleFocus", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	jint temp0 = ((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_focus) - (jint(1));
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	jint temp1 = temp0 + (((jarray) nullCheck(ctx, sp[0].o))->length);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	jint temp2 = temp1 % (((jarray) nullCheck(ctx, sp[0].o))->length);
	sp[0].i = temp2;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	jint temp0 = ((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_focus) + (jint(1));
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	jint temp1 = temp0 % (((jarray) nullCheck(ctx, sp[0].o))->length);
	sp[0].i = temp1;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_focus = sp[1].i;
	LINE_NUMBER(68);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(69);
	if ((frame[2].i) != ((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_focus)) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(70);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isFocus = (frame[3].i);
	LINE_NUMBER(71);
	if ((frame[3].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	}
label_13:;
	{
	LINE_NUMBER(68);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ClientInput_setInput_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientInput:setInput", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(78);
	((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_nTf = (frame[1].i);
	LINE_NUMBER(79);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(80);
	((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_string1 = (jref) (frame[2].o);
	LINE_NUMBER(81);
	((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_w = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (20));
	LINE_NUMBER(82);
	if (((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_w) <= (320)) goto label_5;
	}
	{
	LINE_NUMBER(83);
	((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_w = (320);
	}
label_5:;
	{
	LINE_NUMBER(86);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"title= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[1].o, (frame[2].o), (((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_w) - (20)));
	((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_strPaint = (jref) sp[1].o;
	LINE_NUMBER(88);
	((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - ((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_w)) / (jint(2)));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_lib_input_TField, ((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_nTf));
	((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_tf = (jref) sp[1].o;
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	jint temp0 = (((jarray) nullCheck(ctx, sp[1].o))->length) * (35);
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_strPaint;
	((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_h = ((temp0 + (((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))) * (20))) + (40));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	jint temp1 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - ((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_h)) - (40);
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_strPaint;
	((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_y = (temp1 - (((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))) * (20)));
	LINE_NUMBER(93);
	frame[4].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_14;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	jint temp0 = frame[4].i;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_x = (((jint)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_x) + (10));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	jint temp1 = ((jint)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_y) + (35);
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_strPaint;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = ((temp1 + (((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))) * (20))) + ((frame[4].i) * (35)));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_width = (((jint)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_w) - (20));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_height = ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(93);
	INST_IINC(4, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(102);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_24;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isPC;
	if ((--sp)->i != 0) goto label_24;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_isFocus = (jint(0));
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_isFocus = (jint(1));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}
label_26:;
	{
	LINE_NUMBER(108);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_22;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_tf;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	}
label_22:;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[3].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CLOSE;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[3].o), (jint(1)), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(114);
	sp[0].o = frame[3].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_OK;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[3].o), (jint(2)), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(115);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_31;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[3].o)))->F_center;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (18));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[3].o)))->F_left;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (85));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[3].o)))->F_center;
	sp[1].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[3].o)))->F_left;
	jint temp0 = (((jint)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_y) + ((jint)((nro_ClientInput *) NULL_CHECK((frame[3].o)))->F_h)) + (jint(5));
	((nro_Command *) NULL_CHECK(sp[1].o))->F_y = temp0;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = temp0;
	}
label_31:;
	{
	LINE_NUMBER(121);
	((func_nro_ClientInput_switchToMe) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_ClientInput_switchToMe])(ctx, (frame[0].o));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ClientInput_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientInput:paint", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(126);
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, (frame[1].o), ((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_w), ((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_h), (jint(-1)), (jint(1)));
	LINE_NUMBER(129);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_strPaint;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(130);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_strPaint;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))), ((((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_y) + (15)) + ((frame[2].i) * (20))), (jint(2)));
	LINE_NUMBER(129);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(133);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (frame[1].o));
	LINE_NUMBER(133);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(137);
	M_nro_mScreen_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ClientInput_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientInput:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_update])(ctx, sp[0].o);
	LINE_NUMBER(143);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_lib_input_TField_update])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	LINE_NUMBER(143);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ClientInput_keyPress_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientInput:keyPress", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(150);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (((jint)((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isFocus) == 0) goto label_4;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	jint temp0 = (jint)((func_lib_input_TField_keyPressed_int_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_lib_input_TField_keyPressed_int_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (frame[1].i));
	LINE_NUMBER(153);
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(150);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(157);
	M_nro_mScreen_keyPress_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ClientInput_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientInput:updateKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_focus = (((jint)((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_focus) - (jint(1)));
	LINE_NUMBER(163);
	if (((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_focus) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_focus = ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1)));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(166);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_focus = (((jint)((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_focus) + (jint(1)));
	LINE_NUMBER(168);
	jint temp0 = (jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_focus;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_4;
	}
	{
	LINE_NUMBER(169);
	((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(173);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) != 0) goto label_9;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(174);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(176);
	frame[1].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(177);
	if (((jint)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_focus) != (frame[1].i)) goto label_14;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_isFocus = (jint(1));
	LINE_NUMBER(179);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_17;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_isFocus = (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(186);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_x;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	jint temp1 = (jint)((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_y;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	jint temp2 = (jint)((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_width;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	jint temp3 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, ((jint)((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_height));
	if (temp3 == 0) goto label_19;
	}
	{
	LINE_NUMBER(187);
	((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_focus = (frame[1].i);
	LINE_NUMBER(188);
	goto label_10;
	}
label_19:;
	{
	LINE_NUMBER(176);
	INST_IINC(1, 1);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(193);
	M_nro_mScreen_updateKey(ctx, (frame[0].o));
	LINE_NUMBER(194);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ClientInput_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientInput:perform", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(198);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(199);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	((func_nro_GameScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(200);
	clinit_nro_ClientInput(ctx);
	SF_nro_ClientInput_instance = (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(203);
	if ((frame[1].i) != (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(204);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(5))) goto label_6;
	}
	{
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (jint(1))) goto label_7;
	}
label_6:;
	{
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(3))) goto label_8;
	}
	{
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_i;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[1].o))->F_tfChat;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(207);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	((func_nro_Service_sendClientInput_Array1_lib_input_TField) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_sendClientInput_Array1_lib_input_TField])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(208);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	((func_nro_GameScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}
label_9:;
	{
	LINE_NUMBER(212);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_vuilongnhapduthongtin;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(216);
	frame[1].i = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(219);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_16;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	((func_nro_Service_sendClientInput_Array1_lib_input_TField) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_sendClientInput_Array1_lib_input_TField])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(221);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	((func_nro_GameScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(222);
	goto label_4;
	}
label_16:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK((frame[0].o)))->F_tf;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(226);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_vuilongnhapduthongtin;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}
label_21:;
	{
	LINE_NUMBER(230);
	INST_IINC(1, 1);
	goto label_15;
	}
label_4:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_ClientInput[] {
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
	(void *) M_nro_ClientInput_switchToMe,
	(void *) M_nro_ClientInput_keyPress_int,
	(void *) M_nro_ClientInput_update,
	(void *) M_nro_ClientInput_updateKey,
	(void *) M_nro_ClientInput_paint_lib_mGraphics,
	(void *) M_nro_ClientInput_perform_int_java_lang_Object,
	(void *) M_nro_ClientInput_getActiveField_R_lib_input_TField,
	(void *) M_nro_ClientInput_cycleFocus_boolean,
	(void *) M_nro_ClientInput_setInput_int_java_lang_String,
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
	{ "switchToMe", "()V" },
	{ "keyPress", "(I)V" },
	{ "update", "()V" },
	{ "updateKey", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "perform", "(ILjava/lang/Object;)V" },
	{ "getActiveField", "()Llib/input/TField;" },
	{ "cycleFocus", "(Z)V" },
	{ "setInput", "(ILjava/lang/String;)V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "instance", &class_nro_ClientInput, (intptr_t) &SF_nro_ClientInput_instance, "Lnro/ClientInput;", 10 },
	{ "tf", getArrayClass(&class_lib_input_TField, 1), offsetof(nro_ClientInput, F_tf), "[Llib/input/TField;", 1 },
	{ "x", &class_int, offsetof(nro_ClientInput, F_x), "I", 2 },
	{ "y", &class_int, offsetof(nro_ClientInput, F_y), "I", 2 },
	{ "w", &class_int, offsetof(nro_ClientInput, F_w), "I", 2 },
	{ "h", &class_int, offsetof(nro_ClientInput, F_h), "I", 2 },
	{ "strPaint", getArrayClass(&class_java_lang_String, 1), offsetof(nro_ClientInput, F_strPaint), "[Ljava/lang/String;", 2 },
	{ "string1", &class_java_lang_String, offsetof(nro_ClientInput, F_string1), "Ljava/lang/String;", 2 },
	{ "i", &class_lib_input_ChatTextField, offsetof(nro_ClientInput, F_i), "Llib/input/ChatTextField;", 2 },
	{ "focus", &class_int, offsetof(nro_ClientInput, F_focus), "I", 2 },
	{ "nTf", &class_int, offsetof(nro_ClientInput, F_nTf), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ClientInput, 0, "()V", 1 },
	{ "gI", (intptr_t) SM_nro_ClientInput_gI_R_nro_ClientInput, 0, "()Lnro/ClientInput;", 9 },
	{ "switchToMe", (intptr_t) M_nro_ClientInput_switchToMe, VTABLE_nro_ClientInput_switchToMe, "()V", 17 },
	{ "getActiveField", (intptr_t) M_nro_ClientInput_getActiveField_R_lib_input_TField, VTABLE_nro_ClientInput_getActiveField_R_lib_input_TField, "()Llib/input/TField;", 1 },
	{ "cycleFocus", (intptr_t) M_nro_ClientInput_cycleFocus_boolean, VTABLE_nro_ClientInput_cycleFocus_boolean, "(Z)V", 1 },
	{ "setInput", (intptr_t) M_nro_ClientInput_setInput_int_java_lang_String, VTABLE_nro_ClientInput_setInput_int_java_lang_String, "(ILjava/lang/String;)V", 17 },
	{ "paint", (intptr_t) M_nro_ClientInput_paint_lib_mGraphics, VTABLE_nro_ClientInput_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_ClientInput_update, VTABLE_nro_ClientInput_update, "()V", 17 },
	{ "keyPress", (intptr_t) M_nro_ClientInput_keyPress_int, VTABLE_nro_ClientInput_keyPress_int, "(I)V", 17 },
	{ "updateKey", (intptr_t) M_nro_ClientInput_updateKey, VTABLE_nro_ClientInput_updateKey, "()V", 17 },
	{ "perform", (intptr_t) M_nro_ClientInput_perform_int_java_lang_Object, VTABLE_nro_ClientInput_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
};

Class class_nro_ClientInput{
		.nativeName = (intptr_t) "nro/ClientInput",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_ClientInput),
		.classVtable = (intptr_t) vtable_nro_ClientInput,
		.staticInitializer = (intptr_t) clinit_nro_ClientInput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ClientInput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ClientInput = registerClass(&class_nro_ClientInput);

}

