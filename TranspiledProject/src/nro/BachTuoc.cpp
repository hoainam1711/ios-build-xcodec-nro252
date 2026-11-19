#include "nro/BachTuoc.h"
#include "nro/GameScr.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/EffectData.h"
#include "nro/Service.h"
#include "nro/SmallImage.h"
#include "nro/ChatPopup.h"
#include "nro/BachTuoc.h"
#include "nro/ServerEffect.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "nro/Res.h"
#include "nro/IMapObject.h"
#include "nro/Char.h"
#include "lib/mSystem.h"
#include "nro/TileMap.h"

extern "C" {

jobject SF_nro_BachTuoc_shadowBig;
jobject SF_nro_BachTuoc_data;

void mark_nro_BachTuoc(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_BachTuoc_shadowBig)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BachTuoc_shadowBig)->clazz)->markFunction)((jobject) SF_nro_BachTuoc_shadowBig, mark, depth + 1);
		if (SF_nro_BachTuoc_data)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BachTuoc_data)->clazz)->markFunction)((jobject) SF_nro_BachTuoc_data, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_Mob(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_BachTuoc *) object;
	if (self->F_charAttack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charAttack)->clazz)->markFunction)((jobject) self->F_charAttack, mark, depth + 1);
	if (self->F_dameHP)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dameHP)->clazz)->markFunction)((jobject) self->F_dameHP, mark, depth + 1);
	if (self->F_stand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stand)->clazz)->markFunction)((jobject) self->F_stand, mark, depth + 1);
	if (self->F_movee)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_movee)->clazz)->markFunction)((jobject) self->F_movee, mark, depth + 1);
	if (self->F_attack1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack1)->clazz)->markFunction)((jobject) self->F_attack1, mark, depth + 1);
	if (self->F_attack2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack2)->clazz)->markFunction)((jobject) self->F_attack2, mark, depth + 1);
}

void M_nro_BachTuoc_setBody_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:setBody", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(33);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(1));
	LINE_NUMBER(34);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody = (frame[1].i);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc_clearBody(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:clearBody", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(0));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_BachTuoc_int_short_short_int_long_long(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jlong param4, jlong param5) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:<init>", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BachTuoc(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].l = param4;
	frame[7].l = param5;
	{
	LINE_NUMBER(41);
	init_nro_Mob(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_isShadown = (jint(1));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_stand = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(4));
	((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_movee = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (6);
	((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (17));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (11);
	((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_attack2 = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (7);
	frame[9].o = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(2)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	frame[10].o = sp[0].o;
	LINE_NUMBER(44);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1 = (frame[1].i);
	LINE_NUMBER(45);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + (20));
	LINE_NUMBER(46);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].i);
	LINE_NUMBER(47);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_xTo = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(48);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_yTo = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(49);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp = (frame[7].l);
	LINE_NUMBER(50);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (frame[5].l);
	LINE_NUMBER(51);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId = (frame[4].i);
	LINE_NUMBER(52);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_len = (100);
	LINE_NUMBER(53);
	((func_nro_BachTuoc_updateHp_bar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BachTuoc_updateHp_bar])(ctx, (frame[0].o));
	LINE_NUMBER(54);
	clinit_nro_BachTuoc(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc_data;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(55);
	clinit_nro_BachTuoc(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(57);
	clinit_nro_EffectData(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectData);
	init_nro_EffectData(ctx, sp[0].o);
	clinit_nro_BachTuoc(ctx);
	SF_nro_BachTuoc_data = sp[0].o;
	LINE_NUMBER(58);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (108));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/data"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(61);
	clinit_nro_BachTuoc(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc_data;
	((func_nro_EffectData_readData2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_readData2_java_lang_String])(ctx, sp[0].o, (frame[11].o));
	LINE_NUMBER(62);
	clinit_nro_BachTuoc(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc_data;
	sp[1].o = (jobject)SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/effectdata/108/img.png"_j))));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(65);
	goto label_27;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(63);
	frame[12].o = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestModTemplate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestModTemplate_int])(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId));
	}
label_27:;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_nro_BachTuoc(ctx);
	sp[1].o = (jobject)SF_nro_BachTuoc_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_w = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(68);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w);
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_nro_BachTuoc(ctx);
	sp[1].o = (jobject)SF_nro_BachTuoc_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_h = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(70);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:checkFrameTick", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_tick = (((jint)((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_tick) + (jint(1)));
	LINE_NUMBER(75);
	if (((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_tick) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(76);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(79);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_frame = ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_tick)));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc_updateSuperEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:updateSuperEff", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_nro_BachTuoc_isUpdate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BachTuoc_isUpdate_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(87);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(88);
	frame[2].i = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size);
	LINE_NUMBER(89);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(90);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_wCount = (jint(0));
	LINE_NUMBER(91);
	if (((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_ySd) <= 0) goto label_7;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(2)));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(92);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[2].i)), (((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_ySd) / (frame[2].i)));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(93);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_isOutMap = (jint(1));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[2].i)), (((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_ySd) / (frame[2].i)));
	if (temp0 == 0) goto label_11;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(2)));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(95);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(96);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_ySd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(97);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_isOutMap = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(100);
	if (((jint)((nro_BachTuoc *) NULL_CHECK((frame[1].o)))->F_isOutMap) == 0) goto label_7;
	}
	{
	if (((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_wCount) >= (10)) goto label_7;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_wCount = (((jint)((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_wCount) + (jint(1)));
	LINE_NUMBER(102);
	sp[0].o = frame[1].o;
	((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_ySd = (((jint)((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_ySd) + (24));
	LINE_NUMBER(103);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_xSd), ((jint)((nro_BachTuoc *) NULL_CHECK((frame[1].o)))->F_ySd), (jint(2)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(104);
	if ((((jint)((nro_BachTuoc *) NULL_CHECK((frame[1].o)))->F_ySd) % (24)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = frame[1].o;
	((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_ySd = (((jint)((nro_BachTuoc *) NULL_CHECK(sp[0].o))->F_ySd) - (((jint)((nro_BachTuoc *) NULL_CHECK((frame[1].o)))->F_ySd) % (24)));
	goto label_7;
	}
label_7:;
	{
	LINE_NUMBER(112);
	switch(((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status)) {
		case 0: goto label_20;
		case 1: goto label_20;
		case 2: goto label_21;
		case 3: goto label_22;
		case 4: goto label_23;
		case 5: goto label_24;
		case 6: goto label_25;
		case 7: goto label_26;
		default: goto label_23;
	}
	}
label_20:;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_stand;
	((func_nro_BachTuoc_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(116);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_28;
	}
	{
	LINE_NUMBER(117);
	jint temp0 = 167;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - (20)), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (20)));
	jint temp2 = (jint)SM_nro_Res_random_int_int_R_int(ctx, ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (40)) + (20)), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (40)) + (40)));
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp1, temp2, (jint(1)));
	}
label_28:;
	{
	LINE_NUMBER(120);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_xTo)) goto label_30;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_yTo)) goto label_1;
	}
label_30:;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_xTo) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_yTo) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	goto label_1;
	}
label_21:;
	{
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_stand;
	((func_nro_BachTuoc_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(127);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_xTo)) goto label_33;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_yTo)) goto label_34;
	}
label_33:;
	{
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_xTo) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_yTo) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	}
label_34:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
	{
	LINE_NUMBER(134);
	((func_nro_BachTuoc_updateMobAttack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BachTuoc_updateMobAttack])(ctx, (frame[0].o));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}
label_23:;
	LINE_NUMBER(138);
	goto label_1;
label_24:;
	{
	LINE_NUMBER(140);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(141);
	((func_nro_BachTuoc_updateMobWalk) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BachTuoc_updateMobWalk])(ctx, (frame[0].o));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}
label_25:;
	{
	LINE_NUMBER(144);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1) + (jint(1)));
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1));
	LINE_NUMBER(147);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) < ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst)) goto label_1;
	}
	{
	LINE_NUMBER(148);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst);
	LINE_NUMBER(149);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(150);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}
label_26:;
	LINE_NUMBER(155);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	LINE_NUMBER(159);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc_updateInjure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:updateInjure", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc_setAttack_nro_Char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:setAttack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (frame[1].o);
	LINE_NUMBER(166);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(167);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(168);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(169);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx) <= ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(-1);
label_7:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(171);
	frame[2].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx);
	LINE_NUMBER(172);
	frame[3].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cy);
	LINE_NUMBER(173);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v) << (jint(1)))) goto label_11;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) << (jint(1)))) goto label_11;
	}
	{
	LINE_NUMBER(174);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(175);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(177);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	}
label_15:;
	{
	LINE_NUMBER(180);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(182);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_16:;
	LINE_NUMBER(184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_BachTuoc_isSpecial_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:isSpecial", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) < (58)) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) <= (65)) goto label_2;
	}
label_1:;
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) == (67)) goto label_2;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) != (68)) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc_a_Array1_nro_Char_Array1_long_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:a", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(191);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack = (jref) (frame[1].o);
	LINE_NUMBER(192);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_dameHP = (jref) (frame[2].o);
	LINE_NUMBER(193);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_type = (frame[3].i);
	LINE_NUMBER(194);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc_updateMobAttack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:updateMobAttack", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	if (((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_type) != (jint(3))) goto label_1;
	}
	{
	LINE_NUMBER(200);
	jint temp0 = (jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_tick;
	sp[0].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_attack1;
	if (temp0 != ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_3;
	}
	{
	LINE_NUMBER(201);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_3:;
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp += 1;
	if (temp0 >= ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_cx)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(-1);
label_6:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_attack1;
	((func_nro_BachTuoc_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_cx) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_cy) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	LINE_NUMBER(208);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_xTo = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(209);
	if (((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_tick) != (8)) goto label_1;
	}
	{
	LINE_NUMBER(210);
	frame[1].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp[1].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_dameHP;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[1].i))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(212);
	jint temp0 = 102;
	sp[0].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cx;
	sp[0].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp1, ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cy), (jint(1)));
	LINE_NUMBER(210);
	INST_IINC(1, 1);
	goto label_13;
	}
label_1:;
	{
	LINE_NUMBER(217);
	if (((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_type) != (jint(4))) goto label_17;
	}
	{
	LINE_NUMBER(218);
	jint temp0 = (jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_tick;
	sp[0].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_attack2;
	if (temp0 != ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_19;
	}
	{
	LINE_NUMBER(219);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_19:;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp += 1;
	if (temp0 >= ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_cx)) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(-1);
label_22:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_attack2;
	((func_nro_BachTuoc_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(224);
	if (((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_tick) != (8)) goto label_17;
	}
	{
	LINE_NUMBER(225);
	frame[1].i = (jint(0));
	}
label_26:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_17;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp[1].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_dameHP;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[1].i))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(227);
	jint temp0 = 102;
	sp[0].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cx;
	sp[0].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_charAttack;
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp1, ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cy), (jint(1)));
	LINE_NUMBER(225);
	INST_IINC(1, 1);
	goto label_26;
	}
label_17:;
	LINE_NUMBER(232);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc_updateMobWalk(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:updateMobWalk", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_movee;
	((func_nro_BachTuoc_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_xTo)) goto label_2;
	}
	INST_ICONST(2);
	goto label_3;
label_2:;
	INST_BIPUSH(-2);
label_3:;
	{
	sp -= 3;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (sp[1].i + sp[2].i);
	LINE_NUMBER(237);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_yTo);
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_xTo)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(-1);
label_7:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(239);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_xTo)));
	if (temp0 > (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(240);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_xTo);
	LINE_NUMBER(241);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_9:;
	LINE_NUMBER(244);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_BachTuoc_isPaint_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:isPaint", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_1;
	}
	{
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(249);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) <= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW))) goto label_3;
	}
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(251);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_5;
	}
	{
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(253);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH)) + (30))) goto label_7;
	}
	{
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(256);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_BachTuoc_isUpdate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:isUpdate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_BachTuoc_checkIsBoss_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:checkIsBoss", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBoss) != 0) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_level) <= 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:paint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(269);
	clinit_nro_BachTuoc(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc_data;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(270);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isHide) != 0) goto label_1;
	}
	{
	LINE_NUMBER(271);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isMafuba) == 0) goto label_4;
	}
	{
	LINE_NUMBER(272);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_6;
	}
	{
	LINE_NUMBER(273);
	clinit_nro_BachTuoc(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xMFB;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yMFB;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_8;
	}
	INST_ICONST(0);
	goto label_9;
label_8:;
	INST_ICONST(1);
label_9:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_1;
	}
label_6:;
	{
	LINE_NUMBER(275);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xMFB;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yMFB;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_10;
	}
	INST_ICONST(0);
	goto label_11;
label_10:;
	INST_ICONST(2);
label_11:;
	{
	sp -= 5;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, (33));
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(278);
	if (((jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_isShadown) == 0) goto label_12;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_12;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = frame[1].o;
	clinit_nro_BachTuoc(ctx);
	sp[1].o = (jobject)SF_nro_BachTuoc_shadowBig;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst), (jint(3)));
	LINE_NUMBER(280);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) + ((jint(2)) * (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY))));
	}
label_12:;
	{
	LINE_NUMBER(283);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY));
	LINE_NUMBER(284);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_16;
	}
	{
	LINE_NUMBER(285);
	clinit_nro_BachTuoc(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_18;
	}
	INST_ICONST(0);
	goto label_19;
label_18:;
	INST_ICONST(1);
label_19:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_20;
	}
label_16:;
	{
	LINE_NUMBER(287);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (9);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_21;
	}
	INST_ICONST(0);
	goto label_22;
label_21:;
	INST_ICONST(2);
label_22:;
	INST_BIPUSH(33);
	POP_N(6); // Pop method args
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i);
label_20:;
	{
	LINE_NUMBER(290);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (-(clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)));
	LINE_NUMBER(291);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_imgHPtem;
	jint temp0 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(293);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == (jint(1))) goto label_1;
	}
	{
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur), (jlong(0)))) <= 0) goto label_1;
	}
	clinit_nro_Mob(ctx);
	(sp++)->o = SF_nro_Mob_imgHP;
	if ((--sp)->o == nullptr) goto label_1;
	{
	LINE_NUMBER(294);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(295);
	frame[3].i = (jint(((((((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur) * (jlong(100ll))) / ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp)) / (jlong(10ll))) - (jlong(1)))));
	LINE_NUMBER(296);
	if ((frame[3].i) >= 0) goto label_28;
	}
	INST_ICONST(0);
	INST_ISTORE(3);
label_28:;
	{
	LINE_NUMBER(297);
	if ((frame[3].i) <= (9)) goto label_29;
	}
	INST_BIPUSH(9);
	INST_ISTORE(3);
label_29:;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((6) * ((9) - (frame[3].i))), (9), (6), (jint(0)), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h)) - (10)), ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_BOTTOM) | (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_HCENTER)));
	}
label_1:;
	LINE_NUMBER(326);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc_startDie(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:startDie", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (jlong(0));
	LINE_NUMBER(330);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(1));
	LINE_NUMBER(331);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (-3);
	LINE_NUMBER(332);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (-((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir));
	LINE_NUMBER(333);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc_attackOtherMob_nro_Mob(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:attackOtherMob", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(337);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(338);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(339);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(340);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(341);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_x) <= ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(-1);
label_7:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(343);
	frame[2].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(344);
	frame[3].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(345);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v) << (jint(1)))) goto label_11;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) << (jint(1)))) goto label_11;
	}
	{
	LINE_NUMBER(346);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(347);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(349);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	}
label_15:;
	{
	LINE_NUMBER(352);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(354);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_16:;
	LINE_NUMBER(356);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_nro_BachTuoc_getX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jint M_nro_BachTuoc_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:getY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (40));
	}

	popStackFrame(ctx);
}

jint M_nro_BachTuoc_getH_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:getH", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (40);
	}

	popStackFrame(ctx);
}

jint M_nro_BachTuoc_getW_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:getW", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (40);
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc_stopMoving(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:stopMoving", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) != (jint(5))) goto label_1;
	}
	{
	LINE_NUMBER(376);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Mob *) NULL_CHECK(sp[2].o))->F_p3 = temp0;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_p2 = temp0;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = temp0;
	}
label_1:;
	LINE_NUMBER(380);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_BachTuoc_isInvisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:isInvisible", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) != (jint(1))) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc_removeHoldEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:removeHoldEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_1;
	}
	{
	LINE_NUMBER(388);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID = (jint(0));
	}
label_1:;
	LINE_NUMBER(391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc_removeBlindEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:removeBlindEff", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(394);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc_removeSleepEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:removeSleepEff", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(397);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc_move_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:move", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(400);
	((nro_BachTuoc *) NULL_CHECK((frame[0].o)))->F_xTo = (frame[1].i);
	LINE_NUMBER(401);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_BachTuoc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Mob(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BachTuoc(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/shadowBig.png"_j))));
	clinit_nro_BachTuoc(ctx);
	SF_nro_BachTuoc_shadowBig = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dmobHP.png"_j))));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_BachTuoc[] {
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
	(void *) M_nro_BachTuoc_getX_R_int,
	(void *) M_nro_BachTuoc_getY_R_int,
	(void *) M_nro_BachTuoc_getW_R_int,
	(void *) M_nro_BachTuoc_getH_R_int,
	(void *) M_nro_BachTuoc_stopMoving,
	(void *) M_nro_BachTuoc_isInvisible_R_boolean,
	(void *) M_nro_Mob_isBigBoss_R_boolean,
	(void *) M_nro_Mob_getData,
	(void *) M_nro_BachTuoc_setBody_short,
	(void *) M_nro_BachTuoc_clearBody,
	(void *) M_nro_BachTuoc_checkFrameTick_Array1_int,
	(void *) M_nro_BachTuoc_updateSuperEff,
	(void *) M_nro_BachTuoc_update,
	(void *) M_nro_BachTuoc_updateInjure,
	(void *) M_nro_BachTuoc_setAttack_nro_Char,
	(void *) M_nro_BachTuoc_isSpecial_R_boolean,
	(void *) M_nro_Mob_isNewModStand_R_boolean,
	(void *) M_nro_Mob_isNewMod_R_boolean,
	(void *) M_nro_BachTuoc_updateMobAttack,
	(void *) M_nro_BachTuoc_updateMobWalk,
	(void *) M_nro_Mob_getTemplate_R_nro_MobTemplate,
	(void *) M_nro_BachTuoc_isPaint_R_boolean,
	(void *) M_nro_BachTuoc_isUpdate_R_boolean,
	(void *) M_nro_BachTuoc_checkIsBoss_R_boolean,
	(void *) M_nro_Mob_updateHp_bar,
	(void *) M_nro_Mob_paintShadow_lib_mGraphics,
	(void *) M_nro_BachTuoc_paint_lib_mGraphics,
	(void *) M_nro_BachTuoc_startDie,
	(void *) M_nro_BachTuoc_attackOtherMob_nro_Mob,
	(void *) M_nro_BachTuoc_removeHoldEff,
	(void *) M_nro_BachTuoc_removeBlindEff,
	(void *) M_nro_BachTuoc_removeSleepEff,
	(void *) M_nro_Mob_GetFrame,
	(void *) M_nro_Mob_isTypeNewMod_R_boolean,
	(void *) M_nro_BachTuoc_a_Array1_nro_Char_Array1_long_byte,
	(void *) M_nro_BachTuoc_move_short,
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
	{ "isBigBoss", "()Z" },
	{ "getData", "()V" },
	{ "setBody", "(S)V" },
	{ "clearBody", "()V" },
	{ "checkFrameTick", "([I)V" },
	{ "updateSuperEff", "()V" },
	{ "update", "()V" },
	{ "updateInjure", "()V" },
	{ "setAttack", "(Lnro/Char;)V" },
	{ "isSpecial", "()Z" },
	{ "isNewModStand", "()Z" },
	{ "isNewMod", "()Z" },
	{ "updateMobAttack", "()V" },
	{ "updateMobWalk", "()V" },
	{ "getTemplate", "()Lnro/MobTemplate;" },
	{ "isPaint", "()Z" },
	{ "isUpdate", "()Z" },
	{ "checkIsBoss", "()Z" },
	{ "updateHp_bar", "()V" },
	{ "paintShadow", "(Llib/mGraphics;)V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "startDie", "()V" },
	{ "attackOtherMob", "(Lnro/Mob;)V" },
	{ "removeHoldEff", "()V" },
	{ "removeBlindEff", "()V" },
	{ "removeSleepEff", "()V" },
	{ "GetFrame", "()V" },
	{ "isTypeNewMod", "()Z" },
	{ "a", "([Lnro/Char;[JB)V" },
	{ "move", "(S)V" },
};

static jclass interfaces[] { &class_nro_IMapObject, };

static FieldMetadata fields[] {
	{ "shadowBig", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BachTuoc_shadowBig, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "data", &class_nro_EffectData, (intptr_t) &SF_nro_BachTuoc_data, "Lnro/EffectData;", 10 },
	{ "xTo", &class_int, offsetof(nro_BachTuoc, F_xTo), "I", 1 },
	{ "yTo", &class_int, offsetof(nro_BachTuoc, F_yTo), "I", 1 },
	{ "wCount", &class_int, offsetof(nro_BachTuoc, F_wCount), "I", 2 },
	{ "ySd", &class_int, offsetof(nro_BachTuoc, F_ySd), "I", 2 },
	{ "isOutMap", &class_boolean, offsetof(nro_BachTuoc, F_isOutMap), "Z", 2 },
	{ "isShadown", &class_boolean, offsetof(nro_BachTuoc, F_isShadown), "Z", 2 },
	{ "tick", &class_int, offsetof(nro_BachTuoc, F_tick), "I", 2 },
	{ "frame", &class_int, offsetof(nro_BachTuoc, F_frame), "I", 2 },
	{ "charAttack", getArrayClass(&class_nro_Char, 1), offsetof(nro_BachTuoc, F_charAttack), "[Lnro/Char;", 2 },
	{ "dameHP", getArrayClass(&class_long, 1), offsetof(nro_BachTuoc, F_dameHP), "[J", 2 },
	{ "type", &class_byte, offsetof(nro_BachTuoc, F_type), "B", 2 },
	{ "stand", getArrayClass(&class_int, 1), offsetof(nro_BachTuoc, F_stand), "[I", 2 },
	{ "movee", getArrayClass(&class_int, 1), offsetof(nro_BachTuoc, F_movee), "[I", 2 },
	{ "attack1", getArrayClass(&class_int, 1), offsetof(nro_BachTuoc, F_attack1), "[I", 2 },
	{ "attack2", getArrayClass(&class_int, 1), offsetof(nro_BachTuoc, F_attack2), "[I", 2 },
};

static MethodMetadata methods[] {
	{ "setBody", (intptr_t) M_nro_BachTuoc_setBody_short, VTABLE_nro_BachTuoc_setBody_short, "(S)V", 17 },
	{ "clearBody", (intptr_t) M_nro_BachTuoc_clearBody, VTABLE_nro_BachTuoc_clearBody, "()V", 17 },
	{ "<init>", (intptr_t) init_nro_BachTuoc_int_short_short_int_long_long, 0, "(ISSIJJ)V", 1 },
	{ "checkFrameTick", (intptr_t) M_nro_BachTuoc_checkFrameTick_Array1_int, VTABLE_nro_BachTuoc_checkFrameTick_Array1_int, "([I)V", 17 },
	{ "updateSuperEff", (intptr_t) M_nro_BachTuoc_updateSuperEff, VTABLE_nro_BachTuoc_updateSuperEff, "()V", 17 },
	{ "update", (intptr_t) M_nro_BachTuoc_update, VTABLE_nro_BachTuoc_update, "()V", 17 },
	{ "updateInjure", (intptr_t) M_nro_BachTuoc_updateInjure, VTABLE_nro_BachTuoc_updateInjure, "()V", 17 },
	{ "setAttack", (intptr_t) M_nro_BachTuoc_setAttack_nro_Char, VTABLE_nro_BachTuoc_setAttack_nro_Char, "(Lnro/Char;)V", 17 },
	{ "isSpecial", (intptr_t) M_nro_BachTuoc_isSpecial_R_boolean, VTABLE_nro_BachTuoc_isSpecial_R_boolean, "()Z", 16 },
	{ "a", (intptr_t) M_nro_BachTuoc_a_Array1_nro_Char_Array1_long_byte, VTABLE_nro_BachTuoc_a_Array1_nro_Char_Array1_long_byte, "([Lnro/Char;[JB)V", 17 },
	{ "updateMobAttack", (intptr_t) M_nro_BachTuoc_updateMobAttack, VTABLE_nro_BachTuoc_updateMobAttack, "()V", 17 },
	{ "updateMobWalk", (intptr_t) M_nro_BachTuoc_updateMobWalk, VTABLE_nro_BachTuoc_updateMobWalk, "()V", 17 },
	{ "isPaint", (intptr_t) M_nro_BachTuoc_isPaint_R_boolean, VTABLE_nro_BachTuoc_isPaint_R_boolean, "()Z", 17 },
	{ "isUpdate", (intptr_t) M_nro_BachTuoc_isUpdate_R_boolean, VTABLE_nro_BachTuoc_isUpdate_R_boolean, "()Z", 17 },
	{ "checkIsBoss", (intptr_t) M_nro_BachTuoc_checkIsBoss_R_boolean, VTABLE_nro_BachTuoc_checkIsBoss_R_boolean, "()Z", 17 },
	{ "paint", (intptr_t) M_nro_BachTuoc_paint_lib_mGraphics, VTABLE_nro_BachTuoc_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "startDie", (intptr_t) M_nro_BachTuoc_startDie, VTABLE_nro_BachTuoc_startDie, "()V", 17 },
	{ "attackOtherMob", (intptr_t) M_nro_BachTuoc_attackOtherMob_nro_Mob, VTABLE_nro_BachTuoc_attackOtherMob_nro_Mob, "(Lnro/Mob;)V", 17 },
	{ "getX", (intptr_t) M_nro_BachTuoc_getX_R_int, VTABLE_nro_BachTuoc_getX_R_int, "()I", 17 },
	{ "getY", (intptr_t) M_nro_BachTuoc_getY_R_int, VTABLE_nro_BachTuoc_getY_R_int, "()I", 17 },
	{ "getH", (intptr_t) M_nro_BachTuoc_getH_R_int, VTABLE_nro_BachTuoc_getH_R_int, "()I", 17 },
	{ "getW", (intptr_t) M_nro_BachTuoc_getW_R_int, VTABLE_nro_BachTuoc_getW_R_int, "()I", 17 },
	{ "stopMoving", (intptr_t) M_nro_BachTuoc_stopMoving, VTABLE_nro_BachTuoc_stopMoving, "()V", 17 },
	{ "isInvisible", (intptr_t) M_nro_BachTuoc_isInvisible_R_boolean, VTABLE_nro_BachTuoc_isInvisible_R_boolean, "()Z", 17 },
	{ "removeHoldEff", (intptr_t) M_nro_BachTuoc_removeHoldEff, VTABLE_nro_BachTuoc_removeHoldEff, "()V", 17 },
	{ "removeBlindEff", (intptr_t) M_nro_BachTuoc_removeBlindEff, VTABLE_nro_BachTuoc_removeBlindEff, "()V", 17 },
	{ "removeSleepEff", (intptr_t) M_nro_BachTuoc_removeSleepEff, VTABLE_nro_BachTuoc_removeSleepEff, "()V", 17 },
	{ "move", (intptr_t) M_nro_BachTuoc_move_short, VTABLE_nro_BachTuoc_move_short, "(S)V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_BachTuoc, 0, "()V", 8 },
};

Class class_nro_BachTuoc{
		.nativeName = (intptr_t) "nro/BachTuoc",
		.parentClass = (intptr_t) &class_nro_Mob,
		.size = sizeof(nro_BachTuoc),
		.classVtable = (intptr_t) vtable_nro_BachTuoc,
		.staticInitializer = (intptr_t) clinit_nro_BachTuoc,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_BachTuoc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_BachTuoc = registerClass(&class_nro_BachTuoc);

}

