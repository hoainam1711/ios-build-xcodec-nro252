#include "nro/MsgDlg.h"
#include "lib/mFont.h"
#include "nro/Paint.h"
#include "nro/mResources.h"
#include "nro/Dialog.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/MsgDlg.h"
#include "nro/Command.h"
#include "nro/LoginScr.h"
#include "lib/mSystem.h"

extern "C" {


void mark_nro_MsgDlg(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_Dialog(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_MsgDlg *) object;
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
}

void clinit_nro_MsgDlg(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Dialog(ctx);
}

void init_nro_MsgDlg(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MsgDlg:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MsgDlg(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_nro_Dialog(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_padLeft = (35);
	LINE_NUMBER(13);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_time = (jlong(-1ll));
	LINE_NUMBER(16);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) > (176)) goto label_4;
	}
	{
	LINE_NUMBER(17);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_padLeft = (10);
	}
label_4:;
	{
	LINE_NUMBER(20);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) <= (320)) goto label_6;
	}
	{
	LINE_NUMBER(21);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_padLeft = (80);
	}
label_6:;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_MsgDlg_pleasewait(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MsgDlg:pleasewait", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_PLEASEWAIT;
	((func_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_nro_Command, (jobject(nullptr)))), (checkCast(ctx, &class_nro_Command, (jobject(nullptr)))), (checkCast(ctx, &class_nro_Command, (jobject(nullptr)))));
	LINE_NUMBER(28);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (frame[0].o);
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	((nro_MsgDlg *) NULL_CHECK(sp[0].o))->F_time = (temp0 + (jlong(5000ll)));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MsgDlg_show(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MsgDlg:show", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (frame[0].o);
	LINE_NUMBER(34);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_time = (jlong(-1ll));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_nro_MsgDlg_getInfo_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MsgDlg:getInfo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_info;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_nro_MsgDlg_setInfo_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MsgDlg:setInfo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_8b;
	sp[1].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[1].o, (frame[1].o), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - ((((jint)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_padLeft) << (jint(1))) + (20))));
	((nro_MsgDlg *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(43);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_h = (80);
	LINE_NUMBER(44);
	sp[0].o = (jobject)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_info;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (jint(5))) goto label_3;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp0 = ((jarray) nullCheck(ctx, sp[1].o))->length;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_8b;
	jint temp1 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[1].o);
	((nro_MsgDlg *) NULL_CHECK(sp[0].o))->F_h = ((temp0 * temp1) + (20));
	}
label_3:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MsgDlg:setInfo", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_8b;
	sp[1].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[1].o, (frame[1].o), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - ((((jint)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_padLeft) << (jint(1))) + (20))));
	((nro_MsgDlg *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(52);
	((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_left = (jref) (frame[2].o);
	LINE_NUMBER(53);
	((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center = (jref) (frame[3].o);
	LINE_NUMBER(54);
	((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_right = (jref) (frame[4].o);
	LINE_NUMBER(55);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_h = (80);
	LINE_NUMBER(56);
	sp[0].o = (jobject)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_info;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (jint(5))) goto label_6;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp0 = ((jarray) nullCheck(ctx, sp[1].o))->length;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_8b;
	jint temp1 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[1].o);
	((nro_MsgDlg *) NULL_CHECK(sp[0].o))->F_h = ((temp0 * temp1) + (20));
	}
label_6:;
	{
	LINE_NUMBER(60);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_8;
	}
	{
	LINE_NUMBER(61);
	if ((frame[2].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_left;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (68)) - (jint(5)));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_left;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (50));
	}
label_10:;
	{
	LINE_NUMBER(66);
	if ((frame[4].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_right;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (jint(5)));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_right;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (50));
	}
label_13:;
	{
	LINE_NUMBER(71);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (35));
	LINE_NUMBER(73);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (50));
	}
label_8:;
	{
	LINE_NUMBER(77);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_isWait = (jint(0));
	LINE_NUMBER(78);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_time = (jlong(-1ll));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MsgDlg_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MsgDlg:paint", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(83);
	if ((clinit_nro_LoginScr(ctx), (jint)SF_nro_LoginScr_isContinueToLogin) != 0) goto label_2;
	}
	{
	LINE_NUMBER(84);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) > (176)) goto label_4;
	}
	{
	LINE_NUMBER(85);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_padLeft = (10);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(86);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) <= (320)) goto label_7;
	}
	{
	LINE_NUMBER(87);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_padLeft = (80);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(89);
	((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_padLeft = (35);
	}
label_6:;
	{
	LINE_NUMBER(91);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_9;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_left;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_left;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (68)) - (jint(5)));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_left;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (50));
	}
label_11:;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_right;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_right;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (jint(5)));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_right;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (50));
	}
label_14:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (35));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (50));
	}
label_9:;
	{
	LINE_NUMBER(105);
	frame[2].i = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - ((jint)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_h)) - (38));
	LINE_NUMBER(106);
	frame[3].i = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (((jint)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_padLeft) << (jint(1))));
	LINE_NUMBER(107);
	SM_nro_Paint_paintPopUp_int_int_int_int_lib_mGraphics(ctx, ((jint)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_padLeft), (frame[2].i), (frame[3].i), ((jint)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_h), (frame[1].o));
	LINE_NUMBER(108);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_h;
	sp[0].o = (jobject)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp2 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	jint temp3 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[0].o);
	frame[2].i = ((temp0 + ((temp1 - (temp2 * temp3)) / (jint(2)))) - (jint(2)));
	LINE_NUMBER(109);
	if (((jint)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_isWait) == 0) goto label_23;
	}
	{
	LINE_NUMBER(110);
	INST_IINC(2, 8);
	LINE_NUMBER(111);
	SM_main_GameCanvas_paintShukiren_int_int_lib_mGraphics(ctx, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), ((frame[2].i) - (12)), (frame[1].o));
	}
label_23:;
	{
	LINE_NUMBER(114);
	frame[3].i = (jint(0));
	LINE_NUMBER(116);
	frame[2].i = (frame[2].i);
	}
label_27:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_info;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_28;
	}
	{
	LINE_NUMBER(117);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_info;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), (frame[2].i), (jint(2)));
	LINE_NUMBER(118);
	INST_IINC(3, 1);
	LINE_NUMBER(116);
	jint temp0 = frame[2].i;
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	jint temp1 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[0].o);
	frame[2].i = (temp0 + temp1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(121);
	M_nro_Dialog_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_MsgDlg_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MsgDlg:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	M_nro_Dialog_update(ctx, (frame[0].o));
	LINE_NUMBER(127);
	if ((longCompare(((jlong)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_time), (jlong(-1ll)))) == 0) goto label_2;
	}
	{
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare(temp0, ((jlong)((nro_MsgDlg *) NULL_CHECK((frame[0].o)))->F_time))) <= 0) goto label_2;
	}
	LINE_NUMBER(128);
	SM_main_GameCanvas_endDlg(ctx);
label_2:;
	LINE_NUMBER(131);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_MsgDlg[] {
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
	(void *) M_nro_MsgDlg_paint_lib_mGraphics,
	(void *) M_nro_Dialog_keyPress_int,
	(void *) M_nro_MsgDlg_update,
	(void *) M_nro_MsgDlg_pleasewait,
	(void *) M_nro_MsgDlg_show,
	(void *) M_nro_MsgDlg_getInfo_R_Array1_java_lang_String,
	(void *) M_nro_MsgDlg_setInfo_java_lang_String,
	(void *) M_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command,
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
	{ "paint", "(Llib/mGraphics;)V" },
	{ "keyPress", "(I)V" },
	{ "update", "()V" },
	{ "pleasewait", "()V" },
	{ "show", "()V" },
	{ "getInfo", "()[Ljava/lang/String;" },
	{ "setInfo", "(Ljava/lang/String;)V" },
	{ "setInfo", "(Ljava/lang/String;Lnro/Command;Lnro/Command;Lnro/Command;)V" },
};

static FieldMetadata fields[] {
	{ "info", getArrayClass(&class_java_lang_String, 1), offsetof(nro_MsgDlg, F_info), "[Ljava/lang/String;", 2 },
	{ "isWait", &class_boolean, offsetof(nro_MsgDlg, F_isWait), "Z", 1 },
	{ "h", &class_int, offsetof(nro_MsgDlg, F_h), "I", 2 },
	{ "padLeft", &class_int, offsetof(nro_MsgDlg, F_padLeft), "I", 2 },
	{ "time", &class_long, offsetof(nro_MsgDlg, F_time), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_MsgDlg, 0, "()V", 1 },
	{ "pleasewait", (intptr_t) M_nro_MsgDlg_pleasewait, VTABLE_nro_MsgDlg_pleasewait, "()V", 17 },
	{ "show", (intptr_t) M_nro_MsgDlg_show, VTABLE_nro_MsgDlg_show, "()V", 17 },
	{ "getInfo", (intptr_t) M_nro_MsgDlg_getInfo_R_Array1_java_lang_String, VTABLE_nro_MsgDlg_getInfo_R_Array1_java_lang_String, "()[Ljava/lang/String;", 17 },
	{ "setInfo", (intptr_t) M_nro_MsgDlg_setInfo_java_lang_String, VTABLE_nro_MsgDlg_setInfo_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "setInfo", (intptr_t) M_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command, VTABLE_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command, "(Ljava/lang/String;Lnro/Command;Lnro/Command;Lnro/Command;)V", 17 },
	{ "paint", (intptr_t) M_nro_MsgDlg_paint_lib_mGraphics, VTABLE_nro_MsgDlg_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_MsgDlg_update, VTABLE_nro_MsgDlg_update, "()V", 17 },
};

Class class_nro_MsgDlg{
		.nativeName = (intptr_t) "nro/MsgDlg",
		.parentClass = (intptr_t) &class_nro_Dialog,
		.size = sizeof(nro_MsgDlg),
		.classVtable = (intptr_t) vtable_nro_MsgDlg,
		.staticInitializer = (intptr_t) clinit_nro_MsgDlg,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_MsgDlg,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_MsgDlg = registerClass(&class_nro_MsgDlg);

}

