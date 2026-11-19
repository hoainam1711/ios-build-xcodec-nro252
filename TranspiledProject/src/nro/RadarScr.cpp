#include "nro/RadarScr.h"
#include "nro/GameScr.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/SmallImage.h"
#include "nro/ChatPopup.h"
#include "nro/Menu.h"
#include "nro/StaticObj.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/FrameImage.h"
#include "nro/Info_RadaScr.h"
#include "nro/Mob.h"
#include "lib/sound/SoundMn.h"
#include "nro/mScreen.h"
#include "java/lang/Throwable.h"
#include "lib/mSystem.h"
#include "lib/mFont.h"
#include "java/lang/Exception.h"
#include "nro/RadarScr.h"
#include "nro/InfoDlg.h"
#include "lib/mGraphics.h"
#include "nro/EffectData.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "lib/input/ChatTextField.h"
#include "nro/Res.h"
#include "nro/MobTemplate.h"
#include "nro/Char.h"

extern "C" {

jobject SF_nro_RadarScr_instance;
jbool SF_nro_RadarScr_TYPE_UI;
jobject SF_nro_RadarScr_fraImgFocus;
jobject SF_nro_RadarScr_fraImgFocusNone;
jobject SF_nro_RadarScr_fraEff;
jobject SF_nro_RadarScr_imgUI;
jobject SF_nro_RadarScr_imgUIText;
jobject SF_nro_RadarScr_imgArrow_Left;
jobject SF_nro_RadarScr_imgArrow_Right;
jobject SF_nro_RadarScr_imgArrow_Down;
jobject SF_nro_RadarScr_imgLock;
jobject SF_nro_RadarScr_imgUse_0;
jobject SF_nro_RadarScr_imgUse;
jobject SF_nro_RadarScr_imgBack;
jobject SF_nro_RadarScr_imgChange;
jobject SF_nro_RadarScr_imgBar_0;
jobject SF_nro_RadarScr_imgBar_1;
jobject SF_nro_RadarScr_imgPro_0;
jobject SF_nro_RadarScr_imgPro_1;
jobject SF_nro_RadarScr_imgRank;
jint SF_nro_RadarScr_xUi;
jint SF_nro_RadarScr_yUi;
jint SF_nro_RadarScr_wUi;
jint SF_nro_RadarScr_hUi;
jint SF_nro_RadarScr_xMon;
jint SF_nro_RadarScr_yMon;
jint SF_nro_RadarScr_xText;
jint SF_nro_RadarScr_yText;
jint SF_nro_RadarScr_wText;
jint SF_nro_RadarScr_G;
jint SF_nro_RadarScr_hClip;
jint SF_nro_RadarScr_yCmd;
jobject SF_nro_RadarScr_xCmd;
jobject SF_nro_RadarScr_dxCmd;
jobject SF_nro_RadarScr_xyArrow;
jobject SF_nro_RadarScr_xyItem;
jobject SF_nro_RadarScr_index;
jobject SF_nro_RadarScr_list;
jobject SF_nro_RadarScr_listUse;
jint SF_nro_RadarScr_num;

void mark_nro_RadarScr(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_RadarScr_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_instance)->clazz)->markFunction)((jobject) SF_nro_RadarScr_instance, mark, depth + 1);
		if (SF_nro_RadarScr_fraImgFocus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_fraImgFocus)->clazz)->markFunction)((jobject) SF_nro_RadarScr_fraImgFocus, mark, depth + 1);
		if (SF_nro_RadarScr_fraImgFocusNone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_fraImgFocusNone)->clazz)->markFunction)((jobject) SF_nro_RadarScr_fraImgFocusNone, mark, depth + 1);
		if (SF_nro_RadarScr_fraEff)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_fraEff)->clazz)->markFunction)((jobject) SF_nro_RadarScr_fraEff, mark, depth + 1);
		if (SF_nro_RadarScr_imgUI)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgUI)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgUI, mark, depth + 1);
		if (SF_nro_RadarScr_imgUIText)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgUIText)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgUIText, mark, depth + 1);
		if (SF_nro_RadarScr_imgArrow_Left)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgArrow_Left)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgArrow_Left, mark, depth + 1);
		if (SF_nro_RadarScr_imgArrow_Right)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgArrow_Right)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgArrow_Right, mark, depth + 1);
		if (SF_nro_RadarScr_imgArrow_Down)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgArrow_Down)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgArrow_Down, mark, depth + 1);
		if (SF_nro_RadarScr_imgLock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgLock)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgLock, mark, depth + 1);
		if (SF_nro_RadarScr_imgUse_0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgUse_0)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgUse_0, mark, depth + 1);
		if (SF_nro_RadarScr_imgUse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgUse)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgUse, mark, depth + 1);
		if (SF_nro_RadarScr_imgBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgBack)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgBack, mark, depth + 1);
		if (SF_nro_RadarScr_imgChange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgChange)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgChange, mark, depth + 1);
		if (SF_nro_RadarScr_imgBar_0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgBar_0)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgBar_0, mark, depth + 1);
		if (SF_nro_RadarScr_imgBar_1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgBar_1)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgBar_1, mark, depth + 1);
		if (SF_nro_RadarScr_imgPro_0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgPro_0)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgPro_0, mark, depth + 1);
		if (SF_nro_RadarScr_imgPro_1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgPro_1)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgPro_1, mark, depth + 1);
		if (SF_nro_RadarScr_imgRank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_imgRank)->clazz)->markFunction)((jobject) SF_nro_RadarScr_imgRank, mark, depth + 1);
		if (SF_nro_RadarScr_xCmd)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_xCmd)->clazz)->markFunction)((jobject) SF_nro_RadarScr_xCmd, mark, depth + 1);
		if (SF_nro_RadarScr_dxCmd)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_dxCmd)->clazz)->markFunction)((jobject) SF_nro_RadarScr_dxCmd, mark, depth + 1);
		if (SF_nro_RadarScr_xyArrow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_xyArrow)->clazz)->markFunction)((jobject) SF_nro_RadarScr_xyArrow, mark, depth + 1);
		if (SF_nro_RadarScr_xyItem)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_xyItem)->clazz)->markFunction)((jobject) SF_nro_RadarScr_xyItem, mark, depth + 1);
		if (SF_nro_RadarScr_index)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_index)->clazz)->markFunction)((jobject) SF_nro_RadarScr_index, mark, depth + 1);
		if (SF_nro_RadarScr_list)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_list)->clazz)->markFunction)((jobject) SF_nro_RadarScr_list, mark, depth + 1);
		if (SF_nro_RadarScr_listUse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_RadarScr_listUse)->clazz)->markFunction)((jobject) SF_nro_RadarScr_listUse, mark, depth + 1);
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
	auto self = (nro_RadarScr *) object;
	if (self->F_dxArrow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dxArrow)->clazz)->markFunction)((jobject) self->F_dxArrow, mark, depth + 1);
	if (self->F_focus_card)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_focus_card)->clazz)->markFunction)((jobject) self->F_focus_card, mark, depth + 1);
}

jobject SM_nro_RadarScr_gI_R_nro_RadarScr(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_RadarScr(ctx);
	{
	LINE_NUMBER(66);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(67);
	clinit_nro_RadarScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_RadarScr);
	init_nro_RadarScr(ctx, sp[0].o);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(70);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_nro_RadarScr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_RadarScr(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(73);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(54);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_indexFocus = (jint(0));
	LINE_NUMBER(59);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_pxx = (jint(0));
	LINE_NUMBER(60);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_pyy = (jint(0));
	LINE_NUMBER(74);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_TYPE_UI = (jint(1));
	LINE_NUMBER(75);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/17.png"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(76);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/3.png"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/23.png"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(78);
	clinit_nro_FrameImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_javax_microedition_lcdui_Image_int_int(ctx, sp[0].o, (frame[1].o), (28), (28));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_fraImgFocus = sp[0].o;
	LINE_NUMBER(79);
	clinit_nro_FrameImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_javax_microedition_lcdui_Image_int_int(ctx, sp[0].o, (frame[2].o), (30), (30));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_fraImgFocusNone = sp[0].o;
	LINE_NUMBER(80);
	clinit_nro_FrameImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_javax_microedition_lcdui_Image_int_int(ctx, sp[0].o, (frame[3].o), (11), (11));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_fraEff = sp[0].o;
	LINE_NUMBER(81);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/0.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgUI = sp[0].o;
	LINE_NUMBER(82);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/1.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgArrow_Left = sp[0].o;
	LINE_NUMBER(83);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/2.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgArrow_Right = sp[0].o;
	LINE_NUMBER(84);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/17.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgUIText = sp[0].o;
	LINE_NUMBER(85);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/4.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgArrow_Down = sp[0].o;
	LINE_NUMBER(86);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/5.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgLock = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/6.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgUse_0 = sp[0].o;
	LINE_NUMBER(88);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (7));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgRank = sp[0].o;
	LINE_NUMBER(90);
	frame[4].i = (jint(0));
	}
label_20:;
	{
	if ((frame[4].i) >= (7)) goto label_21;
	}
	{
	LINE_NUMBER(91);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_imgRank;
	jint temp0 = frame[4].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/radar/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[4].i) + (7)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(90);
	INST_IINC(4, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/14.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgUse = sp[0].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/15.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgBack = sp[0].o;
	LINE_NUMBER(96);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/16.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgChange = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/18.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgUIText = sp[0].o;
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/19.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgBar_1 = sp[0].o;
	LINE_NUMBER(99);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/20.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgPro_0 = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/21.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgPro_1 = sp[0].o;
	LINE_NUMBER(101);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/radar/22.png"_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_imgBar_0 = sp[0].o;
	LINE_NUMBER(102);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_wUi = (200);
	LINE_NUMBER(103);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_hUi = (219);
	LINE_NUMBER(104);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_xUi = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) - (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi) + (40)) / (jint(2))));
	LINE_NUMBER(105);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_yUi = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hh) - ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi) / (jint(2))));
	LINE_NUMBER(106);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_xText = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi)) - (81));
	LINE_NUMBER(107);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_yText = ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + (29));
	LINE_NUMBER(108);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_wText = (120);
	LINE_NUMBER(109);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_hClip = (80);
	LINE_NUMBER(110);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(3)));
	jint temp0 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (34));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi)) - (42));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	jint temp2 = jint(0);
	jint temp3 = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi) / (jint(2)));
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_imgArrow_Down;
	jint temp4 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, sp[2].o);
	ARRAY_ACCESS(jint, sp[1].o, temp2) = (temp3 - (temp4 / (jint(2))));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi) / (jint(2)))) + (33));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp5 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi)) - (41));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi)) - (42));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_xyArrow = sp[0].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(5)));
	jint temp6 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (25));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi)) - (82));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (57));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi)) - (62));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi) / (jint(2)))) - (14));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi)) - (102));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = ((((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi)) - (57)) - (28));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi)) - (62));
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = ((((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi)) - (25)) - (28));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi)) - (82));
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_xyItem = sp[0].o;
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_dxArrow = (jref) sp[1].o;
	LINE_NUMBER(113);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_dyArrow = (jint(0));
	LINE_NUMBER(114);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_xMon = ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (73));
	LINE_NUMBER(115);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_yMon = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi) / (jint(2)))) + (jint(5)));
	LINE_NUMBER(116);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_yCmd = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi)) - (22));
	LINE_NUMBER(117);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = ((((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi) / (jint(2)))) - (8)) - (80));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi) / (jint(2)))) - (8));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = ((((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi) / (jint(2)))) - (8)) + (80));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_xCmd = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_dxCmd = sp[0].o;
	LINE_NUMBER(119);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_wClip = (((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yText) + (10)) + (70));
	LINE_NUMBER(120);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_yClip = (jint(0));
	LINE_NUMBER(121);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_list = sp[0].o;
	LINE_NUMBER(122);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_listUse = sp[0].o;
	LINE_NUMBER(123);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page = (jint(1));
	LINE_NUMBER(124);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_maxpage = (jint(2));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_RadarScr_SetRadarScr_nro_MyVector_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:SetRadarScr", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(128);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_list = (frame[1].o);
	LINE_NUMBER(129);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_num = (frame[2].i);
	LINE_NUMBER(130);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page = (jint(1));
	LINE_NUMBER(131);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_indexFocus = (jint(2));
	LINE_NUMBER(132);
	M_nro_RadarScr_listIndex(ctx, (frame[0].o));
	LINE_NUMBER(133);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_TYPE_UI = (jint(1));
	LINE_NUMBER(134);
	SM_nro_RadarScr_SetListUse(ctx);
	LINE_NUMBER(135);
	if ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_TYPE_UI) == 0) goto label_8;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	jint temp1 = temp0 / (jint(5));
	jint temp2 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	sp[1].i = temp1;
	sp += 2;
	if ((temp2 % (jint(5))) <= 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 3;
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_maxpage = (sp[1].i + sp[2].i);
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_listUse;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	jint temp1 = temp0 / (jint(5));
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_listUse;
	jint temp2 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	sp[1].i = temp1;
	sp += 2;
	if ((temp2 % (jint(5))) <= 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	INST_IADD();
	sp -= 2;
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_maxpage = sp[1].i;
label_12:;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_RadarScr_SetNum_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:SetNum", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_RadarScr(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(143);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_num = (frame[0].i);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_RadarScr_SetListUse(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:SetListUse", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_RadarScr(ctx);
	{
	LINE_NUMBER(147);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_listUse = sp[0].o;
	LINE_NUMBER(149);
	frame[0].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(151);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = checkCast(ctx, &class_nro_Info_RadaScr, sp[0].o);
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	if (((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[1].o)))->F_isUse) != (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(152);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_listUse;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(149);
	INST_IINC(0, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_RadarScr_listIndex(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:listIndex", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_listUse;
	frame[1].o = sp[0].o;
	LINE_NUMBER(160);
	if ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_TYPE_UI) == 0) goto label_2;
	}
	{
	LINE_NUMBER(161);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(165);
	jint temp0 = (((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page) - (jint(1))) * (jint(5));
	frame[2].i = temp0;
	frame[3].i = (temp0 + (jint(5)));
	LINE_NUMBER(167);
	frame[4].i = (frame[2].i);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(168);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp0 < temp1) goto label_9;
	}
	{
	LINE_NUMBER(169);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_index;
	ARRAY_ACCESS(jint, sp[0].o, ((frame[4].i) - (frame[2].i))) = (jint(-1));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[4].i));
	sp[0].o = checkCast(ctx, &class_nro_Info_RadaScr, sp[0].o);
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(173);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_index;
	ARRAY_ACCESS(jint, sp[0].o, ((frame[4].i) - (frame[2].i))) = ((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_id);
	}
label_11:;
	{
	LINE_NUMBER(167);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_radarItem) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_radarItem])(ctx, sp[0].o);
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_RadarScr_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(183);
	if ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hClip) >= (80)) goto label_4;
	}
	{
	jint temp0 = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hClip) + (jint(4));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_hClip = temp0;
	if (temp0 <= (80)) goto label_4;
	}
	{
	LINE_NUMBER(184);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_hClip = (80);
	}
label_4:;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_listUse;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_index;
	sp[1].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_indexFocus))));
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_focus_card = (jref) sp[1].o;
	LINE_NUMBER(188);
	if ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_TYPE_UI) == 0) goto label_7;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_list;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_index;
	sp[1].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_indexFocus))));
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_focus_card = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_update])(ctx, sp[0].o);
	LINE_NUMBER(193);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) >= (6)) goto label_10;
	}
	{
	LINE_NUMBER(194);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_12;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_dyArrow = (((jint)((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_dyArrow) - (jint(1)));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(198);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_dyArrow = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	jint temp0 = ((jint)((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_amount) * (100);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	frame[1].i = (temp0 / ((jint)((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_max_amount));
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	jint temp1 = frame[1].i;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgBar_1;
	jint temp2 = (jint)((func_javax_microedition_lcdui_Image_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getHeight_R_int])(ctx, sp[1].o);
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_yClip = ((temp1 * temp2) / (100));
	LINE_NUMBER(204);
	jint temp3 = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_num) * (100);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	jint temp4 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[1].i = (temp3 / temp4);
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	jint temp5 = frame[1].i;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgPro_1;
	jint temp6 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, sp[1].o);
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_xClip = ((temp5 * temp6) / (100));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(206);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	LINE_NUMBER(210);
	goto label_19;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(208);
	frame[1].o = sp[0].o;
	LINE_NUMBER(209);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-upd-radaScr-null: "_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
label_19:;
	LINE_NUMBER(212);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_RadarScr_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:updateKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	if ((clinit_nro_InfoDlg(ctx), (jint)SF_nro_InfoDlg_isLock) != 0) goto label_1;
	}
	{
	LINE_NUMBER(216);
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
	LINE_NUMBER(217);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(218);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) != 0) goto label_6;
	}
	{
	LINE_NUMBER(219);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_dxCmd;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	LINE_NUMBER(220);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_dxCmd;
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	LINE_NUMBER(221);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_dxCmd;
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_dxArrow;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	LINE_NUMBER(223);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_dxArrow;
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(226);
	frame[2].i = (jint(0));
	}
label_13:;
	{
	if ((frame[2].i) >= (jint(5))) goto label_14;
	}
	{
	LINE_NUMBER(227);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_xyItem;
	jint temp0 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (jint(0)));
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_xyItem;
	jint temp1 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (jint(1)))), (30), (30));
	if (temp1 == 0) goto label_16;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerClick;
	if ((--sp)->i == 0) goto label_16;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_16;
	{
	if ((frame[2].i) == ((jint)((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_indexFocus)) goto label_16;
	}
	{
	LINE_NUMBER(228);
	((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_indexFocus = (frame[2].i);
	LINE_NUMBER(229);
	M_nro_RadarScr_listIndex(ctx, (frame[1].o));
	}
label_16:;
	{
	LINE_NUMBER(226);
	INST_IINC(2, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(233);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_xyArrow;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (jint(0)))) - (jint(5));
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_xyArrow;
	jint temp1 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (jint(1)))) - (jint(5))), (20), (20));
	if (temp1 == 0) goto label_19;
	}
	{
	LINE_NUMBER(234);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) == 0) goto label_21;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_dxArrow;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(238);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_19;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_19;
	{
	LINE_NUMBER(239);
	M_nro_RadarScr_doClickArrow_int(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(240);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_dxArrow;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(244);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_xyArrow;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2)))), (jint(0)))) - (jint(5));
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_xyArrow;
	jint temp1 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2)))), (jint(1)))) - (jint(5))), (20), (20));
	if (temp1 == 0) goto label_25;
	}
	{
	LINE_NUMBER(245);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) == 0) goto label_27;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_dxArrow;
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	}
label_27:;
	{
	LINE_NUMBER(249);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_25;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_25;
	{
	LINE_NUMBER(250);
	M_nro_RadarScr_doClickArrow_int(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(251);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_dxArrow;
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	}
label_25:;
	{
	LINE_NUMBER(255);
	frame[2].i = (jint(0));
	}
label_31:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_xCmd;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	LINE_NUMBER(256);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_xCmd;
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) - (jint(5))), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yCmd) - (jint(5))), (20), (20));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(257);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) == 0) goto label_35;
	}
	{
	LINE_NUMBER(258);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_dxCmd;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (jint(1));
	}
label_35:;
	{
	LINE_NUMBER(261);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_33;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_33;
	{
	LINE_NUMBER(262);
	M_nro_RadarScr_doClickUse_int(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(263);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_dxCmd;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (jint(0));
	}
label_33:;
	{
	LINE_NUMBER(255);
	INST_IINC(2, 1);
	goto label_31;
	}
label_12:;
	{
	LINE_NUMBER(269);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xText), (jint(0)), (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wText), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yText) + (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hClip)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(270);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerSelect) == 0) goto label_40;
	}
	{
	LINE_NUMBER(271);
	if (((jint)((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_pyy) != 0) goto label_42;
	}
	{
	LINE_NUMBER(272);
	((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_pyy = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	}
label_42:;
	{
	LINE_NUMBER(275);
	((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_pxx = (((jint)((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_pyy) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py));
	LINE_NUMBER(276);
	if (((jint)((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_pxx) == 0) goto label_45;
	}
	{
	LINE_NUMBER(277);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_G = ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_G) + ((jint)((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_pxx));
	LINE_NUMBER(278);
	((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_pyy = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	}
label_45:;
	{
	LINE_NUMBER(281);
	if ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_G) >= 0) goto label_48;
	}
	{
	LINE_NUMBER(282);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_G = (jint(0));
	}
label_48:;
	{
	LINE_NUMBER(285);
	clinit_nro_RadarScr(ctx);
	jint temp0 = (jint)SF_nro_RadarScr_G;
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_focus_card;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_cp;
	if (temp0 <= ((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cmx)) goto label_3;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_focus_card;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_cp;
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_G = ((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cmx);
	goto label_3;
	}
label_40:;
	{
	LINE_NUMBER(289);
	((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_pyy = (jint(0));
	LINE_NUMBER(290);
	((nro_RadarScr *) NULL_CHECK((frame[1].o)))->F_pyy = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(295);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_52;
	}
	{
	LINE_NUMBER(296);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	LINE_NUMBER(297);
	M_nro_RadarScr_doKeyItem_int(ctx, (frame[0].o), (jint(1)));
	}
label_52:;
	{
	LINE_NUMBER(300);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_55;
	}
	{
	LINE_NUMBER(301);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	LINE_NUMBER(302);
	M_nro_RadarScr_doKeyItem_int(ctx, (frame[0].o), (jint(-1)));
	}
label_55:;
	{
	LINE_NUMBER(305);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(4)))) == 0) goto label_58;
	}
	{
	LINE_NUMBER(306);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	LINE_NUMBER(307);
	M_nro_RadarScr_doKeyText_int(ctx, (frame[0].o), (jint(1)));
	}
label_58:;
	{
	LINE_NUMBER(310);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (6))) == 0) goto label_61;
	}
	{
	LINE_NUMBER(311);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(0));
	LINE_NUMBER(312);
	M_nro_RadarScr_doKeyText_int(ctx, (frame[0].o), (jint(0)));
	}
label_61:;
	{
	LINE_NUMBER(315);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (12))) == 0) goto label_64;
	}
	{
	LINE_NUMBER(316);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	LINE_NUMBER(317);
	M_nro_RadarScr_doClickUse_int(ctx, (frame[0].o), (jint(0)));
	}
label_64:;
	{
	LINE_NUMBER(320);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5)))) == 0) goto label_67;
	}
	{
	LINE_NUMBER(321);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(0));
	LINE_NUMBER(322);
	M_nro_RadarScr_doClickUse_int(ctx, (frame[0].o), (jint(1)));
	}
label_67:;
	{
	LINE_NUMBER(325);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (13))) == 0) goto label_70;
	}
	{
	LINE_NUMBER(326);
	M_nro_RadarScr_doClickUse_int(ctx, (frame[0].o), (jint(2)));
	}
label_70:;
	LINE_NUMBER(329);
	SM_main_GameCanvas_clearKeyPressed(ctx);
label_1:;
	LINE_NUMBER(331);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_RadarScr_doClickUse_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:doClickUse", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(334);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(335);
	if ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_TYPE_UI) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_TYPE_UI = sp[0].i;
	LINE_NUMBER(336);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page = (jint(1));
	LINE_NUMBER(337);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_indexFocus = (jint(0));
	LINE_NUMBER(338);
	if ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_TYPE_UI) == 0) goto label_8;
	}
	{
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_list;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	jint temp1 = temp0 / (jint(5));
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_list;
	jint temp2 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	sp[1].i = temp1;
	sp += 2;
	if ((temp2 % (jint(5))) <= 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 3;
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_maxpage = (sp[1].i + sp[2].i);
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_listUse;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	jint temp1 = temp0 / (jint(5));
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_listUse;
	jint temp2 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	sp[1].i = temp1;
	sp += 2;
	if ((temp2 % (jint(5))) <= 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	INST_IADD();
	sp -= 2;
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_maxpage = sp[1].i;
label_12:;
	{
	LINE_NUMBER(344);
	M_nro_RadarScr_listIndex(ctx, (frame[0].o));
	LINE_NUMBER(345);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_hClip = (jint(0));
	goto label_16;
	}
label_1:;
	{
	LINE_NUMBER(346);
	if ((frame[1].i) != (jint(1))) goto label_17;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	((func_nro_Service_SendRada_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_SendRada_int_int])(ctx, sp[0].o, temp0, ((jint)((nro_Info_RadaScr *) NULL_CHECK(sp[1].o))->F_id));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(350);
	if ((frame[1].i) != (jint(2))) goto label_16;
	}
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_switchToMe])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_radarClick) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_radarClick])(ctx, sp[0].o);
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_RadarScr_doClickArrow_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:doClickArrow", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(358);
	if ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_TYPE_UI) == 0) goto label_1;
	}
	{
	LINE_NUMBER(359);
	sp[0].o = frame[0].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_list;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	jint temp1 = temp0 / (jint(5));
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_list;
	jint temp2 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	sp[1].i = temp1;
	sp += 2;
	if ((temp2 % (jint(5))) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 3;
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_maxpage = (sp[1].i + sp[2].i);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_listUse;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	jint temp1 = temp0 / (jint(5));
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_listUse;
	jint temp2 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	sp[1].i = temp1;
	sp += 2;
	if ((temp2 % (jint(5))) <= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	INST_IADD();
	sp -= 2;
	((nro_RadarScr *) NULL_CHECK(sp[0].o))->F_maxpage = sp[1].i;
label_5:;
	{
	LINE_NUMBER(364);
	frame[2].i = ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page);
	LINE_NUMBER(365);
	if ((frame[1].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(366);
	if (((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page) != (jint(1))) goto label_11;
	}
	LINE_NUMBER(367);
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(370);
	INST_IINC(2, -1);
	LINE_NUMBER(371);
	if ((frame[2].i) > 0) goto label_14;
	}
	{
	LINE_NUMBER(372);
	frame[2].i = (jint(1));
	goto label_14;
	}
label_9:;
	{
	LINE_NUMBER(375);
	if (((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page) != ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_maxpage)) goto label_16;
	}
	LINE_NUMBER(376);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
	{
	LINE_NUMBER(379);
	INST_IINC(2, 1);
	LINE_NUMBER(380);
	if ((frame[2].i) <= ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_maxpage)) goto label_14;
	}
	{
	LINE_NUMBER(381);
	frame[2].i = ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_maxpage);
	}
label_14:;
	{
	LINE_NUMBER(385);
	if ((frame[2].i) == ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page)) goto label_20;
	}
	{
	LINE_NUMBER(386);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page = (frame[2].i);
	LINE_NUMBER(387);
	M_nro_RadarScr_listIndex(ctx, (frame[0].o));
	}
label_20:;
	LINE_NUMBER(390);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_RadarScr_doKeyItem_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:doKeyItem", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(393);
	jint temp0 = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_G) + ((frame[1].i) * (12));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_G = temp0;
	if (temp0 >= 0) goto label_1;
	}
	{
	LINE_NUMBER(394);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_G = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(397);
	clinit_nro_RadarScr(ctx);
	jint temp0 = (jint)SF_nro_RadarScr_G;
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_cp;
	if (temp0 <= ((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cmx)) goto label_3;
	}
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_cp;
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_G = ((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cmx);
	}
label_3:;
	LINE_NUMBER(401);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_RadarScr_doKeyText_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:doKeyText", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(404);
	frame[2].i = ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_indexFocus);
	LINE_NUMBER(405);
	frame[3].i = ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page);
	LINE_NUMBER(406);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(407);
	INST_IINC(2, 1);
	goto label_5;
	}
label_3:;
	LINE_NUMBER(409);
	INST_IINC(2, -1);
label_5:;
	{
	LINE_NUMBER(412);
	jint temp0 = frame[2].i;
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_index;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(413);
	if (((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page) >= ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_maxpage)) goto label_8;
	}
	{
	LINE_NUMBER(414);
	frame[2].i = (jint(0));
	LINE_NUMBER(415);
	INST_IINC(3, 1);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(417);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_index;
	frame[2].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(421);
	if ((frame[2].i) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(422);
	if (((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page) <= (jint(1))) goto label_13;
	}
	{
	LINE_NUMBER(423);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_index;
	frame[2].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	LINE_NUMBER(424);
	INST_IINC(3, -1);
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(426);
	frame[2].i = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(430);
	if ((frame[2].i) == ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_indexFocus)) goto label_16;
	}
	{
	LINE_NUMBER(431);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_indexFocus = (frame[2].i);
	LINE_NUMBER(432);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_G = (jint(0));
	LINE_NUMBER(433);
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_hClip = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(436);
	if ((frame[3].i) == ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page)) goto label_20;
	}
	{
	LINE_NUMBER(437);
	((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page = (frame[3].i);
	LINE_NUMBER(438);
	M_nro_RadarScr_listIndex(ctx, (frame[0].o));
	}
label_20:;
	LINE_NUMBER(441);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_RadarScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:paint", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(446);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)));
	LINE_NUMBER(447);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY));
	LINE_NUMBER(448);
	SM_nro_GameScr_resetTranslate_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(449);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgUI;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi), (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi), (jint(0)));
	LINE_NUMBER(450);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgPro_0;
	jint temp0 = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi) / (jint(2)));
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_imgPro_0;
	jint temp1 = (jint)SM_lib_mSystem_getWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	jint temp2 = temp0 - (temp1 / (jint(2)));
	clinit_nro_RadarScr(ctx);
	jint temp3 = (jint)SF_nro_RadarScr_yUi;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_imgPro_0;
	jint temp4 = (jint)SM_lib_mSystem_getHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp2, ((temp3 - (temp4 / (jint(2)))) - (jint(2))), (jint(0)));
	LINE_NUMBER(451);
	sp[0].o = frame[1].o;
	jint temp5 = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi) / (jint(2)));
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgPro_0;
	jint temp6 = (jint)SM_lib_mSystem_getWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[1].o);
	jint temp7 = (temp5 - (temp6 / (jint(2)))) + (13);
	clinit_nro_RadarScr(ctx);
	jint temp8 = (jint)SF_nro_RadarScr_yUi;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgPro_0;
	jint temp9 = (jint)SM_lib_mSystem_getHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[1].o);
	jint temp10 = (temp8 - (temp9 / (jint(2)))) + (jint(3));
	jint temp11 = (jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_xClip;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgPro_0;
	jint temp12 = (jint)SM_lib_mSystem_getHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[1].o);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, sp[0].o, temp7, temp10, temp11, temp12);
	LINE_NUMBER(452);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgPro_1;
	jint temp13 = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi) / (jint(2)));
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_imgPro_0;
	jint temp14 = (jint)SM_lib_mSystem_getWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	jint temp15 = (temp13 - (temp14 / (jint(2)))) + (13);
	clinit_nro_RadarScr(ctx);
	jint temp16 = (jint)SF_nro_RadarScr_yUi;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_imgPro_0;
	jint temp17 = (jint)SM_lib_mSystem_getHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp15, ((temp16 - (temp17 / (jint(2)))) + (jint(3))), (jint(0)));
	LINE_NUMBER(453);
	SM_nro_GameScr_resetTranslate_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(454);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgChange;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xCmd;
	jint temp18 = (jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)));
	clinit_nro_RadarScr(ctx);
	jint temp19 = (jint)SF_nro_RadarScr_yCmd;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_dxCmd;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp18, (temp19 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0))))), (jint(0)));
	LINE_NUMBER(455);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgUse_0;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xCmd;
	jint temp20 = (jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1)));
	clinit_nro_RadarScr(ctx);
	jint temp21 = (jint)SF_nro_RadarScr_yCmd;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_dxCmd;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp20, (temp21 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1))))), (jint(0)));
	LINE_NUMBER(456);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgBack;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xCmd;
	jint temp22 = (jint)ARRAY_ACCESS(jint, sp[2].o, (jint(2)));
	clinit_nro_RadarScr(ctx);
	jint temp23 = (jint)SF_nro_RadarScr_yCmd;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_dxCmd;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp22, (temp23 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(2))))), (jint(0)));
	LINE_NUMBER(457);
	if ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_TYPE_UI) == 0) goto label_16;
	}
	{
	LINE_NUMBER(458);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgUse;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = 17;
	jint temp3 = 17;
	jint temp4 = jint(0);
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xCmd;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1)));
	clinit_nro_RadarScr(ctx);
	jint temp6 = (jint)SF_nro_RadarScr_yCmd;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_dxCmd;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, temp4, temp5, (temp6 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1))))), (jint(0)));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(460);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgUse;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = 17;
	jint temp3 = 17;
	jint temp4 = jint(1);
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xCmd;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1)));
	clinit_nro_RadarScr(ctx);
	jint temp6 = (jint)SF_nro_RadarScr_yCmd;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_dxCmd;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, temp4, temp5, (temp6 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1))))), (jint(0)));
	}
label_18:;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(464);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (30)), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + (13)), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi) - (60)), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hUi) / (jint(2))));
	LINE_NUMBER(465);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	frame[2].o = sp[0].o;
	LINE_NUMBER(466);
	frame[3].i = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yMon);
	LINE_NUMBER(467);
	frame[4].i = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xMon);
	LINE_NUMBER(468);
	frame[5].o = (frame[2].o);
	LINE_NUMBER(469);
	sp[0].o = frame[2].o;
	((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_count = (((jint)((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_count) + (jint(1)));
	LINE_NUMBER(470);
	jint temp0 = (jint)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_count;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_f;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_27;
	}
	{
	LINE_NUMBER(471);
	((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_count = (jint(0));
	}
label_27:;
	{
	LINE_NUMBER(474);
	if (((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_typeMonster) != 0) goto label_29;
	}
	{
	LINE_NUMBER(475);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[1].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_mobInfo;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_templateId))) == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(476);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[1].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_mobInfo;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_templateId)))))->F_data;
	if (sp[0].o == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(477);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[1].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_mobInfo;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_templateId)))))->F_data;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_f;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, ((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_count))), (frame[4].i), (frame[3].i), (jint(0)), (jint(0)));
	goto label_31;
	}
label_33:;
	{
	LINE_NUMBER(478);
	if ((longCompare((((jlong)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_timeRequest) - (clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow)), (jlong(0)))) >= 0) goto label_31;
	}
	{
	LINE_NUMBER(479);
	((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_timeRequest = ((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) + (jlong(1500ll)));
	LINE_NUMBER(480);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_mobInfo;
	((func_nro_Mob_getData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_getData])(ctx, sp[0].o);
	goto label_31;
	}
label_29:;
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_charInfo;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_charInfo;
	sp[1].o = frame[1].o;
	jint temp0 = frame[4].i;
	jint temp1 = frame[3].i;
	jint temp2 = jint(1);
	sp[2].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_f;
	((func_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[2].o, ((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[5].o)))->F_count))), (jint(1)));
	}
label_31:;
	{
	LINE_NUMBER(487);
	SM_nro_GameScr_resetTranslate_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(488);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellow;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[3].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	sp += 3;
	if (((jint)((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_level) <= 0) goto label_39;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Lv."_j))));
	sp[1].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Info_RadaScr *) NULL_CHECK(sp[1].o))->F_level));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_40;
	}
label_39:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_40:;
	{
	sp -= 4;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	sp[3].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK(sp[3].o))->F_name;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wUi) / (jint(2)))), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yUi) + (15)), (jint(2)));
	LINE_NUMBER(489);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"no."_j))));
	sp[3].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jint)((nro_Info_RadaScr *) NULL_CHECK(sp[3].o))->F_no));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (30)), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yText) - (jint(2))), (jint(0)));
	LINE_NUMBER(490);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgBar_0;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (36)), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yText) + (10)), (jint(0)));
	LINE_NUMBER(491);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (36)), (((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_wClip) - ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_yClip)), (7), ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_yClip));
	LINE_NUMBER(492);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgBar_1;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (36)), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yText) + (10)), (jint(0)));
	LINE_NUMBER(493);
	SM_nro_GameScr_resetTranslate_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(494);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgRank;
	sp[2].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Info_RadaScr *) NULL_CHECK(sp[2].o))->F_rank))), ((((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xUi) + (39)) - (jint(5))) + (14)), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yText) + (12)), (jint(0)));
	}
label_19:;
	{
	LINE_NUMBER(497);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xText), (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yText), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wText) + (jint(5))), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hClip) + (8)));
	LINE_NUMBER(498);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	if (sp[0].o == nullptr) goto label_48;
	}
	{
	LINE_NUMBER(499);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgUIText;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xText), (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yText), (jint(0)));
	}
label_48:;
	{
	LINE_NUMBER(502);
	SM_nro_GameScr_resetTranslate_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(503);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xText), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yText) + (jint(1))), (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wText), ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hClip) + (jint(5))));
	LINE_NUMBER(504);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	if (sp[0].o == nullptr) goto label_52;
	}
	{
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_cp;
	if (sp[0].o == nullptr) goto label_52;
	}
	{
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_cp;
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_says;
	if (sp[0].o == nullptr) goto label_52;
	}
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_focus_card;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_cp;
	((func_nro_ChatPopup_a_lib_mGraphics_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ChatPopup_a_lib_mGraphics_int])(ctx, sp[0].o, (frame[1].o), (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_G));
	}
label_52:;
	{
	LINE_NUMBER(508);
	SM_nro_GameScr_resetTranslate_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(509);
	if ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_TYPE_UI) != 0) goto label_55;
	}
	{
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_listUse;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 > (jint(5))) goto label_56;
	}
label_55:;
	clinit_nro_RadarScr(ctx);
	(sp++)->i = SF_nro_RadarScr_TYPE_UI;
	if ((--sp)->i == 0) goto label_57;
label_56:;
	{
	LINE_NUMBER(510);
	if (((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page) <= (jint(1))) goto label_58;
	}
	{
	LINE_NUMBER(511);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgArrow_Left;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xyArrow;
	jint temp0 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(0)));
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xyArrow;
	jint temp1 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(1)));
	sp[2].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_dxArrow;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (temp1 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0))))), (jint(0)));
	}
label_58:;
	{
	LINE_NUMBER(514);
	if (((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_page) >= ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_maxpage)) goto label_57;
	}
	{
	LINE_NUMBER(515);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgArrow_Right;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xyArrow;
	jint temp0 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(2)))), (jint(0)));
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xyArrow;
	jint temp1 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(2)))), (jint(1)));
	sp[2].o = (jobject)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_dxArrow;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (temp1 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1))))), (jint(0)));
	}
label_57:;
	{
	LINE_NUMBER(519);
	frame[2].i = (jint(0));
	}
label_61:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_index;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(520);
	frame[3].i = (jint(0));
	LINE_NUMBER(521);
	frame[4].i = (jint(0));
	LINE_NUMBER(522);
	frame[5].i = (jint(0));
	LINE_NUMBER(523);
	if ((frame[2].i) != ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_indexFocus)) goto label_66;
	}
	{
	LINE_NUMBER(524);
	frame[3].i = ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_dyArrow);
	LINE_NUMBER(525);
	frame[4].i = (-10);
	LINE_NUMBER(526);
	frame[5].i = (jint(1));
	LINE_NUMBER(527);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgArrow_Down;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xyItem;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))), (jint(0)))) + (10);
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xyItem;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))), (jint(1)))) + ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_dyArrow)) + (29)) + (-10)), (jint(0)));
	}
label_66:;
	{
	LINE_NUMBER(530);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_listUse;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_index;
	sp[0].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(531);
	if ((clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_TYPE_UI) == 0) goto label_72;
	}
	{
	LINE_NUMBER(532);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_index;
	sp[0].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	frame[6].o = sp[0].o;
	}
label_72:;
	{
	LINE_NUMBER(535);
	if ((frame[6].o) == nullptr) goto label_74;
	}
	{
	LINE_NUMBER(536);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_fraImgFocus;
	jint temp0 = (jint)((nro_Info_RadaScr *) NULL_CHECK((frame[6].o)))->F_rank;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_xyItem;
	jint temp1 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(0)));
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_xyItem;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, temp0, temp1, ((((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(1)))) + (frame[3].i)) + (frame[4].i)), (jint(0)), (jint(0)), (frame[1].o));
	LINE_NUMBER(537);
	sp[0].o = frame[1].o;
	jint temp2 = (jint)((nro_Info_RadaScr *) NULL_CHECK((frame[6].o)))->F_idIcon;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_xyItem;
	jint temp3 = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(0)))) + (14);
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_xyItem;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp2, temp3, (((((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(1)))) + (14)) + (frame[3].i)) + (frame[4].i)), (jint(0)), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	LINE_NUMBER(538);
	sp[0].o = frame[6].o;
	sp[1].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xyItem;
	jint temp4 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))), (jint(0)));
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xyItem;
	((func_nro_Info_RadaScr_paintInfo_lib_mGraphics_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_RadaScr_paintInfo_lib_mGraphics_int_int])(ctx, sp[0].o, sp[1].o, temp4, ((((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))), (jint(1)))) + (frame[3].i)) + (frame[4].i)));
	LINE_NUMBER(539);
	if (((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[6].o)))->F_level) != 0) goto label_79;
	}
	{
	LINE_NUMBER(540);
	sp[0].o = frame[1].o;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_imgLock;
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xyItem;
	jint temp0 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))), (jint(0)));
	clinit_nro_RadarScr(ctx);
	sp[2].o = (jobject)SF_nro_RadarScr_xyItem;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, ((((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))), (jint(1)))) + (frame[3].i)) + (frame[4].i)), (jint(0)));
	}
label_79:;
	{
	LINE_NUMBER(543);
	if ((frame[2].i) != ((jint)((nro_RadarScr *) NULL_CHECK((frame[0].o)))->F_indexFocus)) goto label_81;
	}
	{
	LINE_NUMBER(544);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_fraImgFocus;
	jint temp0 = 7;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_xyItem;
	jint temp1 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(0)));
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_xyItem;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, temp0, temp1, ((((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(1)))) + (frame[3].i)) + (frame[4].i)), (jint(0)), (jint(0)), (frame[1].o));
	}
label_81:;
	{
	LINE_NUMBER(547);
	if (((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[6].o)))->F_isUse) != (jint(1))) goto label_83;
	}
	{
	LINE_NUMBER(548);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_fraImgFocus;
	jint temp0 = 8;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_xyItem;
	jint temp1 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(0)));
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_xyItem;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, temp0, temp1, ((((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(1)))) + (frame[3].i)) + (frame[4].i)), (jint(0)), (jint(0)), (frame[1].o));
	goto label_83;
	}
label_74:;
	{
	LINE_NUMBER(551);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_fraImgFocusNone;
	jint temp0 = frame[5].i;
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_xyItem;
	jint temp1 = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(0)))) - (jint(1));
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_xyItem;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, temp0, temp1, (((((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(1)))) - (jint(1))) + (frame[3].i)) + (frame[4].i)), (jint(0)), (jint(0)), (frame[1].o));
	}
label_83:;
	{
	LINE_NUMBER(519);
	INST_IINC(2, 1);
	goto label_61;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(557);
	goto label_85;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(555);
	frame[2].o = sp[0].o;
	LINE_NUMBER(556);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-paint-radaScr-null: "_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
label_85:;
	LINE_NUMBER(558);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_RadarScr_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:switchToMe", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(561);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isPaintOther = (jint(1));
	LINE_NUMBER(562);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_RadarScr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/RadarScr:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_RadarScr(ctx);
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(0)));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_xCmd = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(0)));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_dxCmd = sp[0].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (-2);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(2));
	clinit_nro_RadarScr(ctx);
	SF_nro_RadarScr_index = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_RadarScr[] {
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
	(void *) M_nro_RadarScr_switchToMe,
	(void *) M_nro_mScreen_keyPress_int,
	(void *) M_nro_RadarScr_update,
	(void *) M_nro_RadarScr_updateKey,
	(void *) M_nro_RadarScr_paint_lib_mGraphics,
	(void *) M_nro_RadarScr_SetRadarScr_nro_MyVector_int_int,
	(void *) M_nro_RadarScr_listIndex,
	(void *) M_nro_RadarScr_doClickUse_int,
	(void *) M_nro_RadarScr_doClickArrow_int,
	(void *) M_nro_RadarScr_doKeyItem_int,
	(void *) M_nro_RadarScr_doKeyText_int,
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
	{ "SetRadarScr", "(Lnro/MyVector;II)V" },
	{ "listIndex", "()V" },
	{ "doClickUse", "(I)V" },
	{ "doClickArrow", "(I)V" },
	{ "doKeyItem", "(I)V" },
	{ "doKeyText", "(I)V" },
};

static FieldMetadata fields[] {
	{ "instance", &class_nro_RadarScr, (intptr_t) &SF_nro_RadarScr_instance, "Lnro/RadarScr;", 10 },
	{ "TYPE_UI", &class_boolean, (intptr_t) &SF_nro_RadarScr_TYPE_UI, "Z", 10 },
	{ "fraImgFocus", &class_nro_FrameImage, (intptr_t) &SF_nro_RadarScr_fraImgFocus, "Lnro/FrameImage;", 10 },
	{ "fraImgFocusNone", &class_nro_FrameImage, (intptr_t) &SF_nro_RadarScr_fraImgFocusNone, "Lnro/FrameImage;", 10 },
	{ "fraEff", &class_nro_FrameImage, (intptr_t) &SF_nro_RadarScr_fraEff, "Lnro/FrameImage;", 9 },
	{ "imgUI", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgUI, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgUIText", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgUIText, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgArrow_Left", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgArrow_Left, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgArrow_Right", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgArrow_Right, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgArrow_Down", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgArrow_Down, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgLock", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgLock, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgUse_0", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgUse_0, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgUse", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgUse, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgBack", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgBack, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgChange", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgChange, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgBar_0", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgBar_0, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgBar_1", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgBar_1, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgPro_0", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgPro_0, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgPro_1", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_RadarScr_imgPro_1, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgRank", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_nro_RadarScr_imgRank, "[Ljavax/microedition/lcdui/Image;", 10 },
	{ "xUi", &class_int, (intptr_t) &SF_nro_RadarScr_xUi, "I", 10 },
	{ "yUi", &class_int, (intptr_t) &SF_nro_RadarScr_yUi, "I", 10 },
	{ "wUi", &class_int, (intptr_t) &SF_nro_RadarScr_wUi, "I", 10 },
	{ "hUi", &class_int, (intptr_t) &SF_nro_RadarScr_hUi, "I", 10 },
	{ "xMon", &class_int, (intptr_t) &SF_nro_RadarScr_xMon, "I", 10 },
	{ "yMon", &class_int, (intptr_t) &SF_nro_RadarScr_yMon, "I", 10 },
	{ "xText", &class_int, (intptr_t) &SF_nro_RadarScr_xText, "I", 9 },
	{ "yText", &class_int, (intptr_t) &SF_nro_RadarScr_yText, "I", 9 },
	{ "wText", &class_int, (intptr_t) &SF_nro_RadarScr_wText, "I", 9 },
	{ "G", &class_int, (intptr_t) &SF_nro_RadarScr_G, "I", 10 },
	{ "hClip", &class_int, (intptr_t) &SF_nro_RadarScr_hClip, "I", 9 },
	{ "yCmd", &class_int, (intptr_t) &SF_nro_RadarScr_yCmd, "I", 10 },
	{ "xCmd", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_RadarScr_xCmd, "[I", 10 },
	{ "dxCmd", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_RadarScr_dxCmd, "[I", 10 },
	{ "xyArrow", getArrayClass(&class_int, 2), (intptr_t) &SF_nro_RadarScr_xyArrow, "[[I", 10 },
	{ "xyItem", getArrayClass(&class_int, 2), (intptr_t) &SF_nro_RadarScr_xyItem, "[[I", 10 },
	{ "index", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_RadarScr_index, "[I", 10 },
	{ "dyArrow", &class_int, offsetof(nro_RadarScr, F_dyArrow), "I", 2 },
	{ "dxArrow", getArrayClass(&class_int, 1), offsetof(nro_RadarScr, F_dxArrow), "[I", 2 },
	{ "page", &class_int, offsetof(nro_RadarScr, F_page), "I", 2 },
	{ "maxpage", &class_int, offsetof(nro_RadarScr, F_maxpage), "I", 2 },
	{ "indexFocus", &class_int, offsetof(nro_RadarScr, F_indexFocus), "I", 2 },
	{ "list", &class_nro_MyVector, (intptr_t) &SF_nro_RadarScr_list, "Lnro/MyVector;", 9 },
	{ "listUse", &class_nro_MyVector, (intptr_t) &SF_nro_RadarScr_listUse, "Lnro/MyVector;", 9 },
	{ "num", &class_int, (intptr_t) &SF_nro_RadarScr_num, "I", 10 },
	{ "focus_card", &class_nro_Info_RadaScr, offsetof(nro_RadarScr, F_focus_card), "Lnro/Info_RadaScr;", 2 },
	{ "pxx", &class_int, offsetof(nro_RadarScr, F_pxx), "I", 2 },
	{ "pyy", &class_int, offsetof(nro_RadarScr, F_pyy), "I", 2 },
	{ "xClip", &class_int, offsetof(nro_RadarScr, F_xClip), "I", 2 },
	{ "wClip", &class_int, offsetof(nro_RadarScr, F_wClip), "I", 2 },
	{ "yClip", &class_int, offsetof(nro_RadarScr, F_yClip), "I", 2 },
};

static MethodMetadata methods[] {
	{ "gI", (intptr_t) SM_nro_RadarScr_gI_R_nro_RadarScr, 0, "()Lnro/RadarScr;", 9 },
	{ "<init>", (intptr_t) init_nro_RadarScr, 0, "()V", 1 },
	{ "SetRadarScr", (intptr_t) M_nro_RadarScr_SetRadarScr_nro_MyVector_int_int, VTABLE_nro_RadarScr_SetRadarScr_nro_MyVector_int_int, "(Lnro/MyVector;II)V", 17 },
	{ "SetNum", (intptr_t) SM_nro_RadarScr_SetNum_int_int, 0, "(II)V", 9 },
	{ "SetListUse", (intptr_t) SM_nro_RadarScr_SetListUse, 0, "()V", 9 },
	{ "listIndex", (intptr_t) M_nro_RadarScr_listIndex, VTABLE_nro_RadarScr_listIndex, "()V", 2 },
	{ "update", (intptr_t) M_nro_RadarScr_update, VTABLE_nro_RadarScr_update, "()V", 17 },
	{ "updateKey", (intptr_t) M_nro_RadarScr_updateKey, VTABLE_nro_RadarScr_updateKey, "()V", 17 },
	{ "doClickUse", (intptr_t) M_nro_RadarScr_doClickUse_int, VTABLE_nro_RadarScr_doClickUse_int, "(I)V", 2 },
	{ "doClickArrow", (intptr_t) M_nro_RadarScr_doClickArrow_int, VTABLE_nro_RadarScr_doClickArrow_int, "(I)V", 2 },
	{ "doKeyItem", (intptr_t) M_nro_RadarScr_doKeyItem_int, VTABLE_nro_RadarScr_doKeyItem_int, "(I)V", 2 },
	{ "doKeyText", (intptr_t) M_nro_RadarScr_doKeyText_int, VTABLE_nro_RadarScr_doKeyText_int, "(I)V", 2 },
	{ "paint", (intptr_t) M_nro_RadarScr_paint_lib_mGraphics, VTABLE_nro_RadarScr_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "switchToMe", (intptr_t) M_nro_RadarScr_switchToMe, VTABLE_nro_RadarScr_switchToMe, "()V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_RadarScr, 0, "()V", 8 },
};

Class class_nro_RadarScr{
		.nativeName = (intptr_t) "nro/RadarScr",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_RadarScr),
		.classVtable = (intptr_t) vtable_nro_RadarScr,
		.staticInitializer = (intptr_t) clinit_nro_RadarScr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_RadarScr,
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
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_RadarScr = registerClass(&class_nro_RadarScr);

}

