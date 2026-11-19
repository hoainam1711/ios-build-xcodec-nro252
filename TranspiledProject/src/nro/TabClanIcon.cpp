#include "nro/TabClanIcon.h"
#include "lib/mFont.h"
#include "java/lang/StringBuilder.h"
#include "nro/IActionListener.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/SmallImage.h"
#include "nro/Scroll.h"
#include "nro/TabClanIcon.h"
#include "nro/Paint.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "nro/PopUp.h"
#include "nro/Command.h"
#include "nro/Char.h"
#include "nro/Clan.h"
#include "nro/ClanImage.h"

extern "C" {

jobject SF_nro_TabClanIcon_scrMain;

void mark_nro_TabClanIcon(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_TabClanIcon_scrMain)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TabClanIcon_scrMain)->clazz)->markFunction)((jobject) SF_nro_TabClanIcon_scrMain, mark, depth + 1);
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
	auto self = (nro_TabClanIcon *) object;
	if (self->F_left)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_left)->clazz)->markFunction)((jobject) self->F_left, mark, depth + 1);
	if (self->F_right)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_right)->clazz)->markFunction)((jobject) self->F_right, mark, depth + 1);
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_vItems)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vItems)->clazz)->markFunction)((jobject) self->F_vItems, mark, depth + 1);
}

void clinit_nro_TabClanIcon(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_nro_TabClanIcon_show_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TabClanIcon:show", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	LINE_NUMBER(31);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_isShow = (jint(1));
	LINE_NUMBER(32);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_isGetName = (jint(0));
	LINE_NUMBER(33);
	if (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_isGetName) == 0) goto label_4;
	}
	{
	LINE_NUMBER(34);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w = (170);
	LINE_NUMBER(35);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_h = (118);
	LINE_NUMBER(36);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w) / (jint(2))));
	LINE_NUMBER(37);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))) - (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_h) / (jint(2))));
	goto label_9;
	}
label_4:;
	{
	LINE_NUMBER(39);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w = (170);
	LINE_NUMBER(40);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_h = (170);
	LINE_NUMBER(41);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w) / (jint(2))));
	LINE_NUMBER(42);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))) - (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_h) / (jint(2))));
	LINE_NUMBER(43);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) >= (240)) goto label_9;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	((nro_TabClanIcon *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_TabClanIcon *) NULL_CHECK(sp[0].o))->F_y) - (10));
	}
label_9:;
	{
	LINE_NUMBER(48);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_cmx = ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(49);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_cmtoX = (jint(0));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_nro_ClanImage(ctx);
	sp[1].o = (jobject)SF_nro_ClanImage_vClanImage;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	((nro_TabClanIcon *) NULL_CHECK(sp[0].o))->F_nItem = temp0;
	LINE_NUMBER(51);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_18;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_left;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(53);
	sp[0].o = (jobject)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_left;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_h)) + (jint(5)));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_right;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w)) - (68));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_right;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_h)) + (jint(5)));
	}
label_18:;
	{
	LINE_NUMBER(58);
	clinit_nro_Scroll(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Scroll);
	init_nro_Scroll(ctx, sp[0].o);
	clinit_nro_TabClanIcon(ctx);
	SF_nro_TabClanIcon_scrMain = sp[0].o;
	((func_nro_Scroll_setStyle_int_int_int_int_int_int_boolean_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Scroll_setStyle_int_int_int_int_int_int_boolean_int])(ctx, sp[0].o, ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_nItem), ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_WIDTH), ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_disStart)), ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w), (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_h) - ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_disStart)), (jint(1)), (jint(1)));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_TabClanIcon_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TabClanIcon:hide", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_cmtoX = (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_TabClanIcon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TabClanIcon:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TabClanIcon(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(65);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_WIDTH = (24);
	LINE_NUMBER(15);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_nItem = (jint(0));
	LINE_NUMBER(16);
	((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_disStart = (50);
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vItems"_j))));
	((nro_TabClanIcon *) NULL_CHECK(sp[0].o))->F_vItems = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_SELECT;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (jint(1)), (jobject(nullptr)));
	((nro_TabClanIcon *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CLOSE;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (jint(2)), (jobject(nullptr)));
	((nro_TabClanIcon *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_TabClanIcon_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TabClanIcon:paint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (-((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_cmx)), (jint(0)));
	LINE_NUMBER(72);
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, (frame[1].o), ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y) - (17)), ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w), (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_h) + (17)), (jint(-1)), (jint(1)));
	LINE_NUMBER(73);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_select_clan_icon;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_x) + (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w) / (jint(2)))), (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y) - (7)), (jint(2)));
	LINE_NUMBER(75);
	if (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_select) < 0) goto label_4;
	}
	{
	jint temp0 = (jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_select;
	clinit_nro_ClanImage(ctx);
	sp[0].o = (jobject)SF_nro_ClanImage_vClanImage;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 > (temp1 - (jint(1)))) goto label_4;
	}
	{
	clinit_nro_ClanImage(ctx);
	sp[0].o = (jobject)SF_nro_ClanImage_vClanImage;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_select));
	sp[0].o = checkCast(ctx, &class_nro_ClanImage, sp[0].o);
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((nro_ClanImage *) NULL_CHECK(sp[0].o))->F_idImage;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_ClanImage *) NULL_CHECK((frame[2].o)))->F_idImage;
	((func_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))), (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y) + (45)), (jint(1)), (jint(0)));
	}
label_4:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = frame[1].o;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2));
	jint temp1 = ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y) + (45);
	jint temp2 = jint(1);
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jint)((nro_Char *) NULL_CHECK(sp[2].o))->F_cf), (jint(0)));
	LINE_NUMBER(80);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_disStart)), ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w), ((((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_h) - ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_disStart)) - (10)));
	LINE_NUMBER(81);
	clinit_nro_TabClanIcon(ctx);
	sp[0].o = (jobject)SF_nro_TabClanIcon_scrMain;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	clinit_nro_TabClanIcon(ctx);
	sp[1].o = (jobject)SF_nro_TabClanIcon_scrMain;
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp0, (-((jint)((nro_Scroll *) NULL_CHECK(sp[1].o))->F_cmy)));
	}
label_9:;
	{
	LINE_NUMBER(85);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	if ((frame[3].i) >= ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_nItem)) goto label_12;
	}
	{
	LINE_NUMBER(86);
	frame[4].i = (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_x) + (10));
	LINE_NUMBER(88);
	jint temp0 = (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y) + ((frame[3].i) * ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_WIDTH))) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_disStart);
	frame[5].i = temp0;
	jint temp3 = temp0 + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_WIDTH);
	clinit_nro_TabClanIcon(ctx);
	sp[0].o = (jobject)SF_nro_TabClanIcon_scrMain;
	jobject temp4 = sp[0].o;
	sp[0].i = temp3;
	sp += 1;
	if (temp4 == nullptr) goto label_16;
	}
	{
	clinit_nro_TabClanIcon(ctx);
	sp[0].o = (jobject)SF_nro_TabClanIcon_scrMain;
	jint temp0 = (jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmy;
	sp[0].i = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 2;
	if ((sp[0].i - sp[1].i) < (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_disStart))) goto label_18;
	}
	{
	jint temp0 = frame[5].i;
	clinit_nro_TabClanIcon(ctx);
	sp[0].o = (jobject)SF_nro_TabClanIcon_scrMain;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_19;
	}
	{
	clinit_nro_TabClanIcon(ctx);
	sp[0].o = (jobject)SF_nro_TabClanIcon_scrMain;
	jint temp0 = (jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmy;
	sp[0].i = temp0;
	sp += 1;
	goto label_20;
	}
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 2;
	if ((sp[0].i - sp[1].i) > ((((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_disStart)) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_h))) goto label_18;
	}
	{
	LINE_NUMBER(89);
	clinit_nro_ClanImage(ctx);
	sp[0].o = (jobject)SF_nro_ClanImage_vClanImage;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[6].o = (checkCast(ctx, &class_nro_ClanImage, sp[0].o));
	LINE_NUMBER(90);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	frame[7].o = sp[0].o;
	LINE_NUMBER(91);
	if ((frame[3].i) != ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_select)) goto label_24;
	}
	{
	LINE_NUMBER(92);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_blue;
	frame[7].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((nro_ClanImage *) NULL_CHECK((frame[6].o)))->F_name;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = frame[7].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_ClanImage *) NULL_CHECK((frame[6].o)))->F_name;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[4].i) + (20)), (frame[5].i), (jint(0)));
	}
label_26:;
	{
	LINE_NUMBER(99);
	if (((jint)((nro_ClanImage *) NULL_CHECK((frame[6].o)))->F_xu) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = frame[7].o;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jint)((nro_ClanImage *) NULL_CHECK((frame[6].o)))->F_xu));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_XU;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((frame[4].i) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w)) - (20)), (frame[5].i), (jint(1)));
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(101);
	if (((jint)((nro_ClanImage *) NULL_CHECK((frame[6].o)))->F_luong) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = frame[7].o;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jint)((nro_ClanImage *) NULL_CHECK((frame[6].o)))->F_luong));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_LUONG;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((frame[4].i) + ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_w)) - (20)), (frame[5].i), (jint(1)));
	}
label_30:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((nro_ClanImage *) NULL_CHECK((frame[6].o)))->F_idImage;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_ClanImage *) NULL_CHECK((frame[6].o)))->F_idImage;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, (jint(0)))), (frame[4].i), (frame[5].i), (jint(0)), (jint(0)));
	}
label_18:;
	{
	LINE_NUMBER(85);
	INST_IINC(3, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[1].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp0, (-temp1));
	LINE_NUMBER(112);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(113);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_left;
	sp[2].o = checkCast(ctx, &class_nro_Command, (jobject(nullptr)));
	sp[3].o = (jobject)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_right;
	SM_nro_Paint_paintCmdBar_lib_mGraphics_nro_Command_nro_Command_nro_Command(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_TabClanIcon_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TabClanIcon:perform", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(117);
	if ((frame[1].i) != (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(118);
	M_nro_TabClanIcon_hide(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(121);
	if ((frame[1].i) != (jint(1))) goto label_3;
	}
	{
	if (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_isGetName) != 0) goto label_3;
	}
	{
	if (((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_select) < 0) goto label_3;
	}
	{
	LINE_NUMBER(122);
	M_nro_TabClanIcon_hide(ctx, (frame[0].o));
	LINE_NUMBER(123);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_clan;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	jint temp0 = jint(2);
	clinit_nro_ClanImage(ctx);
	sp[1].o = (jobject)SF_nro_ClanImage_vClanImage;
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_select));
	jint temp1 = (jint)((nro_ClanImage *) NULL_CHECK((checkCast(ctx, &class_nro_ClanImage, sp[1].o))))->F_ID;
	sp[1].o = (jobject)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_text;
	((func_nro_Service_getClan_byte_int_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getClan_byte_int_java_lang_String])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	jint temp0 = jint(4);
	clinit_nro_ClanImage(ctx);
	sp[1].o = (jobject)SF_nro_ClanImage_vClanImage;
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((nro_TabClanIcon *) NULL_CHECK((frame[0].o)))->F_select));
	((func_nro_Service_getClan_byte_int_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getClan_byte_int_java_lang_String])(ctx, sp[0].o, temp0, ((jint)((nro_ClanImage *) NULL_CHECK((checkCast(ctx, &class_nro_ClanImage, sp[1].o))))->F_ID), (((jobject) createStringLiteral(ctx, u8""_j))));
	}
label_3:;
	LINE_NUMBER(131);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_TabClanIcon[] {
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
	(void *) M_nro_TabClanIcon_perform_int_java_lang_Object,
	(void *) M_nro_TabClanIcon_show_boolean,
	(void *) M_nro_TabClanIcon_hide,
	(void *) M_nro_TabClanIcon_paint_lib_mGraphics,
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
	{ "show", "(Z)V" },
	{ "hide", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "x", &class_int, offsetof(nro_TabClanIcon, F_x), "I", 0 },
	{ "y", &class_int, offsetof(nro_TabClanIcon, F_y), "I", 2 },
	{ "w", &class_int, offsetof(nro_TabClanIcon, F_w), "I", 0 },
	{ "h", &class_int, offsetof(nro_TabClanIcon, F_h), "I", 2 },
	{ "left", &class_nro_Command, offsetof(nro_TabClanIcon, F_left), "Lnro/Command;", 0 },
	{ "right", &class_nro_Command, offsetof(nro_TabClanIcon, F_right), "Lnro/Command;", 0 },
	{ "WIDTH", &class_int, offsetof(nro_TabClanIcon, F_WIDTH), "I", 2 },
	{ "nItem", &class_int, offsetof(nro_TabClanIcon, F_nItem), "I", 1 },
	{ "disStart", &class_int, offsetof(nro_TabClanIcon, F_disStart), "I", 2 },
	{ "scrMain", &class_nro_Scroll, (intptr_t) &SF_nro_TabClanIcon_scrMain, "Lnro/Scroll;", 9 },
	{ "cmtoX", &class_int, offsetof(nro_TabClanIcon, F_cmtoX), "I", 1 },
	{ "cmx", &class_int, offsetof(nro_TabClanIcon, F_cmx), "I", 1 },
	{ "i", &class_int, offsetof(nro_TabClanIcon, F_i), "I", 1 },
	{ "j", &class_int, offsetof(nro_TabClanIcon, F_j), "I", 1 },
	{ "isShow", &class_boolean, offsetof(nro_TabClanIcon, F_isShow), "Z", 1 },
	{ "isGetName", &class_boolean, offsetof(nro_TabClanIcon, F_isGetName), "Z", 1 },
	{ "text", &class_java_lang_String, offsetof(nro_TabClanIcon, F_text), "Ljava/lang/String;", 1 },
	{ "vItems", &class_nro_MyVector, offsetof(nro_TabClanIcon, F_vItems), "Lnro/MyVector;", 2 },
	{ "msgID", &class_int, offsetof(nro_TabClanIcon, F_msgID), "I", 0 },
	{ "select", &class_int, offsetof(nro_TabClanIcon, F_select), "I", 0 },
};

static MethodMetadata methods[] {
	{ "show", (intptr_t) M_nro_TabClanIcon_show_boolean, VTABLE_nro_TabClanIcon_show_boolean, "(Z)V", 17 },
	{ "hide", (intptr_t) M_nro_TabClanIcon_hide, VTABLE_nro_TabClanIcon_hide, "()V", 2 },
	{ "<init>", (intptr_t) init_nro_TabClanIcon, 0, "()V", 1 },
	{ "paint", (intptr_t) M_nro_TabClanIcon_paint_lib_mGraphics, VTABLE_nro_TabClanIcon_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "perform", (intptr_t) M_nro_TabClanIcon_perform_int_java_lang_Object, VTABLE_nro_TabClanIcon_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
};

Class class_nro_TabClanIcon{
		.nativeName = (intptr_t) "nro/TabClanIcon",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_TabClanIcon),
		.classVtable = (intptr_t) vtable_nro_TabClanIcon,
		.staticInitializer = (intptr_t) clinit_nro_TabClanIcon,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_TabClanIcon,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_TabClanIcon = registerClass(&class_nro_TabClanIcon);

}

