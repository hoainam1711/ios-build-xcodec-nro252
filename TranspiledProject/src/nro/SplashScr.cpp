#include "nro/SplashScr.h"
#include "nro/GameScr.h"
#include "lib/mFont.h"
#include "nro/ServerListScreen.h"
#include "lib/network/Session_ME.h"
#include "java/lang/StringBuilder.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/StaticObj.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/Res.h"
#include "lib/sound/SoundMn.h"
#include "nro/SplashScr.h"
#include "nro/mScreen.h"
#include "nro/Rms.h"
#include "nro/LoginScr.h"
#include "lib/mSystem.h"

extern "C" {

jint SF_nro_SplashScr_splashScrStat;
jint SF_nro_SplashScr_nData;
jint SF_nro_SplashScr_maxData;
jobject SF_nro_SplashScr_instance;
jobject SF_nro_SplashScr_imgLogo;

void mark_nro_SplashScr(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_SplashScr_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SplashScr_instance)->clazz)->markFunction)((jobject) SF_nro_SplashScr_instance, mark, depth + 1);
		if (SF_nro_SplashScr_imgLogo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SplashScr_imgLogo)->clazz)->markFunction)((jobject) SF_nro_SplashScr_imgLogo, mark, depth + 1);
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
	auto self = (nro_SplashScr *) object;
}

void init_nro_SplashScr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SplashScr:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SplashScr(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((nro_SplashScr *) NULL_CHECK((frame[0].o)))->F_isCheckConnect = (jint(0));
	LINE_NUMBER(21);
	clinit_nro_SplashScr(ctx);
	SF_nro_SplashScr_instance = (frame[0].o);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_SplashScr_loadSplashScr(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SplashScr:loadSplashScr", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SplashScr(ctx);
	{
	LINE_NUMBER(25);
	clinit_nro_SplashScr(ctx);
	SF_nro_SplashScr_splashScrStat = (jint(0));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_SplashScr_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SplashScr:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	jint temp0 = (clinit_nro_SplashScr(ctx), (jint)SF_nro_SplashScr_splashScrStat) + (jint(1));
	clinit_nro_SplashScr(ctx);
	SF_nro_SplashScr_splashScrStat = temp0;
	if (temp0 != (30)) goto label_1;
	}
	{
	if (((jint)((nro_SplashScr *) NULL_CHECK((frame[0].o)))->F_isCheckConnect) != 0) goto label_1;
	}
	{
	LINE_NUMBER(30);
	((nro_SplashScr *) NULL_CHECK((frame[0].o)))->F_isCheckConnect = (jint(1));
	LINE_NUMBER(31);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"serverchat"_j))));
	if (temp0 == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(32);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"serverchat"_j))));
	if (temp0 != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isPaintChatVip = (--sp)->i;
label_4:;
	{
	LINE_NUMBER(35);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPlaySound"_j))));
	if (temp0 == (jint(-1))) goto label_8;
	}
	{
	LINE_NUMBER(36);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPlaySound"_j))));
	if (temp0 != (jint(1))) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPlaySound = sp[0].i;
	LINE_NUMBER(37);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isResume = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound);
	LINE_NUMBER(38);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_isSound = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound);
	}
label_8:;
	{
	LINE_NUMBER(41);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound) == 0) goto label_14;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	}
label_14:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	LINE_NUMBER(46);
	SM_lib_sound_SoundMn_getStrOption(ctx);
	LINE_NUMBER(47);
	SM_nro_ServerListScreen_loadIP(ctx);
	}
label_1:;
	{
	LINE_NUMBER(50);
	if ((clinit_nro_SplashScr(ctx), (jint)SF_nro_SplashScr_splashScrStat) < (150)) goto label_18;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_20;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) != 0) goto label_20;
	}
	{
	LINE_NUMBER(52);
	SM_lib_mSystem_onDisconnected_boolean(ctx, (jint(1)));
	}
label_20:;
	{
	LINE_NUMBER(54);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	if (sp[0].o != nullptr) goto label_22;
	}
	{
	LINE_NUMBER(55);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerListScreen);
	init_nro_ServerListScreen(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_serverScreen = sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(57);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe2])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(60);
	SM_nro_ServerListScreen_CheckBack_ServerListScreen(ctx);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_SplashScr_loadIP(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SplashScr:loadIP", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SplashScr(ctx);
	{
	LINE_NUMBER(64);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8">>>>>loadIP:  svselect == "_j))));
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_RMS_svselect;
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(65);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_RMS_svselect;
	jint temp1 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, sp[0].o);
	SM_nro_ServerListScreen_SetIpSelect_int_boolean(ctx, temp1, (jint(0)));
	LINE_NUMBER(66);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect) != (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(67);
	SM_nro_Res_err_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8">>>loadIP:  svselect == -1"_j))));
	LINE_NUMBER(68);
	frame[0].i = (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_serverPriority);
	LINE_NUMBER(69);
	frame[1].i = (jint(1));
	LINE_NUMBER(70);
	SM_nro_ServerListScreen_SetIpSelect_int_boolean(ctx, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_serverPriority), (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(73);
	SM_nro_ServerListScreen_ConnectIP(ctx);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_SplashScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SplashScr:paint", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	clinit_nro_SplashScr(ctx);
	sp[0].o = (jobject)SF_nro_SplashScr_imgLogo;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if ((clinit_nro_SplashScr(ctx), (jint)SF_nro_SplashScr_splashScrStat) >= (30)) goto label_1;
	}
	{
	LINE_NUMBER(78);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(16777215)));
	LINE_NUMBER(79);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(80);
	sp[0].o = frame[1].o;
	clinit_nro_SplashScr(ctx);
	sp[1].o = (jobject)SF_nro_SplashScr_imgLogo;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))), (jint(3)));
	}
label_1:;
	{
	LINE_NUMBER(83);
	if ((clinit_nro_SplashScr(ctx), (jint)SF_nro_SplashScr_nData) == (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(84);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(85);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(86);
	sp[0].o = frame[1].o;
	clinit_nro_LoginScr(ctx);
	sp[1].o = (jobject)SF_nro_LoginScr_imgTitle;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))) - (24)), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_LEFT));
	LINE_NUMBER(87);
	SM_main_GameCanvas_paintShukiren_int_int_lib_mGraphics(ctx, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))) + (24)), (frame[1].o));
	LINE_NUMBER(88);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_downloading_data;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, (((clinit_nro_SplashScr(ctx), (jint)SF_nro_SplashScr_nData) * (100)) / (clinit_nro_SplashScr(ctx), (jint)SF_nro_SplashScr_maxData)));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"%"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))), (jint(2)));
	goto label_11;
	}
label_5:;
	{
	LINE_NUMBER(90);
	if ((clinit_nro_SplashScr(ctx), (jint)SF_nro_SplashScr_splashScrStat) < (30)) goto label_11;
	}
	{
	LINE_NUMBER(91);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(92);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(93);
	SM_main_GameCanvas_paintShukiren_int_int_lib_mGraphics(ctx, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh), (frame[1].o));
	LINE_NUMBER(94);
	SM_nro_ServerListScreen_paintDeleteData_lib_mGraphics(ctx, (frame[1].o));
	}
label_11:;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_SplashScr_loadImg(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SplashScr:loadImg", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SplashScr(ctx);
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/gamelogo.png"_j))));
	clinit_nro_SplashScr(ctx);
	SF_nro_SplashScr_imgLogo = sp[0].o;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_SplashScr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SplashScr:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SplashScr(ctx);
	{
	LINE_NUMBER(15);
	clinit_nro_SplashScr(ctx);
	SF_nro_SplashScr_nData = (jint(-1));
	LINE_NUMBER(16);
	clinit_nro_SplashScr(ctx);
	SF_nro_SplashScr_maxData = (jint(-1));
	LINE_NUMBER(18);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/gamelogo.png"_j))));
	clinit_nro_SplashScr(ctx);
	SF_nro_SplashScr_imgLogo = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_SplashScr[] {
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
	(void *) M_nro_mScreen_switchToMe,
	(void *) M_nro_mScreen_keyPress_int,
	(void *) M_nro_SplashScr_update,
	(void *) M_nro_mScreen_updateKey,
	(void *) M_nro_SplashScr_paint_lib_mGraphics,
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
};

static FieldMetadata fields[] {
	{ "splashScrStat", &class_int, (intptr_t) &SF_nro_SplashScr_splashScrStat, "I", 10 },
	{ "isCheckConnect", &class_boolean, offsetof(nro_SplashScr, F_isCheckConnect), "Z", 2 },
	{ "nData", &class_int, (intptr_t) &SF_nro_SplashScr_nData, "I", 10 },
	{ "maxData", &class_int, (intptr_t) &SF_nro_SplashScr_maxData, "I", 10 },
	{ "instance", &class_nro_SplashScr, (intptr_t) &SF_nro_SplashScr_instance, "Lnro/SplashScr;", 9 },
	{ "imgLogo", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_SplashScr_imgLogo, "Ljavax/microedition/lcdui/Image;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_SplashScr, 0, "()V", 1 },
	{ "loadSplashScr", (intptr_t) SM_nro_SplashScr_loadSplashScr, 0, "()V", 9 },
	{ "update", (intptr_t) M_nro_SplashScr_update, VTABLE_nro_SplashScr_update, "()V", 17 },
	{ "loadIP", (intptr_t) SM_nro_SplashScr_loadIP, 0, "()V", 9 },
	{ "paint", (intptr_t) M_nro_SplashScr_paint_lib_mGraphics, VTABLE_nro_SplashScr_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "loadImg", (intptr_t) SM_nro_SplashScr_loadImg, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_SplashScr, 0, "()V", 8 },
};

Class class_nro_SplashScr{
		.nativeName = (intptr_t) "nro/SplashScr",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_SplashScr),
		.classVtable = (intptr_t) vtable_nro_SplashScr,
		.staticInitializer = (intptr_t) clinit_nro_SplashScr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_SplashScr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_SplashScr = registerClass(&class_nro_SplashScr);

}

