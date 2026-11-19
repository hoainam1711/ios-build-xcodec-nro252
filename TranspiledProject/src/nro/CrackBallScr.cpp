#include "nro/CrackBallScr.h"
#include "nro/GameScr.h"
#include "java/lang/StringBuilder.h"
#include "nro/CrackBallEffect.h"
#include "nro/IActionListener.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/SmallImage.h"
#include "nro/Panel.h"
#include "nro/Menu.h"
#include "java/lang/Runnable.h"
#include "nro/StaticObj.h"
#include "nro/Paint.h"
#include "nro/CrackBallScr.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/FrameImage.h"
#include "nro/InfoMe.h"
#include "lib/sound/SoundMn.h"
#include "nro/mScreen.h"
#include "java/lang/Throwable.h"
#include "lib/mSystem.h"
#include "java/lang/Thread.h"
#include "nro/TileMap.h"
#include "lib/mFont.h"
#include "java/lang/Exception.h"
#include "nro/InfoDlg.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "nro/ItemTemplate.h"
#include "nro/BallInfo.h"
#include "nro/Effect.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "lib/input/ChatTextField.h"
#include "nro/Res.h"
#include "nro/Char.h"
#include "nro/Item.h"
#include "nro/SkillPaint.h"

extern "C" {

jobject SF_nro_CrackBallScr_a;
jint SF_nro_CrackBallScr_ySkill;
jobject SF_nro_CrackBallScr_xSkill;
jobject SF_nro_CrackBallScr_fraImgKame;
jobject SF_nro_CrackBallScr_fraImgKame_1;
jobject SF_nro_CrackBallScr_imgX;
jobject SF_nro_CrackBallScr_imgReplay;
jbool SF_nro_CrackBallScr_isAutoCrackBall;
jbool SF_nro_CrackBallScr_isCallStop;

void mark_nro_CrackBallScr(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_CrackBallScr_a)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_CrackBallScr_a)->clazz)->markFunction)((jobject) SF_nro_CrackBallScr_a, mark, depth + 1);
		if (SF_nro_CrackBallScr_xSkill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_CrackBallScr_xSkill)->clazz)->markFunction)((jobject) SF_nro_CrackBallScr_xSkill, mark, depth + 1);
		if (SF_nro_CrackBallScr_fraImgKame)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_CrackBallScr_fraImgKame)->clazz)->markFunction)((jobject) SF_nro_CrackBallScr_fraImgKame, mark, depth + 1);
		if (SF_nro_CrackBallScr_fraImgKame_1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_CrackBallScr_fraImgKame_1)->clazz)->markFunction)((jobject) SF_nro_CrackBallScr_fraImgKame_1, mark, depth + 1);
		if (SF_nro_CrackBallScr_imgX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_CrackBallScr_imgX)->clazz)->markFunction)((jobject) SF_nro_CrackBallScr_imgX, mark, depth + 1);
		if (SF_nro_CrackBallScr_imgReplay)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_CrackBallScr_imgReplay)->clazz)->markFunction)((jobject) SF_nro_CrackBallScr_imgReplay, mark, depth + 1);
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
	auto self = (nro_CrackBallScr *) object;
	if (self->F_listBall)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listBall)->clazz)->markFunction)((jobject) self->F_listBall, mark, depth + 1);
	if (self->F_xArg)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xArg)->clazz)->markFunction)((jobject) self->F_xArg, mark, depth + 1);
	if (self->F_yArg)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_yArg)->clazz)->markFunction)((jobject) self->F_yArg, mark, depth + 1);
	if (self->F_xDot)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xDot)->clazz)->markFunction)((jobject) self->F_xDot, mark, depth + 1);
	if (self->F_yDot)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_yDot)->clazz)->markFunction)((jobject) self->F_yDot, mark, depth + 1);
	if (self->F_idItem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_idItem)->clazz)->markFunction)((jobject) self->F_idItem, mark, depth + 1);
	if (self->F_fr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fr)->clazz)->markFunction)((jobject) self->F_fr, mark, depth + 1);
	if (self->F_nFrame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nFrame)->clazz)->markFunction)((jobject) self->F_nFrame, mark, depth + 1);
}

void init_nro_CrackBallScr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_CrackBallScr(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(59);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step = (jint(0));
	LINE_NUMBER(33);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countFr = (jint(0));
	LINE_NUMBER(34);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countKame = (jint(0));
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (21));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (10)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (11)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (12)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (13)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (14)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (15)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (16)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (17)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (18)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (19)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (20)) = (20);
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_fr = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (12));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (10)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (11)) = (jint(3));
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_nFrame = (jref) sp[1].o;
	LINE_NUMBER(60);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_xSkill = sp[0].o;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (16);
	LINE_NUMBER(61);
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_ySkill = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (41));
	LINE_NUMBER(62);
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_xSkill;
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (40));
	LINE_NUMBER(63);
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_xSkill;
	jint temp0 = jint(2);
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_xSkill;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_xSkill;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) / (jint(2)));
	LINE_NUMBER(64);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/e/e_1.png"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(65);
	clinit_nro_FrameImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_javax_microedition_lcdui_Image_int_int(ctx, sp[0].o, (frame[1].o), (30), (30));
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_fraImgKame = sp[0].o;
	LINE_NUMBER(66);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/e/e_0.png"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(67);
	clinit_nro_FrameImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_javax_microedition_lcdui_Image_int_int(ctx, sp[0].o, (frame[1].o), (68), (65));
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_fraImgKame_1 = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/e/e_2.png"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(69);
	clinit_nro_FrameImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_javax_microedition_lcdui_Image_int_int(ctx, sp[0].o, (frame[1].o), (66), (70));
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/e/nut2.png"_j))));
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_imgReplay = sp[0].o;
	LINE_NUMBER(71);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/e/nut3.png"_j))));
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_imgX = sp[0].o;
	LINE_NUMBER(72);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_wP = (230);
	LINE_NUMBER(73);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_xP = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) - (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_wP) / (jint(2))));
	LINE_NUMBER(74);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_hP = (40);
	LINE_NUMBER(75);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yP = (-((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_hP));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_CrackBallScr_gI_R_nro_CrackBallScr(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_CrackBallScr(ctx);
	{
	LINE_NUMBER(79);
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_a;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(80);
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_CrackBallScr);
	init_nro_CrackBallScr(ctx, sp[0].o);
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_a = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(83);
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_a;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_nro_CrackBallScr_SetCrackBallScr_Array1_short_byte_int_short(jcontext ctx, jobject self, jobject param0, jbyte param1, jint param2, jshort param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:SetCrackBallScr", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(87);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_yTo = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy) - (10));
	LINE_NUMBER(89);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_rO = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) / (jint(3))) + (10));
	LINE_NUMBER(90);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_rO) <= (50)) goto label_5;
	}
	{
	LINE_NUMBER(91);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_rO = (50);
	}
label_5:;
	{
	LINE_NUMBER(94);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_xO = (360);
	LINE_NUMBER(95);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmxLim) / (jint(2)));
	LINE_NUMBER(96);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yO = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) / (jint(3)))) + (30));
	LINE_NUMBER(97);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_iDot = (175);
	LINE_NUMBER(98);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_angle = (jint(0));
	LINE_NUMBER(99);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_iAngle = ((360) / ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_iDot));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_iDot));
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_xArg = (jref) sp[1].o;
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_iDot));
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_yArg = (jref) sp[1].o;
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_iDot));
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_xDot = (jref) sp[1].o;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_iDot));
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_yDot = (jref) sp[1].o;
	LINE_NUMBER(104);
	frame[5].o = (frame[0].o);
	LINE_NUMBER(105);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_18;
	}
	{
	LINE_NUMBER(106);
	frame[6].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yArg;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_18;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yArg;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_rO;
	jint temp2 = (jint)SM_nro_Res_atan_int_R_int(ctx, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_angle));
	jint temp3 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((temp1 * temp2) / (1024)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp3;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xArg;
	jint temp4 = frame[6].i;
	jint temp5 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_rO;
	jint temp6 = (jint)SM_nro_Res_cos_int_R_int(ctx, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_angle));
	jint temp7 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((temp5 * temp6) / (1024)));
	ARRAY_ACCESS(jint, sp[0].o, temp4) = temp7;
	LINE_NUMBER(109);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_angle) >= (90)) goto label_24;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xDot;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xO;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xArg;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yDot;
	jint temp2 = frame[6].i;
	jint temp3 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yO;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yArg;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	goto label_27;
	}
label_24:;
	{
	LINE_NUMBER(112);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_angle) < (90)) goto label_28;
	}
	{
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_angle) >= (180)) goto label_28;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xDot;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xO;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xArg;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yDot;
	jint temp2 = frame[6].i;
	jint temp3 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yO;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yArg;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(115);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_angle) < (180)) goto label_31;
	}
	{
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_angle) >= (270)) goto label_31;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xDot;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xO;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xArg;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yDot;
	jint temp2 = frame[6].i;
	jint temp3 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yO;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yArg;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	goto label_27;
	}
label_31:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xDot;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xO;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_xArg;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yDot;
	jint temp2 = frame[6].i;
	jint temp3 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yO;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_yArg;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	}
label_27:;
	{
	LINE_NUMBER(123);
	sp[0].o = frame[5].o;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_angle = (((jint)((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_angle) + ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[5].o)))->F_iAngle));
	LINE_NUMBER(106);
	INST_IINC(6, 1);
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_BallInfo, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_listBall = (jref) sp[1].o;
	LINE_NUMBER(129);
	frame[6].i = (jint(0));
	}
label_37:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_38;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp0 = frame[6].i;
	clinit_nro_BallInfo(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_BallInfo);
	init_nro_BallInfo(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(131);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_idImg = ((jint)ARRAY_ACCESS(jshort, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_count = ((frame[6].i) * (25));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_yTo = (-999);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(2)), (jint(5)));
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vx = temp1;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	jint temp2 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(-1)), (jint(2)));
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_dir = temp2;
	LINE_NUMBER(137);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	frame[7].o = sp[0].o;
	clinit_nro_Char(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Char);
	init_nro_Char(ctx, sp[1].o);
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_cFocus = (jref) sp[1].o;
	LINE_NUMBER(138);
	sp[0].o = (jobject)((nro_BallInfo *) NULL_CHECK((frame[7].o)))->F_cFocus;
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-999), (-800));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_charID = temp3;
	LINE_NUMBER(139);
	sp[0].o = (jobject)((nro_BallInfo *) NULL_CHECK((frame[7].o)))->F_cFocus;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_head = (jint(-1));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((nro_BallInfo *) NULL_CHECK((frame[7].o)))->F_cFocus;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_body = (jint(-1));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((nro_BallInfo *) NULL_CHECK((frame[7].o)))->F_cFocus;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_leg = (jint(-1));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((nro_BallInfo *) NULL_CHECK((frame[7].o)))->F_cFocus;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_bag = (jint(-1));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((nro_BallInfo *) NULL_CHECK((frame[7].o)))->F_cFocus;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cName = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((nro_BallInfo *) NULL_CHECK((frame[7].o)))->F_cFocus;
	sp[1].o = (jobject)((nro_BallInfo *) NULL_CHECK((frame[7].o)))->F_cFocus;
	jlong temp4 = jlong(20ll);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cHPFull = temp4;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cHP = temp4;
	LINE_NUMBER(129);
	INST_IINC(6, 1);
	goto label_37;
	}
label_38:;
	{
	LINE_NUMBER(147);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_isCanSkill = (jint(0));
	LINE_NUMBER(148);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_isKame = (jint(0));
	LINE_NUMBER(149);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_isSendSv = (jint(0));
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	jlong temp0 = (jlong)SF_main_GameCanvas_timeNow;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (1000), (2000));
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_timeStart = (temp0 + (jlong(temp1)));
	LINE_NUMBER(151);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step = (jint(0));
	LINE_NUMBER(152);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_indexSelect = (jint(-1));
	LINE_NUMBER(153);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_indexSkillSelect = (jint(-1));
	LINE_NUMBER(154);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_typePrice = (frame[2].i);
	LINE_NUMBER(155);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_price = (frame[3].i);
	LINE_NUMBER(156);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_cost = (jint(0));
	LINE_NUMBER(157);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_moveTo_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_moveTo_int_int_int])(ctx, sp[0].o, (470), (408), (jint(1)));
	LINE_NUMBER(158);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = (jint(-1));
	LINE_NUMBER(159);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe = (jint(1));
	LINE_NUMBER(160);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countFr = (jint(0));
	LINE_NUMBER(161);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countKame = (jint(0));
	LINE_NUMBER(162);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_frame = (jint(0));
	LINE_NUMBER(163);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_vp = (jint(0));
	LINE_NUMBER(164);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yP = (-((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_hP));
	LINE_NUMBER(165);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_idTicket = (frame[4].i);
	LINE_NUMBER(166);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_numTicket = (jint(0));
	LINE_NUMBER(167);
	M_nro_CrackBallScr_checkNumTicket(ctx, (frame[0].o));
	LINE_NUMBER(168);
	((func_nro_CrackBallScr_switchToMe) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_CrackBallScr_switchToMe])(ctx, (frame[0].o));
	LINE_NUMBER(169);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_hoisinh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_hoisinh])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_CrackBallScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:perform", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_CrackBallScr_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:update", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_price;
	jint temp1 = (jint)M_nro_CrackBallScr_checkNum_R_byte(ctx, (frame[0].o));
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_cost = (temp0 * temp1);
	LINE_NUMBER(179);
	M_nro_CrackBallScr_checkNumTicket(ctx, (frame[0].o));
	LINE_NUMBER(180);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_update])(ctx, sp[0].o);
	LINE_NUMBER(183);
	if ((longCompare((((jlong)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_timeStart) - (clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow)), (jlong(0)))) <= 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(184);
	frame[2].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(186);
	sp[0].o = frame[1].o;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_count = (((jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_count) + (jint(2)));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_count) < ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_iDot)) goto label_15;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_count = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_xDot;
	sp[2].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_x = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i)))))->F_count)));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yDot;
	sp[2].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_y = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i)))))->F_count)));
	LINE_NUMBER(184);
	INST_IINC(2, 1);
	goto label_11;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(195);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(198);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) != 0) goto label_19;
	}
	{
	LINE_NUMBER(199);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step = (jint(1));
	}
label_19:;
	{
	LINE_NUMBER(202);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) != (jint(1))) goto label_21;
	}
	{
	LINE_NUMBER(203);
	frame[2].i = (jint(0));
	}
label_23:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_21;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_yTo) == (-999)) goto label_25;
	}
	{
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isDone) != 0) goto label_25;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_y;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_yTo)) goto label_27;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vy) >= 0) goto label_29;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vy = (jint(0));
	}
label_29:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_y;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp1 = temp0 + ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vy);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp1 <= ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_yTo)) goto label_31;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_yTo);
	goto label_33;
	}
label_31:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(214);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_y = (temp0 + ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_vy));
	}
label_33:;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vy = (((jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vy) + (jint(1)));
	goto label_35;
	}
label_27:;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vy) <= 0) goto label_36;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vy = (jint(0));
	}
label_36:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(224);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_y = (temp0 + ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_vy));
	LINE_NUMBER(225);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vy = (((jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vy) - (jint(1)));
	}
label_35:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_y;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 != ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_yTo)) goto label_25;
	}
	{
	LINE_NUMBER(229);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	jint temp0 = 19;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp1 = ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_x) - (jint(5));
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_y) + (25)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	LINE_NUMBER(230);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_charFall) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_charFall])(ctx, sp[0].o);
	LINE_NUMBER(231);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isDone = (jint(1));
	LINE_NUMBER(232);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_isCanSkill) != 0) goto label_25;
	}
	{
	LINE_NUMBER(233);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_isCanSkill = (jint(1));
	}
label_25:;
	{
	LINE_NUMBER(203);
	INST_IINC(2, 1);
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(240);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) != (jint(2))) goto label_45;
	}
	{
	LINE_NUMBER(241);
	frame[2].i = (jint(0));
	}
label_47:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_48;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isDone) != 0) goto label_50;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_y) <= (-10)) goto label_52;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vy) <= 0) goto label_54;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vy = (jint(0));
	}
label_54:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(249);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_y = (temp0 + ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_vy));
	LINE_NUMBER(250);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vy = (((jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vy) - (jint(1)));
	LINE_NUMBER(251);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(252);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp2 = (jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_vx;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_x = (temp1 + (temp2 * ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_dir)));
	LINE_NUMBER(253);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(254);
	sp[0].o = frame[1].o;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vx = (((jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vx) - (jint(3)));
	}
label_52:;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_y) != (-10)) goto label_50;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isPaint = (jint(0));
	}
label_50:;
	{
	LINE_NUMBER(241);
	INST_IINC(2, 1);
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_countFr = (((jint)((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_countFr) + (jint(1)));
	LINE_NUMBER(264);
	jint temp0 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countFr;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_fr;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_64;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_fr;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_countFr = ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1)));
	LINE_NUMBER(266);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_isKame = (jint(1));
	LINE_NUMBER(267);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_newKame) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_newKame])(ctx, sp[0].o);
	LINE_NUMBER(268);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_isSendSv) != 0) goto label_64;
	}
	{
	if ((longCompare((((jlong)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_timeKame) - (clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow)), (jlong(0)))) >= 0) goto label_64;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	jint temp0 = jint(2);
	jint temp1 = (jint)M_nro_CrackBallScr_checkTicket_R_byte(ctx, (frame[0].o));
	jint temp2 = (jint)M_nro_CrackBallScr_checkNum_R_byte(ctx, (frame[0].o));
	((func_nro_Service_SendCrackBall_byte_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_SendCrackBall_byte_byte])(ctx, sp[0].o, temp0, (jbyte((temp1 + temp2))));
	LINE_NUMBER(270);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_isSendSv = (jint(1));
	}
label_64:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_fr;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cf = ((jint)ARRAY_ACCESS(jbyte, sp[1].o, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countFr)));
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_countKame = (((jint)((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_countKame) + (jint(1)));
	LINE_NUMBER(276);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countKame) <= (jint(5))) goto label_73;
	}
	{
	LINE_NUMBER(277);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countKame = (jint(0));
	}
label_73:;
	{
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_nFrame;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_frame = ((jint)ARRAY_ACCESS(jbyte, sp[1].o, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countKame)));
	}
label_45:;
	{
	LINE_NUMBER(283);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) != (jint(3))) goto label_75;
	}
	{
	LINE_NUMBER(284);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countKame) > (jint(5))) goto label_77;
	}
	{
	LINE_NUMBER(285);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countKame = (jint(5));
	}
label_77:;
	{
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_countKame = (((jint)((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_countKame) + (jint(1)));
	LINE_NUMBER(289);
	jint temp0 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countKame;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_nFrame;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_80;
	}
	{
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_nFrame;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_countKame = ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1)));
	LINE_NUMBER(291);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step = (jint(4));
	LINE_NUMBER(292);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_isKame = (jint(0));
	LINE_NUMBER(293);
	frame[2].i = (jint(0));
	LINE_NUMBER(295);
	frame[3].i = (jint(0));
	}
label_86:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_80;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_isDone) == 0) goto label_88;
	}
	{
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_isSetImg) != 0) goto label_88;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i));
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_idItem;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_idImg = ((jint)ARRAY_ACCESS(jshort, sp[1].o, (frame[2].i)));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_isSetImg = (jint(1));
	LINE_NUMBER(299);
	INST_IINC(2, 1);
	}
label_88:;
	{
	LINE_NUMBER(295);
	INST_IINC(3, 1);
	goto label_86;
	}
label_80:;
	{
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_nFrame;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_frame = ((jint)ARRAY_ACCESS(jbyte, sp[1].o, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_countKame)));
	}
label_75:;
	{
	LINE_NUMBER(307);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) != (jint(4))) goto label_92;
	}
	{
	LINE_NUMBER(308);
	frame[2].i = (jint(0));
	}
label_94:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_95;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isPaint) == 0) goto label_97;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_xTo = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	}
label_97:;
	{
	LINE_NUMBER(308);
	INST_IINC(2, 1);
	goto label_94;
	}
label_95:;
	{
	LINE_NUMBER(314);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step = (jint(5));
	}
label_92:;
	{
	LINE_NUMBER(317);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) != (jint(5))) { popExceptionFrames(frameRef, 1); goto label_99; }
	}
	{
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_vp = (((jint)((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_vp) + (jint(1)));
	LINE_NUMBER(319);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yP) >= ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) / (jint(3)))) goto label_102;
	}
	{
	LINE_NUMBER(320);
	if ((((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yP) + ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_vp)) <= ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) / (jint(3)))) goto label_104;
	}
	{
	LINE_NUMBER(321);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yP = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) / (jint(3)));
	goto label_102;
	}
label_104:;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_yP = (((jint)((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_yP) + ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_vp));
	}
label_102:;
	{
	LINE_NUMBER(327);
	frame[2].i = (jint(0));
	}
label_106:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isPaint) == 0) goto label_108;
	}
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_x;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_xTo)) goto label_110;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vx) >= 0) goto label_112;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vx = (jint(0));
	}
label_112:;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_x;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp1 = temp0 + ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vx);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp1 <= ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_xTo)) goto label_114;
	}
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_xTo);
	goto label_116;
	}
label_114:;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(338);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_vx));
	}
label_116:;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vx = (((jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vx) + (jint(1)));
	goto label_118;
	}
label_110:;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vx) <= 0) goto label_119;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_vx = (jint(0));
	}
label_119:;
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(348);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_vx));
	LINE_NUMBER(349);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vx = (((jint)((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_vx) - (jint(1)));
	}
label_118:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_x;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 != ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_xTo)) goto label_108;
	}
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isPaint = (jint(0));
	}
label_108:;
	{
	LINE_NUMBER(327);
	INST_IINC(2, 1);
	goto label_106;
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(358);
	popStackFrame(ctx);
	INST_RETURN();
label_99:;
	LINE_NUMBER(362);
	goto label_124;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(360);
	frame[1].o = sp[0].o;
	LINE_NUMBER(361);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-upd--null: "_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
label_124:;
	LINE_NUMBER(364);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_CrackBallScr_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:updateKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(367);
	if ((clinit_nro_InfoDlg(ctx), (jint)SF_nro_InfoDlg_isLock) != 0) goto label_1;
	}
	{
	LINE_NUMBER(368);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_3;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu) != 0) goto label_3;
	}
	{
	LINE_NUMBER(369);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(371);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) != (jint(1))) goto label_6;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerClick;
	if ((--sp)->i == 0) goto label_6;
	{
	LINE_NUMBER(372);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[1].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[1].o)))->F_listBall;
	jint temp0 = (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_x) - (20)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[1].o)))->F_listBall;
	jint temp1 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, ((((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_y) - (10)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)), (30), (30));
	if (temp1 == 0) goto label_10;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerClick;
	if ((--sp)->i == 0) goto label_10;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_10;
	{
	LINE_NUMBER(374);
	M_nro_CrackBallScr_doClickBall_int(ctx, (frame[1].o), (frame[2].i));
	}
label_10:;
	{
	LINE_NUMBER(372);
	INST_IINC(2, 1);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(379);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_3;
	}
	{
	LINE_NUMBER(380);
	frame[2].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_xSkill;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(381);
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_xSkill;
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))), (clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_ySkill), (36), (36));
	if (temp0 == 0) goto label_15;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerClick;
	if ((--sp)->i == 0) goto label_15;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_15;
	{
	LINE_NUMBER(382);
	if ((clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_isAutoCrackBall) == 0) goto label_17;
	}
	{
	if ((frame[2].i) == (jint(2))) goto label_17;
	}
	LINE_NUMBER(383);
	goto label_3;
label_17:;
	{
	LINE_NUMBER(386);
	M_nro_CrackBallScr_doClickSkill_int(ctx, (frame[1].o), (frame[2].i));
	}
label_15:;
	{
	LINE_NUMBER(380);
	INST_IINC(2, 1);
	goto label_13;
	}
label_3:;
	{
	LINE_NUMBER(392);
	if ((clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_isAutoCrackBall) == 0) goto label_19;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) != 0) goto label_19;
	}
	{
	LINE_NUMBER(393);
	SM_main_GameCanvas_clearKeyHold(ctx);
	LINE_NUMBER(394);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	}
label_19:;
	{
	LINE_NUMBER(397);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) == 0) goto label_22;
	}
	{
	LINE_NUMBER(398);
	M_nro_CrackBallScr_doClickSkill_int(ctx, (frame[0].o), (jint(2)));
	}
label_22:;
	{
	LINE_NUMBER(401);
	frame[1].i = (jint(1));
	}
label_24:;
	{
	if ((frame[1].i) >= (8)) goto label_25;
	}
	{
	LINE_NUMBER(402);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i))) == 0) goto label_27;
	}
	{
	LINE_NUMBER(403);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)) = (jint(0));
	LINE_NUMBER(404);
	M_nro_CrackBallScr_doClickBall_int(ctx, (frame[0].o), ((frame[1].i) - (jint(1))));
	}
label_27:;
	{
	LINE_NUMBER(401);
	INST_IINC(1, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(408);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (12))) == 0) goto label_30;
	}
	{
	LINE_NUMBER(409);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	LINE_NUMBER(410);
	M_nro_CrackBallScr_doClickSkill_int(ctx, (frame[0].o), (jint(0)));
	}
label_30:;
	{
	LINE_NUMBER(413);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (13))) == 0) goto label_33;
	}
	{
	LINE_NUMBER(414);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	LINE_NUMBER(415);
	M_nro_CrackBallScr_doClickSkill_int(ctx, (frame[0].o), (jint(1)));
	}
label_33:;
	LINE_NUMBER(418);
	SM_main_GameCanvas_clearKeyPressed(ctx);
label_1:;
	LINE_NUMBER(420);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_CrackBallScr_doClickBall_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:doClickBall", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_isDone) != 0) goto label_1;
	}
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_getItem) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_getItem])(ctx, sp[0].o);
	LINE_NUMBER(427);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_typePrice) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((func_nro_Char_checkLuong_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_checkLuong_R_int])(ctx, sp[0].o);
	jlong temp1 = jlong(temp0);
	sp[0].l = temp1;
	sp += 1;
	goto label_5;
	}
label_4:;
	sp->o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp++;
	sp[-1].l = ((nro_Char *) NULL_CHECK(sp[-1].o))->F_xu;
label_5:;
	{
	sp -= 1;
	frame[2].l = sp[0].l;
	LINE_NUMBER(428);
	jint temp0 = (jint)M_nro_CrackBallScr_checkTicket_R_byte(ctx, (frame[0].o));
	if (temp0 < ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_numTicket)) goto label_7;
	}
	{
	if ((longCompare((frame[2].l), (jlong((((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_cost) + ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_price)))))) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(430);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_not_enough_money_1;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp += 1;
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_typePrice) == 0) goto label_9;
	}
	clinit_nro_mResources(ctx);
	(sp++)->o = SF_nro_mResources_LUONG;
	goto label_10;
label_9:;
	clinit_nro_mResources(ctx);
	(sp++)->o = SF_nro_mResources_XU;
label_10:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(431);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, (frame[4].o), (jint(0)));
	LINE_NUMBER(432);
	goto label_1;
	}
label_7:;
	{
	LINE_NUMBER(435);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_indexSelect = (frame[1].i);
	LINE_NUMBER(436);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_indexSelect));
	jint temp0 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yTo;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-3), (jint(3)));
	((nro_BallInfo *) NULL_CHECK(sp[0].o))->F_yTo = (temp0 + temp1);
	}
label_1:;
	LINE_NUMBER(439);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_CrackBallScr_doClickSkill_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:doClickSkill", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(442);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_indexSkillSelect = (frame[1].i);
	LINE_NUMBER(443);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_indexSkillSelect) != (jint(2))) goto label_2;
	}
	{
	LINE_NUMBER(444);
	if ((clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_isAutoCrackBall) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_isAutoCrackBall = sp[0].i;
	if (sp[0].i == 0) goto label_6;
	}
	{
	LINE_NUMBER(445);
	clinit_java_lang_Thread(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread);
	clinit_nro_CrackBallEffect(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_CrackBallEffect);
	init_nro_CrackBallEffect_nro_CrackBallScr(ctx, sp[1].o, (frame[0].o));
	init_java_lang_Thread_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_start])(ctx, sp[0].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(447);
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_isCallStop = (jint(1));
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(450);
	if ((frame[1].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(451);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) >= (jint(2))) goto label_11;
	}
	{
	LINE_NUMBER(452);
	jint temp0 = (jint)M_nro_CrackBallScr_checkTicket_R_byte(ctx, (frame[0].o));
	jint temp1 = (jint)M_nro_CrackBallScr_checkNum_R_byte(ctx, (frame[0].o));
	if ((temp0 + temp1) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(453);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step = (jint(2));
	LINE_NUMBER(454);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_gong) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_gong])(ctx, sp[0].o);
	LINE_NUMBER(455);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	((func_nro_Char_setSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (13))), (jint(0)));
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	jlong temp0 = (jlong)SF_main_GameCanvas_timeNow;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (2000), (3000));
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_timeKame = (temp0 + (jlong(temp1)));
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(459);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yP) != ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) / (jint(3)))) goto label_8;
	}
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_SendCrackBall_byte_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_SendCrackBall_byte_byte])(ctx, sp[0].o, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_typePrice), (jint(0)));
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return;
	}
label_9:;
	{
	LINE_NUMBER(464);
	if ((clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_isAutoCrackBall) == 0) goto label_20;
	}
	{
	LINE_NUMBER(465);
	((func_nro_CrackBallScr_stopAutoCrackBall) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_CrackBallScr_stopAutoCrackBall])(ctx, (frame[0].o));
	}
label_20:;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isRongThanXuatHien = (jint(0));
	LINE_NUMBER(469);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_switchToMe])(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(473);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_CrackBallScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:paint", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(478);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)));
	LINE_NUMBER(479);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY));
	LINE_NUMBER(482);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isPaint) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_y;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 <= (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_yTo) - (20))) goto label_10;
	}
	{
	LINE_NUMBER(484);
	sp[0].o = frame[1].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_bong;
	sp[2].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i)))))->F_x;
	sp[2].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i)))))->F_yTo) + (7)), (jint(3)));
	}
label_10:;
	{
	LINE_NUMBER(482);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(488);
	frame[2].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_13;
	}
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isPaint) == 0) goto label_15;
	}
	{
	LINE_NUMBER(490);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp0 = (jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_idImg;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	jint temp1 = (jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_x;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, ((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_y), (jint(0)), (jint(3)));
	}
label_15:;
	{
	LINE_NUMBER(488);
	INST_IINC(2, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(495);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_isKame) == 0) goto label_17;
	}
	{
	LINE_NUMBER(496);
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_fraImgKame;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_fraImgKame;
	frame[2].i = ((temp0 - ((jint)((nro_FrameImage *) NULL_CHECK(sp[0].o))->F_frameWidth)) - (28));
	LINE_NUMBER(499);
	frame[3].i = (jint(0));
	}
label_22:;
	{
	jint temp0 = frame[3].i;
	clinit_main_GameCanvas(ctx);
	jint temp1 = (jint)SF_main_GameCanvas_w;
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_fraImgKame;
	if (temp0 >= ((temp1 / ((jint)((nro_FrameImage *) NULL_CHECK(sp[0].o))->F_frameWidth)) + (jint(1)))) goto label_19;
	}
	{
	LINE_NUMBER(500);
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_fraImgKame;
	jint temp0 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_fraImgKame;
	jint temp3 = temp1 - (temp2 * (((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_frameWidth) - (jint(1))));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp4 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_fraImgKame;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, temp0, temp3, (((temp4 - (((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_frameHeight) / (jint(2)))) - (12)) + (jint(2))), (jint(0)), (jint(0)), (frame[1].o));
	LINE_NUMBER(499);
	INST_IINC(3, 1);
	goto label_22;
	}
label_19:;
	{
	LINE_NUMBER(504);
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_fraImgKame_1;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_fraImgKame_1;
	frame[2].i = ((temp0 - ((jint)((nro_FrameImage *) NULL_CHECK(sp[0].o))->F_frameWidth)) - (10));
	LINE_NUMBER(506);
	clinit_nro_CrackBallScr(ctx);
	sp[0].o = (jobject)SF_nro_CrackBallScr_fraImgKame_1;
	jint temp1 = (jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp2 = (frame[2].i) - (jint(5));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp3 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_fraImgKame_1;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, temp1, temp2, ((temp3 - (((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_frameHeight) / (jint(2)))) - (12)), (jint(0)), (jint(0)), (frame[1].o));
	}
label_17:;
	{
	LINE_NUMBER(510);
	SM_nro_GameScr_resetTranslate_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(511);
	frame[3].i = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (240));
	LINE_NUMBER(512);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(13524492)));
	LINE_NUMBER(513);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (frame[3].i), (jint(0)), (240), (15));
	LINE_NUMBER(514);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgTienHoa;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((frame[3].i) + (11)), (8), (jint(3)));
	LINE_NUMBER(515);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgTicket;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((frame[3].i) + (90)), (7), (jint(3)));
	LINE_NUMBER(516);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK(sp[2].o))->F_xuStr;
	jint temp0 = (frame[3].i) + (24);
	jint temp1 = jint(2);
	jint temp2 = jint(0);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	LINE_NUMBER(517);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK(sp[2].o))->F_luongStr;
	jint temp3 = (frame[3].i) + (100);
	jint temp4 = jint(2);
	jint temp5 = jint(0);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp3, temp4, temp5, sp[3].o);
	LINE_NUMBER(521);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgXu;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((frame[3].i) + (200)), (8), (jint(3)));
	LINE_NUMBER(522);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_numTicket));
	jint temp6 = (frame[3].i) + (210);
	jint temp7 = jint(2);
	jint temp8 = jint(0);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp6, temp7, temp8, sp[3].o);
	LINE_NUMBER(523);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) >= (jint(4))) goto label_37;
	}
	{
	LINE_NUMBER(524);
	frame[3].i = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (140));
	LINE_NUMBER(525);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(11837316)));
	LINE_NUMBER(526);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (frame[3].i), (15), (140), (15));
	LINE_NUMBER(527);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_typePrice) != 0) goto label_42;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgTienHoa;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((frame[3].i) + (21)), (23), (jint(3)));
	goto label_44;
	}
label_42:;
	{
	LINE_NUMBER(531);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgTicket;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((frame[3].i) + (18)), (22), (jint(3)));
	}
label_44:;
	{
	LINE_NUMBER(534);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_red;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_cost));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	jint temp0 = (frame[3].i) + (30);
	jint temp1 = 17;
	jint temp2 = jint(0);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	LINE_NUMBER(535);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgXu;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((frame[3].i) + (80)), (22), (jint(3)));
	LINE_NUMBER(536);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_red;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	jint temp3 = (jint)M_nro_CrackBallScr_checkTicket_R_byte(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, temp3);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	jint temp4 = (frame[3].i) + (90);
	jint temp5 = 17;
	jint temp6 = jint(0);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp4, temp5, temp6, sp[3].o);
	}
label_37:;
	{
	LINE_NUMBER(539);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgSkill;
	clinit_nro_CrackBallScr(ctx);
	sp[2].o = (jobject)SF_nro_CrackBallScr_xSkill;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)))), (clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_ySkill), (jint(0)));
	LINE_NUMBER(540);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_indexSkillSelect) != 0) goto label_48;
	}
	{
	LINE_NUMBER(541);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgSkill2;
	clinit_nro_CrackBallScr(ctx);
	sp[2].o = (jobject)SF_nro_CrackBallScr_xSkill;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)))), (clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_ySkill), (jint(0)));
	}
label_48:;
	{
	LINE_NUMBER(544);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) >= (jint(3))) goto label_50;
	}
	{
	LINE_NUMBER(545);
	sp[0].o = frame[1].o;
	jint temp0 = 540;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_xSkill;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))) + (14)), ((clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_ySkill) + (14)), (jint(0)), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	goto label_52;
	}
label_50:;
	{
	LINE_NUMBER(547);
	sp[0].o = frame[1].o;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_imgReplay;
	clinit_nro_CrackBallScr(ctx);
	sp[2].o = (jobject)SF_nro_CrackBallScr_xSkill;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)))) + (14)) - (10)), (((clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_ySkill) + (14)) - (10)), (jint(0)));
	}
label_52:;
	{
	LINE_NUMBER(550);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgSkill;
	clinit_nro_CrackBallScr(ctx);
	sp[2].o = (jobject)SF_nro_CrackBallScr_xSkill;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1)))), (clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_ySkill), (jint(0)));
	LINE_NUMBER(551);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_indexSkillSelect) != (jint(1))) goto label_54;
	}
	{
	LINE_NUMBER(552);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgSkill2;
	clinit_nro_CrackBallScr(ctx);
	sp[2].o = (jobject)SF_nro_CrackBallScr_xSkill;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1)))), (clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_ySkill), (jint(0)));
	}
label_54:;
	{
	LINE_NUMBER(555);
	sp[0].o = frame[1].o;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_imgX;
	clinit_nro_CrackBallScr(ctx);
	sp[2].o = (jobject)SF_nro_CrackBallScr_xSkill;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1)))) + (14)) - (10)), (((clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_ySkill) + (14)) - (10)), (jint(0)));
	LINE_NUMBER(556);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) <= (jint(3))) goto label_57;
	}
	{
	LINE_NUMBER(557);
	SM_nro_Paint_paintFrameSimple_int_int_int_int_lib_mGraphics(ctx, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_xP), ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yP), ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_wP), ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_hP), (frame[1].o));
	LINE_NUMBER(558);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_hw;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_idItem;
	frame[2].i = (temp0 - (((((jarray) nullCheck(ctx, sp[0].o))->length) * (30)) / (jint(2))));
	LINE_NUMBER(560);
	frame[3].i = (jint(0));
	}
label_61:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_idItem;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_57;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_idItem;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, (frame[3].i))), (((frame[2].i) + (jint(5))) + ((frame[3].i) * (30))), (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yP) + (10)), (jint(0)), (jint(0)));
	LINE_NUMBER(560);
	INST_IINC(3, 1);
	goto label_61;
	}
label_57:;
	{
	LINE_NUMBER(565);
	if ((clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_isAutoCrackBall) == 0) goto label_64;
	}
	{
	LINE_NUMBER(566);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgSkill2;
	clinit_nro_CrackBallScr(ctx);
	sp[2].o = (jobject)SF_nro_CrackBallScr_xSkill;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)));
	clinit_nro_CrackBallScr(ctx);
	sp[2].o = (jobject)SF_nro_CrackBallScr_xSkill;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((temp0 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1))))) / (jint(2))), (clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_ySkill), (jint(0)));
	goto label_66;
	}
label_64:;
	{
	LINE_NUMBER(568);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgSkill;
	clinit_nro_CrackBallScr(ctx);
	sp[2].o = (jobject)SF_nro_CrackBallScr_xSkill;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)));
	clinit_nro_CrackBallScr(ctx);
	sp[2].o = (jobject)SF_nro_CrackBallScr_xSkill;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((temp0 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1))))) / (jint(2))), (clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_ySkill), (jint(0)));
	}
label_66:;
	{
	LINE_NUMBER(571);
	sp[0].o = frame[1].o;
	jint temp0 = 4387;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_xSkill;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_xSkill;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, (((temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) / (jint(2))) + (14)), ((clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_ySkill) + (14)), (jint(0)), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(574);
	goto label_67;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(572);
	frame[2].o = sp[0].o;
	LINE_NUMBER(573);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-paint--null: "_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
label_67:;
	LINE_NUMBER(575);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_CrackBallScr_DoneCrackBallScr_Array1_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:DoneCrackBallScr", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(578);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step = (jint(3));
	LINE_NUMBER(579);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_idItem = (jref) (frame[1].o);
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_CrackBallScr_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:switchToMe", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(583);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isPaintOther = (jint(1));
	LINE_NUMBER(584);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isRongThanXuatHien = (jint(1));
	LINE_NUMBER(585);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_nro_CrackBallScr_checkTicket_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:checkTicket", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(589);
	frame[1].i = (jint(0));
	LINE_NUMBER(591);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(592);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isDone) == 0) goto label_5;
	}
	{
	LINE_NUMBER(593);
	frame[1].i = (jbyte(((frame[1].i) + (jint(1)))));
	}
label_5:;
	{
	LINE_NUMBER(591);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(597);
	if ((frame[1].i) <= ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_numTicket)) goto label_7;
	}
	{
	LINE_NUMBER(598);
	frame[1].i = (jbyte(((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_numTicket)));
	}
label_7:;
	{
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbyte M_nro_CrackBallScr_checkNum_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:checkNum", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	frame[1].i = (jint(0));
	LINE_NUMBER(607);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_listBall;
	if (((jint)((nro_BallInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_isDone) == 0) goto label_5;
	}
	{
	LINE_NUMBER(609);
	frame[1].i = (jbyte(((frame[1].i) + (jint(1)))));
	}
label_5:;
	{
	LINE_NUMBER(607);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(613);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_nro_CrackBallScr_checkTicket_R_byte(ctx, (frame[0].o));
	jint temp2 = jbyte((temp0 - temp1));
	frame[1].i = temp2;
	if (temp2 > 0) goto label_7;
	}
	{
	LINE_NUMBER(614);
	frame[1].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void M_nro_CrackBallScr_checkNumTicket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:checkNumTicket", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(621);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemBag;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(622);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemBag;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemBag;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id) != ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_idTicket)) goto label_4;
	}
	{
	LINE_NUMBER(623);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_arrItemBag;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_numTicket = ((jint)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))))->F_quantity);
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(621);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(628);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_CrackBallScr_stopAutoCrackBall(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:stopAutoCrackBall", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(631);
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_isAutoCrackBall = (jint(0));
	LINE_NUMBER(632);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_indexSkillSelect = (jint(-1));
	LINE_NUMBER(633);
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_isCallStop = (jint(0));
	LINE_NUMBER(634);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_CrackBallScr_a_nro_CrackBallScr_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:a", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_CrackBallScr(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(637);
	M_nro_CrackBallScr_doClickBall_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_CrackBallScr_useSkillCrackBall_nro_CrackBallScr(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:useSkillCrackBall", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_CrackBallScr(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(641);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step) >= (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(642);
	jint temp0 = (jint)M_nro_CrackBallScr_checkTicket_R_byte(ctx, (frame[0].o));
	jint temp1 = (jint)M_nro_CrackBallScr_checkNum_R_byte(ctx, (frame[0].o));
	if ((temp0 + temp1) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(643);
	((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_step = (jint(2));
	LINE_NUMBER(644);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_gong) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_gong])(ctx, sp[0].o);
	LINE_NUMBER(645);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	((func_nro_Char_setSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (13))), (jint(0)));
	LINE_NUMBER(646);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	jlong temp0 = (jlong)SF_main_GameCanvas_timeNow;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (2000), (3000));
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_timeKame = (temp0 + (jlong(temp1)));
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(649);
	if (((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_yP) != ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) / (jint(3)))) goto label_3;
	}
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_SendCrackBall_byte_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_SendCrackBall_byte_byte])(ctx, sp[0].o, ((jint)((nro_CrackBallScr *) NULL_CHECK((frame[0].o)))->F_typePrice), (jint(0)));
	}
label_3:;
	LINE_NUMBER(653);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_CrackBallScr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallScr:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_CrackBallScr(ctx);
	{
	LINE_NUMBER(54);
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_isAutoCrackBall = (jint(0));
	LINE_NUMBER(55);
	clinit_nro_CrackBallScr(ctx);
	SF_nro_CrackBallScr_isCallStop = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_CrackBallScr[] {
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
	(void *) M_nro_CrackBallScr_switchToMe,
	(void *) M_nro_mScreen_keyPress_int,
	(void *) M_nro_CrackBallScr_update,
	(void *) M_nro_CrackBallScr_updateKey,
	(void *) M_nro_CrackBallScr_paint_lib_mGraphics,
	(void *) M_nro_CrackBallScr_perform_int_java_lang_Object,
	(void *) M_nro_CrackBallScr_SetCrackBallScr_Array1_short_byte_int_short,
	(void *) M_nro_CrackBallScr_doClickBall_int,
	(void *) M_nro_CrackBallScr_doClickSkill_int,
	(void *) M_nro_CrackBallScr_DoneCrackBallScr_Array1_short,
	(void *) M_nro_CrackBallScr_checkTicket_R_byte,
	(void *) M_nro_CrackBallScr_checkNum_R_byte,
	(void *) M_nro_CrackBallScr_checkNumTicket,
	(void *) M_nro_CrackBallScr_stopAutoCrackBall,
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
	{ "SetCrackBallScr", "([SBIS)V" },
	{ "doClickBall", "(I)V" },
	{ "doClickSkill", "(I)V" },
	{ "DoneCrackBallScr", "([S)V" },
	{ "checkTicket", "()B" },
	{ "checkNum", "()B" },
	{ "checkNumTicket", "()V" },
	{ "stopAutoCrackBall", "()V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "a", &class_nro_CrackBallScr, (intptr_t) &SF_nro_CrackBallScr_a, "Lnro/CrackBallScr;", 9 },
	{ "listBall", getArrayClass(&class_nro_BallInfo, 1), offsetof(nro_CrackBallScr, F_listBall), "[Lnro/BallInfo;", 2 },
	{ "step", &class_byte, offsetof(nro_CrackBallScr, F_step), "B", 0 },
	{ "typePrice", &class_byte, offsetof(nro_CrackBallScr, F_typePrice), "B", 2 },
	{ "rO", &class_int, offsetof(nro_CrackBallScr, F_rO), "I", 2 },
	{ "xO", &class_int, offsetof(nro_CrackBallScr, F_xO), "I", 2 },
	{ "yO", &class_int, offsetof(nro_CrackBallScr, F_yO), "I", 2 },
	{ "angle", &class_int, offsetof(nro_CrackBallScr, F_angle), "I", 2 },
	{ "iAngle", &class_int, offsetof(nro_CrackBallScr, F_iAngle), "I", 2 },
	{ "iDot", &class_int, offsetof(nro_CrackBallScr, F_iDot), "I", 2 },
	{ "yTo", &class_int, offsetof(nro_CrackBallScr, F_yTo), "I", 2 },
	{ "indexSelect", &class_int, offsetof(nro_CrackBallScr, F_indexSelect), "I", 2 },
	{ "indexSkillSelect", &class_int, offsetof(nro_CrackBallScr, F_indexSkillSelect), "I", 0 },
	{ "numTicket", &class_int, offsetof(nro_CrackBallScr, F_numTicket), "I", 2 },
	{ "xP", &class_int, offsetof(nro_CrackBallScr, F_xP), "I", 2 },
	{ "yP", &class_int, offsetof(nro_CrackBallScr, F_yP), "I", 2 },
	{ "wP", &class_int, offsetof(nro_CrackBallScr, F_wP), "I", 2 },
	{ "hP", &class_int, offsetof(nro_CrackBallScr, F_hP), "I", 2 },
	{ "price", &class_int, offsetof(nro_CrackBallScr, F_price), "I", 2 },
	{ "cost", &class_int, offsetof(nro_CrackBallScr, F_cost), "I", 2 },
	{ "countFr", &class_int, offsetof(nro_CrackBallScr, F_countFr), "I", 2 },
	{ "countKame", &class_int, offsetof(nro_CrackBallScr, F_countKame), "I", 2 },
	{ "frame", &class_int, offsetof(nro_CrackBallScr, F_frame), "I", 2 },
	{ "vp", &class_int, offsetof(nro_CrackBallScr, F_vp), "I", 2 },
	{ "xArg", getArrayClass(&class_int, 1), offsetof(nro_CrackBallScr, F_xArg), "[I", 2 },
	{ "yArg", getArrayClass(&class_int, 1), offsetof(nro_CrackBallScr, F_yArg), "[I", 2 },
	{ "xDot", getArrayClass(&class_int, 1), offsetof(nro_CrackBallScr, F_xDot), "[I", 2 },
	{ "yDot", getArrayClass(&class_int, 1), offsetof(nro_CrackBallScr, F_yDot), "[I", 2 },
	{ "idItem", getArrayClass(&class_short, 1), offsetof(nro_CrackBallScr, F_idItem), "[S", 2 },
	{ "timeStart", &class_long, offsetof(nro_CrackBallScr, F_timeStart), "J", 2 },
	{ "timeKame", &class_long, offsetof(nro_CrackBallScr, F_timeKame), "J", 2 },
	{ "isKame", &class_boolean, offsetof(nro_CrackBallScr, F_isKame), "Z", 2 },
	{ "isCanSkill", &class_boolean, offsetof(nro_CrackBallScr, F_isCanSkill), "Z", 2 },
	{ "isSendSv", &class_boolean, offsetof(nro_CrackBallScr, F_isSendSv), "Z", 2 },
	{ "idTicket", &class_short, offsetof(nro_CrackBallScr, F_idTicket), "S", 2 },
	{ "ySkill", &class_int, (intptr_t) &SF_nro_CrackBallScr_ySkill, "I", 10 },
	{ "xSkill", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_CrackBallScr_xSkill, "[I", 10 },
	{ "fraImgKame", &class_nro_FrameImage, (intptr_t) &SF_nro_CrackBallScr_fraImgKame, "Lnro/FrameImage;", 10 },
	{ "fraImgKame_1", &class_nro_FrameImage, (intptr_t) &SF_nro_CrackBallScr_fraImgKame_1, "Lnro/FrameImage;", 10 },
	{ "imgX", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_CrackBallScr_imgX, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgReplay", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_CrackBallScr_imgReplay, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "isAutoCrackBall", &class_boolean, (intptr_t) &SF_nro_CrackBallScr_isAutoCrackBall, "Z", 9 },
	{ "isCallStop", &class_boolean, (intptr_t) &SF_nro_CrackBallScr_isCallStop, "Z", 9 },
	{ "fr", getArrayClass(&class_byte, 1), offsetof(nro_CrackBallScr, F_fr), "[B", 2 },
	{ "nFrame", getArrayClass(&class_byte, 1), offsetof(nro_CrackBallScr, F_nFrame), "[B", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_CrackBallScr, 0, "()V", 1 },
	{ "gI", (intptr_t) SM_nro_CrackBallScr_gI_R_nro_CrackBallScr, 0, "()Lnro/CrackBallScr;", 9 },
	{ "SetCrackBallScr", (intptr_t) M_nro_CrackBallScr_SetCrackBallScr_Array1_short_byte_int_short, VTABLE_nro_CrackBallScr_SetCrackBallScr_Array1_short_byte_int_short, "([SBIS)V", 17 },
	{ "perform", (intptr_t) M_nro_CrackBallScr_perform_int_java_lang_Object, VTABLE_nro_CrackBallScr_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "update", (intptr_t) M_nro_CrackBallScr_update, VTABLE_nro_CrackBallScr_update, "()V", 17 },
	{ "updateKey", (intptr_t) M_nro_CrackBallScr_updateKey, VTABLE_nro_CrackBallScr_updateKey, "()V", 17 },
	{ "doClickBall", (intptr_t) M_nro_CrackBallScr_doClickBall_int, VTABLE_nro_CrackBallScr_doClickBall_int, "(I)V", 2 },
	{ "doClickSkill", (intptr_t) M_nro_CrackBallScr_doClickSkill_int, VTABLE_nro_CrackBallScr_doClickSkill_int, "(I)V", 2 },
	{ "paint", (intptr_t) M_nro_CrackBallScr_paint_lib_mGraphics, VTABLE_nro_CrackBallScr_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "DoneCrackBallScr", (intptr_t) M_nro_CrackBallScr_DoneCrackBallScr_Array1_short, VTABLE_nro_CrackBallScr_DoneCrackBallScr_Array1_short, "([S)V", 17 },
	{ "switchToMe", (intptr_t) M_nro_CrackBallScr_switchToMe, VTABLE_nro_CrackBallScr_switchToMe, "()V", 17 },
	{ "checkTicket", (intptr_t) M_nro_CrackBallScr_checkTicket_R_byte, VTABLE_nro_CrackBallScr_checkTicket_R_byte, "()B", 2 },
	{ "checkNum", (intptr_t) M_nro_CrackBallScr_checkNum_R_byte, VTABLE_nro_CrackBallScr_checkNum_R_byte, "()B", 2 },
	{ "checkNumTicket", (intptr_t) M_nro_CrackBallScr_checkNumTicket, VTABLE_nro_CrackBallScr_checkNumTicket, "()V", 2 },
	{ "stopAutoCrackBall", (intptr_t) M_nro_CrackBallScr_stopAutoCrackBall, VTABLE_nro_CrackBallScr_stopAutoCrackBall, "()V", 17 },
	{ "a", (intptr_t) SM_nro_CrackBallScr_a_nro_CrackBallScr_int, 0, "(Lnro/CrackBallScr;I)V", 8 },
	{ "useSkillCrackBall", (intptr_t) SM_nro_CrackBallScr_useSkillCrackBall_nro_CrackBallScr, 0, "(Lnro/CrackBallScr;)V", 8 },
	{ "<clinit>", (intptr_t) clinit_nro_CrackBallScr, 0, "()V", 8 },
};

Class class_nro_CrackBallScr{
		.nativeName = (intptr_t) "nro/CrackBallScr",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_CrackBallScr),
		.classVtable = (intptr_t) vtable_nro_CrackBallScr,
		.staticInitializer = (intptr_t) clinit_nro_CrackBallScr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_CrackBallScr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 45,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_CrackBallScr = registerClass(&class_nro_CrackBallScr);

}

