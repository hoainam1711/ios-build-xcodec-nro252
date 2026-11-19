#include "nro/MoneyCharge.h"
#include "lib/mFont.h"
#include "nro/GameScr.h"
#include "java/lang/Exception.h"
#include "lib/input/TField.h"
#include "nro/IActionListener.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/MoneyCharge.h"
#include "nro/PopUp.h"
#include "main/GameMidlet.h"
#include "nro/mScreen.h"
#include "com/nro/GameMain.h"
#include "nro/Command.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_nro_MoneyCharge_instance;

void mark_nro_MoneyCharge(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_MoneyCharge_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MoneyCharge_instance)->clazz)->markFunction)((jobject) SF_nro_MoneyCharge_instance, mark, depth + 1);
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
	auto self = (nro_MoneyCharge *) object;
	if (self->F_tfSerial)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfSerial)->clazz)->markFunction)((jobject) self->F_tfSerial, mark, depth + 1);
	if (self->F_tfCode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfCode)->clazz)->markFunction)((jobject) self->F_tfCode, mark, depth + 1);
	if (self->F_strPaint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strPaint)->clazz)->markFunction)((jobject) self->F_strPaint, mark, depth + 1);
}

void clinit_nro_MoneyCharge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
}

void init_nro_MoneyCharge(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MoneyCharge:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MoneyCharge(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_w = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (20));
	LINE_NUMBER(22);
	if (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_w) <= (320)) goto label_3;
	}
	{
	LINE_NUMBER(23);
	((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_w = (320);
	}
label_3:;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_pay_card;
	sp[1].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[1].o, sp[2].o, (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_w) - (20)));
	((nro_MoneyCharge *) NULL_CHECK(sp[0].o))->F_strPaint = (jref) sp[1].o;
	LINE_NUMBER(27);
	((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - ((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_w)) / (jint(2)));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (150);
	sp[1].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_strPaint;
	((nro_MoneyCharge *) NULL_CHECK(sp[0].o))->F_y = (temp0 - (((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))) * (20)));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	jint temp1 = 110;
	sp[1].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_strPaint;
	((nro_MoneyCharge *) NULL_CHECK(sp[0].o))->F_h = (temp1 + (((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))) * (20)));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_MoneyCharge *) NULL_CHECK(sp[0].o))->F_tfSerial = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_SERI_NUM;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_x) + (10));
	LINE_NUMBER(33);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	jint temp2 = ((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_y) + (35);
	sp[1].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_strPaint;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (temp2 + (((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))) * (20)));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_w) - (20));
	LINE_NUMBER(35);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(36);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_15;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isPC;
	if ((--sp)->i != 0) goto label_15;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(44);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_20;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	}
label_20:;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_MoneyCharge *) NULL_CHECK(sp[0].o))->F_tfCode = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_CARD_CODE;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_x) + (10));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	sp[1].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_y) + (35));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_w) - (20));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CLOSE;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (jint(1)), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_pay_card2;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (jint(2)), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(58);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_32;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_center;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (18));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_left;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (85));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_center;
	sp[1].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_left;
	jint temp0 = (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_h)) + (jint(5));
	((nro_Command *) NULL_CHECK(sp[1].o))->F_y = temp0;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = temp0;
	}
label_32:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_nro_MoneyCharge_gI_R_nro_MoneyCharge(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MoneyCharge:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MoneyCharge(ctx);
	{
	LINE_NUMBER(67);
	clinit_nro_MoneyCharge(ctx);
	sp[0].o = (jobject)SF_nro_MoneyCharge_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(68);
	clinit_nro_MoneyCharge(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MoneyCharge);
	init_nro_MoneyCharge(ctx, sp[0].o);
	clinit_nro_MoneyCharge(ctx);
	SF_nro_MoneyCharge_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(71);
	clinit_nro_MoneyCharge(ctx);
	sp[0].o = (jobject)SF_nro_MoneyCharge_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_nro_MoneyCharge_getActiveField_R_lib_input_TField(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MoneyCharge:getActiveField", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_1;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_3;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_nro_MoneyCharge_cycleFocus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MoneyCharge:cycleFocus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((nro_MoneyCharge *) NULL_CHECK(sp[0].o))->F_focus = sp[1].i;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	sp += 1;
	if (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = sp[1].i;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	sp += 1;
	if (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus) != (jint(1))) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = sp[1].i;
	LINE_NUMBER(88);
	if (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_MoneyCharge *) NULL_CHECK(sp[-1].o))->F_tfCode;
label_11:;
	{
	sp -= 1;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = sp[0].o;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MoneyCharge_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MoneyCharge:switchToMe", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(95);
	if ((clinit_nro_mResources(ctx), (jint)SF_nro_mResources_language) != 0) goto label_5;
	}
	{
	LINE_NUMBER(96);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_platformRequest_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_platformRequest_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"http://ngocrongonline.com/"_j))));
	}
label_5:;
	{
	LINE_NUMBER(99);
	if ((clinit_nro_mResources(ctx), (jint)SF_nro_mResources_language) != (jint(2))) goto label_7;
	}
	{
	LINE_NUMBER(100);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_platformRequest_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_platformRequest_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"http://dragonball.indonaga.com/"_j))));
	}
label_7:;
	{
	LINE_NUMBER(103);
	if ((clinit_nro_mResources(ctx), (jint)SF_nro_mResources_language) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_9; }
	}
	{
	LINE_NUMBER(104);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_platformRequest_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_platformRequest_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"http://world.teamobi.com/games-page-0.html"_j))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	LINE_NUMBER(109);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(107);
	frame[1].o = sp[0].o;
	LINE_NUMBER(108);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	}
label_11:;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_MoneyCharge_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MoneyCharge:paint", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(115);
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, (frame[1].o), ((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_w), ((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_h), (jint(-1)), (jint(1)));
	LINE_NUMBER(117);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_strPaint;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(118);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_strPaint;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))), ((((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_y) + (15)) + ((frame[2].i) * (20))), (jint(2)));
	LINE_NUMBER(117);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(123);
	M_nro_mScreen_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MoneyCharge_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MoneyCharge:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_update])(ctx, sp[0].o);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(129);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MoneyCharge_keyPress_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MoneyCharge:keyPress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_1;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	jint temp0 = (jint)((func_lib_input_TField_keyPressed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_keyPressed_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_3;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	jint temp0 = (jint)((func_lib_input_TField_keyPressed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_keyPressed_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	}
label_3:;
	{
	LINE_NUMBER(139);
	M_nro_mScreen_keyPress_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MoneyCharge_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MoneyCharge:updateKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	((nro_MoneyCharge *) NULL_CHECK(sp[0].o))->F_focus = (((jint)((nro_MoneyCharge *) NULL_CHECK(sp[0].o))->F_focus) - (jint(1)));
	LINE_NUMBER(145);
	if (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(146);
	((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(148);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	((nro_MoneyCharge *) NULL_CHECK(sp[0].o))->F_focus = (((jint)((nro_MoneyCharge *) NULL_CHECK(sp[0].o))->F_focus) + (jint(1)));
	LINE_NUMBER(150);
	if (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus) <= (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(151);
	((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(155);
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
	LINE_NUMBER(156);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(157);
	if (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus) != (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(159);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(160);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_10;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(163);
	if (((jint)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus) != 0) goto label_17;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(166);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_10;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	goto label_10;
	}
label_17:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(175);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_23;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	jint temp1 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	jint temp2 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	jint temp3 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, ((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height));
	if (temp3 == 0) goto label_25;
	}
	{
	LINE_NUMBER(177);
	((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	goto label_23;
	}
label_25:;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	jint temp1 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	jint temp2 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	jint temp3 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, ((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height));
	if (temp3 == 0) goto label_23;
	}
	{
	LINE_NUMBER(179);
	((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(183);
	M_nro_mScreen_updateKey(ctx, (frame[0].o));
	LINE_NUMBER(184);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MoneyCharge_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MoneyCharge:perform", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(188);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(189);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	((func_nro_GameScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(190);
	clinit_nro_MoneyCharge(ctx);
	SF_nro_MoneyCharge_instance = (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(193);
	if ((frame[1].i) != (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(195);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_serial_blank;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(200);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_card_code_blank;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfSerial;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_MoneyCharge *) NULL_CHECK((frame[0].o)))->F_tfCode;
	sp[2].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[2].o);
	((func_nro_Service_sendCardInfo_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_sendCardInfo_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(205);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	((func_nro_GameScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(206);
	clinit_nro_MoneyCharge(ctx);
	SF_nro_MoneyCharge_instance = (jobject(nullptr));
	}
label_4:;
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_MoneyCharge[] {
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
	(void *) M_nro_MoneyCharge_switchToMe,
	(void *) M_nro_MoneyCharge_keyPress_int,
	(void *) M_nro_MoneyCharge_update,
	(void *) M_nro_MoneyCharge_updateKey,
	(void *) M_nro_MoneyCharge_paint_lib_mGraphics,
	(void *) M_nro_MoneyCharge_perform_int_java_lang_Object,
	(void *) M_nro_MoneyCharge_getActiveField_R_lib_input_TField,
	(void *) M_nro_MoneyCharge_cycleFocus,
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
	{ "cycleFocus", "()V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "instance", &class_nro_MoneyCharge, (intptr_t) &SF_nro_MoneyCharge_instance, "Lnro/MoneyCharge;", 9 },
	{ "tfSerial", &class_lib_input_TField, offsetof(nro_MoneyCharge, F_tfSerial), "Llib/input/TField;", 2 },
	{ "tfCode", &class_lib_input_TField, offsetof(nro_MoneyCharge, F_tfCode), "Llib/input/TField;", 2 },
	{ "x", &class_int, offsetof(nro_MoneyCharge, F_x), "I", 2 },
	{ "y", &class_int, offsetof(nro_MoneyCharge, F_y), "I", 2 },
	{ "w", &class_int, offsetof(nro_MoneyCharge, F_w), "I", 2 },
	{ "h", &class_int, offsetof(nro_MoneyCharge, F_h), "I", 2 },
	{ "strPaint", getArrayClass(&class_java_lang_String, 1), offsetof(nro_MoneyCharge, F_strPaint), "[Ljava/lang/String;", 2 },
	{ "focus", &class_int, offsetof(nro_MoneyCharge, F_focus), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_MoneyCharge, 0, "()V", 1 },
	{ "gI", (intptr_t) SM_nro_MoneyCharge_gI_R_nro_MoneyCharge, 0, "()Lnro/MoneyCharge;", 9 },
	{ "getActiveField", (intptr_t) M_nro_MoneyCharge_getActiveField_R_lib_input_TField, VTABLE_nro_MoneyCharge_getActiveField_R_lib_input_TField, "()Llib/input/TField;", 1 },
	{ "cycleFocus", (intptr_t) M_nro_MoneyCharge_cycleFocus, VTABLE_nro_MoneyCharge_cycleFocus, "()V", 1 },
	{ "switchToMe", (intptr_t) M_nro_MoneyCharge_switchToMe, VTABLE_nro_MoneyCharge_switchToMe, "()V", 17 },
	{ "paint", (intptr_t) M_nro_MoneyCharge_paint_lib_mGraphics, VTABLE_nro_MoneyCharge_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_MoneyCharge_update, VTABLE_nro_MoneyCharge_update, "()V", 17 },
	{ "keyPress", (intptr_t) M_nro_MoneyCharge_keyPress_int, VTABLE_nro_MoneyCharge_keyPress_int, "(I)V", 17 },
	{ "updateKey", (intptr_t) M_nro_MoneyCharge_updateKey, VTABLE_nro_MoneyCharge_updateKey, "()V", 17 },
	{ "perform", (intptr_t) M_nro_MoneyCharge_perform_int_java_lang_Object, VTABLE_nro_MoneyCharge_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
};

Class class_nro_MoneyCharge{
		.nativeName = (intptr_t) "nro/MoneyCharge",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_MoneyCharge),
		.classVtable = (intptr_t) vtable_nro_MoneyCharge,
		.staticInitializer = (intptr_t) clinit_nro_MoneyCharge,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_MoneyCharge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_MoneyCharge = registerClass(&class_nro_MoneyCharge);

}

