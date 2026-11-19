#include "nro/ServerScr.h"
#include "nro/GameScr.h"
#include "java/lang/StringBuilder.h"
#include "lib/network/Session_ME.h"
#include "nro/IActionListener.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/Panel.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/ListNew.h"
#include "nro/Mob.h"
#include "lib/sound/SoundMn.h"
#include "nro/PopUp.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "lib/mSystem.h"
#include "nro/TileMap.h"
#include "lib/mFont.h"
#include "nro/ServerScr.h"
#include "nro/ServerListScreen.h"
#include "java/lang/Exception.h"
#include "lib/mGraphics.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "nro/Rms.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_nro_ServerScr_m;
jobject SF_nro_ServerScr_iconHead;
jbool SF_nro_ServerScr_isShowSv_HaveChar;

void mark_nro_ServerScr(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ServerScr_m)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerScr_m)->clazz)->markFunction)((jobject) SF_nro_ServerScr_m, mark, depth + 1);
		if (SF_nro_ServerScr_iconHead)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ServerScr_iconHead)->clazz)->markFunction)((jobject) SF_nro_ServerScr_iconHead, mark, depth + 1);
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
	auto self = (nro_ServerScr *) object;
	if (self->F_vecServer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vecServer)->clazz)->markFunction)((jobject) self->F_vecServer, mark, depth + 1);
	if (self->F_cmdCheck)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdCheck)->clazz)->markFunction)((jobject) self->F_cmdCheck, mark, depth + 1);
	if (self->F_cmdGlobal)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdGlobal)->clazz)->markFunction)((jobject) self->F_cmdGlobal, mark, depth + 1);
	if (self->F_cmdVietNam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdVietNam)->clazz)->markFunction)((jobject) self->F_cmdVietNam, mark, depth + 1);
	if (self->F_list)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_list)->clazz)->markFunction)((jobject) self->F_list, mark, depth + 1);
	if (self->F_cmdChooseArea)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdChooseArea)->clazz)->markFunction)((jobject) self->F_cmdChooseArea, mark, depth + 1);
	if (self->F_strArea)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strArea)->clazz)->markFunction)((jobject) self->F_strArea, mark, depth + 1);
	if (self->F_strTypeSV)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strTypeSV)->clazz)->markFunction)((jobject) self->F_strTypeSV, mark, depth + 1);
	if (self->F_strTypeSV_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strTypeSV_info)->clazz)->markFunction)((jobject) self->F_strTypeSV_info, mark, depth + 1);
	if (self->F_strShowAll)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strShowAll)->clazz)->markFunction)((jobject) self->F_strShowAll, mark, depth + 1);
}

void M_nro_ServerScr_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:switchToMe", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	LINE_NUMBER(69);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(70);
	clinit_nro_ServerScr(ctx);
	sp[0].o = (jobject)SF_nro_ServerScr_iconHead;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (jint(3)));
	clinit_nro_ServerScr(ctx);
	SF_nro_ServerScr_iconHead = sp[0].o;
	LINE_NUMBER(73);
	frame[1].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_ServerScr(ctx);
	sp[0].o = (jobject)SF_nro_ServerScr_iconHead;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(74);
	clinit_nro_ServerScr(ctx);
	sp[0].o = (jobject)SF_nro_ServerScr_iconHead;
	jint temp0 = frame[1].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/iconHead_"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(73);
	INST_IINC(1, 1);
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(78);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect = (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect);
	LINE_NUMBER(79);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw = (jint(1));
	LINE_NUMBER(80);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numh = (jint(1));
	LINE_NUMBER(81);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_12;
	}
	{
	LINE_NUMBER(82);
	clinit_nro_ServerScr(ctx);
	sp[0].o = (jobject)SF_nro_ServerScr_m;
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(83);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isChooseArea = (jint(1));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_OK;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (999), (jobject(nullptr)));
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_cmdChooseArea = (jref) sp[1].o;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_cmdChooseArea;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) - (38));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_cmdChooseArea;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) + (50));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_vecServer = (jref) sp[1].o;
	LINE_NUMBER(88);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_cmdChooseArea;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(89);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yBox = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (30));
	LINE_NUMBER(90);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wBox = (70);
	LINE_NUMBER(91);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hBox = (20);
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(93);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isChooseArea = (jint(0));
	LINE_NUMBER(94);
	M_nro_ServerScr_Load_RMS_Area(ctx, (frame[0].o));
	LINE_NUMBER(95);
	M_nro_ServerScr_SetNewSelectMenu_int_int(ctx, (frame[0].o), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Area), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_typeSv));
	}
label_12:;
	{
	LINE_NUMBER(99);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaintNewUi) != 0) goto label_26;
	}
	{
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isChooseArea) != 0) goto label_26;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_strArea;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (frame[0].o), (98), (jobject(nullptr)));
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_cmdGlobal = (jref) sp[1].o;
	LINE_NUMBER(101);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_cmdGlobal;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (jint(0));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_cmdGlobal;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (jint(0));
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_strArea;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(1)))), (frame[0].o), (97), (jobject(nullptr)));
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_cmdVietNam = (jref) sp[1].o;
	LINE_NUMBER(104);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_cmdVietNam;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (50);
	LINE_NUMBER(105);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_cmdVietNam;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (jint(0));
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_vecServer = (jref) sp[1].o;
	LINE_NUMBER(107);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_cmdGlobal;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(108);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_cmdVietNam;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	M_nro_ServerScr_Save_RMS_Area(ctx, (frame[0].o));
	}
label_26:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_nro_ServerScr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerScr(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(114);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect = (jint(0));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_vecServer = (jref) sp[1].o;
	LINE_NUMBER(27);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Area = (jint(0));
	LINE_NUMBER(28);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Lang = (jint(0));
	LINE_NUMBER(29);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_typeSv = (jint(0));
	LINE_NUMBER(59);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPopUp_Lang = (15);
	LINE_NUMBER(115);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Ti\u1ebfng Vi\u1ec7t"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"English"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Indo"_j)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"VI\u1ec6T NAM"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"GLOBAL"_j)));
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_strArea = (jref) sp[1].o;
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"M\u00e1y ch\u1ee7 ti\u00eau chu\u1ea9n"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"M\u00e1y ch\u1ee7 Super"_j)));
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_strTypeSV = (jref) sp[1].o;
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"M\u00e1y ch\u1ee7 ti\u00eau chu\u1ea9n:\nTi\u1ebfn tr\u00ecnh game b\u00ecnh th\u01b0\u1eddng."_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"M\u00e1y ch\u1ee7 Super:\n -Kh\u00f4ng th\u1ec3 giao d\u1ecbch v\u00e0ng.\n x3 S\u1ee9c m\u1ea1nh\n x3 Ti\u1ec1m n\u0103ng\n x3 V\u00e0ng\n x3 V\u1eadt ph\u1ea9m kh\u00e1c"_j)));
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_strTypeSV_info = (jref) sp[1].o;
	LINE_NUMBER(119);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_strShowAll = (jref) (((jobject) createStringLiteral(ctx, u8"Ch\u1ec9 hi\u1ec7n th\u1ecb m\u00e1y ch\u1ee7 \u0111\u00e3 ch\u01a1i."_j)));
	LINE_NUMBER(120);
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
	LINE_NUMBER(121);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_bgID = (jint(4));
	}
label_14:;
	{
	LINE_NUMBER(124);
	SM_nro_GameScr_SetNum_int_int(ctx, (jint(-1)), (jint(-1)));
	LINE_NUMBER(125);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = (100);
	LINE_NUMBER(126);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmy = (200);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerScr_Save_RMS_Area(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:Save_RMS_Area", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect = (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect);
	LINE_NUMBER(131);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w2c = (jint(5));
	LINE_NUMBER(132);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc = (90);
	LINE_NUMBER(133);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hc = (clinit_nro_ServerScr(ctx), (jint)SF_nro_mScreen_cmdH);
	LINE_NUMBER(134);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw = (jint(2));
	LINE_NUMBER(135);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (jint(2))) goto label_6;
	}
	{
	LINE_NUMBER(136);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w2c)));
	}
label_6:;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	jint temp1 = temp0 / ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw);
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	jint temp2 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	sp[1].i = temp1;
	sp += 2;
	if ((temp2 % ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw)) != 0) goto label_8;
	}
	INST_ICONST(0);
	goto label_9;
label_8:;
	INST_ICONST(1);
label_9:;
	{
	sp -= 3;
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_numh = (sp[1].i + sp[2].i);
	LINE_NUMBER(141);
	frame[1].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_12;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_Command, sp[0].o);
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(144);
	frame[3].i = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) - ((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w2c))) / (jint(2)))) + (((frame[1].i) % ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw)) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w2c))));
	LINE_NUMBER(145);
	frame[4].i = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - ((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numh) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hc) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w2c))) / (jint(2)))) + (((frame[1].i) / ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw)) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hc) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w2c))));
	LINE_NUMBER(146);
	((nro_Command *) NULL_CHECK((frame[2].o)))->F_x = (frame[3].i);
	LINE_NUMBER(147);
	((nro_Command *) NULL_CHECK((frame[2].o)))->F_y = (frame[4].i);
	LINE_NUMBER(148);
	((nro_Command *) NULL_CHECK((frame[2].o)))->F_w = ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc);
	}
label_15:;
	{
	LINE_NUMBER(141);
	INST_IINC(1, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerScr_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	jint temp0 = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (jint(1));
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = temp0;
	if (temp0 <= (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) * (jint(3))) + (100))) goto label_1;
	}
	{
	LINE_NUMBER(156);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = (100);
	}
label_1:;
	{
	LINE_NUMBER(159);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaintNewUi) != 0) goto label_3;
	}
	{
	LINE_NUMBER(160);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_nro_Command, sp[0].o));
	LINE_NUMBER(162);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_8;
	}
	{
	LINE_NUMBER(163);
	if ((frame[1].i) != ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect)) goto label_10;
	}
	{
	LINE_NUMBER(164);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) >= (jint(4))) goto label_12;
	}
	{
	LINE_NUMBER(165);
	((nro_Command *) NULL_CHECK((frame[2].o)))->F_isFocus = (jint(1));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(167);
	((nro_Command *) NULL_CHECK((frame[2].o)))->F_isFocus = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_SELECT;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), ((jint)((nro_Command *) NULL_CHECK((frame[2].o)))->F_type), (jobject(nullptr)));
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_cmdCheck = (jref) sp[1].o;
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_cmdCheck;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	goto label_16;
	}
label_10:;
	{
	LINE_NUMBER(173);
	((nro_Command *) NULL_CHECK((frame[2].o)))->F_isFocus = (jint(0));
	goto label_16;
	}
label_8:;
	{
	LINE_NUMBER(175);
	if ((frame[2].o) == nullptr) goto label_16;
	}
	{
	jint temp0 = (jint)((func_nro_Command_isPointerPressInside_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Command_isPointerPressInside_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(176);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sellllect      "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"   "_j))));
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[2].o)))->F_caption;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(177);
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Command_performAction])(ctx, (frame[2].o));
	}
label_16:;
	{
	LINE_NUMBER(160);
	INST_IINC(1, 1);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(182);
	M_nro_ServerScr_UpdTouch_NewUI(ctx, (frame[0].o));
	LINE_NUMBER(183);
	M_nro_ServerScr_f(ctx, (frame[0].o));
	LINE_NUMBER(184);
	SM_nro_ServerListScreen_CheckBack_ServerListScreen(ctx);
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:paint", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(188);
	SM_main_GameCanvas_paintBGGameScr_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(189);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isChooseArea) == 0) goto label_2;
	}
	{
	LINE_NUMBER(190);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isChooseArea) == 0) goto label_4;
	}
	{
	LINE_NUMBER(191);
	M_nro_ServerScr_a_lib_mGraphics_int_int(ctx, (frame[0].o), (frame[1].o), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) - (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wBox) / (jint(2)))), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yBox));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_cmdChooseArea;
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(194);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaintNewUi) == 0) goto label_7;
	}
	{
	LINE_NUMBER(195);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(196);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(198);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaintNewUi) == 0) goto label_11;
	}
	{
	LINE_NUMBER(199);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(14601141)));
	LINE_NUMBER(200);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_h));
	LINE_NUMBER(201);
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, (frame[1].o), (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xName) - (50)), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yName), (100), (20), (jint(0)), (jint(1)));
	LINE_NUMBER(202);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_selectServer2;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xName), (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yName) + (jint(5))), (jint(2)));
	LINE_NUMBER(206);
	frame[4].i = (jint(0));
	}
label_17:;
	{
	if ((frame[4].i) >= ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_ntypeSv)) goto label_18;
	}
	{
	LINE_NUMBER(207);
	frame[5].i = (((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_yPop) + ((frame[4].i) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_hPop) + (jint(5)))));
	LINE_NUMBER(208);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_xPop;
	jint temp1 = frame[5].i;
	jint temp2 = (jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_wPop;
	jint temp3 = (jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_hPop;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].i = temp3;
	sp += 5;
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_select_typeSv) != (frame[4].i)) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	{
	sp -= 6;
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(1)));
	LINE_NUMBER(209);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_strTypeSV;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[4].i))), (((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_xPop) + (((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_wPop) / (jint(2)))), ((frame[5].i) + (jint(5))), (jint(2)));
	LINE_NUMBER(206);
	INST_IINC(4, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(212);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[2].o), (jint(10254674)));
	LINE_NUMBER(213);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[2].o), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_xinfo), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_yinfo), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_winfo), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_hinfo));
	LINE_NUMBER(214);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7;
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_strTypeSV_info;
	sp[0].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_select_typeSv))), (((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_winfo) - (10)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(216);
	frame[5].i = (jint(0));
	}
label_28:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_29;
	}
	{
	LINE_NUMBER(217);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[5].i))), (((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_xinfo) + (jint(5))), ((((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_yinfo) + (jint(5))) + ((frame[5].i) * (11))), (jint(0)));
	LINE_NUMBER(216);
	INST_IINC(5, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(220);
	frame[7].i = ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_xinfo);
	LINE_NUMBER(221);
	frame[8].i = ((((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_yinfo) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_hinfo)) + (jint(2)));
	LINE_NUMBER(222);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[2].o), (jint(16777215)));
	LINE_NUMBER(223);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[2].o), (frame[7].i), (frame[8].i), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_wCheck), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_wCheck));
	LINE_NUMBER(224);
	if ((clinit_nro_ServerScr(ctx), (jint)SF_nro_ServerScr_isShowSv_HaveChar) == 0) goto label_36;
	}
	{
	LINE_NUMBER(225);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[2].o), (jint(3329330)));
	LINE_NUMBER(226);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[2].o), ((frame[7].i) + (jint(1))), ((frame[8].i) + (jint(1))), (((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_wCheck) - (jint(2))), (((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_wCheck) - (jint(2))));
	}
label_36:;
	{
	LINE_NUMBER(229);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_strShowAll;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((frame[7].i) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_wCheck)) + (jint(2))), (frame[8].i), (jint(0)));
	LINE_NUMBER(230);
	M_nro_ServerScr_a_lib_mGraphics_int_int(ctx, (frame[3].o), (frame[2].o), (10), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_yBox));
	LINE_NUMBER(231);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[2].o), (jint(10254674)));
	LINE_NUMBER(232);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[2].o), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_xsub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_ysub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_wsub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_hsub));
	LINE_NUMBER(234);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[2].o), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_xsub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_ysub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_wsub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_hsub));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_list;
	if (sp[0].o == nullptr) goto label_44;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_list;
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp0, (-((jint)((nro_ListNew *) NULL_CHECK(sp[1].o))->F_cmx)));
	}
label_44:;
	{
	LINE_NUMBER(240);
	frame[4].i = (jint(0));
	}
label_46:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_vecServer;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_47;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[3].o)))->F_vecServer;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = checkCast(ctx, &class_nro_Command, sp[0].o);
	frame[9].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_50;
	}
	{
	LINE_NUMBER(244);
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, (frame[9].o), (frame[2].o));
	LINE_NUMBER(245);
	if (((jint)((nro_Command *) NULL_CHECK((frame[9].o)))->F_isPaintNew) == 0) goto label_50;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(1))) goto label_50;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = frame[2].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgNew;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (((jint)((nro_Command *) NULL_CHECK((frame[9].o)))->F_x) + (60)), ((jint)((nro_Command *) NULL_CHECK((frame[9].o)))->F_y), (jint(0)));
	}
label_50:;
	{
	LINE_NUMBER(240);
	INST_IINC(4, 1);
	goto label_46;
	}
label_47:;
	{
	LINE_NUMBER(251);
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, (frame[2].o));
	}
label_11:;
	LINE_NUMBER(253);
	goto label_4;
label_7:;
	{
	LINE_NUMBER(254);
	frame[2].i = (jint(0));
	}
label_54:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	if (sp[0].o == nullptr) goto label_56;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Command, sp[0].o)))->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, (checkCast(ctx, &class_nro_Command, sp[0].o)), (frame[1].o));
	}
label_56:;
	{
	LINE_NUMBER(254);
	INST_IINC(2, 1);
	goto label_54;
	}
label_4:;
	{
	LINE_NUMBER(261);
	M_nro_mScreen_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerScr_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:updateKey", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	M_nro_mScreen_updateKey(ctx, (frame[0].o));
	LINE_NUMBER(266);
	frame[1].i = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect) % ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw));
	LINE_NUMBER(267);
	frame[2].i = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect) / ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw));
	LINE_NUMBER(268);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(4)))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(269);
	if ((frame[1].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_mainSelect = (((jint)((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_mainSelect) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(273);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(274);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (6))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(275);
	if ((frame[1].i) >= (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw) - (jint(1)))) goto label_11;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_mainSelect = (((jint)((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_mainSelect) + (jint(1)));
	}
label_11:;
	{
	LINE_NUMBER(279);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(0));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(280);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_13;
	}
	{
	LINE_NUMBER(281);
	if ((frame[2].i) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_mainSelect = (((jint)((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_mainSelect) - ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw));
	}
label_15:;
	{
	LINE_NUMBER(285);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	goto label_8;
	}
label_13:;
	{
	LINE_NUMBER(286);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(287);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-----------vo mainSelect: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(288);
	if ((frame[2].i) >= (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numh) - (jint(1)))) goto label_19;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_mainSelect = (((jint)((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_mainSelect) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw));
	}
label_19:;
	{
	LINE_NUMBER(292);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(295);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect) >= 0) goto label_21;
	}
	{
	LINE_NUMBER(296);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect = (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(299);
	jint temp0 = (jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect;
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 < temp1) goto label_23;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_mainSelect = (temp0 - (jint(1)));
	}
label_23:;
	{
	LINE_NUMBER(303);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5)))) == 0) goto label_25;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Command, sp[0].o)))->vtable)[VTABLE_nro_Command_performAction])(ctx, (checkCast(ctx, &class_nro_Command, sp[0].o)));
	LINE_NUMBER(305);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(0));
	}
label_25:;
	{
	LINE_NUMBER(308);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:perform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(312);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"perform trong ServerScr:"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(313);
	switch((frame[1].i)) {
		case 97: goto label_2;
		case 98: goto label_3;
		case 99: goto label_4;
		case 999: goto label_5;
		default: goto label_6;
	}
	}
label_2:;
	{
	LINE_NUMBER(315);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaintNewUi) != 0) goto label_7;
	}
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(318);
	frame[1].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(319);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_language;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i))) == 0) goto label_13;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_ServerListScreen(ctx);
	sp[2].o = (jobject)SF_nro_ServerListScreen_nameServer;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i))), (frame[0].o), ((frame[1].i) + (100)), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(318);
	INST_IINC(1, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(324);
	M_nro_ServerScr_Save_RMS_Area(ctx, (frame[0].o));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}
label_7:;
	LINE_NUMBER(328);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(330);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaintNewUi) != 0) goto label_16;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(333);
	frame[1].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_20;
	}
	{
	LINE_NUMBER(334);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_language;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i))) != 0) goto label_22;
	}
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_ServerListScreen(ctx);
	sp[2].o = (jobject)SF_nro_ServerListScreen_nameServer;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i))), (frame[0].o), ((frame[1].i) + (100)), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_22:;
	{
	LINE_NUMBER(333);
	INST_IINC(1, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(339);
	M_nro_ServerScr_Save_RMS_Area(ctx, (frame[0].o));
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return;
	}
label_16:;
	LINE_NUMBER(343);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_clearSendingMessage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_clearSendingMessage])(ctx, sp[0].o);
	LINE_NUMBER(346);
	SM_nro_ServerListScreen_SetIpSelect_int_boolean(ctx, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect), (jint(0)));
	LINE_NUMBER(347);
	goto label_27;
	}
label_5:;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(2)));
	frame[3].o = sp[0].o;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Area);
	LINE_NUMBER(351);
	ARRAY_ACCESS(jbyte, (frame[3].o), (jint(1))) = ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Lang);
	LINE_NUMBER(352);
	clinit_nro_ServerScr(ctx);
	sp[0].o = (jobject)SF_nro_ServerScr_m;
	SM_nro_Rms_saveRMS_java_lang_String_Array1_byte(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(353);
	M_nro_ServerScr_SetNewSelectMenu_int_int(ctx, (frame[0].o), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Area), (jint(0)));
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	LINE_NUMBER(357);
	SM_nro_ServerListScreen_SetIpSelect_int_boolean(ctx, ((frame[1].i) - (100)), (jint(1)));
	LINE_NUMBER(358);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	if (sp[0].o != nullptr) goto label_27;
	}
	{
	LINE_NUMBER(359);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerListScreen);
	init_nro_ServerListScreen(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_serverScreen = sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(363);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_selectServer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_selectServer])(ctx, sp[0].o);
	LINE_NUMBER(364);
	SM_nro_ServerListScreen_ConnectIP(ctx);
	LINE_NUMBER(365);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerScr_SetNewSelectMenu_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:SetNewSelectMenu", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(369);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isChooseArea = (jint(0));
	LINE_NUMBER(370);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaintNewUi = (jint(1));
	LINE_NUMBER(372);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wCheck = (10);
	LINE_NUMBER(373);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(3))) << (jint(1)));
	LINE_NUMBER(374);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_h = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(3))) << (jint(1)));
	LINE_NUMBER(375);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w)) / (jint(2)));
	LINE_NUMBER(376);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_y = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_h)) / (jint(2))) + (20));
	LINE_NUMBER(377);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xName = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2)));
	LINE_NUMBER(378);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yName = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_y) - (30));
	LINE_NUMBER(379);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wsub = ((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w) / (jint(3))) << (jint(1)));
	LINE_NUMBER(380);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wPop = ((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w) - ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wsub)) - (15));
	LINE_NUMBER(381);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wPop) >= (80)) goto label_12;
	}
	{
	LINE_NUMBER(382);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wPop = (80);
	LINE_NUMBER(383);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wsub = ((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w) - ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wPop)) - (15));
	}
label_12:;
	{
	LINE_NUMBER(386);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hsub = ((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_h) - (10)) - ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wCheck));
	LINE_NUMBER(387);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xsub = (((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w)) - ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wsub)) - (jint(5)));
	LINE_NUMBER(388);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ysub = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_y) + (jint(5)));
	LINE_NUMBER(389);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPop = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_x) + (jint(5)));
	LINE_NUMBER(390);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yPop = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_y) + (jint(5)));
	LINE_NUMBER(391);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hPop = (20);
	LINE_NUMBER(392);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xinfo = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_x) + (jint(5)));
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_strTypeSV;
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_yinfo = ((temp0 + ((((jarray) nullCheck(ctx, sp[1].o))->length) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hPop) + (jint(5))))) + (jint(5)));
	LINE_NUMBER(394);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_winfo = ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wPop);
	LINE_NUMBER(395);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_h;
	jint temp2 = jint(5);
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_strTypeSV;
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_hinfo = ((temp1 - ((temp2 + ((((jarray) nullCheck(ctx, sp[1].o))->length) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hPop) + (jint(5))))) + (jint(5)))) - ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wCheck));
	LINE_NUMBER(396);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yBox = (10);
	LINE_NUMBER(397);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wBox = (70);
	LINE_NUMBER(398);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hBox = (20);
	LINE_NUMBER(399);
	M_nro_ServerScr_GetVecTypeSv_byte_byte(ctx, (frame[0].o), (jbyte((frame[1].i))), (jbyte((frame[2].i))));
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerScr_GetVecTypeSv_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:GetVecTypeSv", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(404);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc = (76);
	LINE_NUMBER(405);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hc = (24);
	LINE_NUMBER(406);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w2c = (jint(5));
	LINE_NUMBER(407);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ntypeSv = (jint(1));
	LINE_NUMBER(408);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Area = (frame[1].i);
	LINE_NUMBER(409);
	SM_nro_mResources_loadLanguague_byte(ctx, (frame[1].i));
	LINE_NUMBER(412);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[3].i;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(413);
	if ((frame[1].i) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(414);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_language;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) == 0) goto label_13;
	}
	{
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) != (jint(1))) goto label_13;
	}
	{
	LINE_NUMBER(415);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ntypeSv = (jint(2));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(417);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) != (jint(1))) goto label_13;
	}
	{
	LINE_NUMBER(418);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ntypeSv = (jint(2));
	}
label_13:;
	{
	LINE_NUMBER(412);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(422);
	if ((frame[2].i) <= (jbyte((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ntypeSv) - (jint(1)))))) goto label_16;
	}
	{
	LINE_NUMBER(423);
	frame[2].i = (jbyte((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ntypeSv) - (jint(1)))));
	}
label_16:;
	{
	LINE_NUMBER(426);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_typeSv = (frame[2].i);
	LINE_NUMBER(430);
	frame[3].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[3].i;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_20;
	}
	{
	LINE_NUMBER(431);
	if ((frame[1].i) != (jint(1))) goto label_22;
	}
	{
	LINE_NUMBER(432);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_language;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) == 0) goto label_24;
	}
	{
	LINE_NUMBER(433);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) != (jint(1))) goto label_26;
	}
	{
	LINE_NUMBER(434);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ntypeSv = (jint(2));
	}
label_26:;
	{
	LINE_NUMBER(437);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) != (frame[2].i)) goto label_24;
	}
	{
	LINE_NUMBER(438);
	frame[4].i = (jint(-1));
	LINE_NUMBER(439);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeClass;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	jint temp0 = frame[3].i;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeClass;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_30;
	}
	{
	LINE_NUMBER(440);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeClass;
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)));
	}
label_30:;
	{
	LINE_NUMBER(443);
	if ((clinit_nro_ServerScr(ctx), (jint)SF_nro_ServerScr_isShowSv_HaveChar) == 0) goto label_32;
	}
	{
	if ((frame[4].i) == (jint(-1))) goto label_24;
	}
label_32:;
	{
	LINE_NUMBER(444);
	clinit_nro_Command(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_nameServer;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))), (frame[0].o), ((frame[3].i) + (100)), (jobject(nullptr)));
	frame[5].o = sp[0].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_isNew;
	sp += 1;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) != (jint(1))) goto label_34;
	}
	INST_ICONST(1);
	goto label_35;
label_34:;
	INST_ICONST(0);
label_35:;
	{
	sp -= 2;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_isPaintNew = sp[1].i;
	LINE_NUMBER(445);
	((nro_Command *) NULL_CHECK((frame[5].o)))->F_w = ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc);
	LINE_NUMBER(446);
	((nro_Command *) NULL_CHECK((frame[5].o)))->F_h = ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hc);
	LINE_NUMBER(447);
	if ((frame[4].i) < 0) goto label_39;
	}
	{
	LINE_NUMBER(448);
	sp[0].o = frame[5].o;
	clinit_nro_ServerScr(ctx);
	sp[1].o = (jobject)SF_nro_ServerScr_iconHead;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_imgBtn = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	}
label_39:;
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(456);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) != (jint(1))) goto label_41;
	}
	{
	LINE_NUMBER(457);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ntypeSv = (jint(2));
	}
label_41:;
	{
	LINE_NUMBER(460);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_language;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) != 0) goto label_24;
	}
	{
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeSv;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) != (frame[2].i)) goto label_24;
	}
	{
	LINE_NUMBER(461);
	frame[4].i = (jint(-1));
	LINE_NUMBER(462);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeClass;
	if (sp[0].o == nullptr) goto label_45;
	}
	{
	jint temp0 = frame[3].i;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeClass;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_45;
	}
	{
	LINE_NUMBER(463);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_typeClass;
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)));
	}
label_45:;
	{
	LINE_NUMBER(466);
	if ((clinit_nro_ServerScr(ctx), (jint)SF_nro_ServerScr_isShowSv_HaveChar) == 0) goto label_47;
	}
	{
	if ((frame[4].i) == (jint(-1))) goto label_24;
	}
label_47:;
	{
	LINE_NUMBER(467);
	clinit_nro_Command(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_nameServer;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))), (frame[0].o), ((frame[3].i) + (100)), (jobject(nullptr)));
	frame[5].o = sp[0].o;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_isNew;
	sp += 1;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) != (jint(1))) goto label_49;
	}
	INST_ICONST(1);
	goto label_50;
label_49:;
	INST_ICONST(0);
label_50:;
	{
	sp -= 2;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_isPaintNew = sp[1].i;
	LINE_NUMBER(468);
	((nro_Command *) NULL_CHECK((frame[5].o)))->F_w = ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc);
	LINE_NUMBER(469);
	((nro_Command *) NULL_CHECK((frame[5].o)))->F_h = ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hc);
	LINE_NUMBER(470);
	if ((frame[4].i) < 0) goto label_54;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = frame[5].o;
	clinit_nro_ServerScr(ctx);
	sp[1].o = (jobject)SF_nro_ServerScr_iconHead;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_imgBtn = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	}
label_54:;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	}
label_24:;
	{
	LINE_NUMBER(430);
	INST_IINC(3, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(480);
	frame[6].o = (frame[0].o);
	LINE_NUMBER(482);
	frame[2].i = (jint(0));
	}
label_57:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_vecServer;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 - (jint(1)))) goto label_58;
	}
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_vecServer;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[7].o = (checkCast(ctx, &class_nro_Command, sp[0].o));
	LINE_NUMBER(485);
	frame[4].i = ((frame[2].i) + (jint(1)));
	}
label_61:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_vecServer;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_62;
	}
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_vecServer;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = checkCast(ctx, &class_nro_Command, sp[0].o);
	frame[5].o = sp[0].o;
	if (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_isPaintNew) == 0) goto label_65;
	}
	{
	if (((jint)((nro_Command *) NULL_CHECK((frame[7].o)))->F_isPaintNew) != 0) goto label_65;
	}
	{
	LINE_NUMBER(487);
	frame[8].o = (frame[5].o);
	LINE_NUMBER(488);
	frame[5].o = (frame[7].o);
	LINE_NUMBER(489);
	frame[7].o = (frame[8].o);
	LINE_NUMBER(490);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_vecServer;
	((func_nro_MyVector_setElementAt_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_setElementAt_java_lang_Object_int])(ctx, sp[0].o, (frame[8].o), (frame[2].i));
	LINE_NUMBER(491);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_vecServer;
	((func_nro_MyVector_setElementAt_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_setElementAt_java_lang_Object_int])(ctx, sp[0].o, (frame[5].o), (frame[4].i));
	}
label_65:;
	{
	LINE_NUMBER(485);
	INST_IINC(4, 1);
	goto label_61;
	}
label_62:;
	{
	LINE_NUMBER(482);
	frame[2].i = (jbyte(((frame[2].i) + (jint(1)))));
	goto label_57;
	}
label_58:;
	{
	LINE_NUMBER(496);
	frame[6].o = (frame[0].o);
	LINE_NUMBER(497);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect = (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect);
	LINE_NUMBER(498);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w2c = (jint(5));
	LINE_NUMBER(499);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc = (76);
	LINE_NUMBER(500);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hc = (20);
	LINE_NUMBER(501);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw = (jint(1));
	LINE_NUMBER(502);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ysubpaint = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ysub) + (jint(5)));
	LINE_NUMBER(503);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8">>>>"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wsub));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" + "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w2c));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(504);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wsub) / (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w2c)));
	LINE_NUMBER(505);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw) > 0) goto label_80;
	}
	{
	LINE_NUMBER(506);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw = (jint(1));
	}
label_80:;
	{
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	jint temp1 = temp0 / ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw);
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	jint temp2 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	sp[1].i = temp1;
	sp += 2;
	if ((temp2 % ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw)) != 0) goto label_82;
	}
	INST_ICONST(0);
	goto label_83;
label_82:;
	INST_ICONST(1);
label_83:;
	{
	sp -= 3;
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_numh = (sp[1].i + sp[2].i);
	LINE_NUMBER(510);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xsubpaint = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xsub) + ((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wsub) - (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_numw) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wc) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_w2c)))) / (jint(2))));
	LINE_NUMBER(512);
	frame[3].i = (jint(0));
	}
label_86:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_vecServer;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_87;
	}
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_vecServer;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = checkCast(ctx, &class_nro_Command, sp[0].o);
	frame[7].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_90;
	}
	{
	LINE_NUMBER(515);
	frame[8].i = (((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_xsubpaint) + (((frame[3].i) % ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_numw)) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_wc) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_w2c))));
	LINE_NUMBER(516);
	frame[9].i = (((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_ysubpaint) + (((frame[3].i) / ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_numw)) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_hc) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_w2c))));
	LINE_NUMBER(517);
	((nro_Command *) NULL_CHECK((frame[7].o)))->F_x = (frame[8].i);
	LINE_NUMBER(518);
	((nro_Command *) NULL_CHECK((frame[7].o)))->F_y = (frame[9].i);
	LINE_NUMBER(519);
	((nro_Command *) NULL_CHECK((frame[7].o)))->F_w = ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_wc);
	LINE_NUMBER(520);
	((nro_Command *) NULL_CHECK((frame[7].o)))->F_h = ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_hc);
	}
label_90:;
	{
	LINE_NUMBER(512);
	INST_IINC(3, 1);
	goto label_86;
	}
label_87:;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_list;
	if (sp[0].o != nullptr) goto label_97;
	}
	{
	LINE_NUMBER(526);
	sp[0].o = frame[6].o;
	clinit_nro_ListNew(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_ListNew);
	init_nro_ListNew_int_int_int_int_int_int_int_boolean(ctx, sp[1].o, ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_xsub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_ysub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_wsub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_hsub), (jint(0)), (jint(0)), (jint(0)), (jint(1)));
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_list = (jref) sp[1].o;
	}
label_97:;
	{
	LINE_NUMBER(529);
	frame[3].i = ((((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_numh) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_hc) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_w2c))) - ((jint)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_hsub));
	LINE_NUMBER(530);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_list;
	frame[7].o = sp[0].o;
	LINE_NUMBER(531);
	if ((frame[3].i) >= 0) goto label_101;
	}
	{
	LINE_NUMBER(532);
	frame[3].i = (jint(0));
	}
label_101:;
	{
	LINE_NUMBER(535);
	((nro_ListNew *) NULL_CHECK((frame[7].o)))->F_cmxLim = (frame[3].i);
	LINE_NUMBER(536);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[7].o)))->F_cmx) <= ((jint)((nro_ListNew *) NULL_CHECK((frame[7].o)))->F_cmxLim)) goto label_104;
	}
	{
	LINE_NUMBER(537);
	((nro_ListNew *) NULL_CHECK((frame[7].o)))->F_cmx = ((jint)((nro_ListNew *) NULL_CHECK((frame[7].o)))->F_cmxLim);
	}
label_104:;
	{
	LINE_NUMBER(540);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[7].o)))->F_cmtoX) <= ((jint)((nro_ListNew *) NULL_CHECK((frame[7].o)))->F_cmxLim)) goto label_106;
	}
	{
	LINE_NUMBER(541);
	((nro_ListNew *) NULL_CHECK((frame[7].o)))->F_cmtoX = ((jint)((nro_ListNew *) NULL_CHECK((frame[7].o)))->F_cmxLim);
	}
label_106:;
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[6].o)))->F_list;
	((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmtoX = (jint(0));
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerScr_a_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:a", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(550);
	INST_IINC(2, -5);
	LINE_NUMBER(551);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPopUp_Area = (frame[2].i);
	LINE_NUMBER(552);
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, (frame[1].o), (frame[2].i), (frame[3].i), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wBox), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hBox), (jint(0)), (jint(1)));
	LINE_NUMBER(553);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_strArea;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Area))), ((frame[2].i) + ((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wBox) - (10)) / (jint(2)))), ((frame[3].i) + (jint(5))), (jint(2)));
	LINE_NUMBER(554);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (30), (9), (6), (jint(0)), (((frame[2].i) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wBox)) - (10)), ((frame[3].i) + (14)), (33));
	LINE_NUMBER(555);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaint_select_area) == 0) goto label_6;
	}
	{
	LINE_NUMBER(556);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yPopUp_Area = (((frame[3].i) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hBox)) + (jint(5)));
	LINE_NUMBER(557);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(10254674)));
	LINE_NUMBER(558);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yPopUp_Area;
	jint temp2 = (jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wBox;
	sp[1].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_strArea;
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2, (((((jarray) nullCheck(ctx, sp[1].o))->length) * ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPopUp_Lang)) + (jint(1))));
	LINE_NUMBER(560);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_strArea;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(561);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_strArea;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), ((frame[2].i) + (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wBox) / (jint(2)))), ((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yPopUp_Area) + ((frame[3].i) * ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPopUp_Lang))) + (jint(2))), (jint(2)));
	LINE_NUMBER(562);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Area) != (frame[3].i)) goto label_14;
	}
	{
	LINE_NUMBER(563);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(15591444)));
	LINE_NUMBER(564);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[1].o), ((frame[2].i) + (jint(2))), ((((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yPopUp_Area) + ((frame[3].i) * ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPopUp_Lang))) + (jint(1))), (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wBox) - (jint(4))), (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPopUp_Lang) - (jint(2))));
	}
label_14:;
	{
	LINE_NUMBER(560);
	INST_IINC(3, 1);
	goto label_11;
	}
label_6:;
	LINE_NUMBER(569);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerScr_UpdTouch_NewUI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:UpdTouch_NewUI", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(572);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaintNewUi) == 0) goto label_1;
	}
	{
	LINE_NUMBER(573);
	frame[1].i = (jint(0));
	LINE_NUMBER(574);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_list;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_list;
	((func_nro_ListNew_moveCamera) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ListNew_moveCamera])(ctx, sp[0].o);
	LINE_NUMBER(576);
	jint temp0 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xsub), (jint(0)), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wsub), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_list;
	((func_nro_ListNew_update_Pos_UP_DOWN) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ListNew_update_Pos_UP_DOWN])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_list;
	frame[1].i = ((jint)((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmx);
	}
label_4:;
	{
	LINE_NUMBER(584);
	jint temp0 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xsub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ysub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wsub), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hsub));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(585);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_9;
	}
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_vecServer;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_nro_Command, sp[0].o));
	LINE_NUMBER(587);
	if ((frame[4].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(588);
	jint temp0 = (jint)((func_nro_Command_isPointerPressInsideCamera_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Command_isPointerPressInsideCamera_int_int_R_boolean])(ctx, (frame[4].o), (jint(0)), (frame[1].i));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(589);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_mainSelect = (frame[3].i);
	LINE_NUMBER(590);
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Command_performAction])(ctx, (frame[4].o));
	LINE_NUMBER(591);
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(592);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) != 0) goto label_14;
	}
	{
	LINE_NUMBER(593);
	((nro_Command *) NULL_CHECK((frame[4].o)))->F_isFocus = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(585);
	INST_IINC(3, 1);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(599);
	jint temp0 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xinfo) - (jint(2))), (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yinfo) + ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hinfo)), (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wCheck) + (jint(4))), (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wCheck) + (jint(4))));
	if (temp0 == 0) goto label_21;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_21;
	{
	LINE_NUMBER(600);
	if ((clinit_nro_ServerScr(ctx), (jint)SF_nro_ServerScr_isShowSv_HaveChar) != 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	clinit_nro_ServerScr(ctx);
	SF_nro_ServerScr_isShowSv_HaveChar = sp[0].i;
	LINE_NUMBER(601);
	M_nro_ServerScr_GetVecTypeSv_byte_byte(ctx, (frame[0].o), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Area), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_typeSv));
	}
label_21:;
	{
	LINE_NUMBER(604);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ntypeSv) == (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(605);
	frame[3].i = (jint(0));
	}
label_27:;
	{
	if ((frame[3].i) >= ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_ntypeSv)) goto label_1;
	}
	{
	LINE_NUMBER(606);
	frame[2].i = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yPop) + ((frame[3].i) * (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hPop) + (jint(5)))));
	LINE_NUMBER(607);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPop), (frame[2].i), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wPop), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hPop));
	if (temp0 == 0) goto label_30;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerDown;
	if ((--sp)->i == 0) goto label_30;
	{
	LINE_NUMBER(608);
	M_nro_ServerScr_GetVecTypeSv_byte_byte(ctx, (frame[0].o), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Area), (frame[3].i));
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return;
	}
label_30:;
	{
	LINE_NUMBER(605);
	frame[3].i = (jbyte(((frame[3].i) + (jint(1)))));
	goto label_27;
	}
label_1:;
	LINE_NUMBER(615);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerScr_f(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:f", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(618);
	jint temp0 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPopUp_Area), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yBox), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wBox), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_hBox));
	if (temp0 == 0) goto label_1;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(619);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaint_select_area) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 2;
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_isPaint_select_area = sp[1].i;
	LINE_NUMBER(620);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(623);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaint_select_area) == 0) goto label_6;
	}
	{
	LINE_NUMBER(624);
	frame[1].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_strArea;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(625);
	frame[2].i = (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_yPopUp_Area) + ((frame[1].i) * ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPopUp_Lang)));
	LINE_NUMBER(626);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPopUp_Area), (frame[2].i), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_wBox), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_xPopUp_Lang));
	if (temp0 == 0) goto label_11;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerDown;
	if ((--sp)->i == 0) goto label_11;
	{
	LINE_NUMBER(627);
	if (((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isChooseArea) == 0) goto label_13;
	}
	{
	LINE_NUMBER(628);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Area = (frame[1].i);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(630);
	M_nro_ServerScr_SetNewSelectMenu_int_int(ctx, (frame[0].o), (frame[1].i), ((jint)((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_typeSv));
	}
label_15:;
	{
	LINE_NUMBER(633);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_isPaint_select_area = (jint(0));
	LINE_NUMBER(634);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(624);
	frame[1].i = (jbyte(((frame[1].i) + (jint(1)))));
	goto label_8;
	}
label_6:;
	LINE_NUMBER(639);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerScr_Load_RMS_Area(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:Load_RMS_Area", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(642);
	clinit_nro_ServerScr(ctx);
	sp[0].o = (jobject)SF_nro_ServerScr_m;
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(645);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Area = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0))));
	LINE_NUMBER(646);
	((nro_ServerScr *) NULL_CHECK((frame[0].o)))->F_select_Lang = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(1))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(649);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(647);
	frame[2].o = sp[0].o;
	LINE_NUMBER(648);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_ServerScr *) NULL_CHECK(sp[1].o))->F_select_Lang = temp0;
	((nro_ServerScr *) NULL_CHECK(sp[0].o))->F_select_Area = temp0;
	}
label_6:;
	LINE_NUMBER(650);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_ServerScr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerScr:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerScr(ctx);
	{
	LINE_NUMBER(23);
	clinit_nro_ServerScr(ctx);
	SF_nro_ServerScr_m = (((jobject) createStringLiteral(ctx, u8"area_select"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ServerScr[] {
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
	(void *) M_nro_ServerScr_switchToMe,
	(void *) M_nro_mScreen_keyPress_int,
	(void *) M_nro_ServerScr_update,
	(void *) M_nro_ServerScr_updateKey,
	(void *) M_nro_ServerScr_paint_lib_mGraphics,
	(void *) M_nro_ServerScr_perform_int_java_lang_Object,
	(void *) M_nro_ServerScr_Save_RMS_Area,
	(void *) M_nro_ServerScr_SetNewSelectMenu_int_int,
	(void *) M_nro_ServerScr_GetVecTypeSv_byte_byte,
	(void *) M_nro_ServerScr_a_lib_mGraphics_int_int,
	(void *) M_nro_ServerScr_UpdTouch_NewUI,
	(void *) M_nro_ServerScr_f,
	(void *) M_nro_ServerScr_Load_RMS_Area,
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
	{ "Save_RMS_Area", "()V" },
	{ "SetNewSelectMenu", "(II)V" },
	{ "GetVecTypeSv", "(BB)V" },
	{ "a", "(Llib/mGraphics;II)V" },
	{ "UpdTouch_NewUI", "()V" },
	{ "f", "()V" },
	{ "Load_RMS_Area", "()V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "mainSelect", &class_int, offsetof(nro_ServerScr, F_mainSelect), "I", 2 },
	{ "vecServer", &class_nro_MyVector, offsetof(nro_ServerScr, F_vecServer), "Lnro/MyVector;", 2 },
	{ "cmdCheck", &class_nro_Command, offsetof(nro_ServerScr, F_cmdCheck), "Lnro/Command;", 2 },
	{ "wc", &class_int, offsetof(nro_ServerScr, F_wc), "I", 2 },
	{ "hc", &class_int, offsetof(nro_ServerScr, F_hc), "I", 2 },
	{ "w2c", &class_int, offsetof(nro_ServerScr, F_w2c), "I", 2 },
	{ "numw", &class_int, offsetof(nro_ServerScr, F_numw), "I", 2 },
	{ "numh", &class_int, offsetof(nro_ServerScr, F_numh), "I", 2 },
	{ "cmdGlobal", &class_nro_Command, offsetof(nro_ServerScr, F_cmdGlobal), "Lnro/Command;", 2 },
	{ "cmdVietNam", &class_nro_Command, offsetof(nro_ServerScr, F_cmdVietNam), "Lnro/Command;", 2 },
	{ "m", &class_java_lang_String, (intptr_t) &SF_nro_ServerScr_m, "Ljava/lang/String;", 10 },
	{ "isChooseArea", &class_boolean, offsetof(nro_ServerScr, F_isChooseArea), "Z", 2 },
	{ "isPaintNewUi", &class_boolean, offsetof(nro_ServerScr, F_isPaintNewUi), "Z", 1 },
	{ "list", &class_nro_ListNew, offsetof(nro_ServerScr, F_list), "Lnro/ListNew;", 2 },
	{ "select_Area", &class_byte, offsetof(nro_ServerScr, F_select_Area), "B", 2 },
	{ "select_Lang", &class_byte, offsetof(nro_ServerScr, F_select_Lang), "B", 2 },
	{ "select_typeSv", &class_byte, offsetof(nro_ServerScr, F_select_typeSv), "B", 2 },
	{ "cmdChooseArea", &class_nro_Command, offsetof(nro_ServerScr, F_cmdChooseArea), "Lnro/Command;", 2 },
	{ "isPaint_select_area", &class_boolean, offsetof(nro_ServerScr, F_isPaint_select_area), "Z", 2 },
	{ "x", &class_int, offsetof(nro_ServerScr, F_x), "I", 2 },
	{ "y", &class_int, offsetof(nro_ServerScr, F_y), "I", 2 },
	{ "w", &class_int, offsetof(nro_ServerScr, F_w), "I", 2 },
	{ "h", &class_int, offsetof(nro_ServerScr, F_h), "I", 2 },
	{ "xName", &class_int, offsetof(nro_ServerScr, F_xName), "I", 2 },
	{ "yName", &class_int, offsetof(nro_ServerScr, F_yName), "I", 2 },
	{ "xsub", &class_int, offsetof(nro_ServerScr, F_xsub), "I", 2 },
	{ "ysub", &class_int, offsetof(nro_ServerScr, F_ysub), "I", 2 },
	{ "wsub", &class_int, offsetof(nro_ServerScr, F_wsub), "I", 2 },
	{ "hsub", &class_int, offsetof(nro_ServerScr, F_hsub), "I", 2 },
	{ "xsubpaint", &class_int, offsetof(nro_ServerScr, F_xsubpaint), "I", 2 },
	{ "ysubpaint", &class_int, offsetof(nro_ServerScr, F_ysubpaint), "I", 2 },
	{ "xPop", &class_int, offsetof(nro_ServerScr, F_xPop), "I", 2 },
	{ "yPop", &class_int, offsetof(nro_ServerScr, F_yPop), "I", 2 },
	{ "wPop", &class_int, offsetof(nro_ServerScr, F_wPop), "I", 2 },
	{ "hPop", &class_int, offsetof(nro_ServerScr, F_hPop), "I", 2 },
	{ "xinfo", &class_int, offsetof(nro_ServerScr, F_xinfo), "I", 2 },
	{ "yinfo", &class_int, offsetof(nro_ServerScr, F_yinfo), "I", 2 },
	{ "winfo", &class_int, offsetof(nro_ServerScr, F_winfo), "I", 2 },
	{ "hinfo", &class_int, offsetof(nro_ServerScr, F_hinfo), "I", 2 },
	{ "yBox", &class_int, offsetof(nro_ServerScr, F_yBox), "I", 2 },
	{ "wBox", &class_int, offsetof(nro_ServerScr, F_wBox), "I", 2 },
	{ "hBox", &class_int, offsetof(nro_ServerScr, F_hBox), "I", 2 },
	{ "ntypeSv", &class_int, offsetof(nro_ServerScr, F_ntypeSv), "I", 2 },
	{ "wCheck", &class_int, offsetof(nro_ServerScr, F_wCheck), "I", 2 },
	{ "xPopUp_Area", &class_int, offsetof(nro_ServerScr, F_xPopUp_Area), "I", 2 },
	{ "yPopUp_Area", &class_int, offsetof(nro_ServerScr, F_yPopUp_Area), "I", 2 },
	{ "xPopUp_Lang", &class_int, offsetof(nro_ServerScr, F_xPopUp_Lang), "I", 2 },
	{ "strArea", getArrayClass(&class_java_lang_String, 1), offsetof(nro_ServerScr, F_strArea), "[Ljava/lang/String;", 2 },
	{ "strTypeSV", getArrayClass(&class_java_lang_String, 1), offsetof(nro_ServerScr, F_strTypeSV), "[Ljava/lang/String;", 2 },
	{ "strTypeSV_info", getArrayClass(&class_java_lang_String, 1), offsetof(nro_ServerScr, F_strTypeSV_info), "[Ljava/lang/String;", 2 },
	{ "strShowAll", &class_java_lang_String, offsetof(nro_ServerScr, F_strShowAll), "Ljava/lang/String;", 2 },
	{ "iconHead", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_nro_ServerScr_iconHead, "[Ljavax/microedition/lcdui/Image;", 10 },
	{ "isShowSv_HaveChar", &class_boolean, (intptr_t) &SF_nro_ServerScr_isShowSv_HaveChar, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "switchToMe", (intptr_t) M_nro_ServerScr_switchToMe, VTABLE_nro_ServerScr_switchToMe, "()V", 17 },
	{ "<init>", (intptr_t) init_nro_ServerScr, 0, "()V", 1 },
	{ "Save_RMS_Area", (intptr_t) M_nro_ServerScr_Save_RMS_Area, VTABLE_nro_ServerScr_Save_RMS_Area, "()V", 2 },
	{ "update", (intptr_t) M_nro_ServerScr_update, VTABLE_nro_ServerScr_update, "()V", 17 },
	{ "paint", (intptr_t) M_nro_ServerScr_paint_lib_mGraphics, VTABLE_nro_ServerScr_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "updateKey", (intptr_t) M_nro_ServerScr_updateKey, VTABLE_nro_ServerScr_updateKey, "()V", 17 },
	{ "perform", (intptr_t) M_nro_ServerScr_perform_int_java_lang_Object, VTABLE_nro_ServerScr_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "SetNewSelectMenu", (intptr_t) M_nro_ServerScr_SetNewSelectMenu_int_int, VTABLE_nro_ServerScr_SetNewSelectMenu_int_int, "(II)V", 2 },
	{ "GetVecTypeSv", (intptr_t) M_nro_ServerScr_GetVecTypeSv_byte_byte, VTABLE_nro_ServerScr_GetVecTypeSv_byte_byte, "(BB)V", 2 },
	{ "a", (intptr_t) M_nro_ServerScr_a_lib_mGraphics_int_int, VTABLE_nro_ServerScr_a_lib_mGraphics_int_int, "(Llib/mGraphics;II)V", 2 },
	{ "UpdTouch_NewUI", (intptr_t) M_nro_ServerScr_UpdTouch_NewUI, VTABLE_nro_ServerScr_UpdTouch_NewUI, "()V", 2 },
	{ "f", (intptr_t) M_nro_ServerScr_f, VTABLE_nro_ServerScr_f, "()V", 2 },
	{ "Load_RMS_Area", (intptr_t) M_nro_ServerScr_Load_RMS_Area, VTABLE_nro_ServerScr_Load_RMS_Area, "()V", 2 },
	{ "<clinit>", (intptr_t) clinit_nro_ServerScr, 0, "()V", 8 },
};

Class class_nro_ServerScr{
		.nativeName = (intptr_t) "nro/ServerScr",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_ServerScr),
		.classVtable = (intptr_t) vtable_nro_ServerScr,
		.staticInitializer = (intptr_t) clinit_nro_ServerScr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ServerScr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 53,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ServerScr = registerClass(&class_nro_ServerScr);

}

