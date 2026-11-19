#include "nro/Info.h"
#include "nro/InfoItem.h"
#include "lib/mFont.h"
#include "nro/GameScr.h"
#include "java/lang/Integer.h"
#include "lib/input/TField.h"
#include "nro/IActionListener.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/TextInfo.h"
#include "nro/Panel.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "lib/input/ChatTextField.h"
#include "nro/Res.h"
#include "nro/InfoMe.h"
#include "nro/Info.h"
#include "nro/PopUp.h"
#include "nro/Command.h"
#include "nro/Char.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_Info_gocnhon;

void mark_nro_Info(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Info_gocnhon)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Info_gocnhon)->clazz)->markFunction)((jobject) SF_nro_Info_gocnhon, mark, depth + 1);
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
	auto self = (nro_Info *) object;
	if (self->F_infoWaitToShow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_infoWaitToShow)->clazz)->markFunction)((jobject) self->F_infoWaitToShow, mark, depth + 1);
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
	if (self->F_says)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_says)->clazz)->markFunction)((jobject) self->F_says, mark, depth + 1);
}

void init_nro_Info(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Info(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"infoWaitToShow"_j))));
	((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow = (jref) sp[1].o;
	LINE_NUMBER(15);
	((nro_Info *) NULL_CHECK((frame[0].o)))->F_sayWidth = (100);
	LINE_NUMBER(20);
	((nro_Info *) NULL_CHECK((frame[0].o)))->F_outSide = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Info_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info:hide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	((nro_Info *) NULL_CHECK((frame[0].o)))->F_says = (jref) (jobject(nullptr));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Info_paint_lib_mGraphics_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info:paint", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(37);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(38);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_says;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_says;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == 0) goto label_4;
	}
	{
	if (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_type) == (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(39);
	if ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel) != (jint(1))) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	INST_BIPUSH(10);
label_7:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_charInfo;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(41);
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, (frame[1].o), ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_X), ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_Y), ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_W), ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_H), (jint(16777215)), (jint(0)));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(43);
	SM_lib_mSystem_paintPopUp2_lib_mGraphics_int_int_int_int(ctx, (frame[1].o), (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_X) - (23)), (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_Y) - ((frame[5].i) / (jint(2)))), (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_W) + (15)), ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_H));
	}
label_11:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_charInfo;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	clinit_nro_Info(ctx);
	sp[1].o = (jobject)SF_nro_Info_gocnhon;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = 9;
	jint temp3 = 8;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp += 6;
	if ((frame[4].i) != (jint(1))) goto label_14;
	}
	INST_ICONST(0);
	goto label_15;
label_14:;
	INST_ICONST(2);
label_15:;
	{
	jint temp0 = ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_cx) - (jint(3));
	sp[0].i = temp0;
	sp += 1;
	if ((frame[4].i) != (jint(1))) goto label_16;
	}
	INST_BIPUSH(-15);
	goto label_17;
label_16:;
	INST_BIPUSH(20);
label_17:;
	{
	sp -= 9;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, (sp[7].i + sp[8].i), (((((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_cy) - (20)) + ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_sayRun)) + (jint(2))), (17));
	}
label_12:;
	{
	LINE_NUMBER(50);
	frame[4].i = (jint(-1));
	LINE_NUMBER(52);
	frame[6].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_says;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(53);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7;
	frame[7].o = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_says;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_says;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))), (((jobject) createStringLiteral(ctx, u8"|"_j))));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_says;
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))), (((jobject) createStringLiteral(ctx, u8"|"_j))), (jint(0)));
	frame[10].o = sp[0].o;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(3))) goto label_26;
	}
	{
	LINE_NUMBER(59);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(2))));
	}
label_26:;
	{
	LINE_NUMBER(62);
	if ((((jarray) nullCheck(ctx, (frame[10].o)))->length) != (jint(4))) goto label_28;
	}
	{
	LINE_NUMBER(63);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(3))));
	LINE_NUMBER(64);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(2)))));
	}
label_28:;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(1)))));
	frame[9].i = temp0;
	frame[4].i = temp0;
	LINE_NUMBER(68);
	goto label_33;
	}
label_23:;
	{
	LINE_NUMBER(69);
	frame[9].i = (frame[4].i);
	}
label_33:;
	{
	LINE_NUMBER(72);
	switch((frame[9].i)) {
		case -1: goto label_34;
		case 0: goto label_35;
		case 1: goto label_36;
		case 2: goto label_37;
		case 3: goto label_38;
		case 4: goto label_39;
		case 5: goto label_40;
		case 6: goto label_41;
		case 7: goto label_42;
		default: goto label_41;
	}
	}
label_34:;
	{
	LINE_NUMBER(74);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7;
	frame[7].o = sp[0].o;
	LINE_NUMBER(75);
	goto label_44;
	}
label_35:;
	{
	LINE_NUMBER(77);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	frame[7].o = sp[0].o;
	LINE_NUMBER(78);
	goto label_44;
	}
label_36:;
	{
	LINE_NUMBER(80);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green;
	frame[7].o = sp[0].o;
	LINE_NUMBER(81);
	goto label_44;
	}
label_37:;
	{
	LINE_NUMBER(83);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_blue;
	frame[7].o = sp[0].o;
	LINE_NUMBER(84);
	goto label_44;
	}
label_38:;
	{
	LINE_NUMBER(86);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_red;
	frame[7].o = sp[0].o;
	LINE_NUMBER(87);
	goto label_44;
	}
label_39:;
	{
	LINE_NUMBER(89);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_green;
	frame[7].o = sp[0].o;
	LINE_NUMBER(90);
	goto label_44;
	}
label_40:;
	{
	LINE_NUMBER(92);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_blue;
	frame[7].o = sp[0].o;
	}
label_41:;
	LINE_NUMBER(95);
	goto label_44;
label_42:;
	{
	LINE_NUMBER(97);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_red;
	frame[7].o = sp[0].o;
	}
label_44:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_charInfo;
	if (sp[0].o != nullptr) goto label_50;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = frame[7].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[8].o;
	jint temp0 = (jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_cy) - (15)) + ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_sayRun)) + ((frame[6].i) * (12));
	sp[3].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_says;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, ((temp1 - ((((jarray) nullCheck(ctx, sp[3].o))->length) * (12))) - (9)), (jint(2)));
	goto label_52;
	}
label_50:;
	{
	LINE_NUMBER(103);
	frame[9].i = (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_X) - (23));
	LINE_NUMBER(104);
	frame[10].i = (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_Y) - ((frame[5].i) / (jint(2))));
	LINE_NUMBER(105);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_55;
	}
	{
	jint temp0 = ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_W) + (28);
	sp[0].i = temp0;
	sp += 1;
	goto label_56;
	}
label_55:;
	{
	jint temp0 = ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_W) + (25);
	sp[0].i = temp0;
	sp += 1;
	}
label_56:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(106);
	jint temp0 = (jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_H;
	sp[0].i = temp0;
	sp += 1;
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_58;
	}
	INST_ICONST(0);
	goto label_59;
label_58:;
	INST_BIPUSH(14);
label_59:;
	{
	sp -= 2;
	frame[12].i = ((sp[0].i + sp[1].i) + (frame[5].i));
	LINE_NUMBER(107);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(4465169)));
	LINE_NUMBER(108);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (frame[9].i), ((frame[10].i) + (frame[12].i)), (frame[11].i), (jint(2)));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp0 = ((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount) * (frame[11].i);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp1 = temp0 / ((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_maxTime);
	frame[11].i = temp1;
	if (temp1 >= 0) goto label_63;
	}
	{
	LINE_NUMBER(110);
	frame[11].i = (jint(0));
	}
label_63:;
	{
	LINE_NUMBER(113);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(43758)));
	LINE_NUMBER(114);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (frame[9].i), ((frame[10].i) + (frame[12].i)), (frame[11].i), (jint(2)));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount) != 0) goto label_67;
	}
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();
label_67:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_charInfo;
	((func_nro_Char_paint_lib_mGraphics_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_paint_lib_mGraphics_int_int_int])(ctx, sp[0].o, (frame[1].o), (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_X) + (jint(5))), (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_Y) + (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_H) / (jint(2)))), (jint(0)));
	LINE_NUMBER(120);
	if ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel) != (jint(1))) goto label_70;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_isChatServer) == 0) goto label_72;
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_yellowSmall2;
	goto label_73;
label_72:;
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_greenSmall;
label_73:;
	{
	sp -= 1;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[2].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[2].o))->F_charInfo;
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK(sp[2].o))->F_cName;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_X) + (12)), (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_Y) + (jint(3))), (jint(0)));
	goto label_74;
	}
label_70:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_isChatServer) == 0) goto label_75;
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_yellowSmall2;
	goto label_76;
label_75:;
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_greenSmall;
label_76:;
	{
	sp -= 1;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[2].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[2].o))->F_charInfo;
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK(sp[2].o))->F_cName;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_X) + (12)), (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_Y) - (jint(3))), (jint(0)));
	}
label_74:;
	{
	LINE_NUMBER(126);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_77;
	}
	{
	LINE_NUMBER(127);
	if ((clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_isQwerty) != 0) goto label_79;
	}
	{
	LINE_NUMBER(128);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2Small;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Nh\u1ea5n # \u0111\u1ec3 chat"_j))), ((((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_X) + (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_W) / (jint(2)))) + (10)), (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_Y) + ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_H)), (jint(2)));
	goto label_77;
	}
label_79:;
	{
	LINE_NUMBER(130);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2Small;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Nh\u1ea5n Y \u0111\u1ec3 chat"_j))), ((((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_X) + (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_W) / (jint(2)))) + (10)), (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_Y) + ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_H)), (jint(2)));
	}
label_77:;
	{
	LINE_NUMBER(134);
	if ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel) != (jint(1))) goto label_81;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = frame[1].o;
	sp[1].o = frame[8].o;
	jint temp0 = ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_X) + (14);
	jint temp1 = (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_Y) + (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_H) / (jint(2)))) + (jint(2));
	jint temp2 = ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_W) - (16);
	jint temp3 = (jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_H;
	clinit_lib_mFont(ctx);
	sp[2].o = (jobject)SF_lib_mFont_tahoma_7_whiteSmall;
	SM_nro_TextInfo_paint_lib_mGraphics_java_lang_String_int_int_int_int_lib_mFont(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	goto label_52;
	}
label_81:;
	{
	LINE_NUMBER(137);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_whiteSmall;
	sp[0].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[0].o, (frame[8].o), (120));
	frame[13].o = sp[0].o;
	LINE_NUMBER(139);
	frame[14].i = (jint(0));
	}
label_84:;
	{
	if ((frame[14].i) >= (((jarray) nullCheck(ctx, (frame[13].o)))->length)) goto label_85;
	}
	{
	LINE_NUMBER(140);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_whiteSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[14].i))), (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_X) + (12)), (((((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_Y) + (12)) + ((frame[14].i) * (12))) - (jint(3))), (jint(0)));
	LINE_NUMBER(139);
	INST_IINC(14, 1);
	goto label_84;
	}
label_85:;
	{
	LINE_NUMBER(143);
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, (frame[1].o));
	}
label_52:;
	{
	LINE_NUMBER(52);
	INST_IINC(6, 1);
	goto label_19;
	}
label_4:;
	{
	LINE_NUMBER(149);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (-(frame[2].i)), (-(frame[3].i)));
	}
label_1:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Info_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount) != 0) goto label_1;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_time = (((jint)((nro_Info *) NULL_CHECK(sp[0].o))->F_time) + (jint(1)));
	LINE_NUMBER(157);
	jint temp0 = (jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_time;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	if (temp0 < ((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_speed)) goto label_1;
	}
	{
	LINE_NUMBER(158);
	((nro_Info *) NULL_CHECK((frame[0].o)))->F_time = (jint(0));
	LINE_NUMBER(159);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	LINE_NUMBER(161);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	sp[0].o = (jobject)((func_nro_MyVector_firstElement_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_firstElement_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_nro_InfoItem, sp[0].o));
	LINE_NUMBER(165);
	((nro_Info *) NULL_CHECK((frame[0].o)))->F_info = (jref) (frame[1].o);
	LINE_NUMBER(166);
	((func_nro_Info_getInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Info_getInfo])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Info_getInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info:getInfo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	((nro_Info *) NULL_CHECK((frame[0].o)))->F_sayWidth = (100);
	LINE_NUMBER(174);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) != (128)) goto label_2;
	}
	{
	LINE_NUMBER(175);
	((nro_Info *) NULL_CHECK((frame[0].o)))->F_sayWidth = (128);
	}
label_2:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_charInfo;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[2].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[2].o))->F_s;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_says = (jref) sp[1].o;
	LINE_NUMBER(181);
	if ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_says;
	frame[1].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(184);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_whiteSmall;
	sp[1].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[1].o))->F_s;
	sp[0].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[0].o, sp[1].o, (120));
	frame[1].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_7;
	sp[2].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[2].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[2].o))->F_s;
	sp[1].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[1].o, sp[2].o, (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_sayWidth) - (10)));
	((nro_Info *) NULL_CHECK(sp[0].o))->F_says = (jref) sp[1].o;
	LINE_NUMBER(188);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_says;
	frame[1].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_10:;
	{
	LINE_NUMBER(191);
	((nro_Info *) NULL_CHECK((frame[0].o)))->F_sayRun = (7);
	LINE_NUMBER(192);
	((nro_Info *) NULL_CHECK((frame[0].o)))->F_X = ((((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_cx) - (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_sayWidth) / (jint(2)))) - (jint(1)));
	LINE_NUMBER(193);
	((nro_Info *) NULL_CHECK((frame[0].o)))->F_Y = ((((((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_cy) - (15)) + ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_sayRun)) - ((frame[1].i) * (12))) - (15));
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_sayWidth) + (jint(2));
	sp[1].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[1].o))->F_charInfo;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == nullptr) goto label_16;
	}
	INST_BIPUSH(30);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 3;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_W = (sp[1].i + sp[2].i);
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	jint temp0 = (((frame[1].i) + (jint(1))) * (12)) + (jint(1));
	sp[1].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[1].o))->F_charInfo;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == nullptr) goto label_19;
	}
	INST_ICONST(5);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 3;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_H = (sp[1].i + sp[2].i);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info:addInfo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(199);
	((nro_Info *) NULL_CHECK((frame[0].o)))->F_type = (frame[2].i);
	LINE_NUMBER(200);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (10)) goto label_2;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	}
label_2:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_4;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	sp[1].o = (jobject)((func_nro_MyVector_lastElement_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_lastElement_R_java_lang_Object])(ctx, sp[1].o);
	sp[1].o = (jobject)((nro_InfoItem *) NULL_CHECK((checkCast(ctx, &class_nro_InfoItem, sp[1].o))))->F_s;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(208);
	clinit_nro_InfoItem(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_InfoItem);
	init_nro_InfoItem_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(209);
	if (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_7;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_speed = temp0;
	}
label_7:;
	{
	LINE_NUMBER(213);
	if (((jint)((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_speed) >= (70)) goto label_9;
	}
	{
	LINE_NUMBER(214);
	((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_speed = (70);
	}
label_9:;
	{
	LINE_NUMBER(217);
	if (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(218);
	((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_speed = (jint(10000000));
	}
label_11:;
	{
	LINE_NUMBER(221);
	if (((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_type) != (jint(3))) goto label_13;
	}
	{
	LINE_NUMBER(222);
	((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_speed = (300);
	LINE_NUMBER(223);
	sp[0].o = frame[5].o;
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_last = temp0;
	LINE_NUMBER(224);
	sp[0].o = frame[5].o;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount = temp1;
	LINE_NUMBER(225);
	if (((jint)((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_timeCount) >= (15)) goto label_18;
	}
	{
	LINE_NUMBER(226);
	((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_timeCount = (15);
	}
label_18:;
	{
	LINE_NUMBER(229);
	if (((jint)((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_timeCount) <= (100)) goto label_20;
	}
	{
	LINE_NUMBER(230);
	((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_timeCount = (100);
	}
label_20:;
	{
	LINE_NUMBER(233);
	((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_maxTime = ((jint)((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_timeCount);
	}
label_13:;
	{
	LINE_NUMBER(236);
	if ((frame[3].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(237);
	((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_charInfo = (jref) (frame[3].o);
	LINE_NUMBER(238);
	((nro_InfoItem *) NULL_CHECK((frame[5].o)))->F_isChatServer = (frame[4].i);
	LINE_NUMBER(239);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_addChatMessage_nro_InfoItem) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_addChatMessage_nro_InfoItem])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(240);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_22;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isViewChatServer) == 0) goto label_22;
	}
	{
	LINE_NUMBER(241);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info2;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CHAT;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (1000), (frame[5].o));
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmdChat = (jref) sp[1].o;
	}
label_22:;
	{
	LINE_NUMBER(245);
	if ((frame[3].o) == nullptr) goto label_28;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isViewChatServer) != 0) goto label_29;
	}
label_28:;
	INST_ALOAD(3);
	if ((--sp)->o != nullptr) goto label_30;
label_29:;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	}
label_30:;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 != (jint(1))) goto label_31;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Info *) NULL_CHECK((frame[0].o)))->F_infoWaitToShow;
	sp[1].o = (jobject)((func_nro_MyVector_firstElement_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_firstElement_R_java_lang_Object])(ctx, sp[1].o);
	((nro_Info *) NULL_CHECK(sp[0].o))->F_info = (jref) (checkCast(ctx, &class_nro_InfoItem, sp[1].o));
	LINE_NUMBER(251);
	((func_nro_Info_getInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Info_getInfo])(ctx, (frame[0].o));
	}
label_31:;
	{
	LINE_NUMBER(254);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_34;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_34;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isViewChatServer) == 0) goto label_34;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (50)) <= ((155) + ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_W))) goto label_34;
	}
	{
	LINE_NUMBER(255);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info2;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmdChat;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - ((jint)((nro_Info *) NULL_CHECK((frame[0].o)))->F_W)) - (50));
	LINE_NUMBER(256);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info2;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmdChat;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (35);
	}
label_34:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Info_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info:perform", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(262);
	if ((frame[1].i) != (1000)) goto label_1;
	}
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(264);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	LINE_NUMBER(265);
	sp[0].o = frame[3].o;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_chat_player;
	((func_lib_input_ChatTextField_startChat_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_ChatTextField_startChat_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(268);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_Info(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Info(ctx);
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dgocnhon.png"_j))));
	clinit_nro_Info(ctx);
	SF_nro_Info_gocnhon = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Info[] {
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
	(void *) M_nro_Info_perform_int_java_lang_Object,
	(void *) M_nro_Info_hide,
	(void *) M_nro_Info_paint_lib_mGraphics_int_int_int,
	(void *) M_nro_Info_update,
	(void *) M_nro_Info_getInfo,
	(void *) M_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean,
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
	{ "perform", "(ILjava/lang/Object;)V" },
	{ "hide", "()V" },
	{ "paint", "(Llib/mGraphics;III)V" },
	{ "update", "()V" },
	{ "getInfo", "()V" },
	{ "addInfo", "(Ljava/lang/String;ILnro/Char;Z)V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "infoWaitToShow", &class_nro_MyVector, offsetof(nro_Info, F_infoWaitToShow), "Lnro/MyVector;", 1 },
	{ "info", &class_nro_InfoItem, offsetof(nro_Info, F_info), "Lnro/InfoItem;", 1 },
	{ "sayWidth", &class_int, offsetof(nro_Info, F_sayWidth), "I", 1 },
	{ "sayRun", &class_int, offsetof(nro_Info, F_sayRun), "I", 2 },
	{ "says", getArrayClass(&class_java_lang_String, 1), offsetof(nro_Info, F_says), "[Ljava/lang/String;", 1 },
	{ "cx", &class_int, offsetof(nro_Info, F_cx), "I", 2 },
	{ "cy", &class_int, offsetof(nro_Info, F_cy), "I", 2 },
	{ "outSide", &class_boolean, offsetof(nro_Info, F_outSide), "Z", 2 },
	{ "gocnhon", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Info_gocnhon, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "time", &class_int, offsetof(nro_Info, F_time), "I", 1 },
	{ "timeW", &class_int, offsetof(nro_Info, F_timeW), "I", 1 },
	{ "type", &class_int, offsetof(nro_Info, F_type), "I", 2 },
	{ "X", &class_int, offsetof(nro_Info, F_X), "I", 1 },
	{ "Y", &class_int, offsetof(nro_Info, F_Y), "I", 1 },
	{ "W", &class_int, offsetof(nro_Info, F_W), "I", 1 },
	{ "H", &class_int, offsetof(nro_Info, F_H), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Info, 0, "()V", 1 },
	{ "hide", (intptr_t) M_nro_Info_hide, VTABLE_nro_Info_hide, "()V", 17 },
	{ "paint", (intptr_t) M_nro_Info_paint_lib_mGraphics_int_int_int, VTABLE_nro_Info_paint_lib_mGraphics_int_int_int, "(Llib/mGraphics;III)V", 17 },
	{ "update", (intptr_t) M_nro_Info_update, VTABLE_nro_Info_update, "()V", 17 },
	{ "getInfo", (intptr_t) M_nro_Info_getInfo, VTABLE_nro_Info_getInfo, "()V", 17 },
	{ "addInfo", (intptr_t) M_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean, VTABLE_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean, "(Ljava/lang/String;ILnro/Char;Z)V", 17 },
	{ "perform", (intptr_t) M_nro_Info_perform_int_java_lang_Object, VTABLE_nro_Info_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_Info, 0, "()V", 8 },
};

Class class_nro_Info{
		.nativeName = (intptr_t) "nro/Info",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Info),
		.classVtable = (intptr_t) vtable_nro_Info,
		.staticInitializer = (intptr_t) clinit_nro_Info,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Info,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Info = registerClass(&class_nro_Info);

}

