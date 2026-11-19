#include "nro/BigBoss.h"
#include "nro/GameScr.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "nro/BigBoss.h"
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

jobject SF_nro_BigBoss_vMobMove;
jobject SF_nro_BigBoss_data;

void mark_nro_BigBoss(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_BigBoss_vMobMove)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BigBoss_vMobMove)->clazz)->markFunction)((jobject) SF_nro_BigBoss_vMobMove, mark, depth + 1);
		if (SF_nro_BigBoss_data)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BigBoss_data)->clazz)->markFunction)((jobject) SF_nro_BigBoss_data, mark, depth + 1);
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
	auto self = (nro_BigBoss *) object;
	if (self->F_charAttack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charAttack)->clazz)->markFunction)((jobject) self->F_charAttack, mark, depth + 1);
	if (self->F_dameHP)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dameHP)->clazz)->markFunction)((jobject) self->F_dameHP, mark, depth + 1);
	if (self->F_stand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stand)->clazz)->markFunction)((jobject) self->F_stand, mark, depth + 1);
	if (self->F_stand_1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stand_1)->clazz)->markFunction)((jobject) self->F_stand_1, mark, depth + 1);
	if (self->F_attack1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack1)->clazz)->markFunction)((jobject) self->F_attack1, mark, depth + 1);
	if (self->F_attack2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack2)->clazz)->markFunction)((jobject) self->F_attack2, mark, depth + 1);
	if (self->F_attack3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack3)->clazz)->markFunction)((jobject) self->F_attack3, mark, depth + 1);
	if (self->F_attack2_1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack2_1)->clazz)->markFunction)((jobject) self->F_attack2_1, mark, depth + 1);
	if (self->F_attack3_1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack3_1)->clazz)->markFunction)((jobject) self->F_attack3_1, mark, depth + 1);
	if (self->F_fly)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fly)->clazz)->markFunction)((jobject) self->F_fly, mark, depth + 1);
	if (self->F_hitground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hitground)->clazz)->markFunction)((jobject) self->F_hitground, mark, depth + 1);
}

void M_nro_BigBoss_getDataB2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:getDataB2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(41);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(43);
	clinit_nro_EffectData(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectData);
	init_nro_EffectData(ctx, sp[0].o);
	clinit_nro_BigBoss(ctx);
	SF_nro_BigBoss_data = sp[0].o;
	LINE_NUMBER(44);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (100));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/data"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(47);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	((func_nro_EffectData_readData2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_readData2_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(48);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[1].o = (jobject)SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/effectdata/100/img.png"_j))));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	LINE_NUMBER(49);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_1;
	}
label_10:;
	{
	LINE_NUMBER(50);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/effectdata/100/img.png"_j))));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(54);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(52);
	frame[2].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestModTemplate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestModTemplate_int])(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId));
	}
label_11:;
	{
	LINE_NUMBER(56);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_nro_BigBoss(ctx);
	sp[1].o = (jobject)SF_nro_BigBoss_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_w = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(58);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w);
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_nro_BigBoss(ctx);
	sp[1].o = (jobject)SF_nro_BigBoss_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_h = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss_getDataB(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:getDataB", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(64);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(66);
	clinit_nro_EffectData(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectData);
	init_nro_EffectData(ctx, sp[0].o);
	clinit_nro_BigBoss(ctx);
	SF_nro_BigBoss_data = sp[0].o;
	LINE_NUMBER(67);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (101));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/data"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(70);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	((func_nro_EffectData_readData2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_readData2_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(71);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[1].o = (jobject)SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/effectdata/101/img.png"_j))));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	LINE_NUMBER(72);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_1;
	}
label_10:;
	{
	LINE_NUMBER(73);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/effectdata/101/img.png"_j))));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(77);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(75);
	frame[2].o = sp[0].o;
	LINE_NUMBER(76);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestModTemplate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestModTemplate_int])(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId));
	}
label_11:;
	{
	LINE_NUMBER(79);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_nro_BigBoss(ctx);
	sp[1].o = (jobject)SF_nro_BigBoss_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_w = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(81);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w);
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	clinit_nro_BigBoss(ctx);
	sp[1].o = (jobject)SF_nro_BigBoss_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_h = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss_setBody_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:setBody", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(86);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(1));
	LINE_NUMBER(87);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody = (frame[1].i);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss_clearBody(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:clearBody", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(0));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_BigBoss_int_short_short_int_long_long_int(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jlong param4, jlong param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BigBoss(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].l = param4;
	frame[7].l = param5;
	frame[9].i = param6;
	{
	LINE_NUMBER(94);
	init_nro_Mob(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_isShadown = (jint(1));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_stand = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (17));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (38);
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_stand_1 = (jref) sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject) createArray(ctx, &class_int, (15));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (jint(2));
	frame[10].o = sp[0].o;
	LINE_NUMBER(96);
	sp[0].o = (jobject) createArray(ctx, &class_int, (7));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(2));
	frame[10].o = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) sp[1].o;
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (23));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (23);
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_attack2 = (jref) sp[1].o;
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (24));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (jint(1));
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_attack3 = (jref) sp[1].o;
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (20));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (24);
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_attack2_1 = (jref) sp[1].o;
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (21));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (38);
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_attack3_1 = (jref) sp[1].o;
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (12);
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_fly = (jref) sp[1].o;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (24));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (jint(1));
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_hitground = (jref) sp[1].o;
	LINE_NUMBER(104);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(2)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	frame[11].o = sp[0].o;
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (frame[2].i) + (20);
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_x = temp0;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_xFirst = temp0;
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp3 = frame[3].i;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_y = temp3;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_yFirst = temp3;
	LINE_NUMBER(107);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1 = (frame[1].i);
	LINE_NUMBER(108);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (frame[5].l);
	LINE_NUMBER(109);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp = (frame[7].l);
	LINE_NUMBER(110);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId = (frame[4].i);
	LINE_NUMBER(111);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_len = (100);
	LINE_NUMBER(112);
	((func_nro_BigBoss_updateHp_bar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss_updateHp_bar])(ctx, (frame[0].o));
	LINE_NUMBER(113);
	if ((frame[9].i) != 0) goto label_23;
	}
	{
	LINE_NUMBER(114);
	((func_nro_BigBoss_getDataB) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss_getDataB])(ctx, (frame[0].o));
	}
label_23:;
	{
	LINE_NUMBER(117);
	if ((frame[9].i) != (jint(1))) goto label_25;
	}
	{
	LINE_NUMBER(118);
	((func_nro_BigBoss_getDataB2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss_getDataB2])(ctx, (frame[0].o));
	}
label_25:;
	{
	LINE_NUMBER(121);
	if ((frame[9].i) != (jint(2))) goto label_27;
	}
	{
	LINE_NUMBER(122);
	((func_nro_BigBoss_getDataB2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss_getDataB2])(ctx, (frame[0].o));
	LINE_NUMBER(123);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody = (jint(1));
	}
label_27:;
	{
	LINE_NUMBER(126);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:checkFrameTick", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_tick = (((jint)((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_tick) + (jint(1)));
	LINE_NUMBER(131);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(132);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(135);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_frame = ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick)));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_nro_BigBoss_isUpdate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss_isUpdate_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(141);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(142);
	frame[2].i = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size);
	LINE_NUMBER(143);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_xSd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(144);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_wCount = (jint(0));
	LINE_NUMBER(145);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_ySd) <= 0) goto label_7;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(2)));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[2].i)), (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_ySd) / (frame[2].i)));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(147);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap = (jint(1));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[2].i)), (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_ySd) / (frame[2].i)));
	if (temp0 == 0) goto label_11;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(2)));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(149);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_xSd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(150);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_ySd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(151);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(154);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[1].o)))->F_isOutMap) == 0) goto label_7;
	}
	{
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[1].o)))->F_wCount) >= (10)) goto label_7;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[1].o;
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_wCount = (((jint)((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_wCount) + (jint(1)));
	LINE_NUMBER(156);
	sp[0].o = frame[1].o;
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_ySd = (((jint)((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_ySd) + (24));
	LINE_NUMBER(157);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_BigBoss *) NULL_CHECK((frame[1].o)))->F_xSd), ((jint)((nro_BigBoss *) NULL_CHECK((frame[1].o)))->F_ySd), (jint(2)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(158);
	if ((((jint)((nro_BigBoss *) NULL_CHECK((frame[1].o)))->F_ySd) % (24)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = frame[1].o;
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_ySd = (((jint)((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_ySd) - (((jint)((nro_BigBoss *) NULL_CHECK((frame[1].o)))->F_ySd) % (24)));
	goto label_7;
	}
label_7:;
	{
	LINE_NUMBER(166);
	switch(((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status)) {
		case 0: goto label_20;
		case 1: goto label_20;
		case 2: goto label_21;
		case 3: goto label_22;
		case 4: goto label_23;
		case 5: goto label_24;
		case 6: goto label_25;
		case 7: goto label_26;
		default: goto label_1;
	}
	}
label_20:;
	{
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_stand_1;
	sp += 1;
	goto label_28;
	}
label_27:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_BigBoss *) NULL_CHECK(sp[-1].o))->F_stand;
label_28:;
	{
	sp -= 2;
	((func_nro_BigBoss_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(170);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_30;
	}
	{
	LINE_NUMBER(171);
	jint temp0 = 167;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - (30)), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (30)));
	jint temp2 = (jint)((func_nro_BigBoss_getY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss_getY_R_int])(ctx, (frame[0].o));
	jint temp3 = temp2 + (20);
	jint temp4 = (jint)((func_nro_BigBoss_getY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss_getY_R_int])(ctx, (frame[0].o));
	jint temp5 = (jint)SM_nro_Res_random_int_int_R_int(ctx, temp3, (temp4 + (40)));
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp1, temp5, (jint(1)));
	}
label_30:;
	{
	LINE_NUMBER(174);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst)) goto label_32;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst)) goto label_1;
	}
label_32:;
	{
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	goto label_1;
	}
label_21:;
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_stand_1;
	sp += 1;
	goto label_35;
	}
label_34:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_BigBoss *) NULL_CHECK(sp[-1].o))->F_stand;
label_35:;
	{
	sp -= 2;
	((func_nro_BigBoss_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(181);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst)) goto label_37;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst)) goto label_38;
	}
label_37:;
	{
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	}
label_38:;
	LINE_NUMBER(186);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
	{
	LINE_NUMBER(188);
	((func_nro_BigBoss_updateMobAttack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss_updateMobAttack])(ctx, (frame[0].o));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}
label_23:;
	{
	LINE_NUMBER(191);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(192);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_wy) == 0) goto label_42;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_dy = (((jint)((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_dy) + (jint(1)));
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) - ((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_dy));
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_46;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_stand_1;
	sp += 1;
	goto label_47;
	}
label_46:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_BigBoss *) NULL_CHECK(sp[-1].o))->F_fly;
label_47:;
	{
	sp -= 2;
	((func_nro_BigBoss_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(196);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) > (-500)) goto label_42;
	}
	{
	LINE_NUMBER(197);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_wy = (jint(0));
	LINE_NUMBER(198);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_flyUp = (jint(1));
	LINE_NUMBER(199);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_dy = (jint(0));
	}
label_42:;
	{
	LINE_NUMBER(203);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_flyUp) == 0) goto label_52;
	}
	{
	LINE_NUMBER(204);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_xTo);
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_dy = (((jint)((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_dy) + (jint(2)));
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_dy));
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_57;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_stand_1;
	sp += 1;
	goto label_58;
	}
label_57:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_BigBoss *) NULL_CHECK(sp[-1].o))->F_hitground;
label_58:;
	{
	sp -= 2;
	((func_nro_BigBoss_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(208);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst)) goto label_52;
	}
	{
	LINE_NUMBER(209);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst);
	LINE_NUMBER(210);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_flyUp = (jint(0));
	LINE_NUMBER(211);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_dy = (jint(0));
	LINE_NUMBER(212);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(213);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_shock_scr = (10);
	LINE_NUMBER(214);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_changePos = (jint(1));
	}
label_52:;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();
label_24:;
	{
	LINE_NUMBER(220);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}
label_25:;
	{
	LINE_NUMBER(223);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1) + (jint(1)));
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1));
	LINE_NUMBER(226);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) < ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst)) goto label_1;
	}
	{
	LINE_NUMBER(227);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst);
	LINE_NUMBER(228);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(229);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}
label_26:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	LINE_NUMBER(238);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss_updateInjure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:updateInjure", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(241);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss_setAttack_nro_Char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:setAttack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (frame[1].o);
	LINE_NUMBER(245);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(246);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(247);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(248);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(249);
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
	LINE_NUMBER(250);
	frame[2].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx);
	LINE_NUMBER(251);
	frame[3].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cy);
	LINE_NUMBER(252);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v) << (jint(1)))) goto label_11;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) << (jint(1)))) goto label_11;
	}
	{
	LINE_NUMBER(253);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(254);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(256);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	}
label_15:;
	{
	LINE_NUMBER(259);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(261);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_16:;
	LINE_NUMBER(263);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_BigBoss_isSpecial_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:isSpecial", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
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

void M_nro_BigBoss_setFly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:setFly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(4));
	LINE_NUMBER(271);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_wy = (jint(1));
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss_a_Array1_nro_Char_Array1_long_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:a", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(275);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack = (jref) (frame[1].o);
	LINE_NUMBER(276);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_dameHP = (jref) (frame[2].o);
	LINE_NUMBER(277);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_type = (frame[3].i);
	LINE_NUMBER(278);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(279);
	if ((frame[3].i) >= (jint(3))) goto label_5;
	}
	{
	LINE_NUMBER(280);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	}
label_5:;
	{
	LINE_NUMBER(283);
	if ((frame[3].i) != (jint(3))) goto label_7;
	}
	{
	LINE_NUMBER(284);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_wy = (jint(1));
	LINE_NUMBER(285);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(4));
	}
label_7:;
	{
	LINE_NUMBER(288);
	if ((frame[3].i) != (jint(4))) goto label_10;
	}
	{
	LINE_NUMBER(289);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	sp[1].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_dameHP;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[4].i))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(289);
	INST_IINC(4, 1);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(294);
	if ((frame[3].i) != (7)) goto label_15;
	}
	{
	LINE_NUMBER(295);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	}
label_15:;
	LINE_NUMBER(298);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss_updateMobAttack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:updateMobAttack", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(301);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_type) != (7)) goto label_1;
	}
	{
	LINE_NUMBER(302);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick) <= (8)) goto label_3;
	}
	{
	LINE_NUMBER(303);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick = (8);
	}
label_3:;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_stand_1;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_BigBoss *) NULL_CHECK(sp[-1].o))->F_attack1;
label_6:;
	{
	sp -= 2;
	((func_nro_BigBoss_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(307);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(4))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(308);
	jint temp0 = 70;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_9;
	}
	INST_BIPUSH(15);
	goto label_10;
label_9:;
	INST_BIPUSH(-15);
label_10:;
	{
	sp -= 3;
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, sp[0].i, (sp[1].i + sp[2].i), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (40)), (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(313);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_11;
	}
	{
	LINE_NUMBER(314);
	jint temp0 = (jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_stand_1;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_14:;
	sp -= 2; if (sp[0].i != sp[1].i) goto label_15;
	{
	LINE_NUMBER(315);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_15:;
	{
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp += 1;
	if (temp0 >= ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_cx)) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(-1);
label_18:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_stand_1;
	sp += 1;
	goto label_21;
	}
label_20:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_BigBoss *) NULL_CHECK(sp[-1].o))->F_attack1;
label_21:;
	{
	sp -= 2;
	((func_nro_BigBoss_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(320);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick) != (8)) goto label_11;
	}
	{
	LINE_NUMBER(321);
	frame[1].i = (jint(0));
	}
label_24:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(322);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_26;
	}
	INST_BIPUSH(45);
	goto label_27;
label_26:;
	INST_BIPUSH(-45);
label_27:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	jint temp1 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (30);
	jint temp2 = jint(1);
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_dameHP;
	jlong temp3 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i));
	jlong temp4 = jlong(0);
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	SM_nro_MonsterDart_addMonsterDart_int_int_boolean_long_long_nro_Char_int(ctx, temp0, temp1, temp2, temp3, temp4, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (24));
	LINE_NUMBER(321);
	INST_IINC(1, 1);
	goto label_24;
	}
label_11:;
	{
	LINE_NUMBER(327);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_29;
	}
	{
	LINE_NUMBER(328);
	jint temp0 = (jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_attack2_1;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_32;
	}
label_31:;
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_attack2;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_32:;
	sp -= 2; if (sp[0].i != sp[1].i) goto label_33;
	{
	LINE_NUMBER(329);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_33:;
	{
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp += 1;
	if (temp0 >= ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_cx)) goto label_35;
	}
	INST_ICONST(1);
	goto label_36;
label_35:;
	INST_ICONST(-1);
label_36:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_attack2_1;
	sp += 1;
	goto label_39;
	}
label_38:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_BigBoss *) NULL_CHECK(sp[-1].o))->F_attack2;
label_39:;
	{
	sp -= 2;
	((func_nro_BigBoss_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_cx) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_cy) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	LINE_NUMBER(336);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick) != (18)) goto label_29;
	}
	{
	LINE_NUMBER(337);
	frame[1].i = (jint(0));
	}
label_44:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_29;
	}
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp[1].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_dameHP;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[1].i))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(339);
	jint temp0 = 102;
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cx;
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp1, ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cy), (jint(1)));
	LINE_NUMBER(337);
	INST_IINC(1, 1);
	goto label_44;
	}
label_29:;
	{
	LINE_NUMBER(344);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_type) != (jint(2))) goto label_48;
	}
	{
	LINE_NUMBER(345);
	jint temp0 = (jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_50;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_attack3_1;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_51;
	}
label_50:;
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_attack3;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_51:;
	sp -= 2; if (sp[0].i != sp[1].i) goto label_52;
	{
	LINE_NUMBER(346);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_52:;
	{
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp += 1;
	if (temp0 >= ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_cx)) goto label_54;
	}
	INST_ICONST(1);
	goto label_55;
label_54:;
	INST_ICONST(-1);
label_55:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(350);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_57;
	}
	{
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_attack3_1;
	sp += 1;
	goto label_58;
	}
label_57:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_BigBoss *) NULL_CHECK(sp[-1].o))->F_attack3;
label_58:;
	{
	sp -= 2;
	((func_nro_BigBoss_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BigBoss_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(351);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick) != (13)) goto label_48;
	}
	{
	LINE_NUMBER(352);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_shock_scr = (10);
	LINE_NUMBER(353);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_changePos = (jint(1));
	LINE_NUMBER(355);
	frame[1].i = (jint(0));
	}
label_63:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_48;
	}
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp[1].o = (jobject)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_dameHP;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[1].i))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(355);
	INST_IINC(1, 1);
	goto label_63;
	}
label_48:;
	LINE_NUMBER(361);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss_updateMobWalk(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:updateMobWalk", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(364);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_BigBoss_isPaint_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:isPaint", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(367);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isHide) == 0) goto label_1;
	}
	{
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(369);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_3;
	}
	{
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(371);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) <= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW))) goto label_5;
	}
	{
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(373);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_7;
	}
	{
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(375);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH)) + (30))) goto label_9;
	}
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(378);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_BigBoss_isUpdate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:isUpdate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isHide) != 0) goto label_1;
	}
	{
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

jbool M_nro_BigBoss_checkIsBoss_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:checkIsBoss", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
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

void M_nro_BigBoss_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:paint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(391);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isHide) == 0) goto label_1;
	}
	LINE_NUMBER(392);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(394);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(395);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_5;
	}
	{
	LINE_NUMBER(396);
	((func_nro_BigBoss_getDataB2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss_getDataB2])(ctx, (frame[0].o));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(398);
	((func_nro_BigBoss_getDataB) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BigBoss_getDataB])(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(401);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(402);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isHide) != 0) goto label_7;
	}
	{
	LINE_NUMBER(403);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isMafuba) == 0) goto label_10;
	}
	{
	LINE_NUMBER(404);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_12;
	}
	{
	LINE_NUMBER(405);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xMFB;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yMFB;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_14;
	}
	INST_ICONST(0);
	goto label_15;
label_14:;
	INST_ICONST(1);
label_15:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_7;
	}
label_12:;
	{
	LINE_NUMBER(407);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xMFB;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yMFB;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_16;
	}
	INST_ICONST(0);
	goto label_17;
label_16:;
	INST_ICONST(2);
label_17:;
	{
	sp -= 5;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, (33));
	goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(410);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_isShadown) == 0) goto label_18;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_18;
	}
	{
	LINE_NUMBER(411);
	sp[0].o = frame[1].o;
	clinit_nro_BigBoss(ctx);
	sp[1].o = (jobject)SF_nro_BigBoss_vMobMove;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst), (jint(3)));
	LINE_NUMBER(412);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) + ((jint(2)) * (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY))));
	}
label_18:;
	{
	LINE_NUMBER(415);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY));
	LINE_NUMBER(416);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_22;
	}
	{
	LINE_NUMBER(417);
	clinit_nro_BigBoss(ctx);
	sp[0].o = (jobject)SF_nro_BigBoss_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_24;
	}
	INST_ICONST(0);
	goto label_25;
label_24:;
	INST_ICONST(1);
label_25:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_26;
	}
label_22:;
	{
	LINE_NUMBER(419);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (9);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_27;
	}
	INST_ICONST(0);
	goto label_28;
label_27:;
	INST_ICONST(2);
label_28:;
	INST_BIPUSH(33);
	POP_N(6); // Pop method args
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i);
label_26:;
	{
	LINE_NUMBER(422);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (-(clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)));
	LINE_NUMBER(423);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_imgHPtem;
	jint temp0 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(425);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_31;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == (jint(1))) goto label_31;
	}
	{
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur), (jlong(0)))) <= 0) goto label_31;
	}
	clinit_nro_Mob(ctx);
	(sp++)->o = SF_nro_Mob_imgHP;
	if ((--sp)->o == nullptr) goto label_31;
	{
	LINE_NUMBER(426);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_31;
	}
	{
	LINE_NUMBER(427);
	frame[3].i = (jint(((((((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur) * (jlong(100ll))) / ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp)) / (jlong(10ll))) - (jlong(1)))));
	LINE_NUMBER(428);
	if ((frame[3].i) >= 0) goto label_35;
	}
	INST_ICONST(0);
	INST_ISTORE(3);
label_35:;
	{
	LINE_NUMBER(429);
	if ((frame[3].i) <= (9)) goto label_36;
	}
	INST_BIPUSH(9);
	INST_ISTORE(3);
label_36:;
	{
	LINE_NUMBER(430);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((6) * ((9) - (frame[3].i))), (9), (6), (jint(0)), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h)) - (10)), ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_BOTTOM) | (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_HCENTER)));
	}
label_31:;
	{
	LINE_NUMBER(455);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_changePos) == 0) goto label_7;
	}
	{
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_typeSuperEff = (((jint)((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_typeSuperEff) + (jint(1)));
	LINE_NUMBER(457);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_type) != (jint(2))) goto label_39;
	}
	INST_BIPUSH(19);
	goto label_40;
label_39:;
	INST_BIPUSH(22);
label_40:;
	{
	sp -= 3;
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, sp[2].i, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_typeSuperEff) * (50))), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) + (25)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	LINE_NUMBER(458);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_type) != (jint(2))) goto label_42;
	}
	INST_BIPUSH(19);
	goto label_43;
label_42:;
	INST_BIPUSH(22);
label_43:;
	{
	sp -= 3;
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, sp[2].i, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_typeSuperEff) * (50))), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) + (25)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	LINE_NUMBER(459);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_typeSuperEff) != (50)) goto label_7;
	}
	{
	LINE_NUMBER(460);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_typeSuperEff = (jint(0));
	LINE_NUMBER(461);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_changePos = (jint(0));
	}
label_7:;
	LINE_NUMBER(468);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss_startDie(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:startDie", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(471);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (jlong(0));
	LINE_NUMBER(472);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(1));
	LINE_NUMBER(473);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (-3);
	LINE_NUMBER(474);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (-((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir));
	LINE_NUMBER(475);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	LINE_NUMBER(476);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o != (frame[0].o)) goto label_6;
	}
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus = (jref) (jobject(nullptr));
	}
label_6:;
	LINE_NUMBER(479);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss_attackOtherMob_nro_Mob(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:attackOtherMob", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(482);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(483);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(484);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(485);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(486);
	((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(487);
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
	LINE_NUMBER(488);
	frame[2].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(489);
	frame[3].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(490);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v) << (jint(1)))) goto label_11;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) << (jint(1)))) goto label_11;
	}
	{
	LINE_NUMBER(491);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(492);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(494);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	}
label_15:;
	{
	LINE_NUMBER(497);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(499);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_16:;
	LINE_NUMBER(501);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_nro_BigBoss_getX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jint M_nro_BigBoss_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:getY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(508);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[0].o)))->F_haftBody) == 0) goto label_1;
	}
	{
	jint temp0 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (20);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (60);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_nro_BigBoss_getH_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:getH", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return (40);
	}

	popStackFrame(ctx);
}

jint M_nro_BigBoss_getW_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:getW", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(516);
	popStackFrame(ctx);
	return (60);
	}

	popStackFrame(ctx);
}

void M_nro_BigBoss_stopMoving(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:stopMoving", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(520);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) != (jint(5))) goto label_1;
	}
	{
	LINE_NUMBER(521);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(522);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Mob *) NULL_CHECK(sp[2].o))->F_p3 = temp0;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_p2 = temp0;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = temp0;
	}
label_1:;
	LINE_NUMBER(525);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_BigBoss_isInvisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:isInvisible", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(528);
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

void M_nro_BigBoss_removeHoldEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:removeHoldEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(532);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_1;
	}
	{
	LINE_NUMBER(533);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID = (jint(0));
	}
label_1:;
	LINE_NUMBER(536);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss_removeBlindEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:removeBlindEff", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(539);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BigBoss_removeSleepEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:removeSleepEff", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(542);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_BigBoss(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Mob(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BigBoss:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BigBoss(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/shadowBig.png"_j))));
	clinit_nro_BigBoss(ctx);
	SF_nro_BigBoss_vMobMove = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_BigBoss[] {
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
	(void *) M_nro_BigBoss_getX_R_int,
	(void *) M_nro_BigBoss_getY_R_int,
	(void *) M_nro_BigBoss_getW_R_int,
	(void *) M_nro_BigBoss_getH_R_int,
	(void *) M_nro_BigBoss_stopMoving,
	(void *) M_nro_BigBoss_isInvisible_R_boolean,
	(void *) M_nro_Mob_isBigBoss_R_boolean,
	(void *) M_nro_Mob_getData,
	(void *) M_nro_BigBoss_setBody_short,
	(void *) M_nro_BigBoss_clearBody,
	(void *) M_nro_BigBoss_checkFrameTick_Array1_int,
	(void *) M_nro_Mob_updateSuperEff,
	(void *) M_nro_BigBoss_update,
	(void *) M_nro_BigBoss_updateInjure,
	(void *) M_nro_BigBoss_setAttack_nro_Char,
	(void *) M_nro_BigBoss_isSpecial_R_boolean,
	(void *) M_nro_Mob_isNewModStand_R_boolean,
	(void *) M_nro_Mob_isNewMod_R_boolean,
	(void *) M_nro_BigBoss_updateMobAttack,
	(void *) M_nro_BigBoss_updateMobWalk,
	(void *) M_nro_Mob_getTemplate_R_nro_MobTemplate,
	(void *) M_nro_BigBoss_isPaint_R_boolean,
	(void *) M_nro_BigBoss_isUpdate_R_boolean,
	(void *) M_nro_BigBoss_checkIsBoss_R_boolean,
	(void *) M_nro_Mob_updateHp_bar,
	(void *) M_nro_Mob_paintShadow_lib_mGraphics,
	(void *) M_nro_BigBoss_paint_lib_mGraphics,
	(void *) M_nro_BigBoss_startDie,
	(void *) M_nro_BigBoss_attackOtherMob_nro_Mob,
	(void *) M_nro_BigBoss_removeHoldEff,
	(void *) M_nro_BigBoss_removeBlindEff,
	(void *) M_nro_BigBoss_removeSleepEff,
	(void *) M_nro_Mob_GetFrame,
	(void *) M_nro_Mob_isTypeNewMod_R_boolean,
	(void *) M_nro_BigBoss_getDataB2,
	(void *) M_nro_BigBoss_getDataB,
	(void *) M_nro_BigBoss_setFly,
	(void *) M_nro_BigBoss_a_Array1_nro_Char_Array1_long_byte,
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
	{ "getDataB2", "()V" },
	{ "getDataB", "()V" },
	{ "setFly", "()V" },
	{ "a", "([Lnro/Char;[JB)V" },
};

static jclass interfaces[] { &class_nro_IMapObject, };

static FieldMetadata fields[] {
	{ "vMobMove", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BigBoss_vMobMove, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "data", &class_nro_EffectData, (intptr_t) &SF_nro_BigBoss_data, "Lnro/EffectData;", 10 },
	{ "xTo", &class_int, offsetof(nro_BigBoss, F_xTo), "I", 1 },
	{ "haftBody", &class_boolean, offsetof(nro_BigBoss, F_haftBody), "Z", 1 },
	{ "xSd", &class_int, offsetof(nro_BigBoss, F_xSd), "I", 2 },
	{ "ySd", &class_int, offsetof(nro_BigBoss, F_ySd), "I", 2 },
	{ "isOutMap", &class_boolean, offsetof(nro_BigBoss, F_isOutMap), "Z", 2 },
	{ "wCount", &class_int, offsetof(nro_BigBoss, F_wCount), "I", 2 },
	{ "isShadown", &class_boolean, offsetof(nro_BigBoss, F_isShadown), "Z", 2 },
	{ "tick", &class_int, offsetof(nro_BigBoss, F_tick), "I", 2 },
	{ "frame", &class_int, offsetof(nro_BigBoss, F_frame), "I", 2 },
	{ "wy", &class_boolean, offsetof(nro_BigBoss, F_wy), "Z", 2 },
	{ "flyUp", &class_boolean, offsetof(nro_BigBoss, F_flyUp), "Z", 2 },
	{ "dy", &class_int, offsetof(nro_BigBoss, F_dy), "I", 2 },
	{ "typeSuperEff", &class_int, offsetof(nro_BigBoss, F_typeSuperEff), "I", 2 },
	{ "charAttack", getArrayClass(&class_nro_Char, 1), offsetof(nro_BigBoss, F_charAttack), "[Lnro/Char;", 2 },
	{ "dameHP", getArrayClass(&class_long, 1), offsetof(nro_BigBoss, F_dameHP), "[J", 2 },
	{ "type", &class_byte, offsetof(nro_BigBoss, F_type), "B", 2 },
	{ "stand", getArrayClass(&class_int, 1), offsetof(nro_BigBoss, F_stand), "[I", 2 },
	{ "stand_1", getArrayClass(&class_int, 1), offsetof(nro_BigBoss, F_stand_1), "[I", 2 },
	{ "attack1", getArrayClass(&class_int, 1), offsetof(nro_BigBoss, F_attack1), "[I", 2 },
	{ "attack2", getArrayClass(&class_int, 1), offsetof(nro_BigBoss, F_attack2), "[I", 2 },
	{ "attack3", getArrayClass(&class_int, 1), offsetof(nro_BigBoss, F_attack3), "[I", 2 },
	{ "attack2_1", getArrayClass(&class_int, 1), offsetof(nro_BigBoss, F_attack2_1), "[I", 2 },
	{ "attack3_1", getArrayClass(&class_int, 1), offsetof(nro_BigBoss, F_attack3_1), "[I", 2 },
	{ "fly", getArrayClass(&class_int, 1), offsetof(nro_BigBoss, F_fly), "[I", 2 },
	{ "hitground", getArrayClass(&class_int, 1), offsetof(nro_BigBoss, F_hitground), "[I", 2 },
	{ "changePos", &class_boolean, offsetof(nro_BigBoss, F_changePos), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "getDataB2", (intptr_t) M_nro_BigBoss_getDataB2, VTABLE_nro_BigBoss_getDataB2, "()V", 17 },
	{ "getDataB", (intptr_t) M_nro_BigBoss_getDataB, VTABLE_nro_BigBoss_getDataB, "()V", 17 },
	{ "setBody", (intptr_t) M_nro_BigBoss_setBody_short, VTABLE_nro_BigBoss_setBody_short, "(S)V", 17 },
	{ "clearBody", (intptr_t) M_nro_BigBoss_clearBody, VTABLE_nro_BigBoss_clearBody, "()V", 17 },
	{ "<init>", (intptr_t) init_nro_BigBoss_int_short_short_int_long_long_int, 0, "(ISSIJJI)V", 1 },
	{ "checkFrameTick", (intptr_t) M_nro_BigBoss_checkFrameTick_Array1_int, VTABLE_nro_BigBoss_checkFrameTick_Array1_int, "([I)V", 17 },
	{ "update", (intptr_t) M_nro_BigBoss_update, VTABLE_nro_BigBoss_update, "()V", 17 },
	{ "updateInjure", (intptr_t) M_nro_BigBoss_updateInjure, VTABLE_nro_BigBoss_updateInjure, "()V", 17 },
	{ "setAttack", (intptr_t) M_nro_BigBoss_setAttack_nro_Char, VTABLE_nro_BigBoss_setAttack_nro_Char, "(Lnro/Char;)V", 17 },
	{ "isSpecial", (intptr_t) M_nro_BigBoss_isSpecial_R_boolean, VTABLE_nro_BigBoss_isSpecial_R_boolean, "()Z", 16 },
	{ "setFly", (intptr_t) M_nro_BigBoss_setFly, VTABLE_nro_BigBoss_setFly, "()V", 17 },
	{ "a", (intptr_t) M_nro_BigBoss_a_Array1_nro_Char_Array1_long_byte, VTABLE_nro_BigBoss_a_Array1_nro_Char_Array1_long_byte, "([Lnro/Char;[JB)V", 17 },
	{ "updateMobAttack", (intptr_t) M_nro_BigBoss_updateMobAttack, VTABLE_nro_BigBoss_updateMobAttack, "()V", 17 },
	{ "updateMobWalk", (intptr_t) M_nro_BigBoss_updateMobWalk, VTABLE_nro_BigBoss_updateMobWalk, "()V", 17 },
	{ "isPaint", (intptr_t) M_nro_BigBoss_isPaint_R_boolean, VTABLE_nro_BigBoss_isPaint_R_boolean, "()Z", 17 },
	{ "isUpdate", (intptr_t) M_nro_BigBoss_isUpdate_R_boolean, VTABLE_nro_BigBoss_isUpdate_R_boolean, "()Z", 17 },
	{ "checkIsBoss", (intptr_t) M_nro_BigBoss_checkIsBoss_R_boolean, VTABLE_nro_BigBoss_checkIsBoss_R_boolean, "()Z", 17 },
	{ "paint", (intptr_t) M_nro_BigBoss_paint_lib_mGraphics, VTABLE_nro_BigBoss_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "startDie", (intptr_t) M_nro_BigBoss_startDie, VTABLE_nro_BigBoss_startDie, "()V", 17 },
	{ "attackOtherMob", (intptr_t) M_nro_BigBoss_attackOtherMob_nro_Mob, VTABLE_nro_BigBoss_attackOtherMob_nro_Mob, "(Lnro/Mob;)V", 17 },
	{ "getX", (intptr_t) M_nro_BigBoss_getX_R_int, VTABLE_nro_BigBoss_getX_R_int, "()I", 17 },
	{ "getY", (intptr_t) M_nro_BigBoss_getY_R_int, VTABLE_nro_BigBoss_getY_R_int, "()I", 17 },
	{ "getH", (intptr_t) M_nro_BigBoss_getH_R_int, VTABLE_nro_BigBoss_getH_R_int, "()I", 17 },
	{ "getW", (intptr_t) M_nro_BigBoss_getW_R_int, VTABLE_nro_BigBoss_getW_R_int, "()I", 17 },
	{ "stopMoving", (intptr_t) M_nro_BigBoss_stopMoving, VTABLE_nro_BigBoss_stopMoving, "()V", 17 },
	{ "isInvisible", (intptr_t) M_nro_BigBoss_isInvisible_R_boolean, VTABLE_nro_BigBoss_isInvisible_R_boolean, "()Z", 17 },
	{ "removeHoldEff", (intptr_t) M_nro_BigBoss_removeHoldEff, VTABLE_nro_BigBoss_removeHoldEff, "()V", 17 },
	{ "removeBlindEff", (intptr_t) M_nro_BigBoss_removeBlindEff, VTABLE_nro_BigBoss_removeBlindEff, "()V", 17 },
	{ "removeSleepEff", (intptr_t) M_nro_BigBoss_removeSleepEff, VTABLE_nro_BigBoss_removeSleepEff, "()V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_BigBoss, 0, "()V", 8 },
};

Class class_nro_BigBoss{
		.nativeName = (intptr_t) "nro/BigBoss",
		.parentClass = (intptr_t) &class_nro_Mob,
		.size = sizeof(nro_BigBoss),
		.classVtable = (intptr_t) vtable_nro_BigBoss,
		.staticInitializer = (intptr_t) clinit_nro_BigBoss,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_BigBoss,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_BigBoss = registerClass(&class_nro_BigBoss);

}

