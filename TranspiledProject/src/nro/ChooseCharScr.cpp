#include "nro/ChooseCharScr.h"
#include "nro/GameScr.h"
#include "lib/mFont.h"
#include "nro/ServerListScreen.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "nro/IActionListener.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/SmallImage.h"
#include "nro/ChooseCharScr.h"
#include "nro/PlayerData.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/Res.h"
#include "nro/PartImage.h"
#include "nro/PopUp.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "nro/Rms.h"
#include "nro/Char.h"
#include "nro/LoginScr.h"

extern "C" {

jobject SF_nro_ChooseCharScr_playerData;

void mark_nro_ChooseCharScr(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ChooseCharScr_playerData)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ChooseCharScr_playerData)->clazz)->markFunction)((jobject) SF_nro_ChooseCharScr_playerData, mark, depth + 1);
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
	auto self = (nro_ChooseCharScr *) object;
	if (self->F_vc_players)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vc_players)->clazz)->markFunction)((jobject) self->F_vc_players, mark, depth + 1);
	if (self->F_cx)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cx)->clazz)->markFunction)((jobject) self->F_cx, mark, depth + 1);
	if (self->F_cy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cy)->clazz)->markFunction)((jobject) self->F_cy, mark, depth + 1);
	if (self->F_rectPanel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rectPanel)->clazz)->markFunction)((jobject) self->F_rectPanel, mark, depth + 1);
}

void clinit_nro_ChooseCharScr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
}

void M_nro_ChooseCharScr_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChooseCharScr:switchToMe", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isWait = (jint(0));
	LINE_NUMBER(20);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(0));
	LINE_NUMBER(21);
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_isContinueToLogin = (jint(0));
	LINE_NUMBER(22);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_waitToLogin = (jint(0));
	LINE_NUMBER(23);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_readPart) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_readPart])(ctx, sp[0].o);
	LINE_NUMBER(24);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_ChooseCharScr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChooseCharScr:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ChooseCharScr(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (100));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (100));
	((nro_ChooseCharScr *) NULL_CHECK(sp[0].o))->F_cx = (jref) sp[1].o;
	LINE_NUMBER(29);
	((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	((nro_ChooseCharScr *) NULL_CHECK(sp[0].o))->F_cy = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (150));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))) - (100));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (300);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (200);
	((nro_ChooseCharScr *) NULL_CHECK(sp[0].o))->F_rectPanel = (jref) sp[1].o;
	LINE_NUMBER(32);
	((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_offsetY = (-35);
	LINE_NUMBER(33);
	((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_offsetX = (-35);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ChooseCharScr_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChooseCharScr:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(38);
	((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf = (jint(1));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(40);
	((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(44);
	frame[1].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_vc_players;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_vc_players;
	jint temp0 = (jint)((func_nro_Command_isPointerPressInside_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_nro_Command_isPointerPressInside_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_vc_players;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_nro_Command_performAction])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	}
label_7:;
	{
	LINE_NUMBER(44);
	INST_IINC(1, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(50);
	frame[1].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) + ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_offsetX);
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp1 = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) + ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_offsetY);
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp2 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))), (60));
	if (temp2 == 0) goto label_12;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerDown;
	if ((--sp)->i == 0) goto label_12;
	{
	LINE_NUMBER(52);
	((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_focus = (frame[1].i);
	LINE_NUMBER(53);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(50);
	INST_IINC(1, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(57);
	M_nro_mScreen_update(ctx, (frame[0].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ChooseCharScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChooseCharScr:paint", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	SM_main_GameCanvas_paintBGGameScr_lib_mGraphics(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(64);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))) - (10);
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp2 = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))) + (20);
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))), (jint(16777215)), (jint(1)));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_vc_players;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(67);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_vc_players;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_vc_players;
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (frame[1].o));
	LINE_NUMBER(67);
	INST_IINC(2, 1);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(72);
	clinit_nro_ChooseCharScr(ctx);
	sp[0].o = (jobject)SF_nro_ChooseCharScr_playerData;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(73);
	frame[2].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_ChooseCharScr(ctx);
	sp[0].o = (jobject)SF_nro_ChooseCharScr_playerData;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))) - (20);
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp1 = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))) + ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_offsetY);
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, sp[0].o, temp0, temp1, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))), (60), (jint(16777215)), (jint(0)));
	LINE_NUMBER(75);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	clinit_nro_ChooseCharScr(ctx);
	sp[1].o = (jobject)SF_nro_ChooseCharScr_playerData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_PlayerData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_head)));
	LINE_NUMBER(76);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	clinit_nro_ChooseCharScr(ctx);
	sp[1].o = (jobject)SF_nro_ChooseCharScr_playerData;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_PlayerData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_leg)));
	LINE_NUMBER(77);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	clinit_nro_ChooseCharScr(ctx);
	sp[1].o = (jobject)SF_nro_ChooseCharScr_playerData;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_PlayerData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_body)));
	LINE_NUMBER(78);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[3].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp2 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(0))))))))->F_id;
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp4 = temp3 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[3].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp5 = temp4 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(0))))))))->F_dx);
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp7 = temp6 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[3].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp2, temp5, (temp7 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(0))))))))->F_dy)), (jint(0)), (jint(0)));
	LINE_NUMBER(79);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[4].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp8 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(0))))))))->F_id;
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp9 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp10 = temp9 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[4].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp11 = temp10 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(0))))))))->F_dx);
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp12 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp13 = temp12 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[4].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp8, temp11, (temp13 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(0))))))))->F_dy)), (jint(0)), (jint(0)));
	LINE_NUMBER(80);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp14 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(0))))))))->F_id;
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp15 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp16 = temp15 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp17 = temp16 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(0))))))))->F_dx);
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp18 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp19 = temp18 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp14, temp17, (temp19 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(0))))))))->F_dy)), (jint(0)), (jint(0)));
	LINE_NUMBER(81);
	if (((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_focus) != (frame[2].i)) goto label_21;
	}
	{
	LINE_NUMBER(82);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellow;
	sp[1].o = frame[1].o;
	clinit_nro_ChooseCharScr(ctx);
	sp[2].o = (jobject)SF_nro_ChooseCharScr_playerData;
	sp[2].o = (jobject)((nro_PlayerData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i)))))->F_name;
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i));
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp1 = (temp0 + ((jint)ARRAY_ACCESS(jint, sp[3].o, (jint(2))))) - (25);
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp1, (((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i))) + ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_offsetY)), (jint(1)));
	LINE_NUMBER(83);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellow;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_power_point;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_nro_ChooseCharScr(ctx);
	sp[3].o = (jobject)SF_nro_ChooseCharScr_playerData;
	sp[3].o = (jobject)SM_nro_Res_formatNumber2_long_R_java_lang_String(ctx, ((jlong)((nro_PlayerData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[2].i)))))->F_powpoint));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i));
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp3 = (temp2 + ((jint)ARRAY_ACCESS(jint, sp[3].o, (jint(2))))) - (25);
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp4 = ((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i))) + ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_offsetY);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7b_yellow;
	jint temp5 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp3, (temp4 + temp5), (jint(1)));
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(85);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	clinit_nro_ChooseCharScr(ctx);
	sp[2].o = (jobject)SF_nro_ChooseCharScr_playerData;
	sp[2].o = (jobject)((nro_PlayerData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i)))))->F_name;
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i));
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp1 = (temp0 + ((jint)ARRAY_ACCESS(jint, sp[3].o, (jint(2))))) - (25);
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp1, (((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i))) + ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_offsetY)), (jint(1)));
	LINE_NUMBER(86);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_power_point;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_nro_ChooseCharScr(ctx);
	sp[3].o = (jobject)SF_nro_ChooseCharScr_playerData;
	sp[3].o = (jobject)SM_nro_Res_formatNumber2_long_R_java_lang_String(ctx, ((jlong)((nro_PlayerData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[2].i)))))->F_powpoint));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i));
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp3 = (temp2 + ((jint)ARRAY_ACCESS(jint, sp[3].o, (jint(2))))) - (25);
	sp[3].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp4 = ((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i))) + ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_offsetY);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	jint temp5 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp3, (temp4 + temp5), (jint(1)));
	}
label_24:;
	{
	LINE_NUMBER(73);
	INST_IINC(2, 1);
	goto label_12;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(91);
	goto label_26;
label_2:;
	LINE_NUMBER(90);
	INST_ASTORE(2);
label_26:;
	{
	LINE_NUMBER(93);
	M_nro_mScreen_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ChooseCharScr_updateChooseCharacter_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChooseCharScr:updateChooseCharacter", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((nro_ChooseCharScr *) NULL_CHECK(sp[0].o))->F_cx = (jref) sp[1].o;
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((nro_ChooseCharScr *) NULL_CHECK(sp[0].o))->F_cy = (jref) sp[1].o;
	LINE_NUMBER(100);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))) + (20));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp1 = frame[2].i;
	jint temp2 = (frame[2].i) * (70);
	sp[1].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = ((temp2 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) + (50));
	LINE_NUMBER(100);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_Command, (jint(2)));
	((nro_ChooseCharScr *) NULL_CHECK(sp[0].o))->F_vc_players = (jref) sp[1].o;
	LINE_NUMBER(106);
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_vc_players;
	jint temp0 = jint(1);
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"V\u00e0o game"_j));
	sp[3].o = frame[0].o;
	jint temp1 = jint(1);
	sp[4].o = jobject(nullptr);
	sp[5].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[5].o, (jint(0)));
	sp[5].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp3 = ((temp2 + ((jint)ARRAY_ACCESS(jint, sp[5].o, (jint(2))))) - (80)) - (80);
	sp[5].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp4 = (jint)ARRAY_ACCESS(jint, sp[5].o, (jint(1)));
	sp[5].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object_int_int(ctx, sp[1].o, sp[2].o, sp[3].o, temp1, sp[4].o, temp3, ((temp4 + ((jint)ARRAY_ACCESS(jint, sp[5].o, (jint(3))))) - (30)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(107);
	sp[0].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_vc_players;
	jint temp5 = jint(0);
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Tr\u1edd ra"_j));
	sp[3].o = frame[0].o;
	jint temp6 = jint(2);
	sp[4].o = jobject(nullptr);
	sp[5].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[5].o, (jint(0)));
	sp[5].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp8 = (temp7 + ((jint)ARRAY_ACCESS(jint, sp[5].o, (jint(2))))) - (80);
	sp[5].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	jint temp9 = (jint)ARRAY_ACCESS(jint, sp[5].o, (jint(1)));
	sp[5].o = (jobject)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_rectPanel;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object_int_int(ctx, sp[1].o, sp[2].o, sp[3].o, temp6, sp[4].o, temp8, ((temp9 + ((jint)ARRAY_ACCESS(jint, sp[5].o, (jint(3))))) - (30)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ChooseCharScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChooseCharScr:perform", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(111);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(113);
	if (((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_focus) == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(114);
	SM_main_GameCanvas_startWaitDlg(ctx);
	LINE_NUMBER(115);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	clinit_nro_ChooseCharScr(ctx);
	sp[1].o = (jobject)SF_nro_ChooseCharScr_playerData;
	((func_nro_Service_finishUpdate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_finishUpdate_int])(ctx, sp[0].o, ((jint)((nro_PlayerData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[0].o)))->F_focus)))))->F_playerID));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}
label_2:;
	LINE_NUMBER(120);
	SM_main_GameCanvas_doResetToLoginScr(ctx);
label_3:;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_ChooseCharScr[] {
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
	(void *) M_nro_ChooseCharScr_switchToMe,
	(void *) M_nro_mScreen_keyPress_int,
	(void *) M_nro_ChooseCharScr_update,
	(void *) M_nro_mScreen_updateKey,
	(void *) M_nro_ChooseCharScr_paint_lib_mGraphics,
	(void *) M_nro_ChooseCharScr_perform_int_java_lang_Object,
	(void *) M_nro_ChooseCharScr_updateChooseCharacter_byte,
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
	{ "updateChooseCharacter", "(B)V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "vc_players", getArrayClass(&class_nro_Command, 1), offsetof(nro_ChooseCharScr, F_vc_players), "[Lnro/Command;", 2 },
	{ "playerData", getArrayClass(&class_nro_PlayerData, 1), (intptr_t) &SF_nro_ChooseCharScr_playerData, "[Lnro/PlayerData;", 9 },
	{ "cf", &class_int, offsetof(nro_ChooseCharScr, F_cf), "I", 2 },
	{ "cx", getArrayClass(&class_int, 1), offsetof(nro_ChooseCharScr, F_cx), "[I", 2 },
	{ "focus", &class_int, offsetof(nro_ChooseCharScr, F_focus), "I", 1 },
	{ "cy", getArrayClass(&class_int, 1), offsetof(nro_ChooseCharScr, F_cy), "[I", 2 },
	{ "rectPanel", getArrayClass(&class_int, 1), offsetof(nro_ChooseCharScr, F_rectPanel), "[I", 2 },
	{ "offsetY", &class_int, offsetof(nro_ChooseCharScr, F_offsetY), "I", 2 },
	{ "offsetX", &class_int, offsetof(nro_ChooseCharScr, F_offsetX), "I", 2 },
};

static MethodMetadata methods[] {
	{ "switchToMe", (intptr_t) M_nro_ChooseCharScr_switchToMe, VTABLE_nro_ChooseCharScr_switchToMe, "()V", 17 },
	{ "<init>", (intptr_t) init_nro_ChooseCharScr, 0, "()V", 1 },
	{ "update", (intptr_t) M_nro_ChooseCharScr_update, VTABLE_nro_ChooseCharScr_update, "()V", 17 },
	{ "paint", (intptr_t) M_nro_ChooseCharScr_paint_lib_mGraphics, VTABLE_nro_ChooseCharScr_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "updateChooseCharacter", (intptr_t) M_nro_ChooseCharScr_updateChooseCharacter_byte, VTABLE_nro_ChooseCharScr_updateChooseCharacter_byte, "(B)V", 17 },
	{ "perform", (intptr_t) M_nro_ChooseCharScr_perform_int_java_lang_Object, VTABLE_nro_ChooseCharScr_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
};

Class class_nro_ChooseCharScr{
		.nativeName = (intptr_t) "nro/ChooseCharScr",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_ChooseCharScr),
		.classVtable = (intptr_t) vtable_nro_ChooseCharScr,
		.staticInitializer = (intptr_t) clinit_nro_ChooseCharScr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ChooseCharScr,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ChooseCharScr = registerClass(&class_nro_ChooseCharScr);

}

