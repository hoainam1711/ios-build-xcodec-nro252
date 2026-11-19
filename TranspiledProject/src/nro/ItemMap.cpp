#include "nro/ItemMap.h"
#include "nro/GameScr.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/ItemTemplate.h"
#include "nro/SmallImage.h"
#include "nro/ServerEffect.h"
#include "java/lang/Object.h"
#include "nro/ItemMap.h"
#include "nro/MyVector.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "nro/Res.h"
#include "nro/IMapObject.h"
#include "nro/ItemTemplates.h"
#include "nro/Char.h"
#include "nro/TileMap.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_ItemMap_imageFlare;
jobject SF_nro_ItemMap_imageAuraItem1;
jobject SF_nro_ItemMap_imageAuraItem2;
jobject SF_nro_ItemMap_imageAuraItem3;

void mark_nro_ItemMap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ItemMap_imageFlare)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ItemMap_imageFlare)->clazz)->markFunction)((jobject) SF_nro_ItemMap_imageFlare, mark, depth + 1);
		if (SF_nro_ItemMap_imageAuraItem1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ItemMap_imageAuraItem1)->clazz)->markFunction)((jobject) SF_nro_ItemMap_imageAuraItem1, mark, depth + 1);
		if (SF_nro_ItemMap_imageAuraItem2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ItemMap_imageAuraItem2)->clazz)->markFunction)((jobject) SF_nro_ItemMap_imageAuraItem2, mark, depth + 1);
		if (SF_nro_ItemMap_imageAuraItem3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ItemMap_imageAuraItem3)->clazz)->markFunction)((jobject) SF_nro_ItemMap_imageAuraItem3, mark, depth + 1);
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
	auto self = (nro_ItemMap *) object;
	if (self->F_template)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_template)->clazz)->markFunction)((jobject) self->F_template, mark, depth + 1);
	if (self->F_xArg)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xArg)->clazz)->markFunction)((jobject) self->F_xArg, mark, depth + 1);
	if (self->F_yArg)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_yArg)->clazz)->markFunction)((jobject) self->F_yArg, mark, depth + 1);
	if (self->F_xDot)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xDot)->clazz)->markFunction)((jobject) self->F_xDot, mark, depth + 1);
	if (self->F_yDot)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_yDot)->clazz)->markFunction)((jobject) self->F_yDot, mark, depth + 1);
}

void init_nro_ItemMap_short_short_int_int_int_int(jcontext ctx, jobject self, jshort param0, jshort param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_isPlayerMobDrop = (jint(0));
	LINE_NUMBER(20);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_isBossDrop = (jint(0));
	LINE_NUMBER(21);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_countAutoPick = (jint(0));
	LINE_NUMBER(41);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_itemMapID = (frame[1].i);
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_ItemTemplates_get_short_R_nro_ItemTemplate(ctx, (frame[2].i));
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_template = (jref) sp[1].o;
	LINE_NUMBER(43);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x = (frame[5].i);
	LINE_NUMBER(44);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y = (frame[4].i);
	LINE_NUMBER(45);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xEnd = (frame[5].i);
	LINE_NUMBER(46);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yEnd = (frame[6].i);
	LINE_NUMBER(47);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_f = (((frame[5].i) - (frame[3].i)) >> (jint(2)));
	LINE_NUMBER(48);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_vx = (jint(5));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_ItemMap_int_short_short_int_int_short(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jint param4, jshort param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(51);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_isPlayerMobDrop = (jint(0));
	LINE_NUMBER(20);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_isBossDrop = (jint(0));
	LINE_NUMBER(21);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_countAutoPick = (jint(0));
	LINE_NUMBER(52);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_itemMapID = (frame[2].i);
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_ItemTemplates_get_short_R_nro_ItemTemplate(ctx, (frame[3].i));
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_template = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[4].i;
	((nro_ItemMap *) NULL_CHECK(sp[1].o))->F_xEnd = temp0;
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp3 = frame[5].i;
	((nro_ItemMap *) NULL_CHECK(sp[1].o))->F_yEnd = temp3;
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(56);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status = (jint(1));
	LINE_NUMBER(57);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_playerId = (frame[1].i);
	LINE_NUMBER(58);
	jint temp6 = (jint)M_nro_ItemMap_isAuraItem_R_boolean(ctx, (frame[0].o));
	if (temp6 == 0) goto label_11;
	}
	{
	LINE_NUMBER(59);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_rO = (frame[6].i);
	LINE_NUMBER(60);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xO = ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(61);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yO = ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(62);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_iDot = (120);
	LINE_NUMBER(63);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_angle = (jint(0));
	LINE_NUMBER(64);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_11;
	}
	{
	LINE_NUMBER(65);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_iAngle = ((360) / ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_iDot));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_iDot));
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_xArg = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_iDot));
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_yArg = (jref) sp[1].o;
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_iDot));
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_xDot = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_iDot));
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_yDot = (jref) sp[1].o;
	LINE_NUMBER(70);
	M_nro_ItemMap_setDotPosition(ctx, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ItemMap_SetNum_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:SetNum", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(77);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xEnd = (frame[1].i);
	LINE_NUMBER(78);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yEnd = (frame[2].i);
	LINE_NUMBER(79);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_f = (((frame[1].i) - ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x)) >> (jint(2)));
	LINE_NUMBER(80);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_vx = (((frame[2].i) - ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y)) >> (jint(2)));
	LINE_NUMBER(81);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ItemMap_updateAuraItemEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:updateAuraItemEff", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status) != (jint(2))) goto label_1;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xEnd)) goto label_1;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) != ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yEnd)) goto label_1;
	}
	{
	LINE_NUMBER(86);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(87);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_itemFocus;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_itemFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_itemFocus = (jref) (jobject(nullptr));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(92);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(93);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_f) != 0) goto label_8;
	}
	{
	LINE_NUMBER(94);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xEnd);
	}
label_8:;
	{
	LINE_NUMBER(97);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_vx) != 0) goto label_10;
	}
	{
	LINE_NUMBER(98);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yEnd);
	}
label_10:;
	{
	LINE_NUMBER(101);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x) == ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xEnd)) goto label_12;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_x) + ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_f));
	LINE_NUMBER(103);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_f) <= 0) goto label_15;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x) > ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xEnd)) goto label_16;
	}
label_15:;
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_f) >= 0) goto label_12;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x) >= ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xEnd)) goto label_12;
	}
label_16:;
	{
	LINE_NUMBER(104);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xEnd);
	}
label_12:;
	{
	LINE_NUMBER(108);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yEnd)) goto label_17;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_vx));
	LINE_NUMBER(110);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_vx) <= 0) goto label_20;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) > ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yEnd)) goto label_21;
	}
label_20:;
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_vx) >= 0) goto label_17;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) >= ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yEnd)) goto label_17;
	}
label_21:;
	{
	LINE_NUMBER(111);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yEnd);
	goto label_17;
	}
label_6:;
	{
	LINE_NUMBER(115);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status = (jbyte((((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status) - (jint(4)))));
	LINE_NUMBER(116);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status) >= (-12)) goto label_17;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_y) - (12));
	LINE_NUMBER(118);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status = (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)M_nro_ItemMap_isAuraItem_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_count = (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_count) + (jint(1)));
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_countAura = (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_countAura) + (jint(1)));
	LINE_NUMBER(125);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_countAura) < (40)) goto label_28;
	}
	{
	LINE_NUMBER(126);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_countAura = (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(129);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_count) < ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_iDot)) goto label_30;
	}
	{
	LINE_NUMBER(130);
	((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_count = (jint(0));
	}
label_30:;
	{
	LINE_NUMBER(133);
	if ((((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_count) % (10)) != 0) goto label_4;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_lowGraphic;
	if ((--sp)->i != 0) goto label_4;
	{
	LINE_NUMBER(134);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (114), (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x) - (jint(5))), (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) - (30)), (jint(1)));
	}
label_4:;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ItemMap_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:paint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)M_nro_ItemMap_isAuraItem_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = frame[1].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_bong;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x) + (jint(3))), ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y), (jint(3)));
	LINE_NUMBER(144);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status) > 0) goto label_4;
	}
	{
	LINE_NUMBER(145);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_countAura) >= (10)) goto label_6;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = frame[1].o;
	clinit_nro_ItemMap(ctx);
	sp[1].o = (jobject)SF_nro_ItemMap_imageAuraItem1;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x), ((((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status)) + (jint(3))), (33));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[1].o;
	clinit_nro_ItemMap(ctx);
	sp[1].o = (jobject)SF_nro_ItemMap_imageAuraItem2;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x), ((((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status)) + (jint(3))), (33));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(150);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_countAura) >= (10)) goto label_9;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = frame[1].o;
	clinit_nro_ItemMap(ctx);
	sp[1].o = (jobject)SF_nro_ItemMap_imageAuraItem1;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) + (jint(3))), (33));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[1].o;
	clinit_nro_ItemMap(ctx);
	sp[1].o = (jobject)SF_nro_ItemMap_imageAuraItem2;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) + (jint(3))), (33));
	}
label_8:;
	{
	LINE_NUMBER(156);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(157);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(158);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_13;
	}
	{
	jint temp0 = (jint)M_nro_ItemMap_isAuraItem_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(159);
	frame[4].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[3].o)))->F_yArg;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_13;
	}
	{
	LINE_NUMBER(160);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[3].o)))->F_count) != (frame[4].i)) goto label_17;
	}
	{
	LINE_NUMBER(161);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[3].o)))->F_countAura) > (20)) goto label_19;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = frame[2].o;
	clinit_nro_ItemMap(ctx);
	sp[1].o = (jobject)SF_nro_ItemMap_imageAuraItem3;
	sp[2].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[3].o)))->F_xDot;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[4].i));
	sp[2].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[3].o)))->F_yDot;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[4].i))) + (jint(3))), (33));
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[3].o)))->F_template;
	jint temp0 = (jint)((nro_ItemTemplate *) NULL_CHECK(sp[1].o))->F_iconID;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[3].o)))->F_xDot;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[3].o)))->F_yDot;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, (((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[4].i))) + (jint(3))), (jint(0)), (33));
	}
label_17:;
	{
	LINE_NUMBER(159);
	INST_IINC(4, 1);
	goto label_15;
	}
label_13:;
	LINE_NUMBER(170);
	goto label_21;
label_1:;
	{
	LINE_NUMBER(171);
	jint temp0 = (jint)M_nro_ItemMap_isAuraItem_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_21;
	}
	{
	LINE_NUMBER(172);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(4))) != 0) goto label_23;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = frame[1].o;
	clinit_nro_ItemMap(ctx);
	sp[1].o = (jobject)SF_nro_ItemMap_imageFlare;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x), ((((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status)) + (13)), (33));
	}
label_23:;
	{
	LINE_NUMBER(176);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status) > 0) goto label_25;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[1].o))->F_iconID), ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x), ((((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status)) + (jint(3))), (jint(0)), (33));
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(179);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[1].o))->F_iconID), ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) + (jint(3))), (jint(0)), (33));
	}
label_27:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_itemFocus;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_itemFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_21;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_status) == (jint(2))) goto label_21;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (24), (9), (6), (jint(0)), ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y) - (17)), (jint(3)));
	}
label_21:;
	LINE_NUMBER(188);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_ItemMap_isAuraItem_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:isAuraItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) != (22)) goto label_1;
	}
	{
	LINE_NUMBER(193);
	frame[1].i = (jint(1));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(195);
	frame[1].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void M_nro_ItemMap_setDotPosition(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:setDotPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_1;
	}
	{
	LINE_NUMBER(203);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yArg;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yArg;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_rO;
	jint temp2 = (jint)SM_nro_Res_atan_int_R_int(ctx, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_angle));
	jint temp3 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((temp1 * temp2) / (1024)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp3;
	LINE_NUMBER(205);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xArg;
	jint temp4 = frame[1].i;
	jint temp5 = (jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_rO;
	jint temp6 = (jint)SM_nro_Res_cos_int_R_int(ctx, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_angle));
	jint temp7 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((temp5 * temp6) / (1024)));
	ARRAY_ACCESS(jint, sp[0].o, temp4) = temp7;
	LINE_NUMBER(206);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_angle) >= (90)) goto label_7;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xDot;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xO;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xArg;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yDot;
	jint temp2 = frame[1].i;
	jint temp3 = (jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yO;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yArg;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(209);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_angle) < (90)) goto label_11;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_angle) >= (180)) goto label_11;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xDot;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xO;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xArg;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))));
	LINE_NUMBER(211);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yDot;
	jint temp2 = frame[1].i;
	jint temp3 = (jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yO;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yArg;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(212);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_angle) < (180)) goto label_14;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_angle) >= (270)) goto label_14;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xDot;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xO;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xArg;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yDot;
	jint temp2 = frame[1].i;
	jint temp3 = (jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yO;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yArg;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))));
	goto label_10;
	}
label_14:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xDot;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xO;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_xArg;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))));
	LINE_NUMBER(217);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yDot;
	jint temp2 = frame[1].i;
	jint temp3 = (jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yO;
	sp[1].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_yArg;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))));
	}
label_10:;
	{
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_angle = (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_angle) + ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_iAngle));
	LINE_NUMBER(203);
	INST_IINC(1, 1);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_nro_ItemMap_getX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jint M_nro_ItemMap_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_nro_ItemMap_getH_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:getH", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return (20);
	}

	popStackFrame(ctx);
}

jint M_nro_ItemMap_getW_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:getW", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return (20);
	}

	popStackFrame(ctx);
}

void M_nro_ItemMap_stopMoving(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:stopMoving", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(243);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_ItemMap_isInvisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:isInvisible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_nro_ItemMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemMap:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemMap(ctx);
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dflare.png"_j))));
	clinit_nro_ItemMap(ctx);
	SF_nro_ItemMap_imageFlare = sp[0].o;
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2ditemaura1.png"_j))));
	clinit_nro_ItemMap(ctx);
	SF_nro_ItemMap_imageAuraItem1 = sp[0].o;
	LINE_NUMBER(37);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2ditemaura2.png"_j))));
	clinit_nro_ItemMap(ctx);
	SF_nro_ItemMap_imageAuraItem2 = sp[0].o;
	LINE_NUMBER(38);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2ditemaura3.png"_j))));
	clinit_nro_ItemMap(ctx);
	SF_nro_ItemMap_imageAuraItem3 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ItemMap[] {
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
	(void *) M_nro_ItemMap_getX_R_int,
	(void *) M_nro_ItemMap_getY_R_int,
	(void *) M_nro_ItemMap_getW_R_int,
	(void *) M_nro_ItemMap_getH_R_int,
	(void *) M_nro_ItemMap_stopMoving,
	(void *) M_nro_ItemMap_isInvisible_R_boolean,
	(void *) M_nro_ItemMap_SetNum_int_int,
	(void *) M_nro_ItemMap_updateAuraItemEff,
	(void *) M_nro_ItemMap_paint_lib_mGraphics,
	(void *) M_nro_ItemMap_isAuraItem_R_boolean,
	(void *) M_nro_ItemMap_setDotPosition,
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
	{ "getX", "()I" },
	{ "getY", "()I" },
	{ "getW", "()I" },
	{ "getH", "()I" },
	{ "stopMoving", "()V" },
	{ "isInvisible", "()Z" },
	{ "SetNum", "(II)V" },
	{ "updateAuraItemEff", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "isAuraItem", "()Z" },
	{ "setDotPosition", "()V" },
};

static jclass interfaces[] { &class_nro_IMapObject, };

static FieldMetadata fields[] {
	{ "x", &class_int, offsetof(nro_ItemMap, F_x), "I", 1 },
	{ "y", &class_int, offsetof(nro_ItemMap, F_y), "I", 1 },
	{ "xEnd", &class_int, offsetof(nro_ItemMap, F_xEnd), "I", 2 },
	{ "yEnd", &class_int, offsetof(nro_ItemMap, F_yEnd), "I", 2 },
	{ "f", &class_int, offsetof(nro_ItemMap, F_f), "I", 2 },
	{ "vx", &class_int, offsetof(nro_ItemMap, F_vx), "I", 2 },
	{ "playerId", &class_int, offsetof(nro_ItemMap, F_playerId), "I", 1 },
	{ "itemMapID", &class_int, offsetof(nro_ItemMap, F_itemMapID), "I", 1 },
	{ "template", &class_nro_ItemTemplate, offsetof(nro_ItemMap, F_template), "Lnro/ItemTemplate;", 1 },
	{ "isPlayerMobDrop", &class_boolean, offsetof(nro_ItemMap, F_isPlayerMobDrop), "Z", 1 },
	{ "isBossDrop", &class_boolean, offsetof(nro_ItemMap, F_isBossDrop), "Z", 1 },
	{ "countAutoPick", &class_int, offsetof(nro_ItemMap, F_countAutoPick), "I", 1 },
	{ "status", &class_byte, offsetof(nro_ItemMap, F_status), "B", 2 },
	{ "rO", &class_int, offsetof(nro_ItemMap, F_rO), "I", 2 },
	{ "xO", &class_int, offsetof(nro_ItemMap, F_xO), "I", 2 },
	{ "yO", &class_int, offsetof(nro_ItemMap, F_yO), "I", 2 },
	{ "angle", &class_int, offsetof(nro_ItemMap, F_angle), "I", 2 },
	{ "iAngle", &class_int, offsetof(nro_ItemMap, F_iAngle), "I", 2 },
	{ "iDot", &class_int, offsetof(nro_ItemMap, F_iDot), "I", 2 },
	{ "xArg", getArrayClass(&class_int, 1), offsetof(nro_ItemMap, F_xArg), "[I", 2 },
	{ "yArg", getArrayClass(&class_int, 1), offsetof(nro_ItemMap, F_yArg), "[I", 2 },
	{ "xDot", getArrayClass(&class_int, 1), offsetof(nro_ItemMap, F_xDot), "[I", 2 },
	{ "yDot", getArrayClass(&class_int, 1), offsetof(nro_ItemMap, F_yDot), "[I", 2 },
	{ "count", &class_int, offsetof(nro_ItemMap, F_count), "I", 2 },
	{ "countAura", &class_int, offsetof(nro_ItemMap, F_countAura), "I", 2 },
	{ "imageFlare", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_ItemMap_imageFlare, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "imageAuraItem1", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_ItemMap_imageAuraItem1, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imageAuraItem2", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_ItemMap_imageAuraItem2, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imageAuraItem3", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_ItemMap_imageAuraItem3, "Ljavax/microedition/lcdui/Image;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ItemMap_short_short_int_int_int_int, 0, "(SSIIII)V", 1 },
	{ "<init>", (intptr_t) init_nro_ItemMap_int_short_short_int_int_short, 0, "(ISSIIS)V", 1 },
	{ "SetNum", (intptr_t) M_nro_ItemMap_SetNum_int_int, VTABLE_nro_ItemMap_SetNum_int_int, "(II)V", 17 },
	{ "updateAuraItemEff", (intptr_t) M_nro_ItemMap_updateAuraItemEff, VTABLE_nro_ItemMap_updateAuraItemEff, "()V", 17 },
	{ "paint", (intptr_t) M_nro_ItemMap_paint_lib_mGraphics, VTABLE_nro_ItemMap_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "isAuraItem", (intptr_t) M_nro_ItemMap_isAuraItem_R_boolean, VTABLE_nro_ItemMap_isAuraItem_R_boolean, "()Z", 2 },
	{ "setDotPosition", (intptr_t) M_nro_ItemMap_setDotPosition, VTABLE_nro_ItemMap_setDotPosition, "()V", 2 },
	{ "getX", (intptr_t) M_nro_ItemMap_getX_R_int, VTABLE_nro_ItemMap_getX_R_int, "()I", 17 },
	{ "getY", (intptr_t) M_nro_ItemMap_getY_R_int, VTABLE_nro_ItemMap_getY_R_int, "()I", 17 },
	{ "getH", (intptr_t) M_nro_ItemMap_getH_R_int, VTABLE_nro_ItemMap_getH_R_int, "()I", 17 },
	{ "getW", (intptr_t) M_nro_ItemMap_getW_R_int, VTABLE_nro_ItemMap_getW_R_int, "()I", 17 },
	{ "stopMoving", (intptr_t) M_nro_ItemMap_stopMoving, VTABLE_nro_ItemMap_stopMoving, "()V", 17 },
	{ "isInvisible", (intptr_t) M_nro_ItemMap_isInvisible_R_boolean, VTABLE_nro_ItemMap_isInvisible_R_boolean, "()Z", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_ItemMap, 0, "()V", 8 },
};

Class class_nro_ItemMap{
		.nativeName = (intptr_t) "nro/ItemMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ItemMap),
		.classVtable = (intptr_t) vtable_nro_ItemMap,
		.staticInitializer = (intptr_t) clinit_nro_ItemMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ItemMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 29,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ItemMap = registerClass(&class_nro_ItemMap);

}

