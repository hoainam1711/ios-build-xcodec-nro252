#include "lib/sound/SoundMn.h"
#include "nro/GameScr.h"
#include "lib/mFont.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "lib/network/Session_ME.h"
#include "main/GameCanvas.h"
#include "nro/Panel.h"
#include "lib/sound/SoundManager.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "lib/sound/SoundMn.h"
#include "nro/NinjaUtil.h"
#include "nro/Rms.h"
#include "nro/Char.h"
#include "nro/LoginScr.h"

extern "C" {

jbool SF_lib_sound_SoundMn_IsDelAcc;
jobject SF_lib_sound_SoundMn_gIz;
jfloat SF_lib_sound_SoundMn_volume;
jint SF_lib_sound_SoundMn_MAX_VOLUME;
jint SF_lib_sound_SoundMn_AIR_SHIP;
jint SF_lib_sound_SoundMn_RAIN;
jint SF_lib_sound_SoundMn_TAITAONANGLUONG;
jint SF_lib_sound_SoundMn_GET_ITEM;
jint SF_lib_sound_SoundMn_MOVE;
jint SF_lib_sound_SoundMn_LOW_PUNCH;
jint SF_lib_sound_SoundMn_LOW_KICK;
jint SF_lib_sound_SoundMn_FLY;
jint SF_lib_sound_SoundMn_JUMP;
jint SF_lib_sound_SoundMn_PANEL_OPEN;
jint SF_lib_sound_SoundMn_BUTTON_CLOSE;
jint SF_lib_sound_SoundMn_BUTTON_CLICK;
jint SF_lib_sound_SoundMn_MEDIUM_PUNCH;
jint SF_lib_sound_SoundMn_MEDIUM_KICK;
jint SF_lib_sound_SoundMn_PANEL_CLICK;
jint SF_lib_sound_SoundMn_EAT_PEAN;
jint SF_lib_sound_SoundMn_OPEN_DIALOG;
jint SF_lib_sound_SoundMn_NORMAL_KAME;
jint SF_lib_sound_SoundMn_NAMEK_KAME;
jint SF_lib_sound_SoundMn_XAYDA_KAME;
jint SF_lib_sound_SoundMn_EXPLODE_1;
jint SF_lib_sound_SoundMn_EXPLODE_2;
jint SF_lib_sound_SoundMn_TRAIDAT_KAME;
jint SF_lib_sound_SoundMn_HP_UP;
jint SF_lib_sound_SoundMn_THAIDUONGHASAN;
jint SF_lib_sound_SoundMn_HOISINH;
jint SF_lib_sound_SoundMn_GONG;
jint SF_lib_sound_SoundMn_KHICHAY;
jint SF_lib_sound_SoundMn_BIG_EXPLODE;
jint SF_lib_sound_SoundMn_NAMEK_LAZER;
jint SF_lib_sound_SoundMn_NAMEK_CHARGE;
jint SF_lib_sound_SoundMn_RADAR_CLICK;
jint SF_lib_sound_SoundMn_RADAR_ITEM;
jint SF_lib_sound_SoundMn_FIREWORK;
jint SF_lib_sound_SoundMn_KAMEX10_0;
jint SF_lib_sound_SoundMn_KAMEX10_1;
jint SF_lib_sound_SoundMn_DESTROY_0;
jint SF_lib_sound_SoundMn_DESTROY_1;
jint SF_lib_sound_SoundMn_MAFUBA_0;
jint SF_lib_sound_SoundMn_MAFUBA_1;
jint SF_lib_sound_SoundMn_MAFUBA_2;
jint SF_lib_sound_SoundMn_DESTROY_2;
jint SF_lib_sound_SoundMn_cout;
jobject SF_lib_sound_SoundMn_soundManager;
jbool SF_lib_sound_SoundMn_isSound;

void mark_lib_sound_SoundMn(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_sound_SoundMn_gIz)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_sound_SoundMn_gIz)->clazz)->markFunction)((jobject) SF_lib_sound_SoundMn_gIz, mark, depth + 1);
		if (SF_lib_sound_SoundMn_soundManager)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_sound_SoundMn_soundManager)->clazz)->markFunction)((jobject) SF_lib_sound_SoundMn_soundManager, mark, depth + 1);
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
	auto self = (lib_sound_SoundMn *) object;
}

void init_lib_sound_SoundMn(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	{
	LINE_NUMBER(106);
	clinit_lib_sound_SoundMn(ctx);
	sp[0].o = (jobject)SF_lib_sound_SoundMn_gIz;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(107);
	clinit_lib_sound_SoundMn(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_sound_SoundMn);
	init_lib_sound_SoundMn(ctx, sp[0].o);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_gIz = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(110);
	clinit_lib_sound_SoundMn(ctx);
	sp[0].o = (jobject)SF_lib_sound_SoundMn_gIz;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_AuraToolOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:AuraToolOption", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isPaintAura) == 0) goto label_1;
	}
	{
	LINE_NUMBER(115);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPaintAura"_j))), (jint(0)));
	LINE_NUMBER(116);
	clinit_nro_Char(ctx);
	SF_nro_Char_isPaintAura = (jint(0));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(118);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPaintAura"_j))), (jint(1)));
	LINE_NUMBER(119);
	clinit_nro_Char(ctx);
	SF_nro_Char_isPaintAura = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(122);
	SM_lib_sound_SoundMn_getStrOption(ctx);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_CaseAnalog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:CaseAnalog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_1;
	}
	{
	LINE_NUMBER(127);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isPaintChatVip) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isPaintChatVip = sp[0].i;
	if (sp[0].i == 0) goto label_5;
	}
	{
	LINE_NUMBER(128);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"serverchat"_j))), (jint(0)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(130);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"serverchat"_j))), (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(133);
	SM_lib_sound_SoundMn_getStrOption(ctx);
	goto label_8;
	}
label_1:;
	{
	LINE_NUMBER(135);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isAnalog) != 0) goto label_9;
	}
	{
	LINE_NUMBER(136);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isAnalog = (jint(1));
	LINE_NUMBER(137);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"analog"_j))), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isAnalog));
	LINE_NUMBER(138);
	SM_nro_GameScr_setSkillBarPosition(ctx);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(140);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isAnalog = (jint(0));
	LINE_NUMBER(141);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"analog"_j))), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isAnalog));
	LINE_NUMBER(142);
	SM_nro_GameScr_setSkillBarPosition(ctx);
	}
label_13:;
	LINE_NUMBER(145);
	SM_lib_sound_SoundMn_getStrOption(ctx);
label_8:;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_CaseSizeScr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:CaseSizeScr", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) == 0) goto label_1;
	}
	{
	LINE_NUMBER(151);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"lowGraphic"_j))), (jint(0)));
	LINE_NUMBER(152);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_plsRestartGame;
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8885), (jobject(nullptr)));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(154);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"lowGraphic"_j))), (jint(1)));
	LINE_NUMBER(155);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_plsRestartGame;
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8885), (jobject(nullptr)));
	}
label_4:;
	{
	LINE_NUMBER(158);
	SM_lib_sound_SoundMn_getStrOption(ctx);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_AuraToolOption2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:AuraToolOption2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isPaintAura2) == 0) goto label_1;
	}
	{
	LINE_NUMBER(163);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPaintAura2"_j))), (jint(0)));
	LINE_NUMBER(164);
	clinit_nro_Char(ctx);
	SF_nro_Char_isPaintAura2 = (jint(0));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(166);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPaintAura2"_j))), (jint(1)));
	LINE_NUMBER(167);
	clinit_nro_Char(ctx);
	SF_nro_Char_isPaintAura2 = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(170);
	SM_lib_sound_SoundMn_getStrOption(ctx);
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_sound_SoundMn_getSoundOption(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:getSoundOption", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	{
	LINE_NUMBER(174);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (((jint)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_isLogin2) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_taskId) < (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (11));
	jint temp0 = jint(0);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_radaCard;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_quayso;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_gameInfo;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng B\u00e1o BOSS"_j)));
	jint temp3 = jint(4);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_flag;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(5);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_zone;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = 6;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_chat_world;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 7;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_account;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 8;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_option;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 9;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_account;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 10;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_REGISTOPROTECT;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	clinit_nro_Panel(ctx);
	SF_nro_Panel_strTool = sp[0].o;
	LINE_NUMBER(176);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_havePet) == 0) goto label_4;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (12));
	jint temp0 = jint(0);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_radaCard;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_quayso;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_gameInfo;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng B\u00e1o BOSS"_j)));
	jint temp3 = jint(4);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_pet;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(5);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_flag;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = 6;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_zone;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 7;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_chat_world;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 8;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_account;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 9;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_option;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 10;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_account;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 11;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_REGISTOPROTECT;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	clinit_nro_Panel(ctx);
	SF_nro_Panel_strTool = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (10));
	jint temp0 = jint(0);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_radaCard;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_quayso;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_gameInfo;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng B\u00e1o BOSS"_j)));
	jint temp3 = jint(4);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_flag;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(5);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_zone;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = 6;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_chat_world;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 7;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_account;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 8;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_option;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 9;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_account;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	clinit_nro_Panel(ctx);
	SF_nro_Panel_strTool = sp[0].o;
	LINE_NUMBER(181);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_havePet) == 0) goto label_4;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (11));
	jint temp0 = jint(0);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_radaCard;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_quayso;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_gameInfo;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng B\u00e1o BOSS"_j)));
	jint temp3 = jint(4);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_pet;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(5);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_flag;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = 6;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_zone;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 7;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_chat_world;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 8;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_account;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 9;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_option;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 10;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_account;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	clinit_nro_Panel(ctx);
	SF_nro_Panel_strTool = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(186);
	if ((clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_IsDelAcc) == 0) goto label_8;
	}
	{
	LINE_NUMBER(187);
	clinit_nro_Panel(ctx);
	sp[0].o = (jobject)SF_nro_Panel_strTool;
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, ((((jarray) nullCheck(ctx, sp[0].o))->length) + (jint(1))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(189);
	frame[1].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Panel(ctx);
	sp[0].o = (jobject)SF_nro_Panel_strTool;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_strTool;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)));
	LINE_NUMBER(189);
	INST_IINC(1, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_strTool;
	jint temp0 = ((jarray) nullCheck(ctx, sp[1].o))->length;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_updSkill;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(194);
	clinit_nro_Panel(ctx);
	SF_nro_Panel_strTool = (frame[0].o);
	}
label_8:;
	LINE_NUMBER(197);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_sound_SoundMn_getStrOption(jcontext ctx) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:getStrOption", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	{
	LINE_NUMBER(200);
	frame[0].o = (((jobject) createStringLiteral(ctx, u8"[x]   "_j)));
	LINE_NUMBER(201);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"[  ]   "_j)));
	LINE_NUMBER(202);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isAnalog) != 0) goto label_3;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_turnOnAnalog;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_turnOffAnalog;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(203);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_6;
	}
	{
	LINE_NUMBER(204);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isPaintChatVip) != 0) goto label_8;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_serverchat_off;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_serverchat_off;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_9:;
	INST_ASTORE(2);
label_6:;
	{
	LINE_NUMBER(207);
	if ((clinit_lib_mFont(ctx), (jint)SF_lib_mFont_isPixelFont) == 0) goto label_10;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Font ch\u1eef: Pixel (Mod)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Font ch\u1eef: M\u1eb7c \u0111\u1ecbnh"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(208);
	if ((clinit_lib_mFont(ctx), (jint)SF_lib_mFont_isPixelDamageFont) == 0) goto label_13;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Font s\u00e1t th\u01b0\u01a1ng: Pixel"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Font s\u00e1t th\u01b0\u01a1ng: M\u1eb7c \u0111\u1ecbnh"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(210);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (7));
	jint temp0 = jint(0);
	LINE_NUMBER(211);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isPaintAura) == 0) goto label_17;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_aura_on;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_18;
	}
label_17:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_aura_on;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_18:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	jint temp0 = jint(1);
	LINE_NUMBER(212);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isPaintAura2) == 0) goto label_20;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_aura_on2;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_21;
	}
label_20:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_aura_on2;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_21:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	jint temp0 = jint(2);
	LINE_NUMBER(213);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound) == 0) goto label_23;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_turnOnSound;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_24;
	}
label_23:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_turnOnSound;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_24:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	jint temp0 = jint(3);
	LINE_NUMBER(214);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) == 0) goto label_26;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_cauhinhthap;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_27;
	}
label_26:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_cauhinhthap;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_27:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (frame[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (frame[4].o);
	clinit_nro_Panel(ctx);
	SF_nro_Panel_strCauhinh = sp[0].o;
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_sound_SoundMn_hide(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:hide", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	LINE_NUMBER(223);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_hide])(ctx, sp[0].o);
	LINE_NUMBER(224);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_actRegister) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_actRegister])(ctx, sp[0].o);
	LINE_NUMBER(225);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_sound_SoundMn_init_Array1_int_Array1_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(236);
	clinit_lib_sound_SoundMn(ctx);
	sp[0].o = (jobject)SF_lib_sound_SoundMn_soundManager;
	((func_lib_sound_SoundManager_loadAll_Array1_int_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundManager_loadAll_Array1_int_Array1_int])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_sound_SoundMn_loadSound(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:loadSound", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_AIR_SHIP);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_RAIN);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_TAITAONANGLUONG);
	sp[1].o = (jobject) createArray(ctx, &class_int, (39));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_GET_ITEM);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_MOVE);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_LOW_PUNCH);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_LOW_KICK);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_FLY);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_JUMP);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_PANEL_OPEN);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_BUTTON_CLOSE);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_BUTTON_CLICK);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_MEDIUM_PUNCH);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_MEDIUM_KICK);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_PANEL_CLICK);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_EAT_PEAN);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_OPEN_DIALOG);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_NORMAL_KAME);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_NAMEK_KAME);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_XAYDA_KAME);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_EXPLODE_1);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_EXPLODE_2);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_TRAIDAT_KAME);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_HP_UP);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_THAIDUONGHASAN);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_HOISINH);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_GONG);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_KHICHAY);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_BIG_EXPLODE);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_NAMEK_LAZER);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_NAMEK_CHARGE);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_RADAR_CLICK);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_RADAR_ITEM);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_FIREWORK);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_KAMEX10_0);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_KAMEX10_1);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_DESTROY_0);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_DESTROY_1);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_MAFUBA_0);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_MAFUBA_1);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_MAFUBA_2);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_DESTROY_2);
	SM_lib_sound_SoundMn_init_Array1_int_Array1_int(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_HP_MPup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:HP_MPup", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_HP_UP), (jfloat(0.5f)));
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_charPunch_boolean_float(jcontext ctx, jobject self, jbool param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:charPunch", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(297);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) > 0) goto label_1;
	}
	(sp++)->f = jfloat(1.000000e-02f);
	INST_FSTORE(2);
label_1:;
	{
	LINE_NUMBER(298);
	jdouble temp0 = (jdouble)SM_java_lang_Math_random_R_double(ctx);
	frame[3].i = (jint((temp0 * (jdouble(3.0)))));
	LINE_NUMBER(299);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(300);
	if ((frame[3].i) == 0) goto label_5;
	}
	clinit_lib_sound_SoundMn(ctx);
	(sp++)->i = SF_lib_sound_SoundMn_MEDIUM_KICK;
	goto label_6;
label_5:;
	clinit_lib_sound_SoundMn(ctx);
	(sp++)->i = SF_lib_sound_SoundMn_LOW_KICK;
label_6:;
	{
	sp -= 1;
	SM_lib_sound_SoundMn_playSound_int_float(ctx, sp[0].i, (jfloat(0.1f)));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(302);
	if ((frame[3].i) == 0) goto label_8;
	}
	clinit_lib_sound_SoundMn(ctx);
	(sp++)->i = SF_lib_sound_SoundMn_MEDIUM_PUNCH;
	goto label_9;
label_8:;
	clinit_lib_sound_SoundMn(ctx);
	(sp++)->i = SF_lib_sound_SoundMn_LOW_PUNCH;
label_9:;
	(sp++)->f = jfloat(0.1f);
	POP_N(2); // Pop method args
	SM_lib_sound_SoundMn_playSound_int_float(ctx, sp[0].i, sp[1].f);
label_7:;
	{
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_thaiduonghasan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:thaiduonghasan", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_THAIDUONGHASAN), (jfloat(0.5f)));
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_rain(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:rain", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	SM_lib_sound_SoundMn_playMus_int_float_boolean(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_RAIN), (jfloat(0.3f)), (jint(1)));
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_stopRain(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:stopRain", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	SM_lib_sound_SoundMn_stopMus_int(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_RAIN));
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_gongName(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:gongName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(321);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_NAMEK_CHARGE), (jfloat(0.3f)));
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_gong(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:gong", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_GONG), (jfloat(0.2f)));
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_troi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:troi", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_TRAIDAT_KAME), (jfloat(0.5f)));
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_getItem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:getItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_GET_ITEM), (jfloat(0.3f)));
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_soundToolOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:soundToolOption", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPlaySound = sp[0].i;
	LINE_NUMBER(343);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isResume = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound);
	LINE_NUMBER(344);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_isSound = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound);
	LINE_NUMBER(345);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound) == 0) goto label_6;
	}
	{
	LINE_NUMBER(347);
	SM_lib_sound_SoundMn_loadSound(ctx);
	LINE_NUMBER(348);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPlaySound"_j))), (jint(1)));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_closeSound) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_closeSound])(ctx, sp[0].o);
	LINE_NUMBER(353);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPlaySound"_j))), (jint(0)));
	}
label_9:;
	{
	LINE_NUMBER(355);
	SM_lib_sound_SoundMn_getStrOption(ctx);
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:update", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(360);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_closeSound(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:closeSound", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(363);
	SM_lib_sound_SoundMn_stopAllSound(ctx);
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_openSound(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:openSound", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(369);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_bigeExlode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:bigeExlode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_BIG_EXPLODE), (jfloat(0.5f)));
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_explode_1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:explode_1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_EXPLODE_1), (jfloat(0.5f)));
	LINE_NUMBER(378);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_explode_2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:explode_2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(382);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_EXPLODE_1), (jfloat(0.5f)));
	LINE_NUMBER(383);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_traidatKame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:traidatKame", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_TRAIDAT_KAME), (jfloat(1)));
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_namekKame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:namekKame", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(392);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_NAMEK_KAME), (jfloat(0.3f)));
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_nameLazer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:nameLazer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(397);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_NAMEK_LAZER), (jfloat(0.3f)));
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_xaydaKame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:xaydaKame", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(402);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_XAYDA_KAME), (jfloat(0.3f)));
	LINE_NUMBER(403);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_mobKame_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:mobKame", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(407);
	frame[2].i = (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_XAYDA_KAME);
	LINE_NUMBER(408);
	if ((frame[1].i) != (13)) goto label_2;
	}
	clinit_lib_sound_SoundMn(ctx);
	(sp++)->i = SF_lib_sound_SoundMn_NORMAL_KAME;
	INST_ISTORE(2);
label_2:;
	{
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_charRun_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:charRun", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(414);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) > 0) goto label_1;
	}
	(sp++)->f = jfloat(1.000000e-02f);
	INST_FSTORE(1);
label_1:;
	{
	LINE_NUMBER(415);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (8)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(416);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_MOVE), (frame[1].f));
	LINE_NUMBER(417);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	}
label_2:;
	LINE_NUMBER(419);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_monkeyRun_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:monkeyRun", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(422);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (8)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(423);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_KHICHAY), (jfloat(0.2f)));
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	}
label_1:;
	LINE_NUMBER(426);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_charFall(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:charFall", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(429);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_MOVE), (jfloat(0.1f)));
	LINE_NUMBER(430);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_charJump(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:charJump", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(434);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_MOVE), (jfloat(0.2f)));
	LINE_NUMBER(435);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_panelOpen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:panelOpen", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(439);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_PANEL_OPEN), (jfloat(0.5f)));
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_buttonClose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:buttonClose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(444);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_BUTTON_CLOSE), (jfloat(0.5f)));
	LINE_NUMBER(445);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_buttonClick(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:buttonClick", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(449);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_BUTTON_CLICK), (jfloat(0.5f)));
	LINE_NUMBER(450);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_stopMove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:stopMove", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(453);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_charFly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:charFly", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(455);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_FLY), (jfloat(0.2f)));
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_stopFly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:stopFly", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(458);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_openMenu(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:openMenu", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_BUTTON_CLOSE), (jfloat(0.5f)));
	LINE_NUMBER(461);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_panelClick(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:panelClick", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(464);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_PANEL_CLICK), (jfloat(0.5f)));
	LINE_NUMBER(465);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(466);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_eatPeans(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:eatPeans", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(468);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_EAT_PEAN), (jfloat(0.5f)));
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_openDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:openDialog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(472);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_OPEN_DIALOG), (jfloat(0.5f)));
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_hoisinh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:hoisinh", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(475);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_HOISINH), (jfloat(0.5f)));
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(477);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_taitao(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:taitao", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(479);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_HP_UP), (jfloat(0.5f)));
	LINE_NUMBER(480);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_taitaoPause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:taitaoPause", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(484);
	SM_lib_sound_SoundMn_stopSound_int(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_HP_UP));
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_lib_sound_SoundMn_isPlayRain_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:isPlayRain", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_lib_sound_SoundMn_isPlayAirShip_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:isPlayAirShip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(490);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_airShip(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:airShip", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(492);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_cout = ((clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_cout) + (jint(1)));
	LINE_NUMBER(493);
	if (((clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_cout) % (jint(2))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(494);
	SM_lib_sound_SoundMn_playMus_int_float_boolean(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_AIR_SHIP), (jfloat(0.3f)), (jint(0)));
	}
label_2:;
	LINE_NUMBER(496);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_pauseAirShip(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:pauseAirShip", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(497);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_resumeAirShip(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:resumeAirShip", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(498);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_newKame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:newKame", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount = (((jint)((lib_sound_SoundMn *) NULL_CHECK(sp[0].o))->F_poolCount) + (jint(1)));
	LINE_NUMBER(503);
	if ((((jint)((lib_sound_SoundMn *) NULL_CHECK((frame[0].o)))->F_poolCount) % (15)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(504);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_TRAIDAT_KAME), (jfloat(0.5f)));
	}
label_2:;
	LINE_NUMBER(506);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_radarClick(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:radarClick", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(508);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_RADAR_CLICK), (jfloat(0.5f)));
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundMn_radarItem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:radarItem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(511);
	SM_lib_sound_SoundMn_playSound_int_float(ctx, (clinit_lib_sound_SoundMn(ctx), (jint)SF_lib_sound_SoundMn_RADAR_ITEM), (jfloat(0.5f)));
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_sound_SoundMn_playSound_int_float(jcontext ctx, jint param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:playSound", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(519);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound) != 0) goto label_1;
	}
	LINE_NUMBER(520);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(522);
	clinit_lib_sound_SoundMn(ctx);
	sp[0].o = (jobject)SF_lib_sound_SoundMn_soundManager;
	((func_lib_sound_SoundManager_play_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundManager_play_int_float])(ctx, sp[0].o, (frame[0].i), (frame[1].f));
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_sound_SoundMn_stopSound_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:stopSound", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(529);
	clinit_lib_sound_SoundMn(ctx);
	sp[0].o = (jobject)SF_lib_sound_SoundMn_soundManager;
	((func_lib_sound_SoundManager_stop_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundManager_stop_int])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_sound_SoundMn_playMus_int_float_boolean(jcontext ctx, jint param0, jfloat param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:playMus", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(536);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound) != 0) goto label_1;
	}
	LINE_NUMBER(537);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(539);
	clinit_lib_sound_SoundMn(ctx);
	sp[0].o = (jobject)SF_lib_sound_SoundMn_soundManager;
	((func_lib_sound_SoundManager_playMus_int_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundManager_playMus_int_float_boolean])(ctx, sp[0].o, (frame[0].i), (frame[1].f), (frame[2].i));
	LINE_NUMBER(540);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_sound_SoundMn_stopMus_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:stopMus", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(546);
	clinit_lib_sound_SoundMn(ctx);
	sp[0].o = (jobject)SF_lib_sound_SoundMn_soundManager;
	((func_lib_sound_SoundManager_stopMus_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundManager_stopMus_int])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_sound_SoundMn_dispose(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:dispose", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	{
	LINE_NUMBER(553);
	clinit_lib_sound_SoundMn(ctx);
	sp[0].o = (jobject)SF_lib_sound_SoundMn_soundManager;
	((func_lib_sound_SoundManager_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundManager_dispose])(ctx, sp[0].o);
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_sound_SoundMn_stopAllSound(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:stopAllSound", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	{
	LINE_NUMBER(557);
	clinit_lib_sound_SoundMn(ctx);
	sp[0].o = (jobject)SF_lib_sound_SoundMn_soundManager;
	((func_lib_sound_SoundManager_stopAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundManager_stopAll])(ctx, sp[0].o);
	LINE_NUMBER(558);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_lib_sound_SoundMn(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundMn:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundMn(ctx);
	{
	LINE_NUMBER(12);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_IsDelAcc = (jint(0));
	LINE_NUMBER(14);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_volume = (jfloat(0.5f));
	LINE_NUMBER(15);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_MAX_VOLUME = (10);
	LINE_NUMBER(16);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_AIR_SHIP = (jint(0));
	LINE_NUMBER(18);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_RAIN = (jint(1));
	LINE_NUMBER(20);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_TAITAONANGLUONG = (jint(2));
	LINE_NUMBER(22);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_GET_ITEM = (jint(0));
	LINE_NUMBER(24);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_MOVE = (jint(1));
	LINE_NUMBER(26);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_LOW_PUNCH = (jint(2));
	LINE_NUMBER(28);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_LOW_KICK = (jint(3));
	LINE_NUMBER(30);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_FLY = (jint(4));
	LINE_NUMBER(32);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_JUMP = (jint(5));
	LINE_NUMBER(34);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_PANEL_OPEN = (6);
	LINE_NUMBER(36);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_BUTTON_CLOSE = (7);
	LINE_NUMBER(38);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_BUTTON_CLICK = (8);
	LINE_NUMBER(40);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_MEDIUM_PUNCH = (9);
	LINE_NUMBER(42);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_MEDIUM_KICK = (10);
	LINE_NUMBER(44);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_PANEL_CLICK = (11);
	LINE_NUMBER(46);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_EAT_PEAN = (12);
	LINE_NUMBER(48);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_OPEN_DIALOG = (13);
	LINE_NUMBER(50);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_NORMAL_KAME = (14);
	LINE_NUMBER(52);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_NAMEK_KAME = (15);
	LINE_NUMBER(54);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_XAYDA_KAME = (16);
	LINE_NUMBER(56);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_EXPLODE_1 = (17);
	LINE_NUMBER(58);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_EXPLODE_2 = (18);
	LINE_NUMBER(60);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_TRAIDAT_KAME = (19);
	LINE_NUMBER(62);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_HP_UP = (20);
	LINE_NUMBER(64);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_THAIDUONGHASAN = (21);
	LINE_NUMBER(66);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_HOISINH = (22);
	LINE_NUMBER(68);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_GONG = (23);
	LINE_NUMBER(70);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_KHICHAY = (24);
	LINE_NUMBER(72);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_BIG_EXPLODE = (25);
	LINE_NUMBER(74);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_NAMEK_LAZER = (26);
	LINE_NUMBER(76);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_NAMEK_CHARGE = (27);
	LINE_NUMBER(78);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_RADAR_CLICK = (28);
	LINE_NUMBER(80);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_RADAR_ITEM = (29);
	LINE_NUMBER(82);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_FIREWORK = (30);
	LINE_NUMBER(84);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_KAMEX10_0 = (31);
	LINE_NUMBER(86);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_KAMEX10_1 = (32);
	LINE_NUMBER(88);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_DESTROY_0 = (33);
	LINE_NUMBER(90);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_DESTROY_1 = (34);
	LINE_NUMBER(92);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_MAFUBA_0 = (35);
	LINE_NUMBER(94);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_MAFUBA_1 = (36);
	LINE_NUMBER(96);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_MAFUBA_2 = (37);
	LINE_NUMBER(98);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_DESTROY_2 = (38);
	LINE_NUMBER(101);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_cout = (jint(1));
	LINE_NUMBER(103);
	clinit_lib_sound_SoundManager(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_sound_SoundManager);
	init_lib_sound_SoundManager(ctx, sp[0].o);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_soundManager = sp[0].o;
	LINE_NUMBER(228);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_isSound = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_sound_SoundMn[] {
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
	(void *) M_lib_sound_SoundMn_AuraToolOption,
	(void *) M_lib_sound_SoundMn_CaseAnalog,
	(void *) M_lib_sound_SoundMn_CaseSizeScr,
	(void *) M_lib_sound_SoundMn_AuraToolOption2,
	(void *) M_lib_sound_SoundMn_HP_MPup,
	(void *) M_lib_sound_SoundMn_charPunch_boolean_float,
	(void *) M_lib_sound_SoundMn_thaiduonghasan,
	(void *) M_lib_sound_SoundMn_rain,
	(void *) M_lib_sound_SoundMn_stopRain,
	(void *) M_lib_sound_SoundMn_gongName,
	(void *) M_lib_sound_SoundMn_gong,
	(void *) M_lib_sound_SoundMn_troi,
	(void *) M_lib_sound_SoundMn_getItem,
	(void *) M_lib_sound_SoundMn_soundToolOption,
	(void *) M_lib_sound_SoundMn_update,
	(void *) M_lib_sound_SoundMn_closeSound,
	(void *) M_lib_sound_SoundMn_openSound,
	(void *) M_lib_sound_SoundMn_bigeExlode,
	(void *) M_lib_sound_SoundMn_explode_1,
	(void *) M_lib_sound_SoundMn_explode_2,
	(void *) M_lib_sound_SoundMn_traidatKame,
	(void *) M_lib_sound_SoundMn_namekKame,
	(void *) M_lib_sound_SoundMn_nameLazer,
	(void *) M_lib_sound_SoundMn_xaydaKame,
	(void *) M_lib_sound_SoundMn_mobKame_int,
	(void *) M_lib_sound_SoundMn_charRun_float,
	(void *) M_lib_sound_SoundMn_monkeyRun_float,
	(void *) M_lib_sound_SoundMn_charFall,
	(void *) M_lib_sound_SoundMn_charJump,
	(void *) M_lib_sound_SoundMn_panelOpen,
	(void *) M_lib_sound_SoundMn_buttonClose,
	(void *) M_lib_sound_SoundMn_buttonClick,
	(void *) M_lib_sound_SoundMn_stopMove,
	(void *) M_lib_sound_SoundMn_charFly,
	(void *) M_lib_sound_SoundMn_stopFly,
	(void *) M_lib_sound_SoundMn_openMenu,
	(void *) M_lib_sound_SoundMn_panelClick,
	(void *) M_lib_sound_SoundMn_eatPeans,
	(void *) M_lib_sound_SoundMn_openDialog,
	(void *) M_lib_sound_SoundMn_hoisinh,
	(void *) M_lib_sound_SoundMn_taitao,
	(void *) M_lib_sound_SoundMn_taitaoPause,
	(void *) M_lib_sound_SoundMn_isPlayRain_R_boolean,
	(void *) M_lib_sound_SoundMn_isPlayAirShip_R_boolean,
	(void *) M_lib_sound_SoundMn_airShip,
	(void *) M_lib_sound_SoundMn_pauseAirShip,
	(void *) M_lib_sound_SoundMn_resumeAirShip,
	(void *) M_lib_sound_SoundMn_newKame,
	(void *) M_lib_sound_SoundMn_radarClick,
	(void *) M_lib_sound_SoundMn_radarItem,
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
	{ "AuraToolOption", "()V" },
	{ "CaseAnalog", "()V" },
	{ "CaseSizeScr", "()V" },
	{ "AuraToolOption2", "()V" },
	{ "HP_MPup", "()V" },
	{ "charPunch", "(ZF)V" },
	{ "thaiduonghasan", "()V" },
	{ "rain", "()V" },
	{ "stopRain", "()V" },
	{ "gongName", "()V" },
	{ "gong", "()V" },
	{ "troi", "()V" },
	{ "getItem", "()V" },
	{ "soundToolOption", "()V" },
	{ "update", "()V" },
	{ "closeSound", "()V" },
	{ "openSound", "()V" },
	{ "bigeExlode", "()V" },
	{ "explode_1", "()V" },
	{ "explode_2", "()V" },
	{ "traidatKame", "()V" },
	{ "namekKame", "()V" },
	{ "nameLazer", "()V" },
	{ "xaydaKame", "()V" },
	{ "mobKame", "(I)V" },
	{ "charRun", "(F)V" },
	{ "monkeyRun", "(F)V" },
	{ "charFall", "()V" },
	{ "charJump", "()V" },
	{ "panelOpen", "()V" },
	{ "buttonClose", "()V" },
	{ "buttonClick", "()V" },
	{ "stopMove", "()V" },
	{ "charFly", "()V" },
	{ "stopFly", "()V" },
	{ "openMenu", "()V" },
	{ "panelClick", "()V" },
	{ "eatPeans", "()V" },
	{ "openDialog", "()V" },
	{ "hoisinh", "()V" },
	{ "taitao", "()V" },
	{ "taitaoPause", "()V" },
	{ "isPlayRain", "()Z" },
	{ "isPlayAirShip", "()Z" },
	{ "airShip", "()V" },
	{ "pauseAirShip", "()V" },
	{ "resumeAirShip", "()V" },
	{ "newKame", "()V" },
	{ "radarClick", "()V" },
	{ "radarItem", "()V" },
};

static FieldMetadata fields[] {
	{ "IsDelAcc", &class_boolean, (intptr_t) &SF_lib_sound_SoundMn_IsDelAcc, "Z", 9 },
	{ "gIz", &class_lib_sound_SoundMn, (intptr_t) &SF_lib_sound_SoundMn_gIz, "Llib/sound/SoundMn;", 10 },
	{ "volume", &class_float, (intptr_t) &SF_lib_sound_SoundMn_volume, "F", 9 },
	{ "MAX_VOLUME", &class_int, (intptr_t) &SF_lib_sound_SoundMn_MAX_VOLUME, "I", 10 },
	{ "AIR_SHIP", &class_int, (intptr_t) &SF_lib_sound_SoundMn_AIR_SHIP, "I", 9 },
	{ "RAIN", &class_int, (intptr_t) &SF_lib_sound_SoundMn_RAIN, "I", 9 },
	{ "TAITAONANGLUONG", &class_int, (intptr_t) &SF_lib_sound_SoundMn_TAITAONANGLUONG, "I", 9 },
	{ "GET_ITEM", &class_int, (intptr_t) &SF_lib_sound_SoundMn_GET_ITEM, "I", 9 },
	{ "MOVE", &class_int, (intptr_t) &SF_lib_sound_SoundMn_MOVE, "I", 9 },
	{ "LOW_PUNCH", &class_int, (intptr_t) &SF_lib_sound_SoundMn_LOW_PUNCH, "I", 9 },
	{ "LOW_KICK", &class_int, (intptr_t) &SF_lib_sound_SoundMn_LOW_KICK, "I", 9 },
	{ "FLY", &class_int, (intptr_t) &SF_lib_sound_SoundMn_FLY, "I", 9 },
	{ "JUMP", &class_int, (intptr_t) &SF_lib_sound_SoundMn_JUMP, "I", 9 },
	{ "PANEL_OPEN", &class_int, (intptr_t) &SF_lib_sound_SoundMn_PANEL_OPEN, "I", 9 },
	{ "BUTTON_CLOSE", &class_int, (intptr_t) &SF_lib_sound_SoundMn_BUTTON_CLOSE, "I", 9 },
	{ "BUTTON_CLICK", &class_int, (intptr_t) &SF_lib_sound_SoundMn_BUTTON_CLICK, "I", 9 },
	{ "MEDIUM_PUNCH", &class_int, (intptr_t) &SF_lib_sound_SoundMn_MEDIUM_PUNCH, "I", 9 },
	{ "MEDIUM_KICK", &class_int, (intptr_t) &SF_lib_sound_SoundMn_MEDIUM_KICK, "I", 9 },
	{ "PANEL_CLICK", &class_int, (intptr_t) &SF_lib_sound_SoundMn_PANEL_CLICK, "I", 9 },
	{ "EAT_PEAN", &class_int, (intptr_t) &SF_lib_sound_SoundMn_EAT_PEAN, "I", 9 },
	{ "OPEN_DIALOG", &class_int, (intptr_t) &SF_lib_sound_SoundMn_OPEN_DIALOG, "I", 9 },
	{ "NORMAL_KAME", &class_int, (intptr_t) &SF_lib_sound_SoundMn_NORMAL_KAME, "I", 9 },
	{ "NAMEK_KAME", &class_int, (intptr_t) &SF_lib_sound_SoundMn_NAMEK_KAME, "I", 9 },
	{ "XAYDA_KAME", &class_int, (intptr_t) &SF_lib_sound_SoundMn_XAYDA_KAME, "I", 9 },
	{ "EXPLODE_1", &class_int, (intptr_t) &SF_lib_sound_SoundMn_EXPLODE_1, "I", 9 },
	{ "EXPLODE_2", &class_int, (intptr_t) &SF_lib_sound_SoundMn_EXPLODE_2, "I", 9 },
	{ "TRAIDAT_KAME", &class_int, (intptr_t) &SF_lib_sound_SoundMn_TRAIDAT_KAME, "I", 9 },
	{ "HP_UP", &class_int, (intptr_t) &SF_lib_sound_SoundMn_HP_UP, "I", 9 },
	{ "THAIDUONGHASAN", &class_int, (intptr_t) &SF_lib_sound_SoundMn_THAIDUONGHASAN, "I", 9 },
	{ "HOISINH", &class_int, (intptr_t) &SF_lib_sound_SoundMn_HOISINH, "I", 9 },
	{ "GONG", &class_int, (intptr_t) &SF_lib_sound_SoundMn_GONG, "I", 9 },
	{ "KHICHAY", &class_int, (intptr_t) &SF_lib_sound_SoundMn_KHICHAY, "I", 9 },
	{ "BIG_EXPLODE", &class_int, (intptr_t) &SF_lib_sound_SoundMn_BIG_EXPLODE, "I", 9 },
	{ "NAMEK_LAZER", &class_int, (intptr_t) &SF_lib_sound_SoundMn_NAMEK_LAZER, "I", 9 },
	{ "NAMEK_CHARGE", &class_int, (intptr_t) &SF_lib_sound_SoundMn_NAMEK_CHARGE, "I", 9 },
	{ "RADAR_CLICK", &class_int, (intptr_t) &SF_lib_sound_SoundMn_RADAR_CLICK, "I", 9 },
	{ "RADAR_ITEM", &class_int, (intptr_t) &SF_lib_sound_SoundMn_RADAR_ITEM, "I", 9 },
	{ "FIREWORK", &class_int, (intptr_t) &SF_lib_sound_SoundMn_FIREWORK, "I", 9 },
	{ "KAMEX10_0", &class_int, (intptr_t) &SF_lib_sound_SoundMn_KAMEX10_0, "I", 9 },
	{ "KAMEX10_1", &class_int, (intptr_t) &SF_lib_sound_SoundMn_KAMEX10_1, "I", 9 },
	{ "DESTROY_0", &class_int, (intptr_t) &SF_lib_sound_SoundMn_DESTROY_0, "I", 9 },
	{ "DESTROY_1", &class_int, (intptr_t) &SF_lib_sound_SoundMn_DESTROY_1, "I", 9 },
	{ "MAFUBA_0", &class_int, (intptr_t) &SF_lib_sound_SoundMn_MAFUBA_0, "I", 9 },
	{ "MAFUBA_1", &class_int, (intptr_t) &SF_lib_sound_SoundMn_MAFUBA_1, "I", 9 },
	{ "MAFUBA_2", &class_int, (intptr_t) &SF_lib_sound_SoundMn_MAFUBA_2, "I", 9 },
	{ "DESTROY_2", &class_int, (intptr_t) &SF_lib_sound_SoundMn_DESTROY_2, "I", 9 },
	{ "freePool", &class_boolean, offsetof(lib_sound_SoundMn, F_freePool), "Z", 1 },
	{ "poolCount", &class_int, offsetof(lib_sound_SoundMn, F_poolCount), "I", 1 },
	{ "cout", &class_int, (intptr_t) &SF_lib_sound_SoundMn_cout, "I", 9 },
	{ "soundManager", &class_lib_sound_SoundManager, (intptr_t) &SF_lib_sound_SoundMn_soundManager, "Llib/sound/SoundManager;", 10 },
	{ "isSound", &class_boolean, (intptr_t) &SF_lib_sound_SoundMn_isSound, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_sound_SoundMn, 0, "()V", 1 },
	{ "gI", (intptr_t) SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn, 0, "()Llib/sound/SoundMn;", 9 },
	{ "AuraToolOption", (intptr_t) M_lib_sound_SoundMn_AuraToolOption, VTABLE_lib_sound_SoundMn_AuraToolOption, "()V", 17 },
	{ "CaseAnalog", (intptr_t) M_lib_sound_SoundMn_CaseAnalog, VTABLE_lib_sound_SoundMn_CaseAnalog, "()V", 17 },
	{ "CaseSizeScr", (intptr_t) M_lib_sound_SoundMn_CaseSizeScr, VTABLE_lib_sound_SoundMn_CaseSizeScr, "()V", 17 },
	{ "AuraToolOption2", (intptr_t) M_lib_sound_SoundMn_AuraToolOption2, VTABLE_lib_sound_SoundMn_AuraToolOption2, "()V", 17 },
	{ "getSoundOption", (intptr_t) SM_lib_sound_SoundMn_getSoundOption, 0, "()V", 9 },
	{ "getStrOption", (intptr_t) SM_lib_sound_SoundMn_getStrOption, 0, "()V", 9 },
	{ "hide", (intptr_t) SM_lib_sound_SoundMn_hide, 0, "()V", 9 },
	{ "init", (intptr_t) SM_lib_sound_SoundMn_init_Array1_int_Array1_int, 0, "([I[I)V", 9 },
	{ "loadSound", (intptr_t) SM_lib_sound_SoundMn_loadSound, 0, "()V", 9 },
	{ "HP_MPup", (intptr_t) M_lib_sound_SoundMn_HP_MPup, VTABLE_lib_sound_SoundMn_HP_MPup, "()V", 1 },
	{ "charPunch", (intptr_t) M_lib_sound_SoundMn_charPunch_boolean_float, VTABLE_lib_sound_SoundMn_charPunch_boolean_float, "(ZF)V", 1 },
	{ "thaiduonghasan", (intptr_t) M_lib_sound_SoundMn_thaiduonghasan, VTABLE_lib_sound_SoundMn_thaiduonghasan, "()V", 1 },
	{ "rain", (intptr_t) M_lib_sound_SoundMn_rain, VTABLE_lib_sound_SoundMn_rain, "()V", 1 },
	{ "stopRain", (intptr_t) M_lib_sound_SoundMn_stopRain, VTABLE_lib_sound_SoundMn_stopRain, "()V", 1 },
	{ "gongName", (intptr_t) M_lib_sound_SoundMn_gongName, VTABLE_lib_sound_SoundMn_gongName, "()V", 1 },
	{ "gong", (intptr_t) M_lib_sound_SoundMn_gong, VTABLE_lib_sound_SoundMn_gong, "()V", 1 },
	{ "troi", (intptr_t) M_lib_sound_SoundMn_troi, VTABLE_lib_sound_SoundMn_troi, "()V", 1 },
	{ "getItem", (intptr_t) M_lib_sound_SoundMn_getItem, VTABLE_lib_sound_SoundMn_getItem, "()V", 1 },
	{ "soundToolOption", (intptr_t) M_lib_sound_SoundMn_soundToolOption, VTABLE_lib_sound_SoundMn_soundToolOption, "()V", 1 },
	{ "update", (intptr_t) M_lib_sound_SoundMn_update, VTABLE_lib_sound_SoundMn_update, "()V", 1 },
	{ "closeSound", (intptr_t) M_lib_sound_SoundMn_closeSound, VTABLE_lib_sound_SoundMn_closeSound, "()V", 1 },
	{ "openSound", (intptr_t) M_lib_sound_SoundMn_openSound, VTABLE_lib_sound_SoundMn_openSound, "()V", 1 },
	{ "bigeExlode", (intptr_t) M_lib_sound_SoundMn_bigeExlode, VTABLE_lib_sound_SoundMn_bigeExlode, "()V", 1 },
	{ "explode_1", (intptr_t) M_lib_sound_SoundMn_explode_1, VTABLE_lib_sound_SoundMn_explode_1, "()V", 1 },
	{ "explode_2", (intptr_t) M_lib_sound_SoundMn_explode_2, VTABLE_lib_sound_SoundMn_explode_2, "()V", 1 },
	{ "traidatKame", (intptr_t) M_lib_sound_SoundMn_traidatKame, VTABLE_lib_sound_SoundMn_traidatKame, "()V", 1 },
	{ "namekKame", (intptr_t) M_lib_sound_SoundMn_namekKame, VTABLE_lib_sound_SoundMn_namekKame, "()V", 1 },
	{ "nameLazer", (intptr_t) M_lib_sound_SoundMn_nameLazer, VTABLE_lib_sound_SoundMn_nameLazer, "()V", 1 },
	{ "xaydaKame", (intptr_t) M_lib_sound_SoundMn_xaydaKame, VTABLE_lib_sound_SoundMn_xaydaKame, "()V", 1 },
	{ "mobKame", (intptr_t) M_lib_sound_SoundMn_mobKame_int, VTABLE_lib_sound_SoundMn_mobKame_int, "(I)V", 1 },
	{ "charRun", (intptr_t) M_lib_sound_SoundMn_charRun_float, VTABLE_lib_sound_SoundMn_charRun_float, "(F)V", 1 },
	{ "monkeyRun", (intptr_t) M_lib_sound_SoundMn_monkeyRun_float, VTABLE_lib_sound_SoundMn_monkeyRun_float, "(F)V", 1 },
	{ "charFall", (intptr_t) M_lib_sound_SoundMn_charFall, VTABLE_lib_sound_SoundMn_charFall, "()V", 1 },
	{ "charJump", (intptr_t) M_lib_sound_SoundMn_charJump, VTABLE_lib_sound_SoundMn_charJump, "()V", 1 },
	{ "panelOpen", (intptr_t) M_lib_sound_SoundMn_panelOpen, VTABLE_lib_sound_SoundMn_panelOpen, "()V", 1 },
	{ "buttonClose", (intptr_t) M_lib_sound_SoundMn_buttonClose, VTABLE_lib_sound_SoundMn_buttonClose, "()V", 1 },
	{ "buttonClick", (intptr_t) M_lib_sound_SoundMn_buttonClick, VTABLE_lib_sound_SoundMn_buttonClick, "()V", 1 },
	{ "stopMove", (intptr_t) M_lib_sound_SoundMn_stopMove, VTABLE_lib_sound_SoundMn_stopMove, "()V", 1 },
	{ "charFly", (intptr_t) M_lib_sound_SoundMn_charFly, VTABLE_lib_sound_SoundMn_charFly, "()V", 1 },
	{ "stopFly", (intptr_t) M_lib_sound_SoundMn_stopFly, VTABLE_lib_sound_SoundMn_stopFly, "()V", 1 },
	{ "openMenu", (intptr_t) M_lib_sound_SoundMn_openMenu, VTABLE_lib_sound_SoundMn_openMenu, "()V", 1 },
	{ "panelClick", (intptr_t) M_lib_sound_SoundMn_panelClick, VTABLE_lib_sound_SoundMn_panelClick, "()V", 1 },
	{ "eatPeans", (intptr_t) M_lib_sound_SoundMn_eatPeans, VTABLE_lib_sound_SoundMn_eatPeans, "()V", 1 },
	{ "openDialog", (intptr_t) M_lib_sound_SoundMn_openDialog, VTABLE_lib_sound_SoundMn_openDialog, "()V", 1 },
	{ "hoisinh", (intptr_t) M_lib_sound_SoundMn_hoisinh, VTABLE_lib_sound_SoundMn_hoisinh, "()V", 1 },
	{ "taitao", (intptr_t) M_lib_sound_SoundMn_taitao, VTABLE_lib_sound_SoundMn_taitao, "()V", 1 },
	{ "taitaoPause", (intptr_t) M_lib_sound_SoundMn_taitaoPause, VTABLE_lib_sound_SoundMn_taitaoPause, "()V", 1 },
	{ "isPlayRain", (intptr_t) M_lib_sound_SoundMn_isPlayRain_R_boolean, VTABLE_lib_sound_SoundMn_isPlayRain_R_boolean, "()Z", 1 },
	{ "isPlayAirShip", (intptr_t) M_lib_sound_SoundMn_isPlayAirShip_R_boolean, VTABLE_lib_sound_SoundMn_isPlayAirShip_R_boolean, "()Z", 1 },
	{ "airShip", (intptr_t) M_lib_sound_SoundMn_airShip, VTABLE_lib_sound_SoundMn_airShip, "()V", 1 },
	{ "pauseAirShip", (intptr_t) M_lib_sound_SoundMn_pauseAirShip, VTABLE_lib_sound_SoundMn_pauseAirShip, "()V", 1 },
	{ "resumeAirShip", (intptr_t) M_lib_sound_SoundMn_resumeAirShip, VTABLE_lib_sound_SoundMn_resumeAirShip, "()V", 1 },
	{ "newKame", (intptr_t) M_lib_sound_SoundMn_newKame, VTABLE_lib_sound_SoundMn_newKame, "()V", 1 },
	{ "radarClick", (intptr_t) M_lib_sound_SoundMn_radarClick, VTABLE_lib_sound_SoundMn_radarClick, "()V", 1 },
	{ "radarItem", (intptr_t) M_lib_sound_SoundMn_radarItem, VTABLE_lib_sound_SoundMn_radarItem, "()V", 1 },
	{ "playSound", (intptr_t) SM_lib_sound_SoundMn_playSound_int_float, 0, "(IF)V", 9 },
	{ "stopSound", (intptr_t) SM_lib_sound_SoundMn_stopSound_int, 0, "(I)V", 9 },
	{ "playMus", (intptr_t) SM_lib_sound_SoundMn_playMus_int_float_boolean, 0, "(IFZ)V", 9 },
	{ "stopMus", (intptr_t) SM_lib_sound_SoundMn_stopMus_int, 0, "(I)V", 9 },
	{ "dispose", (intptr_t) SM_lib_sound_SoundMn_dispose, 0, "()V", 9 },
	{ "stopAllSound", (intptr_t) SM_lib_sound_SoundMn_stopAllSound, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_lib_sound_SoundMn, 0, "()V", 8 },
};

Class class_lib_sound_SoundMn{
		.nativeName = (intptr_t) "lib/sound/SoundMn",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_sound_SoundMn),
		.classVtable = (intptr_t) vtable_lib_sound_SoundMn,
		.staticInitializer = (intptr_t) clinit_lib_sound_SoundMn,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_sound_SoundMn,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 51,
		.nativeFields = (intptr_t) fields,
		.methodCount = 64,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 61,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_sound_SoundMn = registerClass(&class_lib_sound_SoundMn);

}

