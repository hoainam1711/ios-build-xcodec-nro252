#include "nro/BigBoss2.h"
#include "nro/GameScr.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "nro/BigBoss2.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "main/GameCanvas.h"
#include "nro/EffectData.h"
#include "nro/Service.h"
#include "nro/MonsterDart.h"
#include "nro/SmallImage.h"
#include "nro/ChatPopup.h"
#include "nro/ServerEffect.h"
#include "nro/Effect.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "nro/Res.h"
#include "nro/IMapObject.h"
#include "nro/Char.h"
#include "lib/mSystem.h"
#include "com/badlogic/gdx/graphics/Texture.h"
#include "nro/TileMap.h"

extern "C" {

jobject SF_nro_BigBoss2_shadowBig;
jobject SF_nro_BigBoss2_data;

void mark_nro_BigBoss2(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_BigBoss2_shadowBig)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BigBoss2_shadowBig)->clazz)->markFunction)((jobject) SF_nro_BigBoss2_shadowBig, mark, depth + 1);
		if (SF_nro_BigBoss2_data)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BigBoss2_data)->clazz)->markFunction)((jobject) SF_nro_BigBoss2_data, mark, depth + 1);
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
	auto self = (nro_BigBoss2 *) object;
	if (self->F_charAttack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charAttack)->clazz)->markFunction)((jobject) self->F_charAttack, mark, depth + 1);
	if (self->F_dameHP)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dameHP)->clazz)->markFunction)((jobject) self->F_dameHP, mark, depth + 1);
	if (self->F_stand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stand)->clazz)->markFunction)((jobject) self->F_stand, mark, depth + 1);
	if (self->F_attack1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack1)->clazz)->markFunction)((jobject) self->F_attack1, mark, depth + 1);
	if (self->F_attack2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack2)->clazz)->markFunction)((jobject) self->F_attack2, mark, depth + 1);
	if (self->F_fly)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fly)->clazz)->markFunction)((jobject) self->F_fly, mark, depth + 1);
	if (self->F_hitground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hitground)->clazz)->markFunction)((jobject) self->F_hitground, mark, depth + 1);
}

void clinit_nro_BigBoss2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Mob(ctx);
}

void init_nro_BigBoss2_int_short_short_int_long_long_int(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jlong param4, jlong param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BigBoss2(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].l = param4;
	frame[7].l = param5;
	frame[9].i = param6;
	{
	LINE_NUMBER(37);
	init_nro_Mob(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_isShadown = (jint(1));
	LINE_NUMBER(25);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_isBusyAttackSomeOne = (jint(1));
	LINE_NUMBER(30);
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
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_stand = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
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
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (12);
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_attack2 = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (21));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (jint(1));
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_fly = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_hitground = (jref) sp[1].o;
	LINE_NUMBER(38);
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_shadowBig;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/shadowBig.png"_j))));
	clinit_nro_BigBoss2(ctx);
	SF_nro_BigBoss2_shadowBig = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(41);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1 = (frame[1].i);
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (frame[2].i) + (20);
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_x = temp0;
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_xTo = temp0;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp3 = frame[3].i;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_y = temp3;
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_yTo = temp3;
	LINE_NUMBER(44);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst = (frame[3].i);
	LINE_NUMBER(45);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (frame[5].l);
	LINE_NUMBER(46);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp = (frame[7].l);
	LINE_NUMBER(47);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId = (frame[4].i);
	LINE_NUMBER(48);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w_hp_bar = (100);
	LINE_NUMBER(49);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_len = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w_hp_bar);
	LINE_NUMBER(50);
	((func_nro_BigBoss2_updateHp_bar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_updateHp_bar])(ctx, (frame[0].o));
	LINE_NUMBER(51);
	((func_nro_BigBoss2_getDataB) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_getDataB])(ctx, (frame[0].o));
	LINE_NUMBER(52);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_BigBoss2_int_short_short_int_long_long(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jlong param4, jlong param5) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:<init>", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BigBoss2(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].l = param4;
	frame[7].l = param5;
	{
	LINE_NUMBER(56);
	init_nro_BigBoss2_int_short_short_int_long_long_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].l), (frame[7].l), (jint(3)));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_getDataB(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:getDataB", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(61);
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(63);
	clinit_nro_EffectData(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectData);
	init_nro_EffectData(ctx, sp[0].o);
	clinit_nro_BigBoss2(ctx);
	SF_nro_BigBoss2_data = sp[0].o;
	LINE_NUMBER(64);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/109/data"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(66);
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	((func_nro_EffectData_readData2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_readData2_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(67);
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	sp[1].o = (jobject)SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/effectdata/109/img.png"_j))));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	LINE_NUMBER(68);
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_1;
	}
label_10:;
	{
	LINE_NUMBER(69);
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/effectdata/109/img.png"_j))));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(73);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(71);
	frame[2].o = sp[0].o;
	LINE_NUMBER(72);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestModTemplate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestModTemplate_int])(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId));
	}
label_11:;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_nro_BigBoss2(ctx);
	sp[1].o = (jobject)SF_nro_BigBoss2_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_w = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(75);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w);
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_nro_BigBoss2(ctx);
	sp[1].o = (jobject)SF_nro_BigBoss2_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_h = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_setBody_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:setBody", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(80);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(1));
	LINE_NUMBER(81);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody = (frame[1].i);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_clearBody(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:clearBody", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(0));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:checkFrameTick", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_tick = (((jint)((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_tick) + (jint(1)));
	LINE_NUMBER(90);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(91);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(93);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_frame = ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick)));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_updateShadown(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:updateShadown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	frame[1].i = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size);
	LINE_NUMBER(98);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xSd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(99);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_wCount = (jint(0));
	LINE_NUMBER(100);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_ySd) <= 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(2)));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	LINE_NUMBER(101);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(103);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[1].i)), (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_ySd) / (frame[1].i)));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(104);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_isOutMap = (jint(1));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(105);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[1].i)), (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_ySd) / (frame[1].i)));
	if (temp0 == 0) goto label_8;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(2)));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(106);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xSd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(107);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_ySd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(108);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_isOutMap = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(110);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_isOutMap) == 0) goto label_12;
	}
	{
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_wCount) >= (10)) goto label_12;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_wCount = (((jint)((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_wCount) + (jint(1)));
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_ySd = (((jint)((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_ySd) + (24));
	LINE_NUMBER(113);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(2)));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(114);
	if ((((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_ySd) % (24)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_ySd = (((jint)((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_ySd) - (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_ySd) % (24)));
	goto label_12;
	}
label_12:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss2_paintShadow_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:paintShadow", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = frame[1].o;
	clinit_nro_BigBoss2(ctx);
	sp[1].o = (jobject)SF_nro_BigBoss2_shadowBig;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst), (jint(3)));
	LINE_NUMBER(124);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) + ((jint(2)) * (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY))));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)((func_nro_BigBoss2_isUpdate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_isUpdate_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(131);
	M_nro_BigBoss2_updateShadown(ctx, (frame[0].o));
	LINE_NUMBER(132);
	switch(((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status)) {
		case 0: goto label_4;
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_6;
		case 4: goto label_7;
		case 5: goto label_8;
		case 6: goto label_9;
		case 7: goto label_10;
		default: goto label_11;
	}
	}
label_5:;
	{
	LINE_NUMBER(134);
	M_nro_BigBoss2_updateMobStandWait(ctx, (frame[0].o));
	LINE_NUMBER(135);
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(137);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(138);
	M_nro_BigBoss2_updateMobFly(ctx, (frame[0].o));
	LINE_NUMBER(139);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(141);
	((func_nro_BigBoss2_updateMobAttack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_updateMobAttack])(ctx, (frame[0].o));
	LINE_NUMBER(142);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(144);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(145);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(147);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1) + (jint(1)));
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1));
	LINE_NUMBER(150);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) < ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst)) goto label_11;
	}
	{
	LINE_NUMBER(151);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst);
	LINE_NUMBER(152);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(153);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	goto label_11;
	}
label_10:;
	LINE_NUMBER(157);
	goto label_11;
label_4:;
	{
	LINE_NUMBER(160);
	M_nro_BigBoss2_updateDead(ctx, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss2_updateDead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:updateDead", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_stand;
	((func_nro_BigBoss2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(167);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(168);
	jint temp0 = 167;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = (jint)((func_nro_BigBoss2_getW_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_getW_R_int])(ctx, (frame[0].o));
	jint temp3 = temp1 - (temp2 / (jint(2)));
	jint temp4 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp5 = (jint)((func_nro_BigBoss2_getW_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_getW_R_int])(ctx, (frame[0].o));
	jint temp6 = (jint)SM_nro_Res_random_int_int_R_int(ctx, temp3, (temp4 + (temp5 / (jint(2)))));
	jint temp7 = (jint)((func_nro_BigBoss2_getY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_getY_R_int])(ctx, (frame[0].o));
	jint temp8 = (jint)((func_nro_BigBoss2_getH_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_getH_R_int])(ctx, (frame[0].o));
	jint temp9 = temp7 + (temp8 / (jint(2)));
	jint temp10 = (jint)((func_nro_BigBoss2_getY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_getY_R_int])(ctx, (frame[0].o));
	jint temp11 = (jint)((func_nro_BigBoss2_getH_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_getH_R_int])(ctx, (frame[0].o));
	jint temp12 = (jint)SM_nro_Res_random_int_int_R_int(ctx, temp9, (temp10 + temp11));
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp6, temp12, (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(170);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xTo)) goto label_4;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_yTo)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xTo) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_yTo) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	}
label_5:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss2_updateMobFly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:updateMobFly", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_flyUp) == 0) goto label_1;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_dy = (((jint)((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_dy) + (jint(1)));
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) - ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_dy));
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_fly;
	((func_nro_BigBoss2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(182);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) > (-500)) goto label_1;
	}
	{
	LINE_NUMBER(183);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_flyUp = (jint(0));
	LINE_NUMBER(184);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_flyDown = (jint(1));
	LINE_NUMBER(185);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_dy = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(189);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_flyDown) == 0) goto label_9;
	}
	{
	LINE_NUMBER(190);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xTo);
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_dy = (((jint)((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_dy) + (jint(2)));
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_dy));
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_hitground;
	((func_nro_BigBoss2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(194);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst)) goto label_9;
	}
	{
	LINE_NUMBER(195);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst);
	LINE_NUMBER(196);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_flyDown = (jint(0));
	LINE_NUMBER(197);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_dy = (jint(0));
	LINE_NUMBER(198);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(199);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_shock_scr = (10);
	LINE_NUMBER(200);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_shock = (jint(1));
	}
label_9:;
	LINE_NUMBER(203);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss2_setAttack_nro_Char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:setAttack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(206);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_isBusyAttackSomeOne = (jint(1));
	LINE_NUMBER(207);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (frame[1].o);
	LINE_NUMBER(208);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(209);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(210);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(211);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx) <= ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(-1);
label_8:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(213);
	frame[2].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx);
	LINE_NUMBER(214);
	frame[3].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cy);
	LINE_NUMBER(215);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w) * (jint(2)))) goto label_12;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) * (jint(2)))) goto label_12;
	}
	{
	LINE_NUMBER(216);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(217);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(219);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w));
	}
label_16:;
	{
	LINE_NUMBER(221);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_17;
	}
label_12:;
	{
	LINE_NUMBER(223);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_17:;
	LINE_NUMBER(225);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss2_updateMobStandWait(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:updateMobStandWait", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_stand;
	((func_nro_BigBoss2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(229);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xTo)) goto label_2;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_yTo)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xTo) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_yTo) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	}
label_3:;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss2_setFly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:setFly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(4));
	LINE_NUMBER(237);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_flyUp = (jint(1));
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_setAttack_Array1_nro_Char_Array1_long_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:setAttack", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(241);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(242);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack = (jref) (frame[1].o);
	LINE_NUMBER(243);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_dameHP = (jref) (frame[2].o);
	LINE_NUMBER(244);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_type = (frame[3].i);
	LINE_NUMBER(245);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_a_Array1_nro_Char_Array1_long_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:a", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(250);
	((func_nro_BigBoss2_setAttack_Array1_nro_Char_Array1_long_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_setAttack_Array1_nro_Char_Array1_long_byte])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_updateMobAttack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:updateMobAttack", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(255);
	jint temp0 = (jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick;
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_attack1;
	if (temp0 != ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_3;
	}
	{
	LINE_NUMBER(256);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_3:;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp += 1;
	if (temp0 >= ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_cx)) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(-1);
label_8:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_attack1;
	((func_nro_BigBoss2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_cx) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_cy) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	LINE_NUMBER(263);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xTo = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	goto label_13;
	}
label_5:;
	{
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_attack1;
	((func_nro_BigBoss2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(267);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick) != (8)) goto label_1;
	}
	{
	LINE_NUMBER(268);
	frame[1].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_dameHP;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[1].i))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(271);
	jint temp0 = 102;
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cx;
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp1, ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cy), (jint(1)));
	}
label_17:;
	{
	LINE_NUMBER(268);
	INST_IINC(1, 1);
	goto label_15;
	}
label_1:;
	{
	LINE_NUMBER(276);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_20;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(277);
	jint temp0 = (jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick;
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_attack2;
	if (temp0 != ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_22;
	}
	{
	LINE_NUMBER(278);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_22:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp += 1;
	if (temp0 >= ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_cx)) goto label_26;
	}
	INST_ICONST(1);
	goto label_27;
label_26:;
	INST_ICONST(-1);
label_27:;
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
label_24:;
	{
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_attack2;
	((func_nro_BigBoss2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(284);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick) != (8)) goto label_20;
	}
	{
	LINE_NUMBER(285);
	frame[1].i = (jint(0));
	}
label_30:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_20;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(287);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) == (jint(1))) goto label_34;
	}
	INST_BIPUSH(-45);
	goto label_35;
label_34:;
	INST_BIPUSH(45);
label_35:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	jint temp1 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (25);
	jint temp2 = jint(1);
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_dameHP;
	jlong temp3 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i));
	jlong temp4 = jlong(0);
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	SM_nro_MonsterDart_addMonsterDart_int_int_boolean_long_long_nro_Char_int(ctx, temp0, temp1, temp2, temp3, temp4, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (24));
	}
label_32:;
	{
	LINE_NUMBER(285);
	INST_IINC(1, 1);
	goto label_30;
	}
label_20:;
	{
	LINE_NUMBER(292);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_type) == (jint(2))) goto label_36;
	}
	LINE_NUMBER(293);
	popStackFrame(ctx);
	INST_RETURN();
label_36:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (sp[0].o == nullptr) goto label_38;
	}
	{
	LINE_NUMBER(296);
	jint temp0 = (jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick;
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_fly;
	if (temp0 != ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_40;
	}
	{
	LINE_NUMBER(297);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_40:;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_42;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp += 1;
	if (temp0 >= ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_cx)) goto label_44;
	}
	INST_ICONST(1);
	goto label_45;
label_44:;
	INST_ICONST(-1);
label_45:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_fly;
	((func_nro_BigBoss2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_cx) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(303);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_xTo = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(304);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_yTo = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	goto label_50;
	}
label_42:;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_fly;
	((func_nro_BigBoss2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	}
label_50:;
	{
	LINE_NUMBER(308);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick) != (12)) goto label_38;
	}
	{
	LINE_NUMBER(309);
	frame[1].i = (jint(0));
	}
label_52:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_38;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp[1].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_dameHP;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[1].i))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(312);
	jint temp0 = 102;
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cx;
	sp[0].o = (jobject)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_charAttack;
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp1, ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cy), (jint(1)));
	}
label_54:;
	{
	LINE_NUMBER(309);
	INST_IINC(1, 1);
	goto label_52;
	}
label_38:;
	LINE_NUMBER(317);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_BigBoss2_isPaint_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:isPaint", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_1;
	}
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(323);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) <= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW))) goto label_3;
	}
	{
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(326);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_5;
	}
	{
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(329);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH)) + (30))) goto label_7;
	}
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(332);
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

jbool M_nro_BigBoss2_isUpdate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:isUpdate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
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

jbool M_nro_BigBoss2_checkIsBoss_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:checkIsBoss", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
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

void M_nro_BigBoss2_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:paint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(344);
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(345);
	((func_nro_BigBoss2_getDataB) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_getDataB])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(347);
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isHide) == 0) goto label_4;
	}
label_3:;
	LINE_NUMBER(348);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(350);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isMafuba) == 0) goto label_5;
	}
	{
	LINE_NUMBER(351);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_7;
	}
	{
	LINE_NUMBER(352);
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xMFB;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yMFB;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) == (jint(1))) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xMFB;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yMFB;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) == (jint(1))) goto label_12;
	}
	INST_ICONST(2);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 5;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_BOTTOM) | (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_HCENTER)));
	}
label_11:;
	LINE_NUMBER(356);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(360);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_isShadown) == 0) goto label_14;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_14;
	}
	{
	LINE_NUMBER(361);
	((func_nro_BigBoss2_paintShadow_lib_mGraphics) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss2_paintShadow_lib_mGraphics])(ctx, (frame[0].o), (frame[1].o));
	}
label_14:;
	{
	LINE_NUMBER(365);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY));
	LINE_NUMBER(366);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_17;
	}
	{
	LINE_NUMBER(367);
	clinit_nro_BigBoss2(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss2_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_fy);
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) == (jint(1))) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_21;
	}
label_17:;
	{
	LINE_NUMBER(369);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_fy)) - (9);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) == (jint(1))) goto label_22;
	}
	INST_ICONST(2);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 5;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_BOTTOM) | (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_HCENTER)));
	}
label_21:;
	{
	LINE_NUMBER(371);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (-(clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)));
	LINE_NUMBER(374);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_25;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == (jint(1))) goto label_25;
	}
	{
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur), (jlong(0)))) <= 0) goto label_25;
	}
	clinit_nro_Mob(ctx);
	(sp++)->o = SF_nro_Mob_imgHP;
	if ((--sp)->o == nullptr) goto label_25;
	{
	LINE_NUMBER(375);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_25;
	}
	{
	LINE_NUMBER(376);
	frame[2].i = (jint(((((((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur) * (jlong(100ll))) / ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp)) / (jlong(10ll))) - (jlong(1)))));
	LINE_NUMBER(377);
	if ((frame[2].i) >= 0) goto label_29;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_29:;
	{
	LINE_NUMBER(378);
	if ((frame[2].i) <= (9)) goto label_30;
	}
	INST_BIPUSH(9);
	INST_ISTORE(2);
label_30:;
	{
	LINE_NUMBER(379);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((6) * ((9) - (frame[2].i))), (9), (6), (jint(0)), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (110)), ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_BOTTOM) | (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_HCENTER)));
	}
label_25:;
	{
	LINE_NUMBER(397);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_shock) == 0) goto label_31;
	}
	{
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_tShock = (((jint)((nro_BigBoss2 *) NULL_CHECK(sp[0].o))->F_tShock) + (jint(1)));
	LINE_NUMBER(399);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_type) == (jint(2))) goto label_34;
	}
	INST_BIPUSH(22);
	goto label_35;
label_34:;
	INST_BIPUSH(19);
label_35:;
	{
	sp -= 3;
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, sp[2].i, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tShock) * (50))), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) + (25)), (jint(2)), (jint(1)), (jint(-1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(400);
	SM_nro_EffecMn_addEff_nro_Effect(ctx, (frame[2].o));
	LINE_NUMBER(401);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_type) == (jint(2))) goto label_38;
	}
	INST_BIPUSH(22);
	goto label_39;
label_38:;
	INST_BIPUSH(19);
label_39:;
	{
	sp -= 3;
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, sp[2].i, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tShock) * (50))), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) + (25)), (jint(2)), (jint(1)), (jint(-1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(402);
	SM_nro_EffecMn_addEff_nro_Effect(ctx, (frame[3].o));
	LINE_NUMBER(403);
	if (((jint)((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tShock) != (50)) goto label_31;
	}
	{
	LINE_NUMBER(404);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tShock = (jint(0));
	LINE_NUMBER(405);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_shock = (jint(0));
	}
label_31:;
	LINE_NUMBER(408);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_nro_BigBoss2_getHPColor_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:getHPColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (jint(16711680));
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_startDie(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:startDie", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(415);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (jlong(0));
	LINE_NUMBER(416);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureThenDie = (jint(1));
	LINE_NUMBER(417);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(1));
	LINE_NUMBER(418);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (-3);
	LINE_NUMBER(419);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (-((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir));
	LINE_NUMBER(420);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	LINE_NUMBER(421);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y1) != ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1)) goto label_7;
	}
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus = (jref) (jobject(nullptr));
	}
label_7:;
	LINE_NUMBER(424);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss2_attackOtherMob_nro_Mob(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:attackOtherMob", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(427);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(428);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(429);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(430);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(431);
	((nro_BigBoss2 *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(432);
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
	LINE_NUMBER(433);
	frame[2].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(434);
	frame[3].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(435);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w) * (jint(2)))) goto label_11;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) * (jint(2)))) goto label_11;
	}
	{
	LINE_NUMBER(436);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(437);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(439);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w));
	}
label_15:;
	{
	LINE_NUMBER(441);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(443);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_16:;
	LINE_NUMBER(445);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_nro_BigBoss2_getX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jint M_nro_BigBoss2_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:getY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (50));
	}

	popStackFrame(ctx);
}

jint M_nro_BigBoss2_getH_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:getH", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return (40);
	}

	popStackFrame(ctx);
}

jint M_nro_BigBoss2_getW_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:getW", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return (50);
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_stopMoving(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:stopMoving", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(464);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) != (jint(5))) goto label_1;
	}
	{
	LINE_NUMBER(465);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(466);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Mob *) NULL_CHECK(sp[2].o))->F_p3 = temp0;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_p2 = temp0;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = temp0;
	}
label_1:;
	LINE_NUMBER(468);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_BigBoss2_isInvisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:isInvisible", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(471);
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

void M_nro_BigBoss2_removeHoldEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:removeHoldEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(475);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_1;
	}
	{
	LINE_NUMBER(476);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID = (jint(0));
	}
label_1:;
	LINE_NUMBER(478);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss2_removeBlindEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:removeBlindEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(481);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_blindEff = (jint(0));
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss2_removeSleepEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss2:removeSleepEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(485);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_sleepEff = (jint(0));
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_BigBoss2[] {
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
	(void *) M_nro_BigBoss2_getX_R_int,
	(void *) M_nro_BigBoss2_getY_R_int,
	(void *) M_nro_BigBoss2_getW_R_int,
	(void *) M_nro_BigBoss2_getH_R_int,
	(void *) M_nro_BigBoss2_stopMoving,
	(void *) M_nro_BigBoss2_isInvisible_R_boolean,
	(void *) M_nro_Mob_isBigBoss_R_boolean,
	(void *) M_nro_Mob_getData,
	(void *) M_nro_BigBoss2_setBody_short,
	(void *) M_nro_BigBoss2_clearBody,
	(void *) M_nro_BigBoss2_checkFrameTick_Array1_int,
	(void *) M_nro_Mob_updateSuperEff,
	(void *) M_nro_BigBoss2_update,
	(void *) M_nro_Mob_updateInjure,
	(void *) M_nro_BigBoss2_setAttack_nro_Char,
	(void *) M_nro_Mob_isSpecial_R_boolean,
	(void *) M_nro_Mob_isNewModStand_R_boolean,
	(void *) M_nro_Mob_isNewMod_R_boolean,
	(void *) M_nro_BigBoss2_updateMobAttack,
	(void *) M_nro_Mob_updateMobWalk,
	(void *) M_nro_Mob_getTemplate_R_nro_MobTemplate,
	(void *) M_nro_BigBoss2_isPaint_R_boolean,
	(void *) M_nro_BigBoss2_isUpdate_R_boolean,
	(void *) M_nro_BigBoss2_checkIsBoss_R_boolean,
	(void *) M_nro_Mob_updateHp_bar,
	(void *) M_nro_BigBoss2_paintShadow_lib_mGraphics,
	(void *) M_nro_BigBoss2_paint_lib_mGraphics,
	(void *) M_nro_BigBoss2_startDie,
	(void *) M_nro_BigBoss2_attackOtherMob_nro_Mob,
	(void *) M_nro_BigBoss2_removeHoldEff,
	(void *) M_nro_BigBoss2_removeBlindEff,
	(void *) M_nro_BigBoss2_removeSleepEff,
	(void *) M_nro_Mob_GetFrame,
	(void *) M_nro_Mob_isTypeNewMod_R_boolean,
	(void *) M_nro_BigBoss2_getDataB,
	(void *) M_nro_BigBoss2_updateShadown,
	(void *) M_nro_BigBoss2_updateDead,
	(void *) M_nro_BigBoss2_updateMobFly,
	(void *) M_nro_BigBoss2_updateMobStandWait,
	(void *) M_nro_BigBoss2_setFly,
	(void *) M_nro_BigBoss2_setAttack_Array1_nro_Char_Array1_long_byte,
	(void *) M_nro_BigBoss2_a_Array1_nro_Char_Array1_long_byte,
	(void *) M_nro_BigBoss2_getHPColor_R_int,
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
	{ "getDataB", "()V" },
	{ "updateShadown", "()V" },
	{ "updateDead", "()V" },
	{ "updateMobFly", "()V" },
	{ "updateMobStandWait", "()V" },
	{ "setFly", "()V" },
	{ "setAttack", "([Lnro/Char;[JB)V" },
	{ "a", "([Lnro/Char;[JB)V" },
	{ "getHPColor", "()I" },
};

static jclass interfaces[] { &class_nro_IMapObject, };

static FieldMetadata fields[] {
	{ "shadowBig", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BigBoss2_shadowBig, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "data", &class_nro_EffectData, (intptr_t) &SF_nro_BigBoss2_data, "Lnro/EffectData;", 9 },
	{ "xTo", &class_int, offsetof(nro_BigBoss2, F_xTo), "I", 1 },
	{ "yTo", &class_int, offsetof(nro_BigBoss2, F_yTo), "I", 1 },
	{ "xSd", &class_int, offsetof(nro_BigBoss2, F_xSd), "I", 1 },
	{ "ySd", &class_int, offsetof(nro_BigBoss2, F_ySd), "I", 1 },
	{ "isOutMap", &class_boolean, offsetof(nro_BigBoss2, F_isOutMap), "Z", 2 },
	{ "wCount", &class_int, offsetof(nro_BigBoss2, F_wCount), "I", 2 },
	{ "isShadown", &class_boolean, offsetof(nro_BigBoss2, F_isShadown), "Z", 1 },
	{ "tick", &class_int, offsetof(nro_BigBoss2, F_tick), "I", 2 },
	{ "frame", &class_int, offsetof(nro_BigBoss2, F_frame), "I", 2 },
	{ "fy", &class_int, offsetof(nro_BigBoss2, F_fy), "I", 2 },
	{ "flyUp", &class_boolean, offsetof(nro_BigBoss2, F_flyUp), "Z", 2 },
	{ "flyDown", &class_boolean, offsetof(nro_BigBoss2, F_flyDown), "Z", 2 },
	{ "dy", &class_int, offsetof(nro_BigBoss2, F_dy), "I", 2 },
	{ "tShock", &class_int, offsetof(nro_BigBoss2, F_tShock), "I", 2 },
	{ "isBusyAttackSomeOne", &class_boolean, offsetof(nro_BigBoss2, F_isBusyAttackSomeOne), "Z", 1 },
	{ "charAttack", getArrayClass(&class_nro_Char, 1), offsetof(nro_BigBoss2, F_charAttack), "[Lnro/Char;", 2 },
	{ "dameHP", getArrayClass(&class_long, 1), offsetof(nro_BigBoss2, F_dameHP), "[J", 2 },
	{ "type", &class_byte, offsetof(nro_BigBoss2, F_type), "B", 2 },
	{ "stand", getArrayClass(&class_int, 1), offsetof(nro_BigBoss2, F_stand), "[I", 1 },
	{ "attack1", getArrayClass(&class_int, 1), offsetof(nro_BigBoss2, F_attack1), "[I", 1 },
	{ "attack2", getArrayClass(&class_int, 1), offsetof(nro_BigBoss2, F_attack2), "[I", 1 },
	{ "fly", getArrayClass(&class_int, 1), offsetof(nro_BigBoss2, F_fly), "[I", 1 },
	{ "hitground", getArrayClass(&class_int, 1), offsetof(nro_BigBoss2, F_hitground), "[I", 1 },
	{ "shock", &class_boolean, offsetof(nro_BigBoss2, F_shock), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_BigBoss2_int_short_short_int_long_long_int, 0, "(ISSIJJI)V", 1 },
	{ "<init>", (intptr_t) init_nro_BigBoss2_int_short_short_int_long_long, 0, "(ISSIJJ)V", 1 },
	{ "getDataB", (intptr_t) M_nro_BigBoss2_getDataB, VTABLE_nro_BigBoss2_getDataB, "()V", 1 },
	{ "setBody", (intptr_t) M_nro_BigBoss2_setBody_short, VTABLE_nro_BigBoss2_setBody_short, "(S)V", 1 },
	{ "clearBody", (intptr_t) M_nro_BigBoss2_clearBody, VTABLE_nro_BigBoss2_clearBody, "()V", 1 },
	{ "checkFrameTick", (intptr_t) M_nro_BigBoss2_checkFrameTick_Array1_int, VTABLE_nro_BigBoss2_checkFrameTick_Array1_int, "([I)V", 1 },
	{ "updateShadown", (intptr_t) M_nro_BigBoss2_updateShadown, VTABLE_nro_BigBoss2_updateShadown, "()V", 2 },
	{ "paintShadow", (intptr_t) M_nro_BigBoss2_paintShadow_lib_mGraphics, VTABLE_nro_BigBoss2_paintShadow_lib_mGraphics, "(Llib/mGraphics;)V", 1 },
	{ "update", (intptr_t) M_nro_BigBoss2_update, VTABLE_nro_BigBoss2_update, "()V", 1 },
	{ "updateDead", (intptr_t) M_nro_BigBoss2_updateDead, VTABLE_nro_BigBoss2_updateDead, "()V", 2 },
	{ "updateMobFly", (intptr_t) M_nro_BigBoss2_updateMobFly, VTABLE_nro_BigBoss2_updateMobFly, "()V", 2 },
	{ "setAttack", (intptr_t) M_nro_BigBoss2_setAttack_nro_Char, VTABLE_nro_BigBoss2_setAttack_nro_Char, "(Lnro/Char;)V", 1 },
	{ "updateMobStandWait", (intptr_t) M_nro_BigBoss2_updateMobStandWait, VTABLE_nro_BigBoss2_updateMobStandWait, "()V", 2 },
	{ "setFly", (intptr_t) M_nro_BigBoss2_setFly, VTABLE_nro_BigBoss2_setFly, "()V", 1 },
	{ "setAttack", (intptr_t) M_nro_BigBoss2_setAttack_Array1_nro_Char_Array1_long_byte, VTABLE_nro_BigBoss2_setAttack_Array1_nro_Char_Array1_long_byte, "([Lnro/Char;[JB)V", 1 },
	{ "a", (intptr_t) M_nro_BigBoss2_a_Array1_nro_Char_Array1_long_byte, VTABLE_nro_BigBoss2_a_Array1_nro_Char_Array1_long_byte, "([Lnro/Char;[JB)V", 1 },
	{ "updateMobAttack", (intptr_t) M_nro_BigBoss2_updateMobAttack, VTABLE_nro_BigBoss2_updateMobAttack, "()V", 1 },
	{ "isPaint", (intptr_t) M_nro_BigBoss2_isPaint_R_boolean, VTABLE_nro_BigBoss2_isPaint_R_boolean, "()Z", 1 },
	{ "isUpdate", (intptr_t) M_nro_BigBoss2_isUpdate_R_boolean, VTABLE_nro_BigBoss2_isUpdate_R_boolean, "()Z", 1 },
	{ "checkIsBoss", (intptr_t) M_nro_BigBoss2_checkIsBoss_R_boolean, VTABLE_nro_BigBoss2_checkIsBoss_R_boolean, "()Z", 1 },
	{ "paint", (intptr_t) M_nro_BigBoss2_paint_lib_mGraphics, VTABLE_nro_BigBoss2_paint_lib_mGraphics, "(Llib/mGraphics;)V", 1 },
	{ "getHPColor", (intptr_t) M_nro_BigBoss2_getHPColor_R_int, VTABLE_nro_BigBoss2_getHPColor_R_int, "()I", 1 },
	{ "startDie", (intptr_t) M_nro_BigBoss2_startDie, VTABLE_nro_BigBoss2_startDie, "()V", 1 },
	{ "attackOtherMob", (intptr_t) M_nro_BigBoss2_attackOtherMob_nro_Mob, VTABLE_nro_BigBoss2_attackOtherMob_nro_Mob, "(Lnro/Mob;)V", 1 },
	{ "getX", (intptr_t) M_nro_BigBoss2_getX_R_int, VTABLE_nro_BigBoss2_getX_R_int, "()I", 1 },
	{ "getY", (intptr_t) M_nro_BigBoss2_getY_R_int, VTABLE_nro_BigBoss2_getY_R_int, "()I", 1 },
	{ "getH", (intptr_t) M_nro_BigBoss2_getH_R_int, VTABLE_nro_BigBoss2_getH_R_int, "()I", 1 },
	{ "getW", (intptr_t) M_nro_BigBoss2_getW_R_int, VTABLE_nro_BigBoss2_getW_R_int, "()I", 1 },
	{ "stopMoving", (intptr_t) M_nro_BigBoss2_stopMoving, VTABLE_nro_BigBoss2_stopMoving, "()V", 1 },
	{ "isInvisible", (intptr_t) M_nro_BigBoss2_isInvisible_R_boolean, VTABLE_nro_BigBoss2_isInvisible_R_boolean, "()Z", 1 },
	{ "removeHoldEff", (intptr_t) M_nro_BigBoss2_removeHoldEff, VTABLE_nro_BigBoss2_removeHoldEff, "()V", 1 },
	{ "removeBlindEff", (intptr_t) M_nro_BigBoss2_removeBlindEff, VTABLE_nro_BigBoss2_removeBlindEff, "()V", 1 },
	{ "removeSleepEff", (intptr_t) M_nro_BigBoss2_removeSleepEff, VTABLE_nro_BigBoss2_removeSleepEff, "()V", 1 },
};

Class class_nro_BigBoss2{
		.nativeName = (intptr_t) "nro/BigBoss2",
		.parentClass = (intptr_t) &class_nro_Mob,
		.size = sizeof(nro_BigBoss2),
		.classVtable = (intptr_t) vtable_nro_BigBoss2,
		.staticInitializer = (intptr_t) clinit_nro_BigBoss2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_BigBoss2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 33,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 54,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_BigBoss2 = registerClass(&class_nro_BigBoss2);

}

