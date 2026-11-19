#include "main/GamePad.h"
#include "nro/GameScr.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "main/GamePad.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/Res.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/Char.h"
#include "lib/mSystem.h"
#include "nro/Position.h"

extern "C" {


void mark_main_GamePad(jobject object, jint mark, jint depth) {
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
	auto self = (main_GamePad *) object;
}

void clinit_main_GamePad(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_main_GamePad(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GamePad:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GamePad(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_R = (28);
	LINE_NUMBER(25);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isGamePad = (jint(0));
	LINE_NUMBER(31);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) >= (300)) goto label_4;
	}
	{
	LINE_NUMBER(32);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isSmallGamePad = (jint(1));
	LINE_NUMBER(33);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isMediumGamePad = (jint(0));
	LINE_NUMBER(34);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isLargeGamePad = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(37);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) < (300)) goto label_8;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) > (380)) goto label_8;
	}
	{
	LINE_NUMBER(38);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isSmallGamePad = (jint(0));
	LINE_NUMBER(39);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isMediumGamePad = (jint(1));
	LINE_NUMBER(40);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isLargeGamePad = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(43);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) <= (380)) goto label_12;
	}
	{
	LINE_NUMBER(44);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isSmallGamePad = (jint(0));
	LINE_NUMBER(45);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isMediumGamePad = (jint(0));
	LINE_NUMBER(46);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isLargeGamePad = (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(49);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isLargeGamePad) != 0) goto label_16;
	}
	{
	LINE_NUMBER(50);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xZone = (jint(0));
	LINE_NUMBER(51);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_wZone = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw);
	LINE_NUMBER(52);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yZone = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) >> (jint(1)));
	LINE_NUMBER(53);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_hZone = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (80));
	goto label_21;
	}
label_16:;
	{
	LINE_NUMBER(55);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xZone = (jint(0));
	LINE_NUMBER(56);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_wZone = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) / (jint(4))) * (jint(3))) - (20));
	LINE_NUMBER(57);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yZone = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) >> (jint(1)));
	LINE_NUMBER(58);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_hZone = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h);
	LINE_NUMBER(59);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(2))) goto label_21;
	}
	{
	LINE_NUMBER(60);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xZone = (jint(0));
	LINE_NUMBER(61);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yZone = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) >> (jint(1))) + (40));
	LINE_NUMBER(62);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_wZone = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) / (jint(4))) * (jint(3))) - (40));
	LINE_NUMBER(63);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_hZone = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h);
	}
label_21:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GamePad_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GamePad:update", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(71);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isAnalog) == 0) goto label_1;
	}
	{
	LINE_NUMBER(72);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) == 0) goto label_5;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i != 0) goto label_5;
	{
	LINE_NUMBER(73);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xTemp = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_pxFirst);
	LINE_NUMBER(74);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yTemp = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_pyFirst);
	LINE_NUMBER(75);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xTemp) < 0) goto label_1;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xTemp) > ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_wZone)) goto label_1;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yTemp) < ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yZone)) goto label_1;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yTemp) > ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_hZone)) goto label_1;
	}
	{
	LINE_NUMBER(76);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isGamePad) != 0) goto label_10;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xTemp;
	((main_GamePad *) NULL_CHECK(sp[1].o))->F_xM = temp0;
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_xC = temp0;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp3 = (jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yTemp;
	((main_GamePad *) NULL_CHECK(sp[1].o))->F_yM = temp3;
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_yC = temp3;
	}
label_10:;
	{
	LINE_NUMBER(81);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isGamePad = (jint(1));
	LINE_NUMBER(82);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_deltaX = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) - ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xC));
	LINE_NUMBER(83);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_deltaY = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py) - ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yC));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_e_int_int_R_int(ctx, ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_deltaX), (jint(2)));
	jint temp1 = (jint)SM_nro_Res_e_int_int_R_int(ctx, ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_deltaY), (jint(2)));
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_delta = (temp0 + temp1);
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_nro_Res_sqrt_int_R_int(ctx, ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_delta));
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_r = temp2;
	LINE_NUMBER(86);
	jint temp3 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_deltaX));
	if (temp3 > (jint(4))) goto label_18;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_deltaY));
	if (temp0 <= (jint(4))) goto label_1;
	}
label_18:;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_angle_int_int_R_int(ctx, ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_deltaX), ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_deltaY));
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_angle = temp0;
	LINE_NUMBER(88);
	jint temp1 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xC) - ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_R)), (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yC) - ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_R)), ((jint(2)) * ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_R)), ((jint(2)) * ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_R)));
	if (temp1 != 0) goto label_20;
	}
	{
	LINE_NUMBER(89);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_r) == 0) goto label_22;
	}
	{
	LINE_NUMBER(90);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yM = ((((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_deltaY) * ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_R)) / ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_r));
	LINE_NUMBER(91);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xM = ((((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_deltaX) * ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_R)) / ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_r));
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_xM = (((jint)((main_GamePad *) NULL_CHECK(sp[0].o))->F_xM) + ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xC));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_yM = (((jint)((main_GamePad *) NULL_CHECK(sp[0].o))->F_yM) + ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yC));
	LINE_NUMBER(94);
	jint temp0 = (jint)SM_nro_Res_inRect_int_int_int_int_int_int_R_boolean(ctx, (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xC) - ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_R)), (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yC) - ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_R)), ((jint(2)) * ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_R)), ((jint(2)) * ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_R)), ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xM), ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yM));
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(95);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xM = ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xMLast);
	LINE_NUMBER(96);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yM = ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yMLast);
	goto label_31;
	}
label_28:;
	{
	LINE_NUMBER(98);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xMLast = ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xM);
	LINE_NUMBER(99);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yMLast = ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yM);
	goto label_31;
	}
label_22:;
	{
	LINE_NUMBER(102);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xM = ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xMLast);
	LINE_NUMBER(103);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yM = ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yMLast);
	goto label_31;
	}
label_20:;
	{
	LINE_NUMBER(106);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xM = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px);
	LINE_NUMBER(107);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yM = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	}
label_31:;
	{
	LINE_NUMBER(110);
	SM_main_GameCanvas_clearKeyHold(ctx);
	LINE_NUMBER(111);
	frame[1].i = (jint(1));
	LINE_NUMBER(113);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isAnalog) != 0) goto label_37;
	}
	{
	LINE_NUMBER(114);
	frame[2].i = (jint(0));
	goto label_40;
	}
label_37:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) != (jint(3))) goto label_41;
	}
	{
	LINE_NUMBER(116);
	frame[2].i = (jint(1));
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(118);
	frame[3].i = (jint(2));
	}
label_44:;
	{
	LINE_NUMBER(121);
	if ((frame[3].i) > 0) goto label_45;
	}
	{
	LINE_NUMBER(122);
	frame[2].i = (jint(1));
	LINE_NUMBER(123);
	goto label_40;
	}
label_45:;
	{
	LINE_NUMBER(126);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_arrPos;
	jint temp0 = (jint)((nro_Position *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_x;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_arrPos;
	frame[4].i = (temp0 - ((jint)((nro_Position *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[3].i) - (jint(1)))))))->F_x));
	LINE_NUMBER(127);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_arrPos;
	jint temp1 = (jint)((nro_Position *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_y;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_arrPos;
	frame[5].i = (temp1 - ((jint)((nro_Position *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[3].i) - (jint(1)))))))->F_y));
	LINE_NUMBER(128);
	jint temp2 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[4].i));
	if (temp2 <= (jint(2))) goto label_50;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[5].i));
	if (temp0 <= (jint(2))) goto label_50;
	}
	{
	LINE_NUMBER(129);
	frame[2].i = (jint(0));
	LINE_NUMBER(130);
	goto label_40;
	}
label_50:;
	{
	LINE_NUMBER(133);
	INST_IINC(3, -1);
	LINE_NUMBER(134);
	goto label_44;
	}
label_40:;
	{
	LINE_NUMBER(137);
	if ((frame[2].i) != 0) goto label_54;
	}
	{
	LINE_NUMBER(138);
	SM_main_GameCanvas_clearKeyHold(ctx);
	goto label_56;
	}
label_54:;
	{
	LINE_NUMBER(139);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) > (360)) goto label_57;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) >= (340)) goto label_58;
	}
label_57:;
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) < 0) goto label_59;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) <= (20)) goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(140);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) <= (40)) goto label_60;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) >= (70)) goto label_60;
	}
	{
	LINE_NUMBER(141);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	LINE_NUMBER(142);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	goto label_56;
	}
label_60:;
	{
	LINE_NUMBER(143);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) < (70)) goto label_63;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) > (110)) goto label_63;
	}
	{
	LINE_NUMBER(144);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	LINE_NUMBER(145);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	goto label_56;
	}
label_63:;
	{
	LINE_NUMBER(146);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) <= (110)) goto label_66;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) >= (120)) goto label_66;
	}
	{
	LINE_NUMBER(147);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	LINE_NUMBER(148);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	goto label_56;
	}
label_66:;
	{
	LINE_NUMBER(149);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) < (120)) goto label_69;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) > (200)) goto label_69;
	}
	{
	LINE_NUMBER(150);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	LINE_NUMBER(151);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	goto label_56;
	}
label_69:;
	{
	LINE_NUMBER(152);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) <= (200)) goto label_72;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) >= (250)) goto label_72;
	}
	{
	LINE_NUMBER(153);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(154);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(155);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	LINE_NUMBER(156);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	goto label_56;
	}
label_72:;
	{
	LINE_NUMBER(157);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) < (250)) goto label_77;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) > (290)) goto label_77;
	}
	{
	LINE_NUMBER(158);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(159);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	goto label_56;
	}
label_77:;
	{
	LINE_NUMBER(160);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) <= (290)) goto label_56;
	}
	{
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_angle) >= (340)) goto label_56;
	}
	{
	LINE_NUMBER(161);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(162);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(163);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	LINE_NUMBER(164);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	goto label_56;
	}
label_58:;
	{
	LINE_NUMBER(167);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	LINE_NUMBER(168);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	}
label_56:;
	LINE_NUMBER(170);
	goto label_1;
label_5:;
	{
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = 45;
	((main_GamePad *) NULL_CHECK(sp[1].o))->F_xC = temp0;
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_xM = temp0;
	LINE_NUMBER(174);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) <= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) goto label_86;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (55);
	((main_GamePad *) NULL_CHECK(sp[1].o))->F_yC = temp0;
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_yM = temp0;
	goto label_88;
	}
label_86:;
	{
	LINE_NUMBER(176);
	if (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isLargeGamePad) != 0) goto label_89;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (90);
	((main_GamePad *) NULL_CHECK(sp[1].o))->F_yC = temp0;
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_yM = temp0;
	goto label_88;
	}
label_89:;
	{
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (45);
	((main_GamePad *) NULL_CHECK(sp[1].o))->F_yC = temp0;
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_yM = temp0;
	}
label_88:;
	{
	LINE_NUMBER(182);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_isGamePad = (jint(0));
	LINE_NUMBER(183);
	SM_main_GameCanvas_clearKeyHold(ctx);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(187);
	goto label_92;
label_2:;
	LINE_NUMBER(186);
	INST_ASTORE(1);
label_92:;
	LINE_NUMBER(188);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GamePad_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GamePad:paint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isAnalog) == 0) goto label_1;
	}
	{
	LINE_NUMBER(192);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) <= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) goto label_3;
	}
	{
	LINE_NUMBER(193);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xZone = (jint(0));
	LINE_NUMBER(194);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yZone = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (140));
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) / (jint(4))) * (jint(3))) - (40)), (95));
	((main_GamePad *) NULL_CHECK(sp[0].o))->F_wZone = temp0;
	LINE_NUMBER(196);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_hZone = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(198);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xZone = (jint(0));
	LINE_NUMBER(199);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yZone = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) >> (jint(1))) + (40));
	LINE_NUMBER(200);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_wZone = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) / (jint(4))) * (jint(3))) - (40));
	LINE_NUMBER(201);
	((main_GamePad *) NULL_CHECK((frame[0].o)))->F_hZone = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h);
	}
label_8:;
	{
	LINE_NUMBER(203);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgAnalog1;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xC), ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yC), (jint(3)));
	LINE_NUMBER(204);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgAnalog2;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_xM), ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yM), (jint(3)));
	}
label_1:;
	LINE_NUMBER(206);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_main_GamePad_disableCheckDrag_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GamePad:disableCheckDrag", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isAnalog) != 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].i = ((main_GamePad *) NULL_CHECK(sp[-1].o))->F_isGamePad;
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_main_GamePad_disableClickMove_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GamePad:disableClickMove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(214);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isAnalog) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(215);
	INST_ICONST(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(218);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) < 0) goto label_8;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) > ((jint(0)) + ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_wZone))) goto label_8;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py) < ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yZone)) goto label_8;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py) <= (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yZone) + ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_hZone))) goto label_9;
	}
label_8:;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_px;
	if ((--sp)->i < 0) goto label_10;
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) > (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) goto label_10;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py) < ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yZone)) goto label_10;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py) <= (((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_yZone) + ((jint)((main_GamePad *) NULL_CHECK((frame[0].o)))->F_hZone))) goto label_9;
	}
label_10:;
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) >= ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (50))) goto label_9;
	}
	{
	LINE_NUMBER(219);
	frame[1].i = (jint(0));
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(221);
	frame[1].i = (jint(1));
	}
label_13:;
	LINE_NUMBER(224);
	INST_ILOAD(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(226);
	frame[1].o = sp[0].o;
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_main_GamePad[] {
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
	(void *) M_main_GamePad_update,
	(void *) M_main_GamePad_paint_lib_mGraphics,
	(void *) M_main_GamePad_disableCheckDrag_R_boolean,
	(void *) M_main_GamePad_disableClickMove_R_boolean,
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
	{ "update", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "disableCheckDrag", "()Z" },
	{ "disableClickMove", "()Z" },
};

static FieldMetadata fields[] {
	{ "xC", &class_int, offsetof(main_GamePad, F_xC), "I", 2 },
	{ "yC", &class_int, offsetof(main_GamePad, F_yC), "I", 2 },
	{ "xM", &class_int, offsetof(main_GamePad, F_xM), "I", 2 },
	{ "yM", &class_int, offsetof(main_GamePad, F_yM), "I", 2 },
	{ "xMLast", &class_int, offsetof(main_GamePad, F_xMLast), "I", 2 },
	{ "yMLast", &class_int, offsetof(main_GamePad, F_yMLast), "I", 2 },
	{ "R", &class_int, offsetof(main_GamePad, F_R), "I", 2 },
	{ "r", &class_int, offsetof(main_GamePad, F_r), "I", 2 },
	{ "xTemp", &class_int, offsetof(main_GamePad, F_xTemp), "I", 2 },
	{ "yTemp", &class_int, offsetof(main_GamePad, F_yTemp), "I", 2 },
	{ "deltaX", &class_int, offsetof(main_GamePad, F_deltaX), "I", 2 },
	{ "deltaY", &class_int, offsetof(main_GamePad, F_deltaY), "I", 2 },
	{ "delta", &class_int, offsetof(main_GamePad, F_delta), "I", 2 },
	{ "angle", &class_int, offsetof(main_GamePad, F_angle), "I", 2 },
	{ "xZone", &class_int, offsetof(main_GamePad, F_xZone), "I", 2 },
	{ "yZone", &class_int, offsetof(main_GamePad, F_yZone), "I", 2 },
	{ "wZone", &class_int, offsetof(main_GamePad, F_wZone), "I", 1 },
	{ "hZone", &class_int, offsetof(main_GamePad, F_hZone), "I", 2 },
	{ "isGamePad", &class_boolean, offsetof(main_GamePad, F_isGamePad), "Z", 2 },
	{ "isSmallGamePad", &class_boolean, offsetof(main_GamePad, F_isSmallGamePad), "Z", 1 },
	{ "isMediumGamePad", &class_boolean, offsetof(main_GamePad, F_isMediumGamePad), "Z", 1 },
	{ "isLargeGamePad", &class_boolean, offsetof(main_GamePad, F_isLargeGamePad), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_main_GamePad, 0, "()V", 1 },
	{ "update", (intptr_t) M_main_GamePad_update, VTABLE_main_GamePad_update, "()V", 17 },
	{ "paint", (intptr_t) M_main_GamePad_paint_lib_mGraphics, VTABLE_main_GamePad_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "disableCheckDrag", (intptr_t) M_main_GamePad_disableCheckDrag_R_boolean, VTABLE_main_GamePad_disableCheckDrag_R_boolean, "()Z", 17 },
	{ "disableClickMove", (intptr_t) M_main_GamePad_disableClickMove_R_boolean, VTABLE_main_GamePad_disableClickMove_R_boolean, "()Z", 17 },
};

Class class_main_GamePad{
		.nativeName = (intptr_t) "main/GamePad",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(main_GamePad),
		.classVtable = (intptr_t) vtable_main_GamePad,
		.staticInitializer = (intptr_t) clinit_main_GamePad,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_main_GamePad,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 22,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_main_GamePad = registerClass(&class_main_GamePad);

}

