#include "nro/RegisterScreen.h"
#include "nro/GameScr.h"
#include "lib/input/TField.h"
#include "lib/network/Session_ME.h"
#include "java/lang/StringBuilder.h"
#include "nro/IActionListener.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
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
#include "lib/mFont.h"
#include "java/lang/Exception.h"
#include "nro/ServerListScreen.h"
#include "nro/Dialog.h"
#include "lib/mGraphics.h"
#include "java/lang/Long.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "nro/RegisterScreen.h"
#include "main/GameMidlet.h"
#include "nro/MsgDlg.h"
#include "nro/Rms.h"
#include "java/lang/System.h"

extern "C" {

jbool SF_nro_RegisterScreen_isContinueToLogin;

void mark_nro_RegisterScreen(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (nro_RegisterScreen *) object;
	if (self->F_tfUser)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfUser)->clazz)->markFunction)((jobject) self->F_tfUser, mark, depth + 1);
	if (self->F_tfNgay)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfNgay)->clazz)->markFunction)((jobject) self->F_tfNgay, mark, depth + 1);
	if (self->F_tfThang)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfThang)->clazz)->markFunction)((jobject) self->F_tfThang, mark, depth + 1);
	if (self->F_tfNam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfNam)->clazz)->markFunction)((jobject) self->F_tfNam, mark, depth + 1);
	if (self->F_tfDiachi)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfDiachi)->clazz)->markFunction)((jobject) self->F_tfDiachi, mark, depth + 1);
	if (self->F_tfCMND)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfCMND)->clazz)->markFunction)((jobject) self->F_tfCMND, mark, depth + 1);
	if (self->F_tfNgayCap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfNgayCap)->clazz)->markFunction)((jobject) self->F_tfNgayCap, mark, depth + 1);
	if (self->F_tfNoiCap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfNoiCap)->clazz)->markFunction)((jobject) self->F_tfNoiCap, mark, depth + 1);
	if (self->F_tfSodt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfSodt)->clazz)->markFunction)((jobject) self->F_tfSodt, mark, depth + 1);
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
	if (self->F_cmdOK)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdOK)->clazz)->markFunction)((jobject) self->F_cmdOK, mark, depth + 1);
}

jobject M_nro_RegisterScreen_getActiveField_R_lib_input_TField(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RegisterScreen:getActiveField", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)createArray(ctx, &class_lib_input_TField, (9));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfDiachi;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfCMND;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgayCap;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNoiCap;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	frame[1].o = sp[0].o;
	LINE_NUMBER(50);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(51);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))) == nullptr) goto label_5;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)))))->F_isFocus) == 0) goto label_5;
	}
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	}
label_5:;
	{
	LINE_NUMBER(50);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_nro_RegisterScreen_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RegisterScreen:switchToMe", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Res switch"_j))));
	LINE_NUMBER(60);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	LINE_NUMBER(61);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(62);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_4;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isPC;
	if ((--sp)->i != 0) goto label_4;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(69);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_RegisterScreen_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RegisterScreen:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_RegisterScreen(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(72);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isCheck = (jint(0));
	LINE_NUMBER(26);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isRes = (jint(0));
	LINE_NUMBER(35);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yLog = (130);
	LINE_NUMBER(37);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tipid = (jint(-1));
	LINE_NUMBER(38);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isLogin2 = (jint(0));
	LINE_NUMBER(39);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_v = (jint(2));
	LINE_NUMBER(40);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_g = (jint(0));
	LINE_NUMBER(41);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_ylogo = (-40);
	LINE_NUMBER(42);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_dir = (jint(1));
	LINE_NUMBER(73);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	jint temp1 = jbyte((jint((temp0 % (jlong(9ll))))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_bgID = temp1;
	if (temp1 == (jint(5))) goto label_11;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgID) != (6)) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(74);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_bgID = (jint(4));
	}
label_12:;
	{
	LINE_NUMBER(77);
	SM_nro_GameScr_SetNum_int_int(ctx, (jint(-1)), (jint(-1)));
	LINE_NUMBER(78);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = (100);
	LINE_NUMBER(79);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmy = (200);
	LINE_NUMBER(80);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) <= (200)) goto label_16;
	}
	{
	LINE_NUMBER(81);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_defYL = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (80));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(83);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_defYL = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (65));
	}
label_18:;
	{
	LINE_NUMBER(86);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yL = (-50);
	LINE_NUMBER(87);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yt = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - (clinit_nro_RegisterScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT)) - (jint(5)));
	LINE_NUMBER(88);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) > (160)) goto label_21;
	}
	{
	LINE_NUMBER(89);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yt = (20);
	}
label_21:;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_tfSodt = (jref) sp[1].o;
	LINE_NUMBER(93);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (220);
	LINE_NUMBER(95);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_RegisterScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"S\u1ed1 \u0111i\u1ec7n tho\u1ea1i"_j)));
	LINE_NUMBER(97);
	if ((frame[1].i) != (jint(1))) goto label_28;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"01234567890"_j))));
	}
label_28:;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_tfUser = (jref) sp[1].o;
	LINE_NUMBER(102);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (220);
	LINE_NUMBER(103);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_RegisterScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"H\u1ecd v\u00e0 t\u00ean"_j)));
	LINE_NUMBER(106);
	if ((frame[1].i) != (jint(1))) goto label_35;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Nguy\u1ec5n V\u0103n A"_j))));
	}
label_35:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_tfNgay = (jref) sp[1].o;
	LINE_NUMBER(112);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (70);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_RegisterScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"Ng\u00e0y sinh"_j)));
	LINE_NUMBER(116);
	if ((frame[1].i) != (jint(1))) goto label_43;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"01"_j))));
	}
label_43:;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_tfThang = (jref) sp[1].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (70);
	LINE_NUMBER(123);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_RegisterScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"Th\u00e1ng sinh"_j)));
	LINE_NUMBER(125);
	if ((frame[1].i) != (jint(1))) goto label_50;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"01"_j))));
	}
label_50:;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_tfNam = (jref) sp[1].o;
	LINE_NUMBER(130);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (70);
	LINE_NUMBER(132);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_RegisterScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"N\u0103m sinh"_j)));
	LINE_NUMBER(134);
	if ((frame[1].i) != (jint(1))) goto label_57;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"1980"_j))));
	}
label_57:;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_tfDiachi = (jref) sp[1].o;
	LINE_NUMBER(139);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfDiachi;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfDiachi;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (220);
	LINE_NUMBER(141);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfDiachi;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_RegisterScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfDiachi;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"\u0110\u1ecba ch\u1ec9 \u0111\u0103ng k\u00fd th\u01b0\u1eddng tr\u00fa"_j)));
	LINE_NUMBER(143);
	if ((frame[1].i) != (jint(1))) goto label_64;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfDiachi;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"123 \u0111\u01b0\u1eddng s\u1ed1 1, Qu\u1eadn 1, TP.HCM"_j))));
	}
label_64:;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_tfCMND = (jref) sp[1].o;
	LINE_NUMBER(148);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfCMND;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfCMND;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (220);
	LINE_NUMBER(150);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfCMND;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_RegisterScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfCMND;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"S\u1ed1 Ch\u1ee9ng minh nh\u00e2n d\u00e2n ho\u1eb7c s\u1ed1 h\u1ed9 chi\u1ebfu"_j)));
	LINE_NUMBER(152);
	if ((frame[1].i) != (jint(1))) goto label_71;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfCMND;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"123456789"_j))));
	}
label_71:;
	{
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_tfNgayCap = (jref) sp[1].o;
	LINE_NUMBER(157);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgayCap;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgayCap;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (220);
	LINE_NUMBER(159);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgayCap;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_RegisterScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgayCap;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"Ng\u00e0y c\u1ea5p"_j)));
	LINE_NUMBER(161);
	if ((frame[1].i) != (jint(1))) goto label_78;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgayCap;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"01/01/1990"_j))));
	}
label_78:;
	{
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_tfNoiCap = (jref) sp[1].o;
	LINE_NUMBER(166);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNoiCap;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNoiCap;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (220);
	LINE_NUMBER(168);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNoiCap;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_RegisterScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNoiCap;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"N\u01a1i c\u1ea5p"_j)));
	LINE_NUMBER(170);
	if ((frame[1].i) != (jint(1))) goto label_85;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNoiCap;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TP.HCM"_j))));
	}
label_85:;
	{
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_yt = (((jint)((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_yt) + (35));
	LINE_NUMBER(175);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isCheck = (jint(1));
	LINE_NUMBER(176);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = sp[1].o;
	sp += 3;
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) <= (200)) goto label_91;
	}
	clinit_nro_mResources(ctx);
	(sp++)->o = SF_nro_mResources_login;
	goto label_92;
label_91:;
	clinit_nro_mResources(ctx);
	(sp++)->o = SF_nro_mResources_login2;
label_92:;
	{
	sp -= 4;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[3].o, sp[2].o, (jint(888393)), (jobject(nullptr)));
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_cmdLogin = (jref) sp[1].o;
	LINE_NUMBER(178);
	clinit_nro_Command(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_remember;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[0].o), (2001), (jobject(nullptr)));
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_register;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (2002), (jobject(nullptr)));
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_cmdRes = (jref) sp[1].o;
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CANCEL;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (10021), (jobject(nullptr)));
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_cmdBackFromRegister = (jref) sp[1].o;
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[2].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_MENU;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[2].o, sp[3].o, (frame[0].o), (2003), (jobject(nullptr)));
	((nro_RegisterScreen *) NULL_CHECK(sp[1].o))->F_cmdMenu = (jref) sp[2].o;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[2].o;
	LINE_NUMBER(182);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_98;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (100));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (clinit_nro_RegisterScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard)) - (8));
	LINE_NUMBER(185);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) < (200)) goto label_102;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdLogin;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))) - (40));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yLog) + (110));
	}
label_102:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (jint(3)));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yLog) + (110));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (84));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_Command *) NULL_CHECK(sp[1].o))->F_y);
	}
label_98:;
	{
	LINE_NUMBER(196);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_wP = (170);
	LINE_NUMBER(197);
	frame[1].i = (-72);
	LINE_NUMBER(198);
	if ((184) < (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) goto label_110;
	}
	{
	LINE_NUMBER(199);
	frame[1].i = (-104);
	}
label_110:;
	{
	LINE_NUMBER(202);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_xLog = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - ((frame[1].i) / (jint(2))));
	LINE_NUMBER(203);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yLog = (jint(5));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_xLog) + (10));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yLog) + (20));
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_OK;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (2008), (jobject(nullptr)));
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_cmdOK = (jref) sp[1].o;
	LINE_NUMBER(207);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (260);
	LINE_NUMBER(208);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (60));
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Tho\u00e1t"_j))), (frame[0].o), (1003), (jobject(nullptr)));
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_cmdFogetPass = (jref) sp[1].o;
	LINE_NUMBER(210);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (260);
	LINE_NUMBER(211);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (30));
	LINE_NUMBER(212);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (80));
	LINE_NUMBER(213);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (10));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (25);
	((nro_Command *) NULL_CHECK(sp[1].o))->F_y = temp0;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = temp0;
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_RegisterScreen_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RegisterScreen:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(221);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(222);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(223);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(224);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(226);
	frame[1].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(227);
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_nro_Effect2_update) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Effect2, sp[0].o)))->vtable)[VTABLE_nro_Effect2_update])(ctx, (checkCast(ctx, &class_nro_Effect2, sp[0].o)));
	LINE_NUMBER(226);
	INST_IINC(1, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(230);
	jint temp0 = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (jint(1));
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = temp0;
	if (temp0 <= (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) * (jint(3))) + (100))) goto label_10;
	}
	{
	LINE_NUMBER(231);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = (100);
	}
label_10:;
	{
	LINE_NUMBER(234);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(235);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_defYL) == ((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yL)) goto label_14;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_yL = (((jint)((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_yL) + ((((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_defYL) - ((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yL)) >> (jint(1))));
	}
label_14:;
	{
	LINE_NUMBER(239);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_g) < 0) goto label_16;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_ylogo = (((jint)((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_ylogo) + (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_dir) * ((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_g)));
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_g = (((jint)((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_g) + (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_dir) * ((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_v)));
	LINE_NUMBER(242);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_g) > 0) goto label_20;
	}
	{
	LINE_NUMBER(243);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_dir = (-((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_dir));
	}
label_20:;
	{
	LINE_NUMBER(246);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_ylogo) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(247);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_dir = (-((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_dir));
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_g = (((jint)((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_g) - ((jint(2)) * ((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_v)));
	}
label_16:;
	{
	LINE_NUMBER(252);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tipid) < 0) goto label_24;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (100)) != 0) goto label_24;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_tipid = (((jint)((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_tipid) + (jint(1)));
	LINE_NUMBER(254);
	jint temp0 = (jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tipid;
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_tips;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_27;
	}
	{
	LINE_NUMBER(255);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tipid = (jint(0));
	}
label_27:;
	{
	LINE_NUMBER(258);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_msgdlg;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	if (((jint)((nro_MsgDlg *) NULL_CHECK(sp[0].o))->F_isWait) == 0) goto label_24;
	}
	{
	LINE_NUMBER(259);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_tips;
	((func_nro_MsgDlg_setInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_setInfo_java_lang_String])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tipid))));
	}
label_24:;
	{
	LINE_NUMBER(263);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_30;
	}
	{
	LINE_NUMBER(264);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isRes) == 0) goto label_32;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	goto label_12;
	}
label_32:;
	{
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	goto label_12;
	}
label_30:;
	{
	LINE_NUMBER(271);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isRes) == 0) goto label_36;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	goto label_12;
	}
label_36:;
	{
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	}
label_12:;
	LINE_NUMBER(279);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_RegisterScreen_keyPress_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RegisterScreen:keyPress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_1;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	jint temp0 = (jint)((func_lib_input_TField_keyPressed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_keyPressed_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_3;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	jint temp0 = (jint)((func_lib_input_TField_keyPressed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_keyPressed_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	}
label_3:;
	{
	LINE_NUMBER(288);
	M_nro_mScreen_keyPress_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_RegisterScreen_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RegisterScreen:paint", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(292);
	SM_main_GameCanvas_paintBGGameScr_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(293);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(294);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(295);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(296);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_xLog = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) - (120));
	LINE_NUMBER(297);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yLog = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (110)) / (jint(2)));
	LINE_NUMBER(298);
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, (frame[1].o), ((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_xLog), ((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yLog), (240), (110), (jint(-1)), (jint(1)));
	LINE_NUMBER(299);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_xLog) + (10));
	LINE_NUMBER(300);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yLog) + (15));
	LINE_NUMBER(301);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = ((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(302);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_y) + (30));
	LINE_NUMBER(303);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_xLog) + (10));
	LINE_NUMBER(304);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_y) + (30));
	LINE_NUMBER(305);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_x) + (75));
	LINE_NUMBER(306);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = ((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(307);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_x) + (75));
	LINE_NUMBER(308);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = ((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(309);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_focus;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"C\u1eadp nh\u1eadt th\u00f4ng tin"_j))), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_yLog) + (jint(2))), (jint(2)));
	LINE_NUMBER(310);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(311);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(312);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(313);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(314);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(317);
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(318);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"2.5.2"_j)));
	LINE_NUMBER(319);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_skyColor));
	LINE_NUMBER(320);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (40)), (jint(4)), (36), (11));
	LINE_NUMBER(321);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].o), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (22)), (jint(4)), (jint(2)));
	LINE_NUMBER(322);
	sp[0].o = frame[1].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_img18;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (10), (10), (jint(0)));
	LINE_NUMBER(323);
	M_nro_mScreen_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	LINE_NUMBER(326);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_RegisterScreen_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RegisterScreen:updateKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_1;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_3;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(337);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_focus = (((jint)((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_focus) - (jint(1)));
	LINE_NUMBER(339);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_focus) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(340);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(342);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = frame[0].o;
	((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_focus = (((jint)((nro_RegisterScreen *) NULL_CHECK(sp[0].o))->F_focus) + (jint(1)));
	LINE_NUMBER(344);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_focus) <= (jint(1))) goto label_8;
	}
	{
	LINE_NUMBER(345);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(349);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) != 0) goto label_13;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(350);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(351);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_focus) != (jint(1))) goto label_16;
	}
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(353);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	goto label_14;
	}
label_16:;
	{
	LINE_NUMBER(354);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_focus) != 0) goto label_19;
	}
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(356);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	goto label_14;
	}
label_19:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(359);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(363);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_23;
	}
	{
	LINE_NUMBER(364);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isRes) == 0) goto label_25;
	}
	{
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	goto label_28;
	}
label_25:;
	{
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	goto label_28;
	}
label_23:;
	{
	LINE_NUMBER(371);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isRes) == 0) goto label_30;
	}
	{
	LINE_NUMBER(372);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdRes;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdBackFromRegister;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	goto label_28;
	}
label_30:;
	{
	LINE_NUMBER(375);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdOK;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdFogetPass;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	}
label_28:;
	{
	LINE_NUMBER(379);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_34;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	jint temp1 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	jint temp2 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	jint temp3 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, ((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height));
	if (temp3 == 0) goto label_36;
	}
	{
	LINE_NUMBER(381);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_focus = (jint(0));
	goto label_34;
	}
label_36:;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	jint temp1 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	jint temp2 = (jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	jint temp3 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, ((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height));
	if (temp3 == 0) goto label_34;
	}
	{
	LINE_NUMBER(383);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_focus = (jint(1));
	}
label_34:;
	{
	LINE_NUMBER(387);
	M_nro_mScreen_updateKey(ctx, (frame[0].o));
	LINE_NUMBER(388);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_RegisterScreen_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RegisterScreen:perform", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(392);
	switch((frame[1].i)) {
		case 1000: goto label_0;
		case 1001: goto label_13;
		case 1002: goto label_14;
		case 1003: goto label_15;
		case 1004: goto label_16;
		case 1005: goto label_4;
		case 2000: goto label_17;
		case 2001: goto label_18;
		case 2002: goto label_19;
		case 2003: goto label_20;
		case 2004: goto label_21;
		case 2008: goto label_22;
		case 4000: goto label_23;
		case 10021: goto label_24;
		case 10041: goto label_25;
		case 10042: goto label_26;
		default: goto label_23;
	}
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(395);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_platformRequest_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_platformRequest_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, (frame[2].o))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(398);
	goto label_27;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(396);
	frame[3].o = sp[0].o;
	LINE_NUMBER(397);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
label_27:;
	{
	LINE_NUMBER(400);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(403);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(404);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isRes = (jint(0));
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return;
	}
label_14:;
	LINE_NUMBER(407);
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(409);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(410);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return;
	}
label_16:;
	{
	LINE_NUMBER(413);
	SM_nro_ServerListScreen_doUpdateServer(ctx);
	LINE_NUMBER(414);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return;
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(418);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_platformRequest_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_platformRequest_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"http://ngocrongonline.com"_j))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(419);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(420);
	frame[3].o = sp[0].o;
	LINE_NUMBER(421);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	LINE_NUMBER(422);
	popStackFrame(ctx);
	return;
	}
label_17:;
	LINE_NUMBER(425);
	popStackFrame(ctx);
	INST_RETURN();
label_18:;
	{
	LINE_NUMBER(427);
	if (((jint)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isCheck) == 0) goto label_38;
	}
	{
	LINE_NUMBER(428);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isCheck = (jint(0));
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return;
	}
label_38:;
	{
	LINE_NUMBER(432);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isCheck = (jint(1));
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return;
	}
label_19:;
	{
	LINE_NUMBER(435);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(436);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_43;
	}
	{
	LINE_NUMBER(437);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_userBlank;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	goto label_45;
	}
label_43:;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, sp[0].o);
	LINE_NUMBER(440);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_47;
	}
	{
	LINE_NUMBER(441);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_passwordBlank;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	goto label_45;
	}
label_47:;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 < (jint(5))) goto label_49;
	}
	{
	LINE_NUMBER(444);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(446);
	if ((clinit_nro_mResources(ctx), (jint)SF_nro_mResources_language) != (jint(2))) goto label_8;
	}
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == (jint(-1))) goto label_53;
	}
	{
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp0 != (jint(-1))) goto label_54;
	}
label_53:;
	{
	LINE_NUMBER(448);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_emailInvalid;
	frame[4].o = sp[0].o;
	}
label_54:;
	{
	LINE_NUMBER(451);
	frame[5].i = (jint(0));
	goto label_56;
	}
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[3].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, sp[0].o);
	LINE_NUMBER(455);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[3].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp1 < (8)) goto label_58;
	}
	{
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[3].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 > (12)) goto label_58;
	}
	{
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[3].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0"_j))));
	if (temp0 != 0) goto label_59;
	}
	{
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[3].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"84"_j))));
	if (temp0 != 0) goto label_59;
	}
label_58:;
	{
	LINE_NUMBER(456);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_phoneInvalid;
	frame[4].o = sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(459);
	frame[5].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(466);
	goto label_56;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(460);
	frame[6].o = sp[0].o;
	LINE_NUMBER(461);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == (jint(-1))) goto label_61;
	}
	{
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp0 != (jint(-1))) goto label_62;
	}
label_61:;
	{
	LINE_NUMBER(462);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_emailInvalid;
	frame[4].o = sp[0].o;
	}
label_62:;
	{
	LINE_NUMBER(465);
	frame[5].i = (jint(0));
	}
label_56:;
	{
	LINE_NUMBER(469);
	if ((frame[4].o) == nullptr) goto label_63;
	}
	{
	LINE_NUMBER(470);
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, (frame[4].o));
	goto label_65;
	}
label_63:;
	{
	LINE_NUMBER(472);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_plsCheckAcc;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp += 2;
	if ((frame[5].i) == 0) goto label_66;
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
	goto label_67;
	}
label_66:;
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
label_67:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[2].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_password;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[2].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
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
label_65:;
	{
	LINE_NUMBER(475);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = sp[0].o;
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}
label_49:;
	{
	LINE_NUMBER(479);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_accTooShort;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(482);
	goto label_45;
	}
label_20:;
	{
	LINE_NUMBER(485);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vMenu Login"_j))));
	frame[4].o = sp[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_registerNewAcc;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (2004), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(486);
	sp[0].o = frame[4].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_selectServer;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (1004), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(487);
	sp[0].o = frame[4].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_forgetPass;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (1003), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(488);
	sp[0].o = frame[4].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_website;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (1005), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(489);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"lowGraphic"_j))));
	if (temp0 != (jint(1))) goto label_75;
	}
	{
	LINE_NUMBER(490);
	sp[0].o = frame[4].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_increase_vga;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (10041), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_77;
	}
label_75:;
	{
	LINE_NUMBER(492);
	sp[0].o = frame[4].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_decrease_vga;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (10042), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_77:;
	{
	LINE_NUMBER(495);
	sp[0].o = frame[4].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_EXIT;
	clinit_main_GameCanvas(ctx);
	sp[3].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (8885), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(496);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Menu_startAt_nro_MyVector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Menu_startAt_nro_MyVector])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return;
	}
label_21:;
	{
	LINE_NUMBER(499);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(500);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_regNote;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(501);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isRes = (jint(1));
	LINE_NUMBER(502);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(503);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return;
	}
label_22:;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_85;
	}
	{
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_85;
	}
	{
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_85;
	}
	{
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_85;
	}
	{
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_86;
	}
label_85:;
	{
	LINE_NUMBER(507);
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Vui l\u00f2ng \u0111i\u1ec1n \u0111\u1ea7y \u0111\u1ee7 th\u00f4ng tin"_j))));
	LINE_NUMBER(508);
	popStackFrame(ctx);
	return;
	}
label_86:;
	{
	LINE_NUMBER(511);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_PLEASEWAIT;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(512);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfThang;
	sp[2].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNam;
	sp[3].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[3].o);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[5].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[6].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[7].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[8].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfSodt;
	sp[8].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[8].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[8].o);
	sp[9].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	sp[9].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[9].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[9].o);
	((func_nro_Service_charInfo_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charInfo_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o, sp[9].o);
	}
label_23:;
	LINE_NUMBER(515);
	goto label_45;
label_24:;
	{
	LINE_NUMBER(517);
	((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_isRes = (jint(0));
	LINE_NUMBER(518);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfNgay;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(519);
	sp[0].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(520);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_RegisterScreen *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return;
	}
label_25:;
	LINE_NUMBER(523);
	popStackFrame(ctx);
	INST_RETURN();
label_26:;
	LINE_NUMBER(525);
	popStackFrame(ctx);
	INST_RETURN();
label_45:;
	LINE_NUMBER(528);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_RegisterScreen(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RegisterScreen:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_RegisterScreen(ctx);
	{
	LINE_NUMBER(21);
	clinit_nro_RegisterScreen(ctx);
	SF_nro_RegisterScreen_isContinueToLogin = (jint(0));
	LINE_NUMBER(45);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (9);
	frame[0].o = sp[0].o;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_RegisterScreen[] {
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
	(void *) M_nro_RegisterScreen_switchToMe,
	(void *) M_nro_RegisterScreen_keyPress_int,
	(void *) M_nro_RegisterScreen_update,
	(void *) M_nro_RegisterScreen_updateKey,
	(void *) M_nro_RegisterScreen_paint_lib_mGraphics,
	(void *) M_nro_RegisterScreen_perform_int_java_lang_Object,
	(void *) M_nro_RegisterScreen_getActiveField_R_lib_input_TField,
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
	{ "getActiveField", "()Llib/input/TField;" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "tfUser", &class_lib_input_TField, offsetof(nro_RegisterScreen, F_tfUser), "Llib/input/TField;", 2 },
	{ "tfNgay", &class_lib_input_TField, offsetof(nro_RegisterScreen, F_tfNgay), "Llib/input/TField;", 2 },
	{ "tfThang", &class_lib_input_TField, offsetof(nro_RegisterScreen, F_tfThang), "Llib/input/TField;", 2 },
	{ "tfNam", &class_lib_input_TField, offsetof(nro_RegisterScreen, F_tfNam), "Llib/input/TField;", 2 },
	{ "tfDiachi", &class_lib_input_TField, offsetof(nro_RegisterScreen, F_tfDiachi), "Llib/input/TField;", 2 },
	{ "tfCMND", &class_lib_input_TField, offsetof(nro_RegisterScreen, F_tfCMND), "Llib/input/TField;", 2 },
	{ "tfNgayCap", &class_lib_input_TField, offsetof(nro_RegisterScreen, F_tfNgayCap), "Llib/input/TField;", 2 },
	{ "tfNoiCap", &class_lib_input_TField, offsetof(nro_RegisterScreen, F_tfNoiCap), "Llib/input/TField;", 2 },
	{ "tfSodt", &class_lib_input_TField, offsetof(nro_RegisterScreen, F_tfSodt), "Llib/input/TField;", 2 },
	{ "isContinueToLogin", &class_boolean, (intptr_t) &SF_nro_RegisterScreen_isContinueToLogin, "Z", 10 },
	{ "focus", &class_int, offsetof(nro_RegisterScreen, F_focus), "I", 2 },
	{ "yL", &class_int, offsetof(nro_RegisterScreen, F_yL), "I", 2 },
	{ "defYL", &class_int, offsetof(nro_RegisterScreen, F_defYL), "I", 2 },
	{ "isCheck", &class_boolean, offsetof(nro_RegisterScreen, F_isCheck), "Z", 2 },
	{ "isRes", &class_boolean, offsetof(nro_RegisterScreen, F_isRes), "Z", 2 },
	{ "cmdLogin", &class_nro_Command, offsetof(nro_RegisterScreen, F_cmdLogin), "Lnro/Command;", 2 },
	{ "cmdFogetPass", &class_nro_Command, offsetof(nro_RegisterScreen, F_cmdFogetPass), "Lnro/Command;", 2 },
	{ "cmdRes", &class_nro_Command, offsetof(nro_RegisterScreen, F_cmdRes), "Lnro/Command;", 2 },
	{ "cmdMenu", &class_nro_Command, offsetof(nro_RegisterScreen, F_cmdMenu), "Lnro/Command;", 2 },
	{ "cmdBackFromRegister", &class_nro_Command, offsetof(nro_RegisterScreen, F_cmdBackFromRegister), "Lnro/Command;", 2 },
	{ "yt", &class_int, offsetof(nro_RegisterScreen, F_yt), "I", 2 },
	{ "cmdOK", &class_nro_Command, offsetof(nro_RegisterScreen, F_cmdOK), "Lnro/Command;", 2 },
	{ "xLog", &class_int, offsetof(nro_RegisterScreen, F_xLog), "I", 2 },
	{ "yLog", &class_int, offsetof(nro_RegisterScreen, F_yLog), "I", 2 },
	{ "wP", &class_int, offsetof(nro_RegisterScreen, F_wP), "I", 2 },
	{ "tipid", &class_int, offsetof(nro_RegisterScreen, F_tipid), "I", 2 },
	{ "isLogin2", &class_boolean, offsetof(nro_RegisterScreen, F_isLogin2), "Z", 2 },
	{ "v", &class_int, offsetof(nro_RegisterScreen, F_v), "I", 2 },
	{ "g", &class_int, offsetof(nro_RegisterScreen, F_g), "I", 2 },
	{ "ylogo", &class_int, offsetof(nro_RegisterScreen, F_ylogo), "I", 2 },
	{ "dir", &class_int, offsetof(nro_RegisterScreen, F_dir), "I", 2 },
};

static MethodMetadata methods[] {
	{ "getActiveField", (intptr_t) M_nro_RegisterScreen_getActiveField_R_lib_input_TField, VTABLE_nro_RegisterScreen_getActiveField_R_lib_input_TField, "()Llib/input/TField;", 1 },
	{ "switchToMe", (intptr_t) M_nro_RegisterScreen_switchToMe, VTABLE_nro_RegisterScreen_switchToMe, "()V", 17 },
	{ "<init>", (intptr_t) init_nro_RegisterScreen_byte, 0, "(B)V", 1 },
	{ "update", (intptr_t) M_nro_RegisterScreen_update, VTABLE_nro_RegisterScreen_update, "()V", 17 },
	{ "keyPress", (intptr_t) M_nro_RegisterScreen_keyPress_int, VTABLE_nro_RegisterScreen_keyPress_int, "(I)V", 17 },
	{ "paint", (intptr_t) M_nro_RegisterScreen_paint_lib_mGraphics, VTABLE_nro_RegisterScreen_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "updateKey", (intptr_t) M_nro_RegisterScreen_updateKey, VTABLE_nro_RegisterScreen_updateKey, "()V", 17 },
	{ "perform", (intptr_t) M_nro_RegisterScreen_perform_int_java_lang_Object, VTABLE_nro_RegisterScreen_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_RegisterScreen, 0, "()V", 8 },
};

Class class_nro_RegisterScreen{
		.nativeName = (intptr_t) "nro/RegisterScreen",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_RegisterScreen),
		.classVtable = (intptr_t) vtable_nro_RegisterScreen,
		.staticInitializer = (intptr_t) clinit_nro_RegisterScreen,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_RegisterScreen,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 31,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_RegisterScreen = registerClass(&class_nro_RegisterScreen);

}

