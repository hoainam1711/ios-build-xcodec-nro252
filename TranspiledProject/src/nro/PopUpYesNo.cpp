#include "nro/PopUpYesNo.h"
#include "nro/GameScr.h"
#include "lib/mFont.h"
#include "lib/input/TField.h"
#include "java/lang/StringBuilder.h"
#include "nro/IActionListener.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/TextInfo.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/PopUpYesNo.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/Res.h"
#include "nro/PopUp.h"
#include "nro/Command.h"
#include "java/lang/System.h"

extern "C" {


void mark_nro_PopUpYesNo(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (nro_PopUpYesNo *) object;
	if (self->F_cmdYes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdYes)->clazz)->markFunction)((jobject) self->F_cmdYes, mark, depth + 1);
	if (self->F_cmdNo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdNo)->clazz)->markFunction)((jobject) self->F_cmdNo, mark, depth + 1);
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
}

void clinit_nro_PopUpYesNo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_PopUpYesNo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUpYesNo:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_PopUpYesNo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_W = (120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_PopUpYesNo_setPopUp_java_lang_String_nro_Command_nro_Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUpYesNo:setPopUp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	((nro_PopUpYesNo *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(22);
	((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_H = (29);
	LINE_NUMBER(23);
	((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes = (jref) (frame[2].o);
	LINE_NUMBER(24);
	((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdNo = (jref) (frame[3].o);
	LINE_NUMBER(25);
	sp[0].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes;
	sp[1].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdNo;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_imgNut;
	((nro_Command *) NULL_CHECK(sp[1].o))->F_img = (jref) sp[2].o;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[2].o;
	LINE_NUMBER(26);
	sp[0].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes;
	sp[1].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdNo;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_imgNutF;
	((nro_Command *) NULL_CHECK(sp[1].o))->F_imgFocus = (jref) sp[2].o;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_imgFocus = (jref) sp[2].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[2].o)))->F_img;
	jint temp0 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[1].o);
	((nro_Command *) NULL_CHECK(sp[0].o))->F_w = temp0;
	LINE_NUMBER(28);
	sp[0].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdNo;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[2].o)))->F_img;
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[1].o);
	((nro_Command *) NULL_CHECK(sp[0].o))->F_w = temp1;
	LINE_NUMBER(29);
	sp[0].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[2].o)))->F_img;
	jint temp2 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[1].o);
	((nro_Command *) NULL_CHECK(sp[0].o))->F_h = temp2;
	LINE_NUMBER(30);
	sp[0].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdNo;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[2].o)))->F_img;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[1].o);
	((nro_Command *) NULL_CHECK(sp[0].o))->F_h = temp3;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	jlong temp4 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_PopUpYesNo *) NULL_CHECK(sp[0].o))->F_last = temp4;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp5 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	((nro_PopUpYesNo *) NULL_CHECK(sp[0].o))->F_dem = (temp5 / (jint(3)));
	LINE_NUMBER(33);
	if (((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_dem) >= (15)) goto label_13;
	}
	{
	LINE_NUMBER(34);
	((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_dem = (15);
	}
label_13:;
	{
	LINE_NUMBER(37);
	SM_nro_TextInfo_reset(ctx);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_PopUpYesNo_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUpYesNo:paint", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_X;
	jint temp1 = (jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_Y;
	jint temp2 = (jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_W;
	jint temp3 = (jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_H;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].i = temp3;
	sp += 5;
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_1;
	}
	INST_BIPUSH(10);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 6;
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, (sp[4].i + sp[5].i), (jint(16777215)), (jint(0)));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_info;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(43);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)));
	jint temp0 = ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_X) + (jint(5));
	jint temp1 = ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_Y) + (((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_H) / (jint(2)));
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp += 4;
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_6;
	}
	INST_ICONST(4);
	goto label_7;
label_6:;
	INST_BIPUSH(6);
label_7:;
	{
	sp -= 5;
	jint temp0 = sp[3].i - sp[4].i;
	jint temp1 = ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_W) - (10);
	jint temp2 = (jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_H;
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	SM_nro_TextInfo_paint_lib_mGraphics_java_lang_String_int_int_int_int_lib_mFont(ctx, sp[0].o, sp[1].o, sp[2].i, temp0, temp1, temp2, sp[3].o);
	LINE_NUMBER(44);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_9;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes;
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(46);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_dem));
	sp[3].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes;
	jint temp0 = (jint)((nro_Command *) NULL_CHECK(sp[3].o))->F_x;
	sp[3].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes;
	jint temp1 = temp0 + (((jint)((nro_Command *) NULL_CHECK(sp[3].o))->F_w) / (jint(2)));
	sp[3].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes;
	jint temp2 = (jint)((nro_Command *) NULL_CHECK(sp[3].o))->F_y;
	sp[3].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes;
	jint temp3 = (temp2 + ((jint)((nro_Command *) NULL_CHECK(sp[3].o))->F_h)) + (jint(5));
	jint temp4 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp1, temp3, temp4, sp[3].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}
label_9:;
	{
	LINE_NUMBER(50);
	if ((clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_isQwerty) == 0) goto label_13;
	}
	{
	LINE_NUMBER(51);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_blue;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_do_accept_qwerty;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_dem));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_X) + (((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_W) / (jint(2)))), (((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_Y) + ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_H)), (jint(2)));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(55);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_blue;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_do_accept;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_dem));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_X) + (((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_W) / (jint(2)))), (((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_Y) + ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_H)), (jint(2)));
	}
label_4:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_PopUpYesNo_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUpYesNo:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_info;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(62);
	((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_X = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (jint(5))) - ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_W));
	LINE_NUMBER(63);
	((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_Y = (45);
	LINE_NUMBER(64);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (50)) <= ((155) + ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_W))) goto label_5;
	}
	{
	LINE_NUMBER(65);
	((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_X = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (55)) - ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_W));
	LINE_NUMBER(66);
	((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_Y = (jint(5));
	}
label_5:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_X) - (35));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_cmdYes;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_Y);
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_PopUpYesNo *) NULL_CHECK(sp[0].o))->F_curr = temp0;
	LINE_NUMBER(72);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"curr - last= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jlong)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_curr) - ((jlong)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_last)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(73);
	if ((longCompare((((jlong)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_curr) - ((jlong)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_last)), (jlong(1000ll)))) < 0) goto label_12;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_PopUpYesNo *) NULL_CHECK(sp[0].o))->F_last = temp0;
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	((nro_PopUpYesNo *) NULL_CHECK(sp[0].o))->F_dem = (((jint)((nro_PopUpYesNo *) NULL_CHECK(sp[0].o))->F_dem) - (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(78);
	if (((jint)((nro_PopUpYesNo *) NULL_CHECK((frame[0].o)))->F_dem) != 0) goto label_1;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_popUpYesNo = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_PopUpYesNo_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUpYesNo:perform", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_PopUpYesNo[] {
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
	(void *) M_nro_PopUpYesNo_perform_int_java_lang_Object,
	(void *) M_nro_PopUpYesNo_setPopUp_java_lang_String_nro_Command_nro_Command,
	(void *) M_nro_PopUpYesNo_paint_lib_mGraphics,
	(void *) M_nro_PopUpYesNo_update,
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
	{ "setPopUp", "(Ljava/lang/String;Lnro/Command;Lnro/Command;)V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "update", "()V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "cmdYes", &class_nro_Command, offsetof(nro_PopUpYesNo, F_cmdYes), "Lnro/Command;", 1 },
	{ "cmdNo", &class_nro_Command, offsetof(nro_PopUpYesNo, F_cmdNo), "Lnro/Command;", 2 },
	{ "info", getArrayClass(&class_java_lang_String, 1), offsetof(nro_PopUpYesNo, F_info), "[Ljava/lang/String;", 2 },
	{ "X", &class_int, offsetof(nro_PopUpYesNo, F_X), "I", 2 },
	{ "Y", &class_int, offsetof(nro_PopUpYesNo, F_Y), "I", 2 },
	{ "W", &class_int, offsetof(nro_PopUpYesNo, F_W), "I", 2 },
	{ "H", &class_int, offsetof(nro_PopUpYesNo, F_H), "I", 2 },
	{ "dem", &class_int, offsetof(nro_PopUpYesNo, F_dem), "I", 2 },
	{ "last", &class_long, offsetof(nro_PopUpYesNo, F_last), "J", 2 },
	{ "curr", &class_long, offsetof(nro_PopUpYesNo, F_curr), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_PopUpYesNo, 0, "()V", 1 },
	{ "setPopUp", (intptr_t) M_nro_PopUpYesNo_setPopUp_java_lang_String_nro_Command_nro_Command, VTABLE_nro_PopUpYesNo_setPopUp_java_lang_String_nro_Command_nro_Command, "(Ljava/lang/String;Lnro/Command;Lnro/Command;)V", 17 },
	{ "paint", (intptr_t) M_nro_PopUpYesNo_paint_lib_mGraphics, VTABLE_nro_PopUpYesNo_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_PopUpYesNo_update, VTABLE_nro_PopUpYesNo_update, "()V", 17 },
	{ "perform", (intptr_t) M_nro_PopUpYesNo_perform_int_java_lang_Object, VTABLE_nro_PopUpYesNo_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
};

Class class_nro_PopUpYesNo{
		.nativeName = (intptr_t) "nro/PopUpYesNo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_PopUpYesNo),
		.classVtable = (intptr_t) vtable_nro_PopUpYesNo,
		.staticInitializer = (intptr_t) clinit_nro_PopUpYesNo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_PopUpYesNo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_PopUpYesNo = registerClass(&class_nro_PopUpYesNo);

}

