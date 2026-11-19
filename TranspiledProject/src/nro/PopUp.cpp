#include "nro/PopUp.h"
#include "lib/mFont.h"
#include "nro/GameScr.h"
#include "nro/Hint.h"
#include "lib/mGraphics.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/ChatPopup.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/MyVector.h"
#include "nro/PopUp.h"
#include "nro/NinjaUtil.h"
#include "nro/Command.h"
#include "nro/Char.h"
#include "lib/mSystem.h"
#include "nro/TileMap.h"

extern "C" {

jobject SF_nro_PopUp_vPopups;
jobject SF_nro_PopUp_goc;
jobject SF_nro_PopUp_p;
jobject SF_nro_PopUp_imgPopUp;
jobject SF_nro_PopUp_imgPopUp2;

void mark_nro_PopUp(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_PopUp_vPopups)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_PopUp_vPopups)->clazz)->markFunction)((jobject) SF_nro_PopUp_vPopups, mark, depth + 1);
		if (SF_nro_PopUp_goc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_PopUp_goc)->clazz)->markFunction)((jobject) SF_nro_PopUp_goc, mark, depth + 1);
		if (SF_nro_PopUp_p)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_PopUp_p)->clazz)->markFunction)((jobject) SF_nro_PopUp_p, mark, depth + 1);
		if (SF_nro_PopUp_imgPopUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_PopUp_imgPopUp)->clazz)->markFunction)((jobject) SF_nro_PopUp_imgPopUp, mark, depth + 1);
		if (SF_nro_PopUp_imgPopUp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_PopUp_imgPopUp2)->clazz)->markFunction)((jobject) SF_nro_PopUp_imgPopUp2, mark, depth + 1);
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
	auto self = (nro_PopUp *) object;
	if (self->F_says)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_says)->clazz)->markFunction)((jobject) self->F_says, mark, depth + 1);
	if (self->F_command)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_command)->clazz)->markFunction)((jobject) self->F_command, mark, depth + 1);
}

void SM_nro_PopUp_loadBg(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUp:loadBg", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_PopUp(ctx);
	{
	LINE_NUMBER(31);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_goc;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dbd3.png"_j))));
	clinit_nro_PopUp(ctx);
	SF_nro_PopUp_goc = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(35);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_imgPopUp;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dimgPopup.png"_j))));
	clinit_nro_PopUp(ctx);
	SF_nro_PopUp_imgPopUp = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(39);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_imgPopUp2;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dimgPopup2.png"_j))));
	clinit_nro_PopUp(ctx);
	SF_nro_PopUp_imgPopUp2 = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(43);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_p;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/portal.png"_j))));
	clinit_nro_PopUp(ctx);
	SF_nro_PopUp_p = sp[0].o;
	}
label_7:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_nro_PopUp_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUp:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_PopUp(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(49);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayWidth = (100);
	LINE_NUMBER(19);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_isWayPoint = (jint(0));
	LINE_NUMBER(20);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_tDelay = (jint(0));
	LINE_NUMBER(23);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_isPaint = (jint(1));
	LINE_NUMBER(24);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_isHide = (jint(0));
	LINE_NUMBER(50);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= (10)) goto label_7;
	}
	{
	LINE_NUMBER(51);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayWidth = (60);
	}
label_7:;
	{
	LINE_NUMBER(54);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) != (128)) goto label_9;
	}
	{
	LINE_NUMBER(55);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayWidth = (128);
	}
label_9:;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[1].o, (frame[1].o), (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayWidth) - (10)));
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_says = (jref) sp[1].o;
	LINE_NUMBER(59);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayRun = (7);
	LINE_NUMBER(60);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cx = (((frame[2].i) - (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayWidth) / (jint(2)))) - (jint(1)));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	jint temp0 = ((frame[3].i) - (15)) + ((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayRun);
	sp[1].o = (jobject)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_says;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cy = ((temp0 - ((((jarray) nullCheck(ctx, sp[1].o))->length) * (12))) - (10));
	LINE_NUMBER(62);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw = (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayWidth) + (jint(2)));
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_says;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_ch = ((((((jarray) nullCheck(ctx, sp[1].o))->length) + (jint(1))) * (12)) + (jint(1)));
	}
label_16:;
	{
	if ((((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw) % (10)) == 0) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cw = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cw) + (jint(1)));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(67);
	if ((((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_ch) % (10)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_ch = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_ch) + (jint(1)));
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(71);
	if ((frame[2].i) < 0) goto label_20;
	}
	{
	if ((frame[2].i) > (24)) goto label_20;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx) + ((((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw) / (jint(2))) + (30)));
	}
label_20:;
	{
	LINE_NUMBER(75);
	if ((frame[2].i) > ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) * (24))) goto label_22;
	}
	{
	if ((frame[2].i) < (((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) * (24)) - (24))) goto label_22;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx) - ((((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw) / (jint(2))) + (6)));
	}
label_22:;
	{
	LINE_NUMBER(79);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cx) > (30)) goto label_24;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx) + (jint(2)));
	goto label_22;
	}
label_24:;
	{
	LINE_NUMBER(83);
	if ((((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw)) < (((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) * (24)) - (30))) goto label_26;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx) - (jint(2)));
	goto label_24;
	}
label_26:;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_PopUp_updateXYWH_Array1_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUp:updateXYWH", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(90);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayWidth = (jint(0));
	LINE_NUMBER(92);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayWidth;
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	jint temp1 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_sayWidth = temp0;
	}
label_5:;
	{
	LINE_NUMBER(92);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_sayWidth = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_sayWidth) + (20));
	LINE_NUMBER(99);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_says = (jref) (frame[1].o);
	LINE_NUMBER(100);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayRun = (7);
	LINE_NUMBER(101);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cx = (((frame[2].i) - (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayWidth) / (jint(2)))) - (jint(1)));
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	jint temp0 = ((frame[3].i) - (15)) + ((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayRun);
	sp[1].o = (jobject)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_says;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cy = ((temp0 - ((((jarray) nullCheck(ctx, sp[1].o))->length) * (12))) - (10));
	LINE_NUMBER(103);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw = (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_sayWidth) + (jint(2)));
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_says;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_ch = ((((((jarray) nullCheck(ctx, sp[1].o))->length) + (jint(1))) * (12)) + (jint(1)));
	}
label_13:;
	{
	if ((((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw) % (10)) == 0) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cw = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cw) + (jint(1)));
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(108);
	if ((((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_ch) % (10)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_ch = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_ch) + (jint(1)));
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(112);
	if ((frame[2].i) < 0) goto label_17;
	}
	{
	if ((frame[2].i) > (24)) goto label_17;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx) + ((((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw) / (jint(2))) + (30)));
	}
label_17:;
	{
	LINE_NUMBER(116);
	if ((frame[2].i) > ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) * (24))) goto label_19;
	}
	{
	if ((frame[2].i) < (((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) * (24)) - (24))) goto label_19;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx) - ((((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw) / (jint(2))) + (6)));
	}
label_19:;
	{
	LINE_NUMBER(120);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cx) > (30)) goto label_21;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx) + (jint(2)));
	goto label_19;
	}
label_21:;
	{
	LINE_NUMBER(124);
	if ((((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw)) < (((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) * (24)) - (30))) goto label_23;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx) - (jint(2)));
	goto label_21;
	}
label_23:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_PopUp_addPopUp_nro_PopUp(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUp:addPopUp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_PopUp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(131);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jbool param6) {
	jtype frame[22];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUp:paintPopUp", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_PopUp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(135);
	if ((frame[6].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(136);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(137);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (6)), (frame[2].i), (((frame[3].i) - (14)) + (jint(1))), (frame[4].i));
	LINE_NUMBER(138);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), ((frame[2].i) + (6)), (frame[3].i), (((frame[4].i) - (12)) + (jint(1))));
	LINE_NUMBER(139);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(140);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (6)), ((frame[2].i) + (jint(1))), ((frame[3].i) - (12)), ((frame[4].i) - (jint(2))));
	LINE_NUMBER(141);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), ((frame[2].i) + (6)), ((frame[3].i) - (jint(2))), ((frame[4].i) - (12)));
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	clinit_nro_PopUp(ctx);
	sp[1].o = (jobject)SF_nro_PopUp_goc;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (7), (6), (jint(0)), (frame[1].i), (frame[2].i), (jint(0)));
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	clinit_nro_PopUp(ctx);
	sp[1].o = (jobject)SF_nro_PopUp_goc;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (7), (6), (jint(2)), (((frame[1].i) + (frame[3].i)) - (7)), (frame[2].i), (jint(0)));
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	clinit_nro_PopUp(ctx);
	sp[1].o = (jobject)SF_nro_PopUp_goc;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (7), (6), (jint(1)), (frame[1].i), (((frame[2].i) + (frame[4].i)) - (6)), (jint(0)));
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	clinit_nro_PopUp(ctx);
	sp[1].o = (jobject)SF_nro_PopUp_goc;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (7), (6), (jint(3)), (((frame[1].i) + (frame[3].i)) - (7)), (((frame[2].i) + (frame[4].i)) - (6)), (jint(0)));
	goto label_12;
	}
label_1:;
	{
	LINE_NUMBER(147);
	if ((frame[5].i) != (jint(1))) goto label_13;
	}
	clinit_nro_PopUp(ctx);
	(sp++)->o = SF_nro_PopUp_imgPopUp2;
	goto label_14;
label_13:;
	clinit_nro_PopUp(ctx);
	(sp++)->o = SF_nro_PopUp_imgPopUp;
label_14:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(148);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[7].o), (jint(0)), (jint(0)), (10), (10), (jint(0)), (frame[1].i), (frame[2].i), (jint(0)));
	LINE_NUMBER(149);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[7].o), (jint(0)), (20), (10), (10), (jint(0)), (((frame[1].i) + (frame[3].i)) - (10)), (frame[2].i), (jint(0)));
	LINE_NUMBER(150);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[7].o), (jint(0)), (50), (10), (10), (jint(0)), (frame[1].i), (((frame[2].i) + (frame[4].i)) - (10)), (jint(0)));
	LINE_NUMBER(151);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[7].o), (jint(0)), (70), (10), (10), (jint(0)), (((frame[1].i) + (frame[3].i)) - (10)), (((frame[2].i) + (frame[4].i)) - (10)), (jint(0)));
	LINE_NUMBER(152);
	if ((((frame[3].i) - (20)) % (10)) != 0) goto label_20;
	}
	{
	jint temp0 = ((frame[3].i) - (20)) / (10);
	sp[0].i = temp0;
	sp += 1;
	goto label_21;
	}
label_20:;
	{
	jint temp0 = (((frame[3].i) - (20)) / (10)) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_21:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(153);
	if ((((frame[4].i) - (20)) % (10)) != 0) goto label_23;
	}
	{
	jint temp0 = ((frame[4].i) - (20)) / (10);
	sp[0].i = temp0;
	sp += 1;
	goto label_24;
	}
label_23:;
	{
	jint temp0 = (((frame[4].i) - (20)) / (10)) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_24:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(156);
	frame[10].i = (jint(0));
	}
label_26:;
	{
	if ((frame[10].i) >= (frame[8].i)) goto label_27;
	}
	{
	LINE_NUMBER(157);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[7].o), (jint(0)), (10), (10), (10), (jint(0)), (((frame[1].i) + (10)) + ((frame[10].i) * (10))), (frame[2].i), (jint(0)));
	LINE_NUMBER(156);
	INST_IINC(10, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(160);
	frame[10].i = (jint(0));
	}
label_30:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_31;
	}
	{
	LINE_NUMBER(161);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[7].o), (jint(0)), (30), (10), (10), (jint(0)), (frame[1].i), (((frame[2].i) + (10)) + ((frame[10].i) * (10))), (jint(0)));
	LINE_NUMBER(160);
	INST_IINC(10, 1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(164);
	frame[10].i = (jint(0));
	}
label_34:;
	{
	if ((frame[10].i) >= (frame[8].i)) goto label_35;
	}
	{
	LINE_NUMBER(165);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[7].o), (jint(0)), (60), (10), (10), (jint(0)), (((frame[1].i) + (10)) + ((frame[10].i) * (10))), (((frame[2].i) + (frame[4].i)) - (10)), (jint(0)));
	LINE_NUMBER(164);
	INST_IINC(10, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(168);
	frame[10].i = (jint(0));
	}
label_38:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_39;
	}
	{
	LINE_NUMBER(169);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[7].o), (jint(0)), (40), (10), (10), (jint(0)), (((frame[1].i) + (frame[3].i)) - (10)), (((frame[2].i) + (10)) + ((frame[10].i) * (10))), (jint(0)));
	LINE_NUMBER(168);
	INST_IINC(10, 1);
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[5].i) != (jint(1))) goto label_42;
	}
	(sp++)->i = jint(12052656);
	goto label_43;
label_42:;
	(sp++)->i = jint(16770503);
label_43:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(173);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (10)), ((frame[2].i) + (10)), ((frame[3].i) - (20)), ((frame[4].i) - (20)));
	}
label_12:;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_PopUp_doClick_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUp:doClick", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(178);
	((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_timeDelay = (10);
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_PopUp_paintClipPopUp_lib_mGraphics_int_int_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUp:paintClipPopUp", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(182);
	if ((frame[6].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(183);
	((func_lib_mGraphics_setColor_int_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int_float])(ctx, (frame[1].o), (jint(16777215)), (jfloat(0.5f)));
	LINE_NUMBER(184);
	((func_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int])(ctx, (frame[1].o), (frame[2].i), (frame[3].i), ((frame[4].i) - (jint(1))), (frame[5].i), (10), (10), (10), (10));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(186);
	((func_lib_mGraphics_setColor_int_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int_float])(ctx, (frame[1].o), (jint(0)), (jfloat(0.5f)));
	LINE_NUMBER(187);
	((func_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int])(ctx, (frame[1].o), (frame[2].i), (frame[3].i), ((frame[4].i) - (jint(1))), (frame[5].i), (10), (10), (10), (10));
	}
label_4:;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_PopUp_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUp:paint", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(192);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_isPaint) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_says;
	if (sp[0].o == nullptr) goto label_1;
	}
	clinit_nro_ChatPopup(ctx);
	(sp++)->o = SF_nro_ChatPopup_currChatPopup;
	if ((--sp)->o != nullptr) goto label_1;
	{
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_isHide) != 0) goto label_1;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cy) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY);
	jint temp2 = (jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw;
	jint temp3 = (jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_ch;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp += 6;
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_timeDelay) == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 7;
	((func_nro_PopUp_paintClipPopUp_lib_mGraphics_int_int_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_PopUp_paintClipPopUp_lib_mGraphics_int_int_int_int_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, (jint(1)));
	LINE_NUMBER(194);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_says;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(195);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_timeDelay) == 0) goto label_8;
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_green2;
	goto label_9;
label_8:;
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_white;
label_9:;
	{
	sp -= 1;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_says;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i));
	jint temp0 = ((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cx) + (((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cw) / (jint(2)));
	jint temp1 = (jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp2 = ((jint)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2));
	sp[3].o = (jobject)((nro_PopUp *) NULL_CHECK((frame[0].o)))->F_says;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, (((temp1 + (temp2 - (((((jarray) nullCheck(ctx, sp[3].o))->length) * (12)) / (jint(2))))) + ((frame[2].i) * (12))) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)), (jint(2)));
	LINE_NUMBER(194);
	INST_IINC(2, 1);
	goto label_6;
	}
label_1:;
	LINE_NUMBER(198);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_PopUp_paintAll_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUp:paintAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_PopUp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(201);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(202);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_nro_PopUp, sp[0].o));
	LINE_NUMBER(203);
	((func_nro_PopUp_paint_lib_mGraphics) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_PopUp_paint_lib_mGraphics])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(201);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(205);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_PopUp_update(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUp:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_PopUp(ctx);
	{
	LINE_NUMBER(208);
	frame[0].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(209);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	frame[1].o = (checkCast(ctx, &class_nro_PopUp, sp[0].o));
	LINE_NUMBER(210);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_taskId) != 0) goto label_5;
	}
	{
	LINE_NUMBER(211);
	if ((((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cx) + ((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cw)) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_7;
	}
	{
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cx) > ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx))) goto label_7;
	}
	{
	if ((((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cy) + ((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_ch)) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_7;
	}
	{
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cy) > ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy))) goto label_7;
	}
	{
	LINE_NUMBER(212);
	((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isHide = (jint(0));
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(214);
	((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isHide = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_taskId) == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(219);
	jint temp0 = ((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cx) + (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cw) / (jint(2)));
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 < (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - (100))) goto label_11;
	}
	{
	jint temp0 = ((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cx) + (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cw) / (jint(2)));
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 > (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + (100))) goto label_11;
	}
	{
	if ((((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cy) + ((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_ch)) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_11;
	}
	{
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cy) > ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy))) goto label_11;
	}
	{
	LINE_NUMBER(220);
	((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isHide = (jint(0));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(222);
	((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isHide = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(226);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_timeDelay) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = frame[1].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_timeDelay = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_timeDelay) - (jint(1)));
	LINE_NUMBER(228);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_timeDelay) != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_command;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_command;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_13:;
	{
	LINE_NUMBER(233);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isWayPoint) == 0) goto label_17;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_taskId) != 0) goto label_21;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_index) != 0) goto label_23;
	}
	{
	LINE_NUMBER(237);
	((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isPaint = (jint(0));
	}
label_23:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_index) != (jint(1))) goto label_25;
	}
	{
	LINE_NUMBER(241);
	((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isPaint = (jint(1));
	}
label_25:;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_index) <= (jint(1))) goto label_17;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_index) >= (6)) goto label_17;
	}
	{
	LINE_NUMBER(245);
	((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isPaint = (jint(0));
	goto label_17;
	}
label_21:;
	{
	LINE_NUMBER(247);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isPaint) != 0) goto label_17;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = frame[1].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_tDelay = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_tDelay) + (jint(1)));
	LINE_NUMBER(249);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_tDelay) != (50)) goto label_17;
	}
	{
	LINE_NUMBER(250);
	((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isPaint = (jint(1));
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(253);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isPaint) != 0) goto label_17;
	}
	{
	LINE_NUMBER(254);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	LINE_NUMBER(255);
	sp[0].o = frame[1].o;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_tDelay = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_tDelay) + (jint(1)));
	LINE_NUMBER(256);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_tDelay) != (50)) goto label_17;
	}
	{
	LINE_NUMBER(257);
	((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isPaint = (jint(1));
	LINE_NUMBER(258);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(208);
	INST_IINC(0, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(264);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_PopUp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PopUp:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_PopUp(ctx);
	{
	LINE_NUMBER(11);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vPopups"_j))));
	clinit_nro_PopUp(ctx);
	SF_nro_PopUp_vPopups = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_PopUp[] {
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
	(void *) M_nro_PopUp_updateXYWH_Array1_java_lang_String_int_int,
	(void *) M_nro_PopUp_doClick_int,
	(void *) M_nro_PopUp_paintClipPopUp_lib_mGraphics_int_int_int_int_int_boolean,
	(void *) M_nro_PopUp_paint_lib_mGraphics,
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
	{ "updateXYWH", "([Ljava/lang/String;II)V" },
	{ "doClick", "(I)V" },
	{ "paintClipPopUp", "(Llib/mGraphics;IIIIIZ)V" },
	{ "paint", "(Llib/mGraphics;)V" },
};

static FieldMetadata fields[] {
	{ "vPopups", &class_nro_MyVector, (intptr_t) &SF_nro_PopUp_vPopups, "Lnro/MyVector;", 9 },
	{ "sayWidth", &class_int, offsetof(nro_PopUp, F_sayWidth), "I", 1 },
	{ "sayRun", &class_int, offsetof(nro_PopUp, F_sayRun), "I", 2 },
	{ "says", getArrayClass(&class_java_lang_String, 1), offsetof(nro_PopUp, F_says), "[Ljava/lang/String;", 1 },
	{ "cx", &class_int, offsetof(nro_PopUp, F_cx), "I", 1 },
	{ "cy", &class_int, offsetof(nro_PopUp, F_cy), "I", 1 },
	{ "cw", &class_int, offsetof(nro_PopUp, F_cw), "I", 1 },
	{ "ch", &class_int, offsetof(nro_PopUp, F_ch), "I", 1 },
	{ "isWayPoint", &class_boolean, offsetof(nro_PopUp, F_isWayPoint), "Z", 1 },
	{ "tDelay", &class_int, offsetof(nro_PopUp, F_tDelay), "I", 2 },
	{ "timeDelay", &class_int, offsetof(nro_PopUp, F_timeDelay), "I", 2 },
	{ "command", &class_nro_Command, offsetof(nro_PopUp, F_command), "Lnro/Command;", 1 },
	{ "isPaint", &class_boolean, offsetof(nro_PopUp, F_isPaint), "Z", 1 },
	{ "isHide", &class_boolean, offsetof(nro_PopUp, F_isHide), "Z", 1 },
	{ "goc", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_PopUp_goc, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "p", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_PopUp_p, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgPopUp", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_PopUp_imgPopUp, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgPopUp2", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_PopUp_imgPopUp2, "Ljavax/microedition/lcdui/Image;", 10 },
};

static MethodMetadata methods[] {
	{ "loadBg", (intptr_t) SM_nro_PopUp_loadBg, 0, "()V", 9 },
	{ "<init>", (intptr_t) init_nro_PopUp_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 1 },
	{ "updateXYWH", (intptr_t) M_nro_PopUp_updateXYWH_Array1_java_lang_String_int_int, VTABLE_nro_PopUp_updateXYWH_Array1_java_lang_String_int_int, "([Ljava/lang/String;II)V", 17 },
	{ "addPopUp", (intptr_t) SM_nro_PopUp_addPopUp_nro_PopUp, 0, "(Lnro/PopUp;)V", 9 },
	{ "paintPopUp", (intptr_t) SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean, 0, "(Llib/mGraphics;IIIIIZ)V", 9 },
	{ "doClick", (intptr_t) M_nro_PopUp_doClick_int, VTABLE_nro_PopUp_doClick_int, "(I)V", 17 },
	{ "paintClipPopUp", (intptr_t) M_nro_PopUp_paintClipPopUp_lib_mGraphics_int_int_int_int_int_boolean, VTABLE_nro_PopUp_paintClipPopUp_lib_mGraphics_int_int_int_int_int_boolean, "(Llib/mGraphics;IIIIIZ)V", 1 },
	{ "paint", (intptr_t) M_nro_PopUp_paint_lib_mGraphics, VTABLE_nro_PopUp_paint_lib_mGraphics, "(Llib/mGraphics;)V", 1 },
	{ "paintAll", (intptr_t) SM_nro_PopUp_paintAll_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "update", (intptr_t) SM_nro_PopUp_update, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_PopUp, 0, "()V", 8 },
};

Class class_nro_PopUp{
		.nativeName = (intptr_t) "nro/PopUp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_PopUp),
		.classVtable = (intptr_t) vtable_nro_PopUp,
		.staticInitializer = (intptr_t) clinit_nro_PopUp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_PopUp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_PopUp = registerClass(&class_nro_PopUp);

}

