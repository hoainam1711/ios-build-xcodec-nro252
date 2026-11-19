#include "nro/LoginScr.h"
#include "nro/GameScr.h"
#include "lib/input/TField.h"
#include "java/lang/StringBuilder.h"
#include "lib/network/Session_ME.h"
#include "nro/IActionListener.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/Panel.h"
#include "nro/ChatPopup.h"
#include "nro/Menu.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "lib/sound/SoundMn.h"
#include "nro/Effect2.h"
#include "nro/PopUp.h"
#include "nro/mScreen.h"
#include "com/nro/GameMain.h"
#include "nro/Command.h"
#include "java/lang/Throwable.h"
#include "nro/TileMap.h"
#include "lib/mSystem.h"
#include "lib/mFont.h"
#include "nro/ServerListScreen.h"
#include "java/lang/Exception.h"
#include "nro/ServerScr.h"
#include "nro/Dialog.h"
#include "lib/mGraphics.h"
#include "java/lang/Long.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "main/GameMidlet.h"
#include "nro/MsgDlg.h"
#include "nro/Rms.h"
#include "nro/LoginScr.h"
#include "java/lang/System.h"

extern "C" {

jbool SF_nro_LoginScr_isContinueToLogin;
jbool SF_nro_LoginScr_isUpdateAll;
jbool SF_nro_LoginScr_isUpdateData;
jbool SF_nro_LoginScr_isUpdateMap;
jbool SF_nro_LoginScr_isUpdateSkill;
jbool SF_nro_LoginScr_isUpdateItem;
jobject SF_nro_LoginScr_serverName;
jobject SF_nro_LoginScr_imgTitle;
jshort SF_nro_LoginScr_timeLogin;
jlong SF_nro_LoginScr_lastTimeLogin;
jlong SF_nro_LoginScr_currTimeLogin;

void mark_nro_LoginScr(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_LoginScr_serverName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_LoginScr_serverName)->clazz)->markFunction)((jobject) SF_nro_LoginScr_serverName, mark, depth + 1);
		if (SF_nro_LoginScr_imgTitle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_LoginScr_imgTitle)->clazz)->markFunction)((jobject) SF_nro_LoginScr_imgTitle, mark, depth + 1);
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
	auto self = (nro_LoginScr *) object;
	if (self->F_tfUser)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfUser)->clazz)->markFunction)((jobject) self->F_tfUser, mark, depth + 1);
	if (self->F_tfPass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfPass)->clazz)->markFunction)((jobject) self->F_tfPass, mark, depth + 1);
	if (self->F_cmdLogin)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdLogin)->clazz)->markFunction)((jobject) self->F_cmdLogin, mark, depth + 1);
	if (self->F_cmdFogetPass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdFogetPass)->clazz)->markFunction)((jobject) self->F_cmdFogetPass, mark, depth + 1);
	if (self->F_cmdRes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdRes)->clazz)->markFunction)((jobject) self->F_cmdRes, mark, depth + 1);
	if (self->F_cmdMenu)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdMenu)->clazz)->markFunction)((jobject) self->F_cmdMenu, mark, depth + 1);
	if (self->F_cmdBackFromRegister)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdBackFromRegister)->clazz)->markFunction)((jobject) self->F_cmdBackFromRegister, mark, depth + 1);
	if (self->F_cmdBack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdBack)->clazz)->markFunction)((jobject) self->F_cmdBack, mark, depth + 1);
	if (self->F_cmdOK)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdOK)->clazz)->markFunction)((jobject) self->F_cmdOK, mark, depth + 1);
	if (self->F_cmdCallHotline)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdCallHotline)->clazz)->markFunction)((jobject) self->F_cmdCallHotline, mark, depth + 1);
}

void M_nro_LoginScr_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:switchToMe", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(60);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_3;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isPC;
	if ((--sp)->i != 0) goto label_3;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(64);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = sp[0].o;
	LINE_NUMBER(65);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(68);
	SM_main_GameCanvas_loadBG_int(ctx, (jint(0)));
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_BACK;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (101), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(70);
	((func_nro_LoginScr_updatePosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_LoginScr_updatePosition])(ctx, (frame[0].o));
	LINE_NUMBER(71);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_LoginScr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_LoginScr(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(74);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isCheck = (jint(0));
	LINE_NUMBER(23);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes = (jint(0));
	LINE_NUMBER(45);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tipid = (jint(-1));
	LINE_NUMBER(46);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2 = (jint(0));
	LINE_NUMBER(47);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_v = (jint(2));
	LINE_NUMBER(48);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_g = (jint(0));
	LINE_NUMBER(49);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_ylogo = (-40);
	LINE_NUMBER(50);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_dir = (jint(1));
	LINE_NUMBER(384);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_lastW = (jint(-1));
	LINE_NUMBER(385);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_lastH = (jint(-1));
	LINE_NUMBER(75);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (30));
	LINE_NUMBER(76);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	jint temp1 = jbyte((jint((temp0 % (jlong(9ll))))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_bgID = temp1;
	if (temp1 == (jint(5))) goto label_13;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgID) != (6)) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(77);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_bgID = (jint(4));
	}
label_14:;
	{
	LINE_NUMBER(80);
	SM_nro_GameScr_SetNum_int_int(ctx, (jint(-1)), (jint(-1)));
	LINE_NUMBER(81);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = (100);
	LINE_NUMBER(82);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmy = (200);
	LINE_NUMBER(83);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) <= (200)) goto label_18;
	}
	{
	LINE_NUMBER(84);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_defYL = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (80));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(86);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_defYL = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (65));
	}
label_20:;
	{
	LINE_NUMBER(89);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yL = (-50);
	LINE_NUMBER(90);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) < (200)) goto label_22;
	}
	INST_SIPUSH(160);
	goto label_23;
label_22:;
	INST_SIPUSH(140);
label_23:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(91);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_wC = (frame[1].i);
	LINE_NUMBER(92);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yt = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT)) - (jint(5)));
	LINE_NUMBER(93);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) > (160)) goto label_27;
	}
	{
	LINE_NUMBER(94);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yt = (20);
	}
label_27:;
	{
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfUser = (jref) sp[1].o;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT)) - (9));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_wC);
	LINE_NUMBER(100);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp += 2;
	if ((clinit_nro_mResources(ctx), (jint)SF_nro_mResources_language) != (jint(2))) goto label_35;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_36;
label_35:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_phone;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_36:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_email;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfPass = (jref) sp[1].o;
	LINE_NUMBER(105);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (jint(4)));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_wC);
	LINE_NUMBER(108);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_password;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_yt = (((jint)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_yt) + (35));
	LINE_NUMBER(111);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isCheck = (jint(1));
	LINE_NUMBER(112);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"check"_j))));
	frame[1].i = temp0;
	if (temp0 != (jint(1))) goto label_46;
	}
	{
	LINE_NUMBER(113);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isCheck = (jint(1));
	goto label_48;
	}
label_46:;
	{
	LINE_NUMBER(114);
	if ((frame[1].i) != (jint(2))) goto label_48;
	}
	{
	LINE_NUMBER(115);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isCheck = (jint(0));
	}
label_48:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[1].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))));
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	sp[1].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"pass"_j))));
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	if (sp[0].o != nullptr) goto label_54;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"G\u1ecdi hotline"_j))), (frame[0].o), (13), (jobject(nullptr)));
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_cmdCallHotline = (jref) sp[1].o;
	LINE_NUMBER(124);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (75));
	LINE_NUMBER(125);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_58;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isTouch;
	if ((--sp)->i != 0) goto label_58;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (20));
	goto label_54;
	}
label_58:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (8);
	}
label_54:;
	{
	LINE_NUMBER(132);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = sp[1].o;
	sp += 3;
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) <= (200)) goto label_62;
	}
	clinit_nro_mResources(ctx);
	(sp++)->o = SF_nro_mResources_login;
	goto label_63;
label_62:;
	clinit_nro_mResources(ctx);
	(sp++)->o = SF_nro_mResources_login2;
label_63:;
	{
	sp -= 4;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[3].o, sp[2].o, (jint(888393)), (jobject(nullptr)));
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_cmdLogin = (jref) sp[1].o;
	LINE_NUMBER(134);
	clinit_nro_Command(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_remember;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[0].o), (2001), (jobject(nullptr)));
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_register;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (2002), (jobject(nullptr)));
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_cmdRes = (jref) sp[1].o;
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CANCEL;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (10021), (jobject(nullptr)));
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_cmdBackFromRegister = (jref) sp[1].o;
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_BACK;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (101), (jobject(nullptr)));
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_cmdBack = (jref) sp[1].o;
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[2].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_MENU;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[2].o, sp[3].o, (frame[0].o), (2003), (jobject(nullptr)));
	((nro_LoginScr *) NULL_CHECK(sp[1].o))->F_cmdMenu = (jref) sp[2].o;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[2].o;
	LINE_NUMBER(139);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_70;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (8));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard)) - (8));
	LINE_NUMBER(142);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) < (200)) goto label_74;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (110));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (110));
	}
label_74:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (jint(3)));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (110));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (84));
	LINE_NUMBER(150);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_Command *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(151);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBack;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (jint(2));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBack;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH));
	}
label_70:;
	{
	LINE_NUMBER(155);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_E = (170);
	LINE_NUMBER(156);
	frame[2].i = (184);
	LINE_NUMBER(157);
	if ((184) < (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) goto label_84;
	}
	{
	LINE_NUMBER(158);
	frame[2].i = (152);
	}
label_84:;
	{
	LINE_NUMBER(161);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_xLog = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - ((frame[2].i) / (jint(2))));
	LINE_NUMBER(162);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (30));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_xLog) + (10));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (20));
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_OK;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (2008), (jobject(nullptr)));
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_cmdOK = (jref) sp[1].o;
	LINE_NUMBER(166);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (84));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_Command *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_forgetPass;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (1003), (jobject(nullptr)));
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_cmdFogetPass = (jref) sp[1].o;
	LINE_NUMBER(169);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (jint(3)));
	LINE_NUMBER(170);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_Command *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_LoginScr_doLogin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:doLogin", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"user ao= "_j))));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(177);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(178);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"pass"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(179);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(180);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2 = (jint(1));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(182);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2 = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(185);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"isLogin 2= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(186);
	if ((frame[1].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2) == 0) goto label_10;
	}
	{
	LINE_NUMBER(187);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(188);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"a"_j)));
	}
label_10:;
	{
	LINE_NUMBER(192);
	if ((frame[1].o) == nullptr) goto label_13;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_13;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(193);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(194);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	LINE_NUMBER(195);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(197);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_13;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	goto label_13;
	}
label_15:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_21;
	}
	LINE_NUMBER(203);
	SM_main_GameCanvas_connect(ctx);
label_21:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"2.5.2"_j));
	sp += 4;
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2) == 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 5;
	((func_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jbyte(sp[4].i)));
	LINE_NUMBER(207);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_RMS_svselect;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	LINE_NUMBER(208);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connected) != 0) goto label_27;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) == 0) goto label_28;
	}
label_27:;
	{
	LINE_NUMBER(209);
	SM_main_GameCanvas_startWaitDlg(ctx);
	goto label_29;
	}
label_28:;
	{
	LINE_NUMBER(211);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_maychutathoacmatsong;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" [0]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8884), (jobject(nullptr)));
	}
label_29:;
	{
	LINE_NUMBER(214);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	LINE_NUMBER(215);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2) != 0) goto label_31;
	}
	{
	LINE_NUMBER(216);
	M_nro_LoginScr_actRegisterLeft(ctx, (frame[0].o));
	}
label_31:;
	{
	LINE_NUMBER(219);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	}
label_13:;
	LINE_NUMBER(222);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_LoginScr_savePass(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:savePass", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(225);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isCheck) == 0) goto label_1;
	}
	{
	LINE_NUMBER(226);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"check"_j))), (jint(1)));
	LINE_NUMBER(227);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"acc"_j));
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(228);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pass"_j));
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(230);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"check"_j))), (jint(2)));
	LINE_NUMBER(231);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(232);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"pass"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	}
label_5:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_LoginScr_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	if ((clinit_nro_LoginScr(ctx), (jint)SF_nro_LoginScr_timeLogin) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(238);
	SM_main_GameCanvas_startWaitDlg(ctx);
	LINE_NUMBER(239);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_currTimeLogin = temp0;
	if ((longCompare((temp0 - (clinit_nro_LoginScr(ctx), (jlong)SF_nro_LoginScr_lastTimeLogin)), (jlong(1000ll)))) < 0) goto label_1;
	}
	{
	LINE_NUMBER(240);
	jint temp0 = jshort(((clinit_nro_LoginScr(ctx), (jint)SF_nro_LoginScr_timeLogin) - (jint(1))));
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_timeLogin = temp0;
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(241);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_doLogin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_doLogin])(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(244);
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_lastTimeLogin = (clinit_nro_LoginScr(ctx), (jlong)SF_nro_LoginScr_currTimeLogin);
	}
label_1:;
	{
	LINE_NUMBER(248);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2) == 0) goto label_7;
	}
	{
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes) != 0) goto label_7;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp += 2;
	if ((clinit_nro_mResources(ctx), (jint)SF_nro_mResources_language) != (jint(2))) goto label_9;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_10;
label_9:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_phone;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_10:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_email;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(250);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_password;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(251);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isPaintMouse = (jint(0));
	LINE_NUMBER(252);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isPaintMouse = (jint(0));
	LINE_NUMBER(253);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(254);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	goto label_16;
	}
label_7:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp += 2;
	if ((clinit_nro_mResources(ctx), (jint)SF_nro_mResources_language) != (jint(2))) goto label_17;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_18;
label_17:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_phone;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_18:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_email;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(257);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_password;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(258);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(259);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(262);
	frame[1].i = (jint(0));
	}
label_22:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_23;
	}
	{
	LINE_NUMBER(263);
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_nro_Effect2_update) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Effect2, sp[0].o)))->vtable)[VTABLE_nro_Effect2_update])(ctx, (checkCast(ctx, &class_nro_Effect2, sp[0].o)));
	LINE_NUMBER(262);
	INST_IINC(1, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(266);
	if ((clinit_nro_LoginScr(ctx), (jint)SF_nro_LoginScr_isUpdateAll) == 0) goto label_26;
	}
	clinit_nro_LoginScr(ctx);
	(sp++)->i = SF_nro_LoginScr_isUpdateData;
	if ((--sp)->i != 0) goto label_26;
	clinit_nro_LoginScr(ctx);
	(sp++)->i = SF_nro_LoginScr_isUpdateItem;
	if ((--sp)->i != 0) goto label_26;
	clinit_nro_LoginScr(ctx);
	(sp++)->i = SF_nro_LoginScr_isUpdateMap;
	if ((--sp)->i != 0) goto label_26;
	clinit_nro_LoginScr(ctx);
	(sp++)->i = SF_nro_LoginScr_isUpdateSkill;
	if ((--sp)->i != 0) goto label_26;
	{
	LINE_NUMBER(267);
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_isUpdateAll = (jint(0));
	LINE_NUMBER(268);
	SM_java_lang_System_gc(ctx);
	LINE_NUMBER(269);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_finishUpdate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_finishUpdate])(ctx, sp[0].o);
	}
label_26:;
	{
	LINE_NUMBER(272);
	jint temp0 = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (jint(1));
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = temp0;
	if (temp0 <= (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) * (jint(3))) + (100))) goto label_30;
	}
	{
	LINE_NUMBER(273);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = (100);
	}
label_30:;
	{
	LINE_NUMBER(276);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_32;
	}
	{
	LINE_NUMBER(277);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_defYL) == ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yL)) goto label_34;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_yL = (((jint)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_yL) + ((((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_defYL) - ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yL)) >> (jint(1))));
	}
label_34:;
	{
	LINE_NUMBER(281);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_g) < 0) goto label_36;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_ylogo = (((jint)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_ylogo) + (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_dir) * ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_g)));
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_g = (((jint)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_g) + (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_dir) * ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_v)));
	LINE_NUMBER(284);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_g) > 0) goto label_40;
	}
	{
	LINE_NUMBER(285);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_dir = (-((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_dir));
	}
label_40:;
	{
	LINE_NUMBER(288);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_ylogo) <= 0) goto label_36;
	}
	{
	LINE_NUMBER(289);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_dir = (-((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_dir));
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_g = (((jint)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_g) - ((jint(2)) * ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_v)));
	}
label_36:;
	{
	LINE_NUMBER(294);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tipid) < 0) goto label_44;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (100)) != 0) goto label_44;
	}
	{
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tipid = (((jint)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tipid) + (jint(1)));
	LINE_NUMBER(296);
	jint temp0 = (jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tipid;
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_tips;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_47;
	}
	{
	LINE_NUMBER(297);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tipid = (jint(0));
	}
label_47:;
	{
	LINE_NUMBER(300);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_msgdlg;
	if (sp[0].o != sp[1].o) goto label_44;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	if (((jint)((nro_MsgDlg *) NULL_CHECK(sp[0].o))->F_isWait) == 0) goto label_44;
	}
	{
	LINE_NUMBER(301);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_tips;
	((func_nro_MsgDlg_setInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_setInfo_java_lang_String])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tipid))));
	}
label_44:;
	{
	LINE_NUMBER(305);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2) == 0) goto label_50;
	}
	{
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes) != 0) goto label_50;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isPaintMouse = (jint(0));
	LINE_NUMBER(307);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isPaintMouse = (jint(0));
	LINE_NUMBER(308);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(309);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	goto label_55;
	}
label_50:;
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp += 2;
	if ((clinit_nro_mResources(ctx), (jint)SF_nro_mResources_language) != (jint(2))) goto label_56;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_57;
label_56:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_phone;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_57:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_email;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(312);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_password;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(313);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(314);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	}
label_55:;
	{
	LINE_NUMBER(317);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_61;
	}
	{
	LINE_NUMBER(318);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes) == 0) goto label_63;
	}
	{
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	goto label_66;
	}
label_63:;
	{
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	}
label_66:;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBack;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBack;
	jint temp0 = (jint)((func_nro_Command_isPointerPressInside_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_isPointerPressInside_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBack;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return;
	}
label_61:;
	{
	LINE_NUMBER(331);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes) == 0) goto label_70;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return;
	}
label_70:;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	}
label_32:;
	LINE_NUMBER(342);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_LoginScr_keyPress_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:keyPress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(345);
	if ((frame[1].i) != (-26)) goto label_1;
	}
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_3;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(348);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(349);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = sp[0].o;
	LINE_NUMBER(350);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(353);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(354);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = sp[0].o;
	LINE_NUMBER(355);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	}
label_8:;
	LINE_NUMBER(357);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(360);
	if ((frame[1].i) == (-5)) goto label_12;
	}
	{
	if ((frame[1].i) == (10)) goto label_12;
	}
	{
	if ((frame[1].i) != (13)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_14;
	}
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(363);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(364);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = sp[0].o;
	LINE_NUMBER(365);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_13;
	}
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_23;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	jint temp0 = (jint)((func_lib_input_TField_keyPressed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_keyPressed_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_25;
	}
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	jint temp0 = (jint)((func_lib_input_TField_keyPressed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_keyPressed_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	}
label_25:;
	{
	LINE_NUMBER(381);
	M_nro_mScreen_keyPress_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_LoginScr_updatePosition(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:updatePosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (30));
	LINE_NUMBER(389);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) < (200)) goto label_2;
	}
	INST_SIPUSH(160);
	goto label_3;
label_2:;
	INST_SIPUSH(140);
label_3:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(390);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_wC = (frame[1].i);
	LINE_NUMBER(391);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yt = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT)) - (jint(5)));
	LINE_NUMBER(392);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) > (160)) goto label_7;
	}
	{
	LINE_NUMBER(393);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yt = (20);
	}
label_7:;
	{
	LINE_NUMBER(395);
	frame[2].i = (184);
	LINE_NUMBER(396);
	if ((184) < (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) goto label_10;
	}
	{
	LINE_NUMBER(397);
	frame[2].i = (152);
	}
label_10:;
	{
	LINE_NUMBER(399);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_xLog = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - ((frame[2].i) / (jint(2))));
	LINE_NUMBER(400);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_wC);
	LINE_NUMBER(402);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_xLog) + (10));
	LINE_NUMBER(403);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (20));
	}
label_13:;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_wC);
	LINE_NUMBER(407);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_xLog) + (10));
	LINE_NUMBER(408);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (55));
	}
label_17:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (8));
	LINE_NUMBER(412);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) < (200)) goto label_24;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (110));
	goto label_21;
	}
label_24:;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (80));
	}
label_21:;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard)) - (8));
	LINE_NUMBER(420);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) < (200)) goto label_29;
	}
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (110));
	goto label_26;
	}
label_29:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (80));
	}
label_26:;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (84));
	LINE_NUMBER(428);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	sp += 1;
	if (sp[0].o == nullptr) goto label_34;
	}
	{
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	jint temp0 = (jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].i = temp0;
	sp += 1;
	goto label_35;
	}
label_34:;
	{
	jint temp0 = ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (110);
	sp[0].i = temp0;
	sp += 1;
	}
label_35:;
	sp -= 2;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = sp[1].i;
label_31:;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (jint(3)));
	LINE_NUMBER(432);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	sp += 1;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	jint temp0 = (jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].i = temp0;
	sp += 1;
	goto label_40;
	}
label_39:;
	{
	jint temp0 = ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (110);
	sp[0].i = temp0;
	sp += 1;
	}
label_40:;
	sp -= 2;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = sp[1].i;
label_36:;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	if (sp[0].o == nullptr) goto label_41;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (75));
	LINE_NUMBER(436);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_44;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isTouch;
	if ((--sp)->i != 0) goto label_44;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (20));
	goto label_41;
	}
label_44:;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (8);
	}
label_41:;
	LINE_NUMBER(442);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_LoginScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:paint", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(445);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_lastW) != (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) goto label_1;
	}
	{
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_lastH) == (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(446);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_lastW = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w);
	LINE_NUMBER(447);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_lastH = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h);
	LINE_NUMBER(448);
	((func_nro_LoginScr_updatePosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_LoginScr_updatePosition])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(450);
	SM_main_GameCanvas_paintBGGameScr_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(451);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	frame[2].i = (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y) - (50));
	LINE_NUMBER(452);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) > (220)) goto label_7;
	}
	LINE_NUMBER(453);
	INST_IINC(2, 5);
label_7:;
	{
	LINE_NUMBER(456);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"v2.5.2"_j));
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (jint(2));
	jint temp1 = 17;
	jint temp2 = jint(1);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	LINE_NUMBER(457);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_10;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isTouch;
	if ((--sp)->i != 0) goto label_10;
	{
	LINE_NUMBER(458);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	sp[1].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[2].o = (jobject)SF_nro_ServerListScreen_l;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (jint(2));
	jint temp1 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (15);
	jint temp2 = jint(1);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(460);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	sp[1].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[2].o = (jobject)SF_nro_ServerListScreen_l;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (jint(2));
	jint temp1 = jint(2);
	jint temp2 = jint(1);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	}
label_12:;
	{
	LINE_NUMBER(463);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(464);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) < (200)) goto label_15;
	}
	INST_SIPUSH(180);
	goto label_16;
label_15:;
	INST_SIPUSH(160);
label_16:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(465);
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, (frame[1].o), ((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_xLog), (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) - (10)), (frame[3].i), (105), (jint(-1)), (jint(1)));
	LINE_NUMBER(466);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) <= (160)) goto label_19;
	}
	clinit_nro_LoginScr(ctx);
	(sp++)->o = SF_nro_LoginScr_imgTitle;
	if ((--sp)->o == nullptr) goto label_19;
	{
	LINE_NUMBER(467);
	sp[0].o = frame[1].o;
	clinit_nro_LoginScr(ctx);
	sp[1].o = (jobject)SF_nro_LoginScr_imgTitle;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), (frame[2].i), (jint(3)));
	}
label_19:;
	{
	LINE_NUMBER(470);
	frame[4].i = (184);
	LINE_NUMBER(471);
	if ((184) < (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) goto label_22;
	}
	{
	LINE_NUMBER(472);
	frame[4].i = (152);
	}
label_22:;
	{
	LINE_NUMBER(475);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_xLog = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - ((frame[4].i) / (jint(2))));
	LINE_NUMBER(476);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_xLog) + (10));
	LINE_NUMBER(477);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (20));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_xLog) + (10));
	LINE_NUMBER(479);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_yLog) + (55));
	LINE_NUMBER(480);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(482);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) >= (176)) goto label_13;
	}
	{
	LINE_NUMBER(483);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_acc;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	jint temp0 = ((jint)((lib_input_TField *) NULL_CHECK(sp[3].o))->F_x) - (35);
	sp[3].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, (((jint)((lib_input_TField *) NULL_CHECK(sp[3].o))->F_y) + (7)), (jint(0)));
	LINE_NUMBER(484);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_pwd;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	jint temp1 = ((jint)((lib_input_TField *) NULL_CHECK(sp[3].o))->F_x) - (35);
	sp[3].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp1, (((jint)((lib_input_TField *) NULL_CHECK(sp[3].o))->F_y) + (7)), (jint(0)));
	LINE_NUMBER(485);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_server;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	clinit_nro_LoginScr(ctx);
	sp[3].o = (jobject)SF_nro_LoginScr_serverName;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	jint temp2 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2));
	sp[3].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp2, (((jint)((lib_input_TField *) NULL_CHECK(sp[3].o))->F_y) + (32)), (jint(2)));
	}
label_13:;
	{
	LINE_NUMBER(489);
	M_nro_mScreen_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(490);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBack;
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_LoginScr_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:updateKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(494);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	jint temp0 = (jint)((func_nro_Command_isPointerPressInside_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_isPointerPressInside_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(498);
	if ((clinit_nro_LoginScr(ctx), (jint)SF_nro_LoginScr_isContinueToLogin) != 0) goto label_3;
	}
	{
	LINE_NUMBER(499);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_5;
	}
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_7;
	}
	{
	LINE_NUMBER(501);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(507);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(508);
	sp[0].o = frame[0].o;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_focus = (((jint)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_focus) - (jint(1)));
	LINE_NUMBER(509);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(510);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(512);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_12;
	}
	{
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_focus = (((jint)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_focus) + (jint(1)));
	LINE_NUMBER(514);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus) <= (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(515);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(519);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) != 0) goto label_17;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(520);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(521);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2) == 0) goto label_20;
	}
	{
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes) == 0) goto label_18;
	}
label_20:;
	{
	LINE_NUMBER(522);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus) != (jint(1))) goto label_21;
	}
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	goto label_18;
	}
label_21:;
	{
	LINE_NUMBER(525);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus) != 0) goto label_24;
	}
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(527);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	goto label_18;
	}
label_24:;
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(530);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(535);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_28;
	}
	{
	LINE_NUMBER(536);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes) == 0) goto label_30;
	}
	{
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(538);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	goto label_33;
	}
label_30:;
	{
	LINE_NUMBER(540);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	goto label_33;
	}
label_28:;
	{
	LINE_NUMBER(543);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes) == 0) goto label_35;
	}
	{
	LINE_NUMBER(544);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(545);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	goto label_33;
	}
label_35:;
	{
	LINE_NUMBER(547);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(548);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	}
label_33:;
	{
	LINE_NUMBER(551);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_39;
	}
	{
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2) == 0) goto label_40;
	}
	{
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes) == 0) goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	jint temp1 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	jint temp2 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	jint temp3 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, ((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height));
	if (temp3 == 0) goto label_41;
	}
	{
	LINE_NUMBER(553);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	goto label_39;
	}
label_41:;
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	jint temp1 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	jint temp2 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	jint temp3 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, ((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height));
	if (temp3 == 0) goto label_39;
	}
	{
	LINE_NUMBER(555);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	}
label_39:;
	{
	LINE_NUMBER(559);
	M_nro_mScreen_updateKey(ctx, (frame[0].o));
	LINE_NUMBER(560);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	}
label_3:;
	LINE_NUMBER(562);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_LoginScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:perform", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(566);
	switch((frame[1].i)) {
		case 13: goto label_13;
		case 101: goto label_14;
		case 1000: goto label_0;
		case 1001: goto label_15;
		case 1002: goto label_16;
		case 1003: goto label_17;
		case 1004: goto label_18;
		case 1005: goto label_4;
		case 2000: goto label_19;
		case 2001: goto label_20;
		case 2002: goto label_21;
		case 2003: goto label_22;
		case 2004: goto label_23;
		case 2008: goto label_24;
		case 4000: goto label_25;
		case 10021: goto label_26;
		case 10041: goto label_27;
		case 10042: goto label_28;
		default: goto label_29;
	}
	}
label_13:;
	{
	LINE_NUMBER(568);
	switch((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec)) {
		case 1: goto label_30;
		case 2: goto label_31;
		case 3: goto label_32;
		case 4: goto label_31;
		case 5: goto label_32;
		case 6: goto label_33;
		default: goto label_31;
	}
	}
label_30:;
	{
	LINE_NUMBER(570);
	SM_lib_mSystem_callHotlineJava(ctx);
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return;
	}
label_31:;
	LINE_NUMBER(575);
	popStackFrame(ctx);
	INST_RETURN();
label_32:;
	LINE_NUMBER(578);
	popStackFrame(ctx);
	INST_RETURN();
label_33:;
	LINE_NUMBER(580);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(583);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(584);
	popStackFrame(ctx);
	return;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(587);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_platformRequest_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_platformRequest_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, (frame[2].o))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(590);
	goto label_36;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(588);
	frame[4].o = sp[0].o;
	LINE_NUMBER(589);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
label_36:;
	{
	LINE_NUMBER(592);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return;
	}
label_15:;
	{
	LINE_NUMBER(595);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(596);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes = (jint(0));
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return;
	}
label_16:;
	{
	LINE_NUMBER(599);
	SM_main_GameCanvas_startWaitDlg(ctx);
	LINE_NUMBER(601);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_43;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_43;
	}
	{
	LINE_NUMBER(602);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_isLogin2 = (jint(1));
	LINE_NUMBER(603);
	SM_main_GameCanvas_connect(ctx);
	LINE_NUMBER(604);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_setClientType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_setClientType])(ctx, sp[0].o);
	LINE_NUMBER(605);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte])(ctx, sp[0].o, (frame[4].o), (((jobject) createStringLiteral(ctx, u8""_j))), (((jobject) createStringLiteral(ctx, u8"2.5.2"_j))), (jint(1)));
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return;
	}
label_43:;
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_login2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_login2_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return;
	}
label_17:;
	{
	LINE_NUMBER(612);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_goToWebForPassword;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(615);
	SM_nro_ServerListScreen_doUpdateServer(ctx);
	LINE_NUMBER(616);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return;
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(620);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_platformRequest_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_platformRequest_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"http://ngocrongonline.com"_j))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(621);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(622);
	frame[5].o = sp[0].o;
	LINE_NUMBER(623);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return;
	}
label_19:;
	LINE_NUMBER(627);
	popStackFrame(ctx);
	INST_RETURN();
label_20:;
	{
	LINE_NUMBER(629);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isCheck) == 0) goto label_55;
	}
	{
	LINE_NUMBER(630);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isCheck = (jint(0));
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return;
	}
label_55:;
	{
	LINE_NUMBER(634);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isCheck = (jint(1));
	LINE_NUMBER(635);
	popStackFrame(ctx);
	return;
	}
label_21:;
	{
	LINE_NUMBER(637);
	frame[5].o = (frame[0].o);
	LINE_NUMBER(638);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_60;
	}
	{
	LINE_NUMBER(639);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_userBlank;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	goto label_29;
	}
label_60:;
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, sp[0].o);
	LINE_NUMBER(642);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_63;
	}
	{
	LINE_NUMBER(643);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_passwordBlank;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	goto label_29;
	}
label_63:;
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 < (jint(5))) goto label_65;
	}
	{
	LINE_NUMBER(646);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(648);
	if ((clinit_nro_mResources(ctx), (jint)SF_nro_mResources_language) != (jint(2))) goto label_8;
	}
	{
	LINE_NUMBER(649);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == (jint(-1))) goto label_69;
	}
	{
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp0 != (jint(-1))) goto label_70;
	}
label_69:;
	{
	LINE_NUMBER(650);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_emailInvalid;
	frame[3].o = sp[0].o;
	}
label_70:;
	{
	LINE_NUMBER(653);
	frame[6].i = (jint(0));
	goto label_72;
	}
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(656);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[5].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, sp[0].o);
	LINE_NUMBER(657);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[5].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp1 < (8)) goto label_74;
	}
	{
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[5].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 > (12)) goto label_74;
	}
	{
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[5].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0"_j))));
	if (temp0 != 0) goto label_75;
	}
	{
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[5].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"84"_j))));
	if (temp0 != 0) goto label_75;
	}
label_74:;
	{
	LINE_NUMBER(658);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_phoneInvalid;
	frame[3].o = sp[0].o;
	}
label_75:;
	{
	LINE_NUMBER(661);
	frame[6].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(668);
	goto label_72;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(662);
	frame[7].o = sp[0].o;
	LINE_NUMBER(663);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == (jint(-1))) goto label_77;
	}
	{
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp0 != (jint(-1))) goto label_78;
	}
label_77:;
	{
	LINE_NUMBER(664);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_emailInvalid;
	frame[3].o = sp[0].o;
	}
label_78:;
	{
	LINE_NUMBER(667);
	frame[6].i = (jint(0));
	}
label_72:;
	{
	LINE_NUMBER(671);
	if ((frame[3].o) == nullptr) goto label_79;
	}
	{
	LINE_NUMBER(672);
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, (frame[3].o));
	goto label_81;
	}
label_79:;
	{
	LINE_NUMBER(674);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_plsCheckAcc;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp += 2;
	if ((frame[6].i) == 0) goto label_82;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_phone;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_83;
	}
label_82:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_email;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_83:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[2].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_password;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[2].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	sp[2].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	clinit_nro_Command(ctx);
	sp[2].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_ACCEPT;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[2].o, sp[3].o, (frame[0].o), (4000), (jobject(nullptr)));
	sp[3].o = checkCast(ctx, &class_nro_Command, (jobject(nullptr)));
	clinit_nro_Command(ctx);
	sp[4].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[5].o = (jobject)SF_nro_mResources_NO;
	clinit_main_GameCanvas(ctx);
	sp[6].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[4].o, sp[5].o, sp[6].o, (8882), (jobject(nullptr)));
	((func_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_81:;
	{
	LINE_NUMBER(677);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = sp[0].o;
	LINE_NUMBER(678);
	popStackFrame(ctx);
	return;
	}
label_65:;
	{
	LINE_NUMBER(681);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_accTooShort;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(684);
	goto label_29;
	}
label_22:;
	{
	LINE_NUMBER(687);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vMenu Login"_j))));
	frame[6].o = sp[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_registerNewAcc;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (2004), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(688);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2) != 0) goto label_88;
	}
	{
	LINE_NUMBER(689);
	sp[0].o = frame[6].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_selectServer;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (1004), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_88:;
	{
	LINE_NUMBER(692);
	sp[0].o = frame[6].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_forgetPass;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (1003), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(693);
	sp[0].o = frame[6].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_website;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (1005), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(694);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"lowGraphic"_j))));
	if (temp0 != (jint(1))) goto label_92;
	}
	{
	LINE_NUMBER(695);
	sp[0].o = frame[6].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_increase_vga;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (10041), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_94;
	}
label_92:;
	{
	LINE_NUMBER(697);
	sp[0].o = frame[6].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_decrease_vga;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (10042), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_94:;
	{
	LINE_NUMBER(700);
	sp[0].o = frame[6].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_EXIT;
	clinit_main_GameCanvas(ctx);
	sp[3].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (8885), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(701);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Menu_startAt_nro_MyVector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Menu_startAt_nro_MyVector])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return;
	}
label_23:;
	{
	LINE_NUMBER(704);
	((func_nro_LoginScr_actRegister) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_LoginScr_actRegister])(ctx, (frame[0].o));
	LINE_NUMBER(705);
	popStackFrame(ctx);
	return;
	}
label_24:;
	{
	LINE_NUMBER(707);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"acc"_j));
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(708);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pass"_j));
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(709);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	if (sp[0].o == nullptr) goto label_100;
	}
	{
	LINE_NUMBER(710);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(711);
	popStackFrame(ctx);
	return;
	}
label_100:;
	{
	LINE_NUMBER(713);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_init) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_init])(ctx, sp[0].o);
	LINE_NUMBER(714);
	popStackFrame(ctx);
	return;
	}
label_25:;
	{
	LINE_NUMBER(716);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(717);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_CONNECTING;
	SM_main_GameCanvas_startWaitDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(718);
	SM_main_GameCanvas_connect(ctx);
	LINE_NUMBER(719);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_REGISTERING;
	SM_main_GameCanvas_startWaitDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(720);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	frame[7].o = sp[0].o;
	LINE_NUMBER(721);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(722);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(723);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"passAo"_j))));
	LINE_NUMBER(724);
	((func_nro_Service_requestRegister_java_lang_String_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_nro_Service_requestRegister_java_lang_String_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[7].o), (frame[3].o), (frame[8].o), (frame[9].o), (((jobject) createStringLiteral(ctx, u8"2.5.2"_j))));
	LINE_NUMBER(725);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))), (frame[3].o));
	LINE_NUMBER(726);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pass"_j));
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(727);
	goto label_29;
	}
label_26:;
	{
	LINE_NUMBER(729);
	M_nro_LoginScr_actRegisterLeft(ctx, (frame[0].o));
	LINE_NUMBER(730);
	popStackFrame(ctx);
	return;
	}
label_27:;
	{
	LINE_NUMBER(732);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"lowGraphic"_j))), (jint(0)));
	LINE_NUMBER(733);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_plsRestartGame;
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8885), (jobject(nullptr)));
	LINE_NUMBER(734);
	popStackFrame(ctx);
	return;
	}
label_28:;
	{
	LINE_NUMBER(736);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"lowGraphic"_j))), (jint(1)));
	LINE_NUMBER(737);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_plsRestartGame;
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8885), (jobject(nullptr)));
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return;
	}
label_29:;
	LINE_NUMBER(741);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_LoginScr_actRegisterLeft(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:actRegisterLeft", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(744);
	if (((jint)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isLogin2) == 0) goto label_1;
	}
	{
	LINE_NUMBER(745);
	((func_nro_LoginScr_doLogin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_LoginScr_doLogin])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(747);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes = (jint(0));
	LINE_NUMBER(748);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(749);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(750);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(752);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_LoginScr_actRegister(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:actRegister", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(755);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(756);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_regNote;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(757);
	((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_isRes = (jint(1));
	LINE_NUMBER(758);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfPass;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(759);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(760);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_LoginScr_backToRegister(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:backToRegister", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_LoginScr(ctx);
	{
	LINE_NUMBER(763);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	LINE_NUMBER(764);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (((jint)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_isLogin2) == 0) goto label_2;
	}
	{
	LINE_NUMBER(765);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_note;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_YES;
	clinit_main_GameCanvas(ctx);
	sp[3].o = (jobject)SF_main_GameCanvas_panel;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (10019), (jobject(nullptr)));
	clinit_nro_Command(ctx);
	sp[2].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_NO;
	clinit_main_GameCanvas(ctx);
	sp[4].o = (jobject)SF_main_GameCanvas_panel;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[2].o, sp[3].o, sp[4].o, (10020), (jobject(nullptr)));
	SM_main_GameCanvas_startYesNoDlg_java_lang_String_nro_Command_nro_Command(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(767);
	clinit_nro_ServerScr(ctx);
	SF_nro_ServerScr_isShowSv_HaveChar = (jint(0));
	LINE_NUMBER(768);
	SM_main_GameCanvas_doResetToLoginScr(ctx);
	}
label_4:;
	LINE_NUMBER(770);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_LoginScr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/LoginScr:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_LoginScr(ctx);
	{
	LINE_NUMBER(17);
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_isContinueToLogin = (jint(0));
	LINE_NUMBER(54);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (9);
	frame[0].o = sp[0].o;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_LoginScr[] {
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
	(void *) M_nro_LoginScr_switchToMe,
	(void *) M_nro_LoginScr_keyPress_int,
	(void *) M_nro_LoginScr_update,
	(void *) M_nro_LoginScr_updateKey,
	(void *) M_nro_LoginScr_paint_lib_mGraphics,
	(void *) M_nro_LoginScr_perform_int_java_lang_Object,
	(void *) M_nro_LoginScr_doLogin,
	(void *) M_nro_LoginScr_savePass,
	(void *) M_nro_LoginScr_updatePosition,
	(void *) M_nro_LoginScr_actRegisterLeft,
	(void *) M_nro_LoginScr_actRegister,
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
	{ "doLogin", "()V" },
	{ "savePass", "()V" },
	{ "updatePosition", "()V" },
	{ "actRegisterLeft", "()V" },
	{ "actRegister", "()V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "tfUser", &class_lib_input_TField, offsetof(nro_LoginScr, F_tfUser), "Llib/input/TField;", 1 },
	{ "tfPass", &class_lib_input_TField, offsetof(nro_LoginScr, F_tfPass), "Llib/input/TField;", 1 },
	{ "isContinueToLogin", &class_boolean, (intptr_t) &SF_nro_LoginScr_isContinueToLogin, "Z", 9 },
	{ "focus", &class_int, offsetof(nro_LoginScr, F_focus), "I", 2 },
	{ "wC", &class_int, offsetof(nro_LoginScr, F_wC), "I", 2 },
	{ "yL", &class_int, offsetof(nro_LoginScr, F_yL), "I", 2 },
	{ "defYL", &class_int, offsetof(nro_LoginScr, F_defYL), "I", 2 },
	{ "isCheck", &class_boolean, offsetof(nro_LoginScr, F_isCheck), "Z", 2 },
	{ "isRes", &class_boolean, offsetof(nro_LoginScr, F_isRes), "Z", 2 },
	{ "cmdLogin", &class_nro_Command, offsetof(nro_LoginScr, F_cmdLogin), "Lnro/Command;", 2 },
	{ "cmdFogetPass", &class_nro_Command, offsetof(nro_LoginScr, F_cmdFogetPass), "Lnro/Command;", 2 },
	{ "cmdRes", &class_nro_Command, offsetof(nro_LoginScr, F_cmdRes), "Lnro/Command;", 2 },
	{ "cmdMenu", &class_nro_Command, offsetof(nro_LoginScr, F_cmdMenu), "Lnro/Command;", 2 },
	{ "cmdBackFromRegister", &class_nro_Command, offsetof(nro_LoginScr, F_cmdBackFromRegister), "Lnro/Command;", 2 },
	{ "cmdBack", &class_nro_Command, offsetof(nro_LoginScr, F_cmdBack), "Lnro/Command;", 2 },
	{ "isUpdateAll", &class_boolean, (intptr_t) &SF_nro_LoginScr_isUpdateAll, "Z", 9 },
	{ "isUpdateData", &class_boolean, (intptr_t) &SF_nro_LoginScr_isUpdateData, "Z", 9 },
	{ "isUpdateMap", &class_boolean, (intptr_t) &SF_nro_LoginScr_isUpdateMap, "Z", 9 },
	{ "isUpdateSkill", &class_boolean, (intptr_t) &SF_nro_LoginScr_isUpdateSkill, "Z", 9 },
	{ "isUpdateItem", &class_boolean, (intptr_t) &SF_nro_LoginScr_isUpdateItem, "Z", 9 },
	{ "serverName", &class_java_lang_String, (intptr_t) &SF_nro_LoginScr_serverName, "Ljava/lang/String;", 9 },
	{ "imgTitle", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_LoginScr_imgTitle, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "timeLogin", &class_short, (intptr_t) &SF_nro_LoginScr_timeLogin, "S", 9 },
	{ "lastTimeLogin", &class_long, (intptr_t) &SF_nro_LoginScr_lastTimeLogin, "J", 9 },
	{ "currTimeLogin", &class_long, (intptr_t) &SF_nro_LoginScr_currTimeLogin, "J", 9 },
	{ "yt", &class_int, offsetof(nro_LoginScr, F_yt), "I", 2 },
	{ "cmdOK", &class_nro_Command, offsetof(nro_LoginScr, F_cmdOK), "Lnro/Command;", 2 },
	{ "xLog", &class_int, offsetof(nro_LoginScr, F_xLog), "I", 2 },
	{ "yLog", &class_int, offsetof(nro_LoginScr, F_yLog), "I", 2 },
	{ "E", &class_int, offsetof(nro_LoginScr, F_E), "I", 2 },
	{ "tipid", &class_int, offsetof(nro_LoginScr, F_tipid), "I", 2 },
	{ "isLogin2", &class_boolean, offsetof(nro_LoginScr, F_isLogin2), "Z", 1 },
	{ "v", &class_int, offsetof(nro_LoginScr, F_v), "I", 2 },
	{ "g", &class_int, offsetof(nro_LoginScr, F_g), "I", 2 },
	{ "ylogo", &class_int, offsetof(nro_LoginScr, F_ylogo), "I", 2 },
	{ "dir", &class_int, offsetof(nro_LoginScr, F_dir), "I", 2 },
	{ "cmdCallHotline", &class_nro_Command, offsetof(nro_LoginScr, F_cmdCallHotline), "Lnro/Command;", 2 },
	{ "lastW", &class_int, offsetof(nro_LoginScr, F_lastW), "I", 2 },
	{ "lastH", &class_int, offsetof(nro_LoginScr, F_lastH), "I", 2 },
};

static MethodMetadata methods[] {
	{ "switchToMe", (intptr_t) M_nro_LoginScr_switchToMe, VTABLE_nro_LoginScr_switchToMe, "()V", 17 },
	{ "<init>", (intptr_t) init_nro_LoginScr, 0, "()V", 1 },
	{ "doLogin", (intptr_t) M_nro_LoginScr_doLogin, VTABLE_nro_LoginScr_doLogin, "()V", 17 },
	{ "savePass", (intptr_t) M_nro_LoginScr_savePass, VTABLE_nro_LoginScr_savePass, "()V", 17 },
	{ "update", (intptr_t) M_nro_LoginScr_update, VTABLE_nro_LoginScr_update, "()V", 17 },
	{ "keyPress", (intptr_t) M_nro_LoginScr_keyPress_int, VTABLE_nro_LoginScr_keyPress_int, "(I)V", 17 },
	{ "updatePosition", (intptr_t) M_nro_LoginScr_updatePosition, VTABLE_nro_LoginScr_updatePosition, "()V", 1 },
	{ "paint", (intptr_t) M_nro_LoginScr_paint_lib_mGraphics, VTABLE_nro_LoginScr_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "updateKey", (intptr_t) M_nro_LoginScr_updateKey, VTABLE_nro_LoginScr_updateKey, "()V", 17 },
	{ "perform", (intptr_t) M_nro_LoginScr_perform_int_java_lang_Object, VTABLE_nro_LoginScr_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "actRegisterLeft", (intptr_t) M_nro_LoginScr_actRegisterLeft, VTABLE_nro_LoginScr_actRegisterLeft, "()V", 2 },
	{ "actRegister", (intptr_t) M_nro_LoginScr_actRegister, VTABLE_nro_LoginScr_actRegister, "()V", 17 },
	{ "backToRegister", (intptr_t) SM_nro_LoginScr_backToRegister, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_LoginScr, 0, "()V", 8 },
};

Class class_nro_LoginScr{
		.nativeName = (intptr_t) "nro/LoginScr",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_LoginScr),
		.classVtable = (intptr_t) vtable_nro_LoginScr,
		.staticInitializer = (intptr_t) clinit_nro_LoginScr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_LoginScr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 39,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_LoginScr = registerClass(&class_nro_LoginScr);

}

