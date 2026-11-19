#include "nro/ServerListScreen.h"
#include "nro/GameScr.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "lib/network/Session_ME.h"
#include "nro/IActionListener.h"
#include "java/lang/Boolean.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "java/lang/StringBuffer.h"
#include "nro/Menu.h"
#include "java/lang/Short.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/io/IOException.h"
#include "nro/SplashScr.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "java/lang/Throwable.h"
#include "lib/mSystem.h"
#include "java/lang/Math.h"
#include "lib/mFont.h"
#include "nro/ServerListScreen.h"
#include "java/lang/Exception.h"
#include "nro/ServerScr.h"
#include "nro/Dialog.h"
#include "lib/mGraphics.h"
#include "java/lang/Byte.h"
#include "nro/InfoDlg.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInputStream.h"
#include "nro/EffectManager.h"
#include "java/io/ByteArrayInputStream.h"
#include "java/io/OutputStream.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "java/io/DataOutputStream.h"
#include "main/GameMidlet.h"
#include "nro/Rms.h"
#include "nro/LoginScr.h"
#include "nro/Char.h"
#include "java/lang/System.h"
#include "java/io/ByteArrayOutputStream.h"

extern "C" {

jobject SF_nro_ServerListScreen_nameServer;
jobject SF_nro_ServerListScreen_address;
jbyte SF_nro_ServerListScreen_serverPriority;
jobject SF_nro_ServerListScreen_port;
jint SF_nro_ServerListScreen_selected;
jbool SF_nro_ServerListScreen_isWait;
jobject SF_nro_ServerListScreen_language;
jobject SF_nro_ServerListScreen_typeClass;
jobject SF_nro_ServerListScreen_listChar;
jbool SF_nro_ServerListScreen_isHaveChar;
jobject SF_nro_ServerListScreen_typeSv;
jobject SF_nro_ServerListScreen_isNew;
jobject SF_nro_ServerListScreen_ACTIVE_IP;
jint SF_nro_ServerListScreen_ACTIVE_PORT;
jbool SF_nro_ServerListScreen_IS_LOCAL;
jobject SF_nro_ServerListScreen_GATEWAY_HOST;
jint SF_nro_ServerListScreen_GATEWAY_PORT;
jobject SF_nro_ServerListScreen_GATEWAY_HTTP_PATH;
jbool SF_nro_ServerListScreen_GATEWAY_SSL;
jobject SF_nro_ServerListScreen_IP_VPS;
jobject SF_nro_ServerListScreen_IP_LOCAL;
jobject SF_nro_ServerListScreen_smartPhoneVN;
jobject SF_nro_ServerListScreen_javaVN;
jobject SF_nro_ServerListScreen_smartPhoneIn;
jobject SF_nro_ServerListScreen_javaIn;
jobject SF_nro_ServerListScreen_smartPhoneE;
jobject SF_nro_ServerListScreen_javaE;
jobject SF_nro_ServerListScreen_linkDefault;
jbool SF_nro_ServerListScreen_isHaveChar1;
jobject SF_nro_ServerListScreen_l;
jbool SF_nro_ServerListScreen_waitToLogin;
jint SF_nro_ServerListScreen_lY;
jlong SF_nro_ServerListScreen_count_reConnect;
jobject SF_nro_ServerListScreen_RMS_NRlink;
jint SF_nro_ServerListScreen_ipSelect;
jbool SF_nro_ServerListScreen_bigOk;
jint SF_nro_ServerListScreen_flagServer;
jint SF_nro_ServerListScreen_percent;
jint SF_nro_ServerListScreen_countDieConnect;
jbool SF_nro_ServerListScreen_isGetData;
jobject SF_nro_ServerListScreen_cmdUpdateServer;
jobject SF_nro_ServerListScreen_cmdDeleteRMS;
jint SF_nro_ServerListScreen_testConnect;
jbool SF_nro_ServerListScreen_loadScreen;
jbool SF_nro_ServerListScreen_isAutoConect;
jobject SF_nro_ServerListScreen_RMS_svselect;
jobject SF_nro_ServerListScreen_RMS_NR_Extralink;

void mark_nro_ServerListScreen(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ServerListScreen_nameServer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_nameServer)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_nameServer, mark, depth + 1);
		if (SF_nro_ServerListScreen_address)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_address)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_address, mark, depth + 1);
		if (SF_nro_ServerListScreen_port)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_port)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_port, mark, depth + 1);
		if (SF_nro_ServerListScreen_language)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_language)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_language, mark, depth + 1);
		if (SF_nro_ServerListScreen_typeClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_typeClass)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_typeClass, mark, depth + 1);
		if (SF_nro_ServerListScreen_listChar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_listChar)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_listChar, mark, depth + 1);
		if (SF_nro_ServerListScreen_typeSv)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_typeSv)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_typeSv, mark, depth + 1);
		if (SF_nro_ServerListScreen_isNew)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_isNew)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_isNew, mark, depth + 1);
		if (SF_nro_ServerListScreen_ACTIVE_IP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_ACTIVE_IP)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_ACTIVE_IP, mark, depth + 1);
		if (SF_nro_ServerListScreen_GATEWAY_HOST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_GATEWAY_HOST)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_GATEWAY_HOST, mark, depth + 1);
		if (SF_nro_ServerListScreen_GATEWAY_HTTP_PATH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_GATEWAY_HTTP_PATH)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_GATEWAY_HTTP_PATH, mark, depth + 1);
		if (SF_nro_ServerListScreen_IP_VPS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_IP_VPS)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_IP_VPS, mark, depth + 1);
		if (SF_nro_ServerListScreen_IP_LOCAL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_IP_LOCAL)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_IP_LOCAL, mark, depth + 1);
		if (SF_nro_ServerListScreen_smartPhoneVN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_smartPhoneVN)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_smartPhoneVN, mark, depth + 1);
		if (SF_nro_ServerListScreen_javaVN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_javaVN)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_javaVN, mark, depth + 1);
		if (SF_nro_ServerListScreen_smartPhoneIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_smartPhoneIn)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_smartPhoneIn, mark, depth + 1);
		if (SF_nro_ServerListScreen_javaIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_javaIn)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_javaIn, mark, depth + 1);
		if (SF_nro_ServerListScreen_smartPhoneE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_smartPhoneE)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_smartPhoneE, mark, depth + 1);
		if (SF_nro_ServerListScreen_javaE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_javaE)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_javaE, mark, depth + 1);
		if (SF_nro_ServerListScreen_linkDefault)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_linkDefault)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_linkDefault, mark, depth + 1);
		if (SF_nro_ServerListScreen_l)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_l)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_l, mark, depth + 1);
		if (SF_nro_ServerListScreen_RMS_NRlink)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_RMS_NRlink)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_RMS_NRlink, mark, depth + 1);
		if (SF_nro_ServerListScreen_cmdUpdateServer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_cmdUpdateServer)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_cmdUpdateServer, mark, depth + 1);
		if (SF_nro_ServerListScreen_cmdDeleteRMS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_cmdDeleteRMS)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_cmdDeleteRMS, mark, depth + 1);
		if (SF_nro_ServerListScreen_RMS_svselect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_RMS_svselect)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_RMS_svselect, mark, depth + 1);
		if (SF_nro_ServerListScreen_RMS_NR_Extralink)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerListScreen_RMS_NR_Extralink)->clazz)->markFunction)((jobject) SF_nro_ServerListScreen_RMS_NR_Extralink, mark, depth + 1);
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
	auto self = (nro_ServerListScreen *) object;
	if (self->F_cmd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmd)->clazz)->markFunction)((jobject) self->F_cmd, mark, depth + 1);
	if (self->F_cmdCallHotline)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdCallHotline)->clazz)->markFunction)((jobject) self->F_cmdCallHotline, mark, depth + 1);
}

void init_nro_ServerListScreen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(122);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(314);
	((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_lastW = (jint(-1));
	LINE_NUMBER(315);
	((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_lastH = (jint(-1));
	LINE_NUMBER(123);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"com.sonyericsson.imei"_j))));
	LINE_NUMBER(124);
	M_nro_ServerListScreen_initCommand(ctx, (frame[0].o));
	LINE_NUMBER(125);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_6;
	}
	{
	LINE_NUMBER(126);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_selected = (jint(0));
	LINE_NUMBER(127);
	M_nro_ServerListScreen_processInput(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(130);
	SM_nro_GameScr_SetNum_int_int(ctx, (jint(-1)), (jint(-1)));
	LINE_NUMBER(131);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = (100);
	LINE_NUMBER(132);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmy = (200);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"G\u1ecdi hotline"_j))), (frame[0].o), (13), (jobject(nullptr)));
	((nro_ServerListScreen *) NULL_CHECK(sp[0].o))->F_cmdCallHotline = (jref) sp[1].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (75));
	LINE_NUMBER(136);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_16;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isTouch;
	if ((--sp)->i != 0) goto label_16;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (20));
	goto label_12;
	}
label_16:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (8);
	}
label_12:;
	{
	LINE_NUMBER(143);
	SM_nro_ServerListScreen_createDeleteRMS(ctx);
	LINE_NUMBER(145);
	frame[1].i = (jint(0));
	LINE_NUMBER(152);
	if ((frame[1].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(153);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_javaE;
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_linkDefault = sp[0].o;
	LINE_NUMBER(154);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_23;
	}
	{
	LINE_NUMBER(155);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_javaE;
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_linkDefault = sp[0].o;
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(157);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_smartPhoneE;
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_linkDefault = sp[0].o;
	goto label_25;
	}
label_20:;
	{
	LINE_NUMBER(160);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_javaVN;
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_linkDefault = sp[0].o;
	LINE_NUMBER(161);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_27;
	}
	{
	LINE_NUMBER(162);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_javaVN;
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_linkDefault = sp[0].o;
	goto label_25;
	}
label_27:;
	{
	LINE_NUMBER(164);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_smartPhoneVN;
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_linkDefault = sp[0].o;
	}
label_25:;
	LINE_NUMBER(167);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ServerListScreen_createDeleteRMS(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:createDeleteRMS", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	{
	LINE_NUMBER(170);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(171);
	clinit_nro_Command(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_xoadulieu;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_serverScreen;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, (14), (jobject(nullptr)));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_cmdDeleteRMS = sp[0].o;
	LINE_NUMBER(172);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_w = (80);
	LINE_NUMBER(173);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_h = (24);
	LINE_NUMBER(174);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (80));
	LINE_NUMBER(175);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (24));
	}
label_1:;
	LINE_NUMBER(177);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_initCommand(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:initCommand", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay = (jint(0));
	LINE_NUMBER(183);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))));
	frame[1].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(184);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_5;
	}
	LINE_NUMBER(185);
	goto label_7;
label_3:;
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_5;
	}
	LINE_NUMBER(188);
	goto label_7;
label_5:;
	{
	LINE_NUMBER(191);
	((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(194);
	frame[2].i = (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel);
	LINE_NUMBER(195);
	frame[3].i = (jint(1));
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_Command, ((jint(4)) + ((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay)));
	((nro_ServerListScreen *) NULL_CHECK(sp[0].o))->F_cmd = (jref) sp[1].o;
	LINE_NUMBER(197);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_hh;
	jint temp1 = 15;
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	frame[4].i = ((temp0 - (temp1 * (((jarray) nullCheck(ctx, sp[0].o))->length))) + (28));
	LINE_NUMBER(199);
	frame[5].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_14;
	}
	{
	LINE_NUMBER(200);
	switch((frame[5].i)) {
		case 0: goto label_16;
		case 1: goto label_17;
		case 2: goto label_18;
		case 3: goto label_19;
		case 4: goto label_20;
		default: goto label_21;
	}
	}
label_16:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	jint temp0 = jint(0);
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[0].o), (jint(3)), (jobject(nullptr)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(203);
	if ((frame[1].o) != nullptr) goto label_23;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_playNew;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(205);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_choitiep;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	goto label_21;
	}
label_23:;
	{
	LINE_NUMBER(208);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_playNew;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(210);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_choitiep;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	goto label_21;
	}
label_27:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_playAcc;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(215);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_caption;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= (23)) goto label_21;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp[1].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_caption;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)), (23));
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(217);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(218);
	sp[0].o = frame[6].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_Command *) NULL_CHECK((frame[6].o)))->F_caption;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(219);
	goto label_21;
	}
label_17:;
	{
	LINE_NUMBER(223);
	if (((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay) != (jint(1))) goto label_36;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	jint temp0 = jint(1);
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[0].o), (10100), (jobject(nullptr)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(225);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_playNew;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	goto label_21;
	}
label_36:;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	jint temp0 = jint(1);
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_change_account;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (7), (jobject(nullptr)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(229);
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(231);
	if (((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay) != (jint(1))) goto label_40;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	jint temp0 = jint(2);
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_change_account;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (7), (jobject(nullptr)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_21;
	}
label_40:;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	jint temp0 = jint(2);
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[0].o), (17), (jobject(nullptr)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(236);
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(238);
	if (((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay) != (jint(1))) goto label_43;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	jint temp0 = jint(3);
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[0].o), (17), (jobject(nullptr)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_21;
	}
label_43:;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	jint temp0 = jint(3);
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_option;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (8), (jobject(nullptr)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(243);
	goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	jint temp0 = jint(4);
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_option;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (8), (jobject(nullptr)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_21:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_y = (frame[4].i);
	LINE_NUMBER(249);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((func_nro_Command_setType) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))))->vtable)[VTABLE_nro_Command_setType])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))));
	LINE_NUMBER(250);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i));
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_w;
	sp[1].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((temp0 - ((jint)((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i)))))->F_w)) / (jint(2)));
	LINE_NUMBER(251);
	INST_IINC(4, 30);
	LINE_NUMBER(199);
	INST_IINC(5, 1);
	goto label_13;
	}
label_14:;
	LINE_NUMBER(254);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ServerListScreen_doUpdateServer(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:doUpdateServer", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	{
	LINE_NUMBER(257);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_linkDefault;
	SM_nro_ServerListScreen_getServerList_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ServerListScreen_getServerList_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:getServerList", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))), (jint(0)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(262);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8">>> getServerList= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(263);
	jint temp0 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(2))))));
	SM_nro_mResources_loadLanguague_byte(ctx, temp0);
	LINE_NUMBER(264);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(2))));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_nameServer = sp[0].o;
	LINE_NUMBER(265);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(2))));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_address = sp[0].o;
	LINE_NUMBER(266);
	sp[0].o = (jobject) createArray(ctx, &class_short, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(2))));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_port = sp[0].o;
	LINE_NUMBER(267);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(2))));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_language = sp[0].o;
	LINE_NUMBER(268);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(2))));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_typeSv = sp[0].o;
	LINE_NUMBER(269);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(2))));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isNew = sp[0].o;
	LINE_NUMBER(271);
	frame[2].i = (jint(0));
	}
label_26:;
	{
	if ((frame[2].i) >= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(2)))) goto label_27;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(273);
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8":"_j))), (jint(0)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(274);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0))));
	LINE_NUMBER(276);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= (jint(3))) goto label_32;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))), (((jobject) createStringLiteral(ctx, u8"ws"_j))));
	if (temp0 != 0) goto label_33;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))), (((jobject) createStringLiteral(ctx, u8"wss"_j))));
	if (temp0 == 0) goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(277);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_address;
	jint temp0 = frame[2].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(2)))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(278);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_port;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)SM_java_lang_Short_parseShort_java_lang_String_R_short(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(3)))));
	ARRAY_ACCESS(jshort, sp[0].o, temp1) = temp2;
	LINE_NUMBER(279);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_language;
	jint temp3 = frame[2].i;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(4)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(4)))));
	jint temp4 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, sp[1].o);
	ARRAY_ACCESS(jbyte, sp[0].o, temp3) = temp4;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(281);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(5)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(5)))));
	jint temp1 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, sp[1].o);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(284);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(282);
	frame[5].o = sp[0].o;
	LINE_NUMBER(283);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)) = (jint(0));
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(286);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_isNew;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (6))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (6))));
	jint temp1 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, sp[1].o);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(289);
	goto label_37;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(287);
	frame[5].o = sp[0].o;
	LINE_NUMBER(288);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_isNew;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)) = (jint(0));
	LINE_NUMBER(289);
	goto label_37;
	}
label_32:;
	{
	LINE_NUMBER(291);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_address;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1))));
	LINE_NUMBER(292);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_port;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_java_lang_Short_parseShort_java_lang_String_R_short(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(2)))));
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = temp1;
	LINE_NUMBER(293);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_language;
	jint temp2 = frame[2].i;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(3)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(3)))));
	jint temp3 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, sp[1].o);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = temp3;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(295);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(4)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(4)))));
	jint temp1 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, sp[1].o);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(298);
	goto label_12;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(296);
	frame[5].o = sp[0].o;
	LINE_NUMBER(297);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)) = (jint(0));
	}
label_12:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(300);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_isNew;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(5)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(5)))));
	jint temp1 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, sp[1].o);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(303);
	goto label_37;
label_14:;
	{
	sp -= 1;
	LINE_NUMBER(301);
	frame[5].o = sp[0].o;
	LINE_NUMBER(302);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_isNew;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)) = (jint(0));
	}
label_37:;
	{
	LINE_NUMBER(305);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_address;
	jint temp0 = frame[2].i;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_ACTIVE_IP;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(306);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_port;
	ARRAY_ACCESS(jshort, sp[0].o, (frame[2].i)) = (jshort((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ACTIVE_PORT)));
	LINE_NUMBER(271);
	INST_IINC(2, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(309);
	jint temp0 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1))))));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_serverPriority = temp0;
	LINE_NUMBER(310);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8">>> getServerList= serverPriority: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_serverPriority));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(311);
	SM_nro_ServerListScreen_saveIP(ctx);
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_updatePosition(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:updatePosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(318);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	if (sp[0].o == nullptr) goto label_1;
	}
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_loadScreen;
	if ((--sp)->i != 0) goto label_1;
	{
	LINE_NUMBER(319);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard)) / (jint(2)));
	LINE_NUMBER(320);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_hh;
	sp[1].i = temp0;
	sp += 2;
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_isGetData) == 0) goto label_4;
	}
	INST_BIPUSH(65);
	goto label_5;
label_4:;
	INST_BIPUSH(45);
label_5:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (sp[1].i + sp[2].i), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_mScreen_cmdH)) - (jint(1))));
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = temp0;
	}
label_1:;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(323);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_hh;
	jint temp1 = 15;
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	frame[1].i = ((temp0 - (temp1 * (((jarray) nullCheck(ctx, sp[0].o))->length))) + (28));
	LINE_NUMBER(324);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_y = (frame[1].i);
	LINE_NUMBER(327);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_w;
	sp[1].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((temp0 - ((jint)((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_w)) / (jint(2)));
	}
label_11:;
	{
	LINE_NUMBER(329);
	INST_IINC(1, 30);
	LINE_NUMBER(324);
	INST_IINC(2, 1);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(332);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(333);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_w = (80);
	LINE_NUMBER(334);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_h = (24);
	LINE_NUMBER(335);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (80));
	LINE_NUMBER(336);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (24));
	}
label_15:;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (75));
	LINE_NUMBER(340);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_23;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isTouch;
	if ((--sp)->i != 0) goto label_23;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (20));
	goto label_20;
	}
label_23:;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (8);
	}
label_20:;
	LINE_NUMBER(346);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[32];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:paint", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(349);
	if (((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_lastW) != (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) goto label_5;
	}
	{
	if (((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_lastH) == (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(350);
	((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_lastW = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w);
	LINE_NUMBER(351);
	((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_lastH = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h);
	LINE_NUMBER(352);
	((func_nro_ServerListScreen_updatePosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_ServerListScreen_updatePosition])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(354);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_loadScreen) != 0) goto label_9;
	}
	{
	LINE_NUMBER(355);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(356);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(358);
	SM_main_GameCanvas_paintBGGameScr_lib_mGraphics(ctx, (frame[1].o));
	}
label_12:;
	{
	LINE_NUMBER(361);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"v2.5.2("_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (jint(2));
	jint temp1 = 17;
	jint temp2 = jint(1);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	LINE_NUMBER(364);
	SM_nro_ServerListScreen_paintDeleteData_lib_mGraphics(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(367);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(368);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_testConnect) != 0) goto label_15;
	}
	{
	LINE_NUMBER(369);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[2].o));
	init_java_lang_StringBuffer_java_lang_String(ctx, sp[0].o, sp[1].o);
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_nameServer;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect))));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" disconnect"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, sp[0].o);
	goto label_1;
	}
label_15:;
	{
	LINE_NUMBER(371);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[2].o));
	init_java_lang_StringBuffer_java_lang_String(ctx, sp[0].o, sp[1].o);
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_nameServer;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect))));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" connected"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, sp[0].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(374);
	goto label_17;
label_2:;
	LINE_NUMBER(373);
	INST_ASTORE(2);
label_17:;
	{
	LINE_NUMBER(376);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_isGetData) == 0) goto label_18;
	}
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_loadScreen;
	if ((--sp)->i != 0) goto label_18;
	{
	LINE_NUMBER(377);
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
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(378);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_21;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isTouch;
	if ((--sp)->i != 0) goto label_21;
	{
	LINE_NUMBER(379);
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
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(381);
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
label_20:;
	{
	LINE_NUMBER(384);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_loadScreen) != 0) goto label_23;
	}
	{
	LINE_NUMBER(385);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_bigOk) != 0) goto label_25;
	}
	{
	LINE_NUMBER(386);
	sp[0].o = frame[1].o;
	clinit_nro_LoginScr(ctx);
	sp[1].o = (jobject)SF_nro_LoginScr_imgTitle;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (32)), (jint(3)));
	LINE_NUMBER(387);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_isGetData) == 0) goto label_28;
	}
	{
	LINE_NUMBER(388);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(389);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	}
label_30:;
	{
	LINE_NUMBER(392);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(393);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_downloading_data;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_flagServer));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"%"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) + (24)), (jint(2)));
	LINE_NUMBER(395);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_frBarPow20;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_frBarPow21;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_frBarPow22;
	SM_nro_GameScr_paintOngMauPercent_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_float_float_int_float_lib_mGraphics(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (50)))), (jfloat(((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) + (45)))), (100), (jfloat(100.0f)), (frame[1].o));
	LINE_NUMBER(397);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_frBarPow0;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_frBarPow1;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_frBarPow2;
	SM_nro_GameScr_paintOngMauPercent_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_float_float_int_float_lib_mGraphics(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (50)))), (jfloat(((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) + (45)))), (100), (jfloat((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_flagServer))), (frame[1].o));
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return;
	}
label_28:;
	{
	LINE_NUMBER(402);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	sp[1].o = frame[1].o;
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_taidulieudechoi;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) + (24)), (jint(2)));
	LINE_NUMBER(403);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	if (sp[0].o == nullptr) goto label_37;
	}
	{
	LINE_NUMBER(404);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return;
	}
label_25:;
	{
	LINE_NUMBER(408);
	SM_main_GameCanvas_paintShukiren_int_int_lib_mGraphics(ctx, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh), (frame[1].o));
	goto label_37;
	}
label_23:;
	{
	LINE_NUMBER(412);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_hh;
	jint temp1 = 15;
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	jint temp2 = (temp0 - (temp1 * (((jarray) nullCheck(ctx, sp[0].o))->length))) - (15);
	frame[2].i = temp2;
	if (temp2 >= (25)) goto label_41;
	}
	{
	LINE_NUMBER(413);
	frame[2].i = (25);
	}
label_41:;
	{
	LINE_NUMBER(416);
	clinit_nro_LoginScr(ctx);
	sp[0].o = (jobject)SF_nro_LoginScr_imgTitle;
	if (sp[0].o == nullptr) goto label_43;
	}
	{
	LINE_NUMBER(417);
	sp[0].o = frame[1].o;
	clinit_nro_LoginScr(ctx);
	sp[1].o = (jobject)SF_nro_LoginScr_imgTitle;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), (frame[2].i), (jint(3)));
	}
label_43:;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(421);
	frame[3].i = ((jint(2)) + ((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay));
	LINE_NUMBER(423);
	frame[4].i = (jint(0));
	}
label_47:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_48;
	}
	{
	LINE_NUMBER(424);
	if ((frame[4].i) != (frame[3].i)) goto label_50;
	}
	{
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))) == nullptr) goto label_50;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_caption;
	frame[5].o = sp[0].o;
	LINE_NUMBER(428);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_caption = (jref) (((jobject) createStringLiteral(ctx, u8" "_j)));
	LINE_NUMBER(429);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))), (frame[1].o));
	LINE_NUMBER(430);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_caption = (jref) (frame[5].o);
	LINE_NUMBER(431);
	goto label_56;
	}
label_50:;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))), (frame[1].o));
	}
label_56:;
	{
	LINE_NUMBER(423);
	INST_IINC(4, 1);
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(436);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(437);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_37;
	}
	{
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) == nullptr) goto label_37;
	}
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(439);
	jint temp0 = (jint)SM_lib_network_Session_ME_getPing_R_int(ctx);
	frame[5].i = temp0;
	LINE_NUMBER(440);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	jint temp1 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_61;
	}
	{
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_testConnect) != (jint(2))) goto label_62;
	}
label_61:;
	INST_ICONST(1);
	goto label_63;
label_62:;
	INST_ICONST(0);
label_63:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(441);
	if ((frame[6].i) != 0) goto label_65;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) != 0) goto label_66;
	}
	{
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_testConnect) != (jint(-1))) goto label_65;
	}
label_66:;
	INST_ICONST(1);
	goto label_67;
label_65:;
	INST_ICONST(0);
label_67:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(444);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(445);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(447);
	if ((frame[7].i) == 0) goto label_71;
	}
	{
	LINE_NUMBER(448);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) <= (10)) goto label_73;
	}
	INST_ICONST(2);
	goto label_74;
label_73:;
	INST_ICONST(0);
label_74:;
	INST_ISTORE(8);
	goto label_76;
label_71:;
	{
	LINE_NUMBER(449);
	if ((frame[6].i) != 0) goto label_77;
	}
	{
	LINE_NUMBER(450);
	frame[8].i = (jint(0));
	goto label_76;
	}
label_77:;
	{
	LINE_NUMBER(451);
	if ((frame[5].i) < 0) goto label_80;
	}
	{
	if ((frame[5].i) >= (80)) goto label_81;
	}
label_80:;
	{
	LINE_NUMBER(452);
	frame[8].i = (jint(2));
	LINE_NUMBER(453);
	if ((frame[5].i) < 0) goto label_83;
	}
	{
	LINE_NUMBER(454);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ms"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	goto label_85;
	}
label_83:;
	{
	LINE_NUMBER(455);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_IS_LOCAL) == 0) goto label_85;
	}
	{
	LINE_NUMBER(456);
	frame[9].o = (((jobject) createStringLiteral(ctx, u8"1ms"_j)));
	}
label_85:;
	{
	LINE_NUMBER(458);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green;
	frame[10].o = sp[0].o;
	goto label_76;
	}
label_81:;
	{
	LINE_NUMBER(459);
	if ((frame[5].i) >= (180)) goto label_87;
	}
	{
	LINE_NUMBER(460);
	frame[8].i = (jint(1));
	LINE_NUMBER(461);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ms"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(462);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellow;
	frame[10].o = sp[0].o;
	goto label_76;
	}
label_87:;
	{
	LINE_NUMBER(464);
	frame[8].i = (jint(3));
	LINE_NUMBER(465);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ms"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(466);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_red;
	frame[10].o = sp[0].o;
	}
label_76:;
	{
	LINE_NUMBER(469);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_server;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	LINE_NUMBER(470);
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_nameServer;
	sp += 1;
	if (sp[0].o == nullptr) goto label_94;
	}
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_ipSelect;
	if ((--sp)->i < 0) goto label_94;
	{
	clinit_nro_ServerListScreen(ctx);
	jint temp0 = (jint)SF_nro_ServerListScreen_ipSelect;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_94;
	}
	{
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp += 1;
	goto label_95;
	}
label_94:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_95:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(471);
	frame[12].i = (7);
	LINE_NUMBER(472);
	frame[13].i = (jint(3));
	LINE_NUMBER(473);
	frame[14].i = (6);
	LINE_NUMBER(474);
	frame[15].i = (jint(5));
	LINE_NUMBER(476);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, sp[0].o, (frame[11].o));
	frame[16].i = temp0;
	LINE_NUMBER(479);
	if ((frame[9].o) == nullptr) goto label_102;
	}
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_102;
	{
	LINE_NUMBER(480);
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, (frame[10].o), (frame[9].o));
	frame[18].i = temp0;
	LINE_NUMBER(481);
	frame[17].i = (((((frame[12].i) + (frame[13].i)) + (frame[18].i)) + (frame[14].i)) + (frame[16].i));
	LINE_NUMBER(482);
	goto label_106;
	}
label_102:;
	{
	LINE_NUMBER(483);
	frame[17].i = (((frame[12].i) + (frame[15].i)) + (frame[16].i));
	}
label_106:;
	{
	LINE_NUMBER(486);
	frame[18].i = (((jint)((nro_Command *) NULL_CHECK((frame[4].o)))->F_x) + ((((jint)((nro_Command *) NULL_CHECK((frame[4].o)))->F_w) - (frame[17].i)) / (jint(2))));
	LINE_NUMBER(487);
	frame[19].i = ((jint)((nro_Command *) NULL_CHECK((frame[4].o)))->F_y);
	LINE_NUMBER(489);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_imgRoomStat;
	if (sp[0].o == nullptr) goto label_109;
	}
	{
	LINE_NUMBER(490);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgRoomStat;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((frame[8].i) * (7)), (7), (7), (jint(0)), (frame[18].i), ((frame[19].i) + (9)), (jint(0)));
	}
label_109:;
	{
	LINE_NUMBER(493);
	frame[20].i = ((frame[18].i) + (frame[12].i));
	LINE_NUMBER(494);
	if ((frame[9].o) == nullptr) goto label_112;
	}
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_112;
	{
	LINE_NUMBER(495);
	frame[20].i = ((frame[20].i) + (frame[13].i));
	LINE_NUMBER(496);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[10].o), (frame[1].o), (frame[9].o), (frame[20].i), ((frame[19].i) + (7)), (jint(0)));
	LINE_NUMBER(497);
	jint temp0 = frame[20].i;
	jint temp1 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, (frame[10].o), (frame[9].o));
	frame[20].i = (temp0 + (temp1 + (frame[14].i)));
	goto label_116;
	}
label_112:;
	{
	LINE_NUMBER(499);
	frame[20].i = ((frame[20].i) + (frame[15].i));
	}
label_116:;
	{
	LINE_NUMBER(502);
	if (((jint)((nro_Command *) NULL_CHECK((frame[4].o)))->F_isFocus) == 0) goto label_117;
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_green2;
	goto label_118;
label_117:;
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_dark;
label_118:;
	{
	sp -= 1;
	frame[21].o = sp[0].o;
	LINE_NUMBER(503);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[21].o), (frame[1].o), (frame[11].o), (frame[20].i), ((frame[19].i) + (7)), (jint(0)));
	}
label_37:;
	LINE_NUMBER(507);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(510);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_waitToLogin) == 0) goto label_1;
	}
	{
	LINE_NUMBER(511);
	jint temp0 = (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_lY) + (jint(1));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_lY = temp0;
	if (temp0 != (50)) goto label_3;
	}
	{
	LINE_NUMBER(512);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_selectServer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_selectServer])(ctx, sp[0].o);
	LINE_NUMBER(513);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_waitToLogin = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(516);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_lY) != (100)) goto label_1;
	}
	{
	LINE_NUMBER(517);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(518);
	clinit_nro_LoginScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_LoginScr);
	init_nro_LoginScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(521);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_doLogin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_doLogin])(ctx, sp[0].o);
	LINE_NUMBER(522);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_finishUpdate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_finishUpdate])(ctx, sp[0].o);
	LINE_NUMBER(523);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_waitToLogin = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(527);
	frame[1].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	LINE_NUMBER(528);
	if ((frame[1].i) != (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_selected)) goto label_14;
	}
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_isFocus = (jint(1));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_isFocus = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(527);
	INST_IINC(1, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(535);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (jint(1)));
	LINE_NUMBER(536);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_loadScreen) != 0) goto label_18;
	}
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_bigOk;
	if ((--sp)->i != 0) goto label_19;
	{
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_flagServer) != (100)) goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(537);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_cmdUpdateServer = (jobject(nullptr));
	}
label_18:;
	{
	LINE_NUMBER(540);
	M_nro_mScreen_update(ctx, (frame[0].o));
	LINE_NUMBER(541);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isLoadingMap) != 0) goto label_21;
	}
	{
	LINE_NUMBER(542);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_loadScreen) == 0) goto label_21;
	}
	{
	LINE_NUMBER(543);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_isAutoConect) == 0) goto label_21;
	}
	{
	LINE_NUMBER(544);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if (sp[0].o != (frame[0].o)) goto label_21;
	}
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_21;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) != 0) goto label_21;
	}
	{
	LINE_NUMBER(546);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare(temp0, (clinit_nro_ServerListScreen(ctx), (jlong)SF_nro_ServerListScreen_count_reConnect))) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(547);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_count_reConnect = (temp0 + (jlong(3000ll)));
	LINE_NUMBER(548);
	SM_nro_ServerListScreen_SetIpSelect_int_boolean(ctx, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect), (jint(0)));
	LINE_NUMBER(549);
	SM_nro_ServerListScreen_ConnectIP(ctx);
	}
label_21:;
	LINE_NUMBER(556);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_processInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:processInput", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(559);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"load Screen= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_loadScreen));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" select= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_selected));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(560);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_loadScreen) == 0) goto label_2;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[4].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_selected)))))->F_type), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(563);
	sp[0].o = frame[0].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	}
label_4:;
	LINE_NUMBER(565);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ServerListScreen_paintDeleteData_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:paintDeleteData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(568);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(569);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	sp[1].o = frame[0].o;
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_xoadulieu;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (jint(2));
	jint temp1 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (15);
	jint temp2 = jint(1);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	}
label_1:;
	LINE_NUMBER(572);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ServerListScreen_CheckBack_ServerListScreen(jcontext ctx) {
	FrameInfo frameInfo { "nro/ServerListScreen:CheckBack_ServerListScreen", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_nro_ServerListScreen(ctx);
	LINE_NUMBER(575);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:updateKey", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(579);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdDeleteRMS;
	jint temp0 = (jint)((func_nro_Command_isPointerPressInside_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_isPointerPressInside_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(580);
	((func_nro_ServerListScreen_perform_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_ServerListScreen_perform_int_java_lang_Object])(ctx, (frame[0].o), (14), (jobject(nullptr)));
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(584);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_4;
	}
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	jint temp0 = (jint)((func_nro_Command_isPointerPressInside_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_isPointerPressInside_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(590);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_loadScreen) != 0) goto label_8;
	}
	{
	LINE_NUMBER(591);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	jint temp0 = (jint)((func_nro_Command_isPointerPressInside_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_isPointerPressInside_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(592);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(595);
	M_nro_mScreen_updateKey(ctx, (frame[0].o));
	LINE_NUMBER(596);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	frame[1].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(601);
	frame[2].i = (jint(0));
	}
label_14:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_15;
	}
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	jint temp0 = (jint)((func_nro_Command_isPointerPressInside_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_nro_Command_isPointerPressInside_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(603);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_nro_Command_performAction])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	}
label_17:;
	{
	LINE_NUMBER(601);
	INST_IINC(2, 1);
	goto label_14;
	}
label_15:;
	goto label_19;
label_4:;
	{
	LINE_NUMBER(607);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_20;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (13))) == 0) goto label_20;
	}
	{
	LINE_NUMBER(608);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	LINE_NUMBER(609);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmdCallHotline;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_20:;
	{
	LINE_NUMBER(612);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_loadScreen) == 0) goto label_19;
	}
	{
	LINE_NUMBER(613);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_24;
	}
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	frame[1].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	LINE_NUMBER(615);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	LINE_NUMBER(616);
	jint temp0 = (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_selected) + (jint(1));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_selected = temp0;
	if (temp0 <= (frame[1].i)) goto label_28;
	}
	{
	LINE_NUMBER(617);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_selected = (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(620);
	M_nro_ServerListScreen_processInput(ctx, (frame[0].o));
	}
label_24:;
	{
	LINE_NUMBER(623);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_19;
	}
	{
	LINE_NUMBER(624);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	frame[1].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	LINE_NUMBER(625);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	LINE_NUMBER(626);
	jint temp0 = (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_selected) - (jint(1));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_selected = temp0;
	if (temp0 >= 0) goto label_33;
	}
	{
	LINE_NUMBER(627);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_selected = (frame[1].i);
	}
label_33:;
	{
	LINE_NUMBER(630);
	M_nro_ServerListScreen_processInput(ctx, (frame[0].o));
	}
label_19:;
	{
	LINE_NUMBER(635);
	M_nro_mScreen_updateKey(ctx, (frame[0].o));
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ServerListScreen_saveIP(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:saveIP", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	{
	LINE_NUMBER(639);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(640);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(643);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[1].o), (clinit_nro_mResources(ctx), (jint)SF_nro_mResources_language));
	LINE_NUMBER(644);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_nameServer;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(646);
	frame[2].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_17;
	}
	{
	LINE_NUMBER(647);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_nameServer;
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	LINE_NUMBER(648);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_address;
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	LINE_NUMBER(649);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_port;
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, (frame[2].i))));
	LINE_NUMBER(650);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_language;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[2].i))));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(653);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_typeSv;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[2].i))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(656);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(654);
	frame[3].o = sp[0].o;
	LINE_NUMBER(655);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[1].o), (jint(0)));
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(659);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_isNew;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[2].i))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(662);
	goto label_23;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(660);
	frame[3].o = sp[0].o;
	LINE_NUMBER(661);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[1].o), (jint(0)));
	}
label_23:;
	{
	LINE_NUMBER(646);
	INST_IINC(2, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(665);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[1].o), (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_serverPriority));
	LINE_NUMBER(666);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_RMS_NRlink;
	sp[1].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[0].o));
	SM_nro_Rms_saveRMS_java_lang_String_Array1_byte(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(667);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[1].o));
	LINE_NUMBER(668);
	SM_nro_SplashScr_loadIP(ctx);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(671);
	goto label_28;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(669);
	frame[2].o = sp[0].o;
	LINE_NUMBER(670);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_28:;
	LINE_NUMBER(672);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ServerListScreen_loadIP(jcontext ctx) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:loadIP", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	{
	LINE_NUMBER(676);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_RMS_NRlink;
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(677);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_linkDefault;
	SM_nro_ServerListScreen_getServerList_java_lang_String(ctx, sp[0].o);
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(679);
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(680);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(683);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[2].o));
	SM_nro_mResources_loadLanguague_byte(ctx, temp0);
	LINE_NUMBER(685);
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[2].o));
	frame[3].i = temp1;
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, temp1);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_nameServer = sp[0].o;
	LINE_NUMBER(686);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[3].i));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_address = sp[0].o;
	LINE_NUMBER(687);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[3].i));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_port = sp[0].o;
	LINE_NUMBER(688);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_language = sp[0].o;
	LINE_NUMBER(689);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_typeSv = sp[0].o;
	LINE_NUMBER(690);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isNew = sp[0].o;
	LINE_NUMBER(692);
	frame[4].i = (jint(0));
	}
label_26:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_27;
	}
	{
	LINE_NUMBER(693);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(694);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_address;
	jint temp1 = frame[4].i;
	sp[1].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(695);
	jint temp2 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[2].o));
	LINE_NUMBER(697);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_address;
	jint temp3 = frame[4].i;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_ACTIVE_IP;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	LINE_NUMBER(698);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_port;
	ARRAY_ACCESS(jshort, sp[0].o, (frame[4].i)) = (jshort((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ACTIVE_PORT)));
	LINE_NUMBER(699);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_language;
	jint temp4 = frame[4].i;
	jint temp5 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[2].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = temp5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(702);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[2].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(705);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(703);
	frame[5].o = sp[0].o;
	LINE_NUMBER(704);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i)) = (jint(0));
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(708);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_isNew;
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[2].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(711);
	goto label_35;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(709);
	frame[5].o = sp[0].o;
	LINE_NUMBER(710);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_isNew;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i)) = (jint(0));
	}
label_35:;
	{
	LINE_NUMBER(692);
	INST_IINC(4, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(714);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[2].o));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_serverPriority = temp0;
	LINE_NUMBER(715);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	LINE_NUMBER(716);
	SM_nro_SplashScr_loadIP(ctx);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(718);
	goto label_16;
label_10:;
	LINE_NUMBER(717);
	INST_ASTORE(3);
label_16:;
	LINE_NUMBER(720);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:switchToMe", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(723);
	frame[1].i = (jint(-1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"ResVersion"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(726);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(727);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[1].i = temp0;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(730);
	goto label_7;
label_2:;
	LINE_NUMBER(729);
	INST_ASTORE(2);
label_7:;
	{
	LINE_NUMBER(732);
	if ((frame[1].i) > 0) goto label_8;
	}
	{
	LINE_NUMBER(733);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_loadScreen = (jint(0));
	LINE_NUMBER(734);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_bigOk = (jint(0));
	LINE_NUMBER(735);
	((func_nro_ServerListScreen_init) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_ServerListScreen_init])(ctx, (frame[0].o));
	LINE_NUMBER(736);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(739);
	SM_nro_EffectManager_remove(ctx);
	LINE_NUMBER(740);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmy = (jint(0));
	LINE_NUMBER(741);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = (jint(0));
	LINE_NUMBER(742);
	M_nro_ServerListScreen_initCommand(ctx, (frame[0].o));
	LINE_NUMBER(743);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isWait = (jint(0));
	LINE_NUMBER(744);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = (jobject(nullptr));
	LINE_NUMBER(746);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_loadScreen) != 0) goto label_19;
	}
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_bigOk;
	if ((--sp)->i == 0) goto label_20;
label_19:;
	{
	LINE_NUMBER(747);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_loadScreen = (jint(1));
	LINE_NUMBER(748);
	SM_main_GameCanvas_loadBG_int(ctx, (jint(0)));
	}
label_20:;
	{
	LINE_NUMBER(751);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_bigOk = (jint(1));
	LINE_NUMBER(752);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint(2)) + ((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay)));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_server;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	clinit_nro_ServerListScreen(ctx);
	sp[2].o = (jobject)SF_nro_ServerListScreen_nameServer;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(753);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[4].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_selected)))))->F_type), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(754);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint(1)) + ((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay)));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_account;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(755);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != ((jint(4)) + ((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay))) goto label_26;
	}
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint(3)) + ((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay)));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_option;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	}
label_26:;
	{
	LINE_NUMBER(759);
	SM_nro_ServerListScreen_createDeleteRMS(ctx);
	LINE_NUMBER(761);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(0));
	LINE_NUMBER(762);
	SM_lib_mSystem_resetCurInapp(ctx);
	LINE_NUMBER(763);
	((func_nro_ServerListScreen_updatePosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_ServerListScreen_updatePosition])(ctx, (frame[0].o));
	LINE_NUMBER(764);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(765);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_switchToMe2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:switchToMe2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(768);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmy = (jint(0));
	LINE_NUMBER(769);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = (jint(0));
	LINE_NUMBER(770);
	M_nro_ServerListScreen_initCommand(ctx, (frame[0].o));
	LINE_NUMBER(771);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isWait = (jint(0));
	LINE_NUMBER(772);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = (jobject(nullptr));
	LINE_NUMBER(774);
	frame[2].i = (jint(-1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"ResVersion"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(777);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[2].i = temp0;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(781);
	goto label_12;
label_2:;
	LINE_NUMBER(780);
	INST_ASTORE(3);
label_12:;
	{
	LINE_NUMBER(783);
	if ((frame[2].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(784);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_loadScreen = (jint(1));
	LINE_NUMBER(785);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_bigOk = (jint(1));
	LINE_NUMBER(786);
	SM_main_GameCanvas_loadBG_int(ctx, (jint(0)));
	goto label_17;
	}
label_13:;
	{
	LINE_NUMBER(788);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_loadScreen = (jint(0));
	LINE_NUMBER(789);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_bigOk = (jint(0));
	LINE_NUMBER(790);
	((func_nro_ServerListScreen_init) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_ServerListScreen_init])(ctx, (frame[0].o));
	LINE_NUMBER(791);
	popStackFrame(ctx);
	return;
	}
label_17:;
	{
	LINE_NUMBER(793);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint(2)) + ((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay)));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_server;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	clinit_nro_ServerListScreen(ctx);
	sp[2].o = (jobject)SF_nro_ServerListScreen_nameServer;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(794);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)((nro_Command *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[4].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_selected)))))->F_type), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(795);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint(1)) + ((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay)));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_change_account;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(796);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != ((jint(4)) + ((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay))) goto label_24;
	}
	{
	LINE_NUMBER(797);
	sp[0].o = (jobject)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_cmd;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint(3)) + ((jint)((nro_ServerListScreen *) NULL_CHECK((frame[0].o)))->F_nCmdPlay)));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_option;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	}
label_24:;
	{
	LINE_NUMBER(800);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(801);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_show2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:show2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(804);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(805);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerListScreen);
	init_nro_ServerListScreen(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_serverScreen = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(808);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_countDieConnect = (jint(0));
	LINE_NUMBER(809);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_flagServer = (jint(0));
	LINE_NUMBER(810);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isHaveChar1 = (jint(1));
	LINE_NUMBER(811);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_init) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_init])(ctx, sp[0].o);
	LINE_NUMBER(812);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isGetData = (jint(0));
	LINE_NUMBER(813);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(814);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[0].o), (jint(2)), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(815);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_selectServer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:selectServer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(819);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isWait = (jint(1));
	LINE_NUMBER(820);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	LINE_NUMBER(821);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_IS_LOCAL) == 0) goto label_3;
	}
	{
	LINE_NUMBER(822);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_ACTIVE_IP;
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_IP = sp[0].o;
	LINE_NUMBER(823);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_PORT = (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ACTIVE_PORT);
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(825);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_address;
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_IP = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect)));
	LINE_NUMBER(826);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_port;
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_PORT = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect)));
	}
label_6:;
	{
	LINE_NUMBER(828);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_RMS_svselect;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	LINE_NUMBER(829);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_language;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect))) == (clinit_nro_mResources(ctx), (jint)SF_nro_mResources_language)) goto label_9;
	}
	{
	LINE_NUMBER(830);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_language;
	SM_nro_mResources_loadLanguague_byte(ctx, ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect))));
	}
label_9:;
	{
	LINE_NUMBER(833);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_serverName = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect)));
	LINE_NUMBER(834);
	M_nro_ServerListScreen_initCommand(ctx, (frame[0].o));
	LINE_NUMBER(835);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_loadScreen = (jint(1));
	LINE_NUMBER(836);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_testConnect = (jint(-1));
	LINE_NUMBER(837);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isAutoConect = (jint(1));
	LINE_NUMBER(838);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:perform", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(841);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"perform trong ServerListScreen"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(842);
	if ((frame[1].i) != (1000)) goto label_2;
	}
	LINE_NUMBER(843);
	SM_main_GameCanvas_connect(ctx);
label_2:;
	{
	LINE_NUMBER(846);
	if ((frame[1].i) == (jint(1))) goto label_4;
	}
	{
	if ((frame[1].i) != (jint(4))) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	LINE_NUMBER(848);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isAutoConect = (jint(0));
	LINE_NUMBER(849);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_loadScreen = (jint(1));
	LINE_NUMBER(850);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_testConnect = (jint(0));
	LINE_NUMBER(851);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isGetData = (jint(0));
	LINE_NUMBER(852);
	SM_nro_Rms_clearAll(ctx);
	LINE_NUMBER(853);
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(856);
	if ((frame[1].i) != (jint(2))) goto label_12;
	}
	{
	LINE_NUMBER(857);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isHaveChar1 = (jint(0));
	LINE_NUMBER(858);
	clinit_nro_Command(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_huy;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[0].o), (jint(4)), (jobject(nullptr)));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_cmdUpdateServer = sp[0].o;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard) / (jint(2))));
	LINE_NUMBER(860);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) + (65));
	LINE_NUMBER(861);
	((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_right = (jref) (jobject(nullptr));
	LINE_NUMBER(862);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_18;
	}
	{
	LINE_NUMBER(863);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard) / (jint(2))));
	LINE_NUMBER(864);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_mScreen_cmdH)) - (jint(1)));
	}
label_18:;
	{
	LINE_NUMBER(867);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[0].o), (jint(4)), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(868);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_isGetData) != 0) goto label_12;
	}
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_23;
	}
	LINE_NUMBER(870);
	SM_main_GameCanvas_connect(ctx);
label_23:;
	{
	LINE_NUMBER(872);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_getResource_byte_nro_MyVector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getResource_byte_nro_MyVector])(ctx, sp[0].o, (jint(1)), (checkCast(ctx, &class_nro_MyVector, (jobject(nullptr)))));
	LINE_NUMBER(873);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_26;
	}
	{
	LINE_NUMBER(874);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(875);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[0].o), (jint(4)), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	}
label_26:;
	{
	LINE_NUMBER(878);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isGetData = (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(882);
	if ((frame[1].i) != (jint(3))) goto label_29;
	}
	LINE_NUMBER(883);
	SM_nro_ServerListScreen_Login_New(ctx);
label_29:;
	{
	LINE_NUMBER(886);
	if ((frame[1].i) != (10100)) goto label_31;
	}
	{
	LINE_NUMBER(887);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != nullptr) goto label_33;
	}
	{
	LINE_NUMBER(888);
	clinit_nro_LoginScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_LoginScr);
	init_nro_LoginScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(891);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(892);
	SM_main_GameCanvas_connect(ctx);
	LINE_NUMBER(893);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_login2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_login2_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(894);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"tao user ao"_j))));
	LINE_NUMBER(895);
	SM_main_GameCanvas_startWaitDlg(ctx);
	LINE_NUMBER(896);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_serverName = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect)));
	}
label_31:;
	{
	LINE_NUMBER(899);
	if ((frame[1].i) != (jint(5))) goto label_40;
	}
	{
	LINE_NUMBER(900);
	SM_nro_ServerListScreen_doUpdateServer(ctx);
	LINE_NUMBER(901);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_43;
	}
	LINE_NUMBER(902);
	popStackFrame(ctx);
	INST_RETURN();
label_43:;
	{
	LINE_NUMBER(905);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(907);
	frame[4].i = (jint(0));
	}
label_46:;
	{
	jint temp0 = frame[4].i;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_47;
	}
	{
	LINE_NUMBER(908);
	sp[0].o = frame[3].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_ServerListScreen(ctx);
	sp[2].o = (jobject)SF_nro_ServerListScreen_nameServer;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[4].i))), (frame[0].o), (6), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(907);
	INST_IINC(4, 1);
	goto label_46;
	}
label_47:;
	{
	LINE_NUMBER(911);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Menu_startAt_nro_MyVector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Menu_startAt_nro_MyVector])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(912);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuSelectedItem = (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect);
	}
label_40:;
	{
	LINE_NUMBER(915);
	if ((frame[1].i) != (6)) goto label_51;
	}
	{
	LINE_NUMBER(916);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	SM_nro_ServerListScreen_SetIpSelect_int_boolean(ctx, ((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuSelectedItem), (jint(0)));
	LINE_NUMBER(917);
	((func_nro_ServerListScreen_selectServer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_ServerListScreen_selectServer])(ctx, (frame[0].o));
	}
label_51:;
	{
	LINE_NUMBER(920);
	if ((frame[1].i) != (7)) goto label_54;
	}
	{
	LINE_NUMBER(921);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != nullptr) goto label_56;
	}
	{
	LINE_NUMBER(922);
	clinit_nro_LoginScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_LoginScr);
	init_nro_LoginScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = sp[0].o;
	}
label_56:;
	{
	LINE_NUMBER(925);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_switchToMe])(ctx, sp[0].o);
	}
label_54:;
	{
	LINE_NUMBER(928);
	if ((frame[1].i) != (8)) goto label_58;
	}
	{
	LINE_NUMBER(929);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"lowGraphic"_j))));
	if (temp0 != (jint(1))) goto label_60;
	}
	INST_ICONST(1);
	goto label_61;
label_60:;
	INST_ICONST(0);
label_61:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(931);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cau hinh"_j))));
	frame[4].o = sp[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_cauhinhthap;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (9), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(932);
	sp[0].o = frame[4].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_cauhinhcao;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (10), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(933);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Menu_startAt_nro_MyVector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Menu_startAt_nro_MyVector])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(934);
	if ((frame[3].i) == 0) goto label_67;
	}
	{
	LINE_NUMBER(935);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuSelectedItem = (jint(0));
	goto label_58;
	}
label_67:;
	{
	LINE_NUMBER(937);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuSelectedItem = (jint(1));
	}
label_58:;
	{
	LINE_NUMBER(941);
	if ((frame[1].i) != (9)) goto label_69;
	}
	{
	LINE_NUMBER(942);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"lowGraphic"_j))), (jint(1)));
	LINE_NUMBER(943);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_plsRestartGame;
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8885), (jobject(nullptr)));
	}
label_69:;
	{
	LINE_NUMBER(946);
	if ((frame[1].i) != (10)) goto label_72;
	}
	{
	LINE_NUMBER(947);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"lowGraphic"_j))), (jint(0)));
	LINE_NUMBER(948);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_plsRestartGame;
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8885), (jobject(nullptr)));
	}
label_72:;
	{
	LINE_NUMBER(951);
	if ((frame[1].i) != (11)) goto label_75;
	}
	{
	LINE_NUMBER(952);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != nullptr) goto label_77;
	}
	{
	LINE_NUMBER(953);
	clinit_nro_LoginScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_LoginScr);
	init_nro_LoginScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = sp[0].o;
	}
label_77:;
	{
	LINE_NUMBER(956);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(958);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_81;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_81;
	}
	{
	LINE_NUMBER(959);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_isLogin2 = (jint(1));
	LINE_NUMBER(960);
	SM_main_GameCanvas_connect(ctx);
	LINE_NUMBER(961);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_setClientType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_setClientType])(ctx, sp[0].o);
	LINE_NUMBER(962);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte])(ctx, sp[0].o, (frame[3].o), (((jobject) createStringLiteral(ctx, u8""_j))), (((jobject) createStringLiteral(ctx, u8"2.5.2"_j))), (jint(1)));
	goto label_86;
	}
label_81:;
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_login2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_login2_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	}
label_86:;
	{
	LINE_NUMBER(968);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"tao user ao"_j))));
	}
label_75:;
	{
	LINE_NUMBER(971);
	if ((frame[1].i) != (12)) goto label_87;
	}
	{
	LINE_NUMBER(972);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_exit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_exit])(ctx, sp[0].o);
	}
label_87:;
	{
	LINE_NUMBER(975);
	if ((frame[1].i) != (13)) goto label_89;
	}
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_isGetData;
	if ((--sp)->i == 0) goto label_90;
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_loadScreen;
	if ((--sp)->i == 0) goto label_89;
label_90:;
	{
	LINE_NUMBER(976);
	switch((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec)) {
		case 1: goto label_91;
		case 2: goto label_89;
		case 3: goto label_89;
		case 4: goto label_89;
		case 5: goto label_89;
		case 6: goto label_89;
		default: goto label_89;
	}
	}
label_91:;
	LINE_NUMBER(978);
	SM_lib_mSystem_callHotlineJava(ctx);
label_89:;
	{
	LINE_NUMBER(987);
	if ((frame[1].i) != (14)) goto label_92;
	}
	{
	LINE_NUMBER(988);
	clinit_nro_Command(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_YES;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_serverScreen;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, (15), (jobject(nullptr)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(989);
	clinit_nro_Command(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_NO;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_serverScreen;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, (16), (jobject(nullptr)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(990);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_deletaDataNote;
	SM_main_GameCanvas_startYesNoDlg_java_lang_String_nro_Command_nro_Command(ctx, sp[0].o, (frame[3].o), (frame[4].o));
	}
label_92:;
	{
	LINE_NUMBER(993);
	if ((frame[1].i) != (15)) goto label_96;
	}
	{
	LINE_NUMBER(994);
	SM_nro_Rms_clearAll(ctx);
	LINE_NUMBER(995);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_plsRestartGame;
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8885), (jobject(nullptr)));
	}
label_96:;
	{
	LINE_NUMBER(998);
	if ((frame[1].i) != (16)) goto label_99;
	}
	{
	LINE_NUMBER(999);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(1000);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	}
label_99:;
	{
	LINE_NUMBER(1003);
	if ((frame[1].i) != (17)) goto label_102;
	}
	{
	LINE_NUMBER(1004);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScr;
	if (sp[0].o != nullptr) goto label_104;
	}
	{
	LINE_NUMBER(1005);
	clinit_nro_ServerScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerScr);
	init_nro_ServerScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_serverScr = sp[0].o;
	}
label_104:;
	{
	LINE_NUMBER(1008);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScr;
	((func_nro_ServerScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerScr_switchToMe])(ctx, sp[0].o);
	}
label_102:;
	{
	LINE_NUMBER(1011);
	if ((frame[1].i) != (18)) goto label_106;
	}
	{
	LINE_NUMBER(1012);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(1013);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(1014);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScr;
	if (sp[0].o != nullptr) goto label_110;
	}
	{
	LINE_NUMBER(1015);
	clinit_nro_ServerScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerScr);
	init_nro_ServerScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_serverScr = sp[0].o;
	}
label_110:;
	{
	LINE_NUMBER(1018);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScr;
	((func_nro_ServerScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerScr_switchToMe])(ctx, sp[0].o);
	}
label_106:;
	{
	LINE_NUMBER(1021);
	if ((frame[1].i) != (19)) goto label_112;
	}
	{
	LINE_NUMBER(1022);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_114;
	}
	{
	LINE_NUMBER(1023);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(1024);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(1025);
	popStackFrame(ctx);
	return;
	}
label_114:;
	{
	LINE_NUMBER(1028);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_testConnect = (jint(0));
	LINE_NUMBER(1029);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isAutoConect = (jint(1));
	}
label_112:;
	LINE_NUMBER(1032);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerListScreen_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1035);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = (jint(0));
	LINE_NUMBER(1036);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmy = (jint(0));
	LINE_NUMBER(1037);
	M_nro_ServerListScreen_initCommand(ctx, (frame[0].o));
	LINE_NUMBER(1038);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_loadScreen = (jint(0));
	LINE_NUMBER(1039);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_flagServer = (jint(0));
	LINE_NUMBER(1040);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_bigOk = (jint(0));
	LINE_NUMBER(1041);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isGetData = (jint(0));
	LINE_NUMBER(1042);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_countDieConnect = (jint(0));
	LINE_NUMBER(1043);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(0));
	LINE_NUMBER(1044);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_loadScreen) != 0) goto label_10;
	}
	{
	LINE_NUMBER(1045);
	clinit_nro_Command(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_taidulieu;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[0].o), (jint(2)), (jobject(nullptr)));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_cmdUpdateServer = sp[0].o;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(1046);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard) / (jint(2))));
	LINE_NUMBER(1047);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) + (45));
	LINE_NUMBER(1048);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	if (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_y) <= ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (26))) goto label_10;
	}
	{
	LINE_NUMBER(1049);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_cmdUpdateServer;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (26));
	}
label_10:;
	{
	LINE_NUMBER(1053);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_16;
	}
	{
	LINE_NUMBER(1054);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_selected = (jint(0));
	LINE_NUMBER(1055);
	M_nro_ServerListScreen_processInput(ctx, (frame[0].o));
	}
label_16:;
	{
	LINE_NUMBER(1058);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(1059);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ServerListScreen_ConnectIP(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:ConnectIP", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	{
	LINE_NUMBER(1062);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_IS_LOCAL) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1063);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_ACTIVE_IP;
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_IP = sp[0].o;
	LINE_NUMBER(1064);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_PORT = (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ACTIVE_PORT);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1066);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_address;
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_IP = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect)));
	LINE_NUMBER(1067);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_port;
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_PORT = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect)));
	}
label_4:;
	{
	LINE_NUMBER(1069);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_language;
	SM_nro_mResources_loadLanguague_byte(ctx, ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect))));
	LINE_NUMBER(1070);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_serverName = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect)));
	LINE_NUMBER(1071);
	SM_main_GameCanvas_connect(ctx);
	LINE_NUMBER(1072);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ServerListScreen_SetIpSelect_int_boolean(jcontext ctx, jint param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:SetIpSelect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1075);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_ipSelect = (frame[0].i);
	LINE_NUMBER(1076);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1077);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_RMS_svselect;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	LINE_NUMBER(1078);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"2>>>saveRMSInt:  RMS_svselect == "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(1081);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ServerListScreen_Login_New(jcontext ctx) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:Login_New", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	{
	LINE_NUMBER(1084);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1085);
	clinit_nro_LoginScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_LoginScr);
	init_nro_LoginScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1088);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(1089);
	frame[0].i = (jint(0));
	LINE_NUMBER(1090);
	frame[1].i = (jint(0));
	LINE_NUMBER(1091);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1094);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(1095);
	frame[0].i = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(1098);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1099);
	frame[1].i = (jint(1));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1102);
	goto label_13;
label_2:;
	LINE_NUMBER(1101);
	INST_ASTORE(3);
label_13:;
	{
	LINE_NUMBER(1104);
	SM_main_GameCanvas_connect(ctx);
	LINE_NUMBER(1105);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_setClientType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_setClientType])(ctx, sp[0].o);
	LINE_NUMBER(1106);
	if ((frame[0].i) != 0) goto label_16;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_16;
	{
	LINE_NUMBER(1107);
	if ((frame[2].o) == nullptr) goto label_18;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(1108);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_isLogin2 = (jint(1));
	LINE_NUMBER(1109);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte])(ctx, sp[0].o, (frame[2].o), (((jobject) createStringLiteral(ctx, u8""_j))), (((jobject) createStringLiteral(ctx, u8"2.5.2"_j))), (jint(1)));
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(1111);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_login2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_login2_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	}
label_21:;
	{
	LINE_NUMBER(1114);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_RMS_svselect;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	LINE_NUMBER(1115);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_23;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) == 0) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(1116);
	SM_main_GameCanvas_startWaitDlg(ctx);
	goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(1118);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_plsRestartGame;
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8884), (jobject(nullptr)));
	goto label_25;
	}
label_16:;
	{
	LINE_NUMBER(1121);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_doLogin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_doLogin])(ctx, sp[0].o);
	}
label_25:;
	{
	LINE_NUMBER(1124);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_serverName = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect)));
	LINE_NUMBER(1125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ServerListScreen_saveRMS_ExtraLink(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:saveRMS_ExtraLink", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	{
	LINE_NUMBER(1128);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeClass;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1129);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(1130);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1133);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_typeClass;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jbyte((((jarray) nullCheck(ctx, sp[1].o))->length))));
	LINE_NUMBER(1135);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeClass;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(1136);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_typeClass;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[2].i))));
	LINE_NUMBER(1137);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeClass;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i))) < 0) goto label_13;
	}
	clinit_nro_ServerListScreen(ctx);
	(sp++)->o = SF_nro_ServerListScreen_listChar;
	if ((--sp)->o == nullptr) goto label_13;
	{
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_listChar;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(1138);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_listChar;
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (jshort(((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_head))));
	LINE_NUMBER(1139);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_listChar;
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (jshort(((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_body))));
	LINE_NUMBER(1140);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_listChar;
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (jshort(((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_leg))));
	LINE_NUMBER(1141);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_listChar;
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (jshort(((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_bag))));
	LINE_NUMBER(1142);
	sp[0].o = frame[1].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_listChar;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_cName;
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(1135);
	INST_IINC(2, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1146);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_RMS_NR_Extralink;
	sp[1].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[0].o));
	SM_nro_Rms_saveRMS_java_lang_String_Array1_byte(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1147);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[1].o));
	LINE_NUMBER(1148);
	SM_nro_SplashScr_loadIP(ctx);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1150);
	goto label_5;
label_2:;
	LINE_NUMBER(1149);
	INST_ASTORE(2);
label_5:;
	LINE_NUMBER(1152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_ServerListScreen(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerListScreen:<clinit>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerListScreen(ctx);
	{
	LINE_NUMBER(32);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_ACTIVE_IP = (((jobject) createStringLiteral(ctx, u8"127.0.0.1"_j)));
	LINE_NUMBER(33);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_ACTIVE_PORT = (14445);
	LINE_NUMBER(34);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_IS_LOCAL = (jint(0));
	LINE_NUMBER(35);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_GATEWAY_HOST = (((jobject) createStringLiteral(ctx, u8"play.ngocrongonline.win"_j)));
	LINE_NUMBER(36);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_GATEWAY_PORT = (443);
	LINE_NUMBER(37);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_GATEWAY_HTTP_PATH = (((jobject) createStringLiteral(ctx, u8"/"_j)));
	LINE_NUMBER(38);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_GATEWAY_SSL = (jint(1));
	LINE_NUMBER(39);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_IP_VPS = (((jobject) createStringLiteral(ctx, u8"7VNR:127.0.0.1:14445:0:0:0,0,0"_j)));
	LINE_NUMBER(40);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_IP_LOCAL = (((jobject) createStringLiteral(ctx, u8"7VNR:127.0.0.1:14445:0:0:0,0,0"_j)));
	LINE_NUMBER(41);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_IP_VPS;
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_smartPhoneVN = sp[0].o;
	LINE_NUMBER(42);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_IP_VPS;
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_javaVN = sp[0].o;
	LINE_NUMBER(43);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_smartPhoneIn = (((jobject) createStringLiteral(ctx, u8"Naga:dragon.indonaga.com:14446:2:0:0,2,0"_j)));
	LINE_NUMBER(44);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_javaIn = (((jobject) createStringLiteral(ctx, u8"Naga:52.74.230.22:14446:2:0:0,2,0"_j)));
	LINE_NUMBER(45);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_smartPhoneE = (((jobject) createStringLiteral(ctx, u8"Universe 1:dragon.indonaga.comd                                                                                                                                                            :14445:1:0:0,1,0"_j)));
	LINE_NUMBER(46);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_javaE = (((jobject) createStringLiteral(ctx, u8"Universe 1:52.74.230.22:14445:1:0:0,1,0"_j)));
	LINE_NUMBER(49);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"server.ip"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"server.port"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(51);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"server.local"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"gateway.host"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"gateway.port"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"gateway.path"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(55);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"gateway.ssl"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(56);
	if ((frame[0].o) == nullptr) goto label_31;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_31;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_ACTIVE_IP = sp[0].o;
	LINE_NUMBER(58);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_ACTIVE_IP;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"127.0.0.1"_j))));
	if (temp0 != 0) goto label_34;
	}
	{
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_ACTIVE_IP;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"localhost"_j))));
	if (temp0 == 0) goto label_35;
	}
label_34:;
	INST_ICONST(1);
	goto label_36;
label_35:;
	INST_ICONST(0);
label_36:;
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_IS_LOCAL = (--sp)->i;
label_31:;
	{
	LINE_NUMBER(60);
	if ((frame[2].o) == nullptr) goto label_37;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_37;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, sp[0].o);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_IS_LOCAL = temp0;
	}
label_37:;
	{
	LINE_NUMBER(63);
	if ((frame[1].o) == nullptr) goto label_39;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_39;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_ACTIVE_PORT = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(67);
	goto label_39;
label_2:;
	LINE_NUMBER(66);
	INST_ASTORE(7);
label_39:;
	{
	LINE_NUMBER(69);
	if ((frame[3].o) == nullptr) goto label_40;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_40;
	}
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[3].o));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_GATEWAY_HOST = sp[0].o;
	}
label_40:;
	{
	LINE_NUMBER(72);
	if ((frame[4].o) == nullptr) goto label_42;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_42;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[4].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_GATEWAY_PORT = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(76);
	goto label_42;
label_6:;
	LINE_NUMBER(75);
	INST_ASTORE(7);
label_42:;
	{
	LINE_NUMBER(78);
	if ((frame[5].o) == nullptr) goto label_43;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_43;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[5].o));
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_GATEWAY_HTTP_PATH = sp[0].o;
	}
label_43:;
	{
	LINE_NUMBER(81);
	if ((frame[6].o) == nullptr) goto label_45;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_45;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[6].o));
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, sp[0].o);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_GATEWAY_SSL = temp0;
	}
label_45:;
	{
	LINE_NUMBER(84);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_PORT = (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ACTIVE_PORT);
	LINE_NUMBER(85);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"7VNR:"_j))));
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_ACTIVE_IP;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ACTIVE_PORT));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":0:0:0,0,0"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(86);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_smartPhoneVN = (frame[7].o);
	LINE_NUMBER(87);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_javaVN = (frame[7].o);
	LINE_NUMBER(88);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_IP_VPS = (frame[7].o);
	LINE_NUMBER(89);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_IP_LOCAL = (frame[7].o);
	LINE_NUMBER(113);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_javaVN;
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_linkDefault = sp[0].o;
	LINE_NUMBER(114);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_RMS_NRlink = (((jobject) createStringLiteral(ctx, u8"NRlink_vps_tcp"_j)));
	LINE_NUMBER(115);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isGetData = (jint(0));
	LINE_NUMBER(116);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_testConnect = (jint(-1));
	LINE_NUMBER(117);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isAutoConect = (jint(1));
	LINE_NUMBER(118);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_RMS_svselect = (((jobject) createStringLiteral(ctx, u8"svselect"_j)));
	LINE_NUMBER(119);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_RMS_NR_Extralink = (((jobject) createStringLiteral(ctx, u8"NRlink_extra"_j)));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ServerListScreen[] {
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
	(void *) M_nro_ServerListScreen_switchToMe,
	(void *) M_nro_mScreen_keyPress_int,
	(void *) M_nro_ServerListScreen_update,
	(void *) M_nro_ServerListScreen_updateKey,
	(void *) M_nro_ServerListScreen_paint_lib_mGraphics,
	(void *) M_nro_ServerListScreen_perform_int_java_lang_Object,
	(void *) M_nro_ServerListScreen_initCommand,
	(void *) M_nro_ServerListScreen_updatePosition,
	(void *) M_nro_ServerListScreen_processInput,
	(void *) M_nro_ServerListScreen_switchToMe2,
	(void *) M_nro_ServerListScreen_show2,
	(void *) M_nro_ServerListScreen_selectServer,
	(void *) M_nro_ServerListScreen_init,
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
	{ "initCommand", "()V" },
	{ "updatePosition", "()V" },
	{ "processInput", "()V" },
	{ "switchToMe2", "()V" },
	{ "show2", "()V" },
	{ "selectServer", "()V" },
	{ "init", "()V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "nameServer", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_ServerListScreen_nameServer, "[Ljava/lang/String;", 9 },
	{ "address", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_ServerListScreen_address, "[Ljava/lang/String;", 10 },
	{ "serverPriority", &class_byte, (intptr_t) &SF_nro_ServerListScreen_serverPriority, "B", 9 },
	{ "port", getArrayClass(&class_short, 1), (intptr_t) &SF_nro_ServerListScreen_port, "[S", 10 },
	{ "selected", &class_int, (intptr_t) &SF_nro_ServerListScreen_selected, "I", 10 },
	{ "isWait", &class_boolean, (intptr_t) &SF_nro_ServerListScreen_isWait, "Z", 9 },
	{ "language", getArrayClass(&class_byte, 1), (intptr_t) &SF_nro_ServerListScreen_language, "[B", 9 },
	{ "typeClass", getArrayClass(&class_byte, 1), (intptr_t) &SF_nro_ServerListScreen_typeClass, "[B", 9 },
	{ "listChar", getArrayClass(&class_nro_Char, 1), (intptr_t) &SF_nro_ServerListScreen_listChar, "[Lnro/Char;", 9 },
	{ "isHaveChar", &class_boolean, (intptr_t) &SF_nro_ServerListScreen_isHaveChar, "Z", 9 },
	{ "cmd", getArrayClass(&class_nro_Command, 1), offsetof(nro_ServerListScreen, F_cmd), "[Lnro/Command;", 2 },
	{ "cmdCallHotline", &class_nro_Command, offsetof(nro_ServerListScreen, F_cmdCallHotline), "Lnro/Command;", 2 },
	{ "nCmdPlay", &class_int, offsetof(nro_ServerListScreen, F_nCmdPlay), "I", 2 },
	{ "typeSv", getArrayClass(&class_byte, 1), (intptr_t) &SF_nro_ServerListScreen_typeSv, "[B", 9 },
	{ "isNew", getArrayClass(&class_byte, 1), (intptr_t) &SF_nro_ServerListScreen_isNew, "[B", 9 },
	{ "ACTIVE_IP", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_ACTIVE_IP, "Ljava/lang/String;", 9 },
	{ "ACTIVE_PORT", &class_int, (intptr_t) &SF_nro_ServerListScreen_ACTIVE_PORT, "I", 9 },
	{ "IS_LOCAL", &class_boolean, (intptr_t) &SF_nro_ServerListScreen_IS_LOCAL, "Z", 9 },
	{ "GATEWAY_HOST", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_GATEWAY_HOST, "Ljava/lang/String;", 9 },
	{ "GATEWAY_PORT", &class_int, (intptr_t) &SF_nro_ServerListScreen_GATEWAY_PORT, "I", 9 },
	{ "GATEWAY_HTTP_PATH", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_GATEWAY_HTTP_PATH, "Ljava/lang/String;", 9 },
	{ "GATEWAY_SSL", &class_boolean, (intptr_t) &SF_nro_ServerListScreen_GATEWAY_SSL, "Z", 9 },
	{ "IP_VPS", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_IP_VPS, "Ljava/lang/String;", 10 },
	{ "IP_LOCAL", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_IP_LOCAL, "Ljava/lang/String;", 10 },
	{ "smartPhoneVN", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_smartPhoneVN, "Ljava/lang/String;", 10 },
	{ "javaVN", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_javaVN, "Ljava/lang/String;", 10 },
	{ "smartPhoneIn", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_smartPhoneIn, "Ljava/lang/String;", 10 },
	{ "javaIn", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_javaIn, "Ljava/lang/String;", 10 },
	{ "smartPhoneE", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_smartPhoneE, "Ljava/lang/String;", 10 },
	{ "javaE", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_javaE, "Ljava/lang/String;", 10 },
	{ "linkDefault", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_linkDefault, "Ljava/lang/String;", 9 },
	{ "isHaveChar1", &class_boolean, (intptr_t) &SF_nro_ServerListScreen_isHaveChar1, "Z", 9 },
	{ "l", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_l, "Ljava/lang/String;", 9 },
	{ "waitToLogin", &class_boolean, (intptr_t) &SF_nro_ServerListScreen_waitToLogin, "Z", 9 },
	{ "lY", &class_int, (intptr_t) &SF_nro_ServerListScreen_lY, "I", 10 },
	{ "count_reConnect", &class_long, (intptr_t) &SF_nro_ServerListScreen_count_reConnect, "J", 10 },
	{ "RMS_NRlink", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_RMS_NRlink, "Ljava/lang/String;", 10 },
	{ "ipSelect", &class_int, (intptr_t) &SF_nro_ServerListScreen_ipSelect, "I", 9 },
	{ "bigOk", &class_boolean, (intptr_t) &SF_nro_ServerListScreen_bigOk, "Z", 9 },
	{ "flagServer", &class_int, (intptr_t) &SF_nro_ServerListScreen_flagServer, "I", 9 },
	{ "percent", &class_int, (intptr_t) &SF_nro_ServerListScreen_percent, "I", 9 },
	{ "countDieConnect", &class_int, (intptr_t) &SF_nro_ServerListScreen_countDieConnect, "I", 9 },
	{ "isGetData", &class_boolean, (intptr_t) &SF_nro_ServerListScreen_isGetData, "Z", 9 },
	{ "cmdUpdateServer", &class_nro_Command, (intptr_t) &SF_nro_ServerListScreen_cmdUpdateServer, "Lnro/Command;", 10 },
	{ "cmdDeleteRMS", &class_nro_Command, (intptr_t) &SF_nro_ServerListScreen_cmdDeleteRMS, "Lnro/Command;", 9 },
	{ "testConnect", &class_int, (intptr_t) &SF_nro_ServerListScreen_testConnect, "I", 9 },
	{ "loadScreen", &class_boolean, (intptr_t) &SF_nro_ServerListScreen_loadScreen, "Z", 9 },
	{ "isAutoConect", &class_boolean, (intptr_t) &SF_nro_ServerListScreen_isAutoConect, "Z", 9 },
	{ "RMS_svselect", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_RMS_svselect, "Ljava/lang/String;", 9 },
	{ "RMS_NR_Extralink", &class_java_lang_String, (intptr_t) &SF_nro_ServerListScreen_RMS_NR_Extralink, "Ljava/lang/String;", 10 },
	{ "lastW", &class_int, offsetof(nro_ServerListScreen, F_lastW), "I", 2 },
	{ "lastH", &class_int, offsetof(nro_ServerListScreen, F_lastH), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ServerListScreen, 0, "()V", 1 },
	{ "createDeleteRMS", (intptr_t) SM_nro_ServerListScreen_createDeleteRMS, 0, "()V", 9 },
	{ "initCommand", (intptr_t) M_nro_ServerListScreen_initCommand, VTABLE_nro_ServerListScreen_initCommand, "()V", 2 },
	{ "doUpdateServer", (intptr_t) SM_nro_ServerListScreen_doUpdateServer, 0, "()V", 9 },
	{ "getServerList", (intptr_t) SM_nro_ServerListScreen_getServerList_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "updatePosition", (intptr_t) M_nro_ServerListScreen_updatePosition, VTABLE_nro_ServerListScreen_updatePosition, "()V", 1 },
	{ "paint", (intptr_t) M_nro_ServerListScreen_paint_lib_mGraphics, VTABLE_nro_ServerListScreen_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_ServerListScreen_update, VTABLE_nro_ServerListScreen_update, "()V", 17 },
	{ "processInput", (intptr_t) M_nro_ServerListScreen_processInput, VTABLE_nro_ServerListScreen_processInput, "()V", 2 },
	{ "paintDeleteData", (intptr_t) SM_nro_ServerListScreen_paintDeleteData_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "CheckBack_ServerListScreen", (intptr_t) SM_nro_ServerListScreen_CheckBack_ServerListScreen, 0, "()V", 9 },
	{ "updateKey", (intptr_t) M_nro_ServerListScreen_updateKey, VTABLE_nro_ServerListScreen_updateKey, "()V", 17 },
	{ "saveIP", (intptr_t) SM_nro_ServerListScreen_saveIP, 0, "()V", 10 },
	{ "loadIP", (intptr_t) SM_nro_ServerListScreen_loadIP, 0, "()V", 9 },
	{ "switchToMe", (intptr_t) M_nro_ServerListScreen_switchToMe, VTABLE_nro_ServerListScreen_switchToMe, "()V", 17 },
	{ "switchToMe2", (intptr_t) M_nro_ServerListScreen_switchToMe2, VTABLE_nro_ServerListScreen_switchToMe2, "()V", 17 },
	{ "show2", (intptr_t) M_nro_ServerListScreen_show2, VTABLE_nro_ServerListScreen_show2, "()V", 17 },
	{ "selectServer", (intptr_t) M_nro_ServerListScreen_selectServer, VTABLE_nro_ServerListScreen_selectServer, "()V", 17 },
	{ "perform", (intptr_t) M_nro_ServerListScreen_perform_int_java_lang_Object, VTABLE_nro_ServerListScreen_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "init", (intptr_t) M_nro_ServerListScreen_init, VTABLE_nro_ServerListScreen_init, "()V", 17 },
	{ "ConnectIP", (intptr_t) SM_nro_ServerListScreen_ConnectIP, 0, "()V", 9 },
	{ "SetIpSelect", (intptr_t) SM_nro_ServerListScreen_SetIpSelect_int_boolean, 0, "(IZ)V", 9 },
	{ "Login_New", (intptr_t) SM_nro_ServerListScreen_Login_New, 0, "()V", 9 },
	{ "saveRMS_ExtraLink", (intptr_t) SM_nro_ServerListScreen_saveRMS_ExtraLink, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_ServerListScreen, 0, "()V", 8 },
};

Class class_nro_ServerListScreen{
		.nativeName = (intptr_t) "nro/ServerListScreen",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_ServerListScreen),
		.classVtable = (intptr_t) vtable_nro_ServerListScreen,
		.staticInitializer = (intptr_t) clinit_nro_ServerListScreen,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ServerListScreen,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 52,
		.nativeFields = (intptr_t) fields,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ServerListScreen = registerClass(&class_nro_ServerListScreen);

}

