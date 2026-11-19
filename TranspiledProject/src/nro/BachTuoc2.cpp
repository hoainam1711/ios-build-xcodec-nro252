#include "nro/BachTuoc2.h"
#include "nro/GameScr.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "main/GameCanvas.h"
#include "nro/EffectData.h"
#include "nro/Service.h"
#include "nro/MonsterDart.h"
#include "nro/SmallImage.h"
#include "nro/ChatPopup.h"
#include "nro/BachTuoc2.h"
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

jobject SF_nro_BachTuoc2_shadowBig;
jobject SF_nro_BachTuoc2_isOutMap;

void mark_nro_BachTuoc2(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_BachTuoc2_shadowBig)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BachTuoc2_shadowBig)->clazz)->markFunction)((jobject) SF_nro_BachTuoc2_shadowBig, mark, depth + 1);
		if (SF_nro_BachTuoc2_isOutMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BachTuoc2_isOutMap)->clazz)->markFunction)((jobject) SF_nro_BachTuoc2_isOutMap, mark, depth + 1);
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
	auto self = (nro_BachTuoc2 *) object;
	if (self->F_moveFast)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moveFast)->clazz)->markFunction)((jobject) self->F_moveFast, mark, depth + 1);
	if (self->F_attack1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack1)->clazz)->markFunction)((jobject) self->F_attack1, mark, depth + 1);
	if (self->F_hurt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hurt)->clazz)->markFunction)((jobject) self->F_hurt, mark, depth + 1);
	if (self->F_offset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_offset)->clazz)->markFunction)((jobject) self->F_offset, mark, depth + 1);
	if (self->F_mobz)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mobz)->clazz)->markFunction)((jobject) self->F_mobz, mark, depth + 1);
	if (self->F_av)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_av)->clazz)->markFunction)((jobject) self->F_av, mark, depth + 1);
	if (self->F_frameArr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frameArr)->clazz)->markFunction)((jobject) self->F_frameArr, mark, depth + 1);
}

void M_nro_BachTuoc2_setBody_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:setBody", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(40);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(1));
	LINE_NUMBER(41);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody = (frame[1].i);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_clearBody(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:clearBody", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(0));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_BachTuoc2_int_short_short_int_long_long(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jlong param4, jlong param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BachTuoc2(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].l = param4;
	frame[7].l = param5;
	{
	LINE_NUMBER(48);
	init_nro_Mob(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wy = (jint(1));
	LINE_NUMBER(27);
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
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_hurt = (jref) sp[1].o;
	LINE_NUMBER(49);
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
	frame[9].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject) createArray(ctx, &class_int, (7));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(2));
	frame[9].o = sp[0].o;
	LINE_NUMBER(51);
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
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_offset = (jref) sp[1].o;
	LINE_NUMBER(52);
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
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_mobz = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject) createArray(ctx, &class_int, (24));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (25);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (25);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (28);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (28);
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (18)) = (32);
	ARRAY_ACCESS(jint, sp[0].o, (19)) = (32);
	ARRAY_ACCESS(jint, sp[0].o, (20)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (21)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (22)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (23)) = (jint(1));
	frame[9].o = sp[0].o;
	LINE_NUMBER(54);
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
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_av = (jref) sp[1].o;
	LINE_NUMBER(55);
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
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_frameArr = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(2)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	frame[10].o = sp[0].o;
	LINE_NUMBER(57);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1 = (frame[1].i);
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (frame[2].i) + (20);
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_x = temp0;
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_a = temp0;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp3 = frame[3].i;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_y = temp3;
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_isDontMove = temp3;
	LINE_NUMBER(60);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst = (frame[3].i);
	LINE_NUMBER(61);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (frame[5].l);
	LINE_NUMBER(62);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp = (frame[7].l);
	LINE_NUMBER(63);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId = (frame[4].i);
	LINE_NUMBER(64);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_len = (100);
	LINE_NUMBER(65);
	((func_nro_BachTuoc2_updateHp_bar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BachTuoc2_updateHp_bar])(ctx, (frame[0].o));
	LINE_NUMBER(66);
	((func_nro_BachTuoc2_getDataB) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BachTuoc2_getDataB])(ctx, (frame[0].o));
	LINE_NUMBER(67);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_getDataB(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:getDataB", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(72);
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(74);
	clinit_nro_EffectData(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectData);
	init_nro_EffectData(ctx, sp[0].o);
	clinit_nro_BachTuoc2(ctx);
	SF_nro_BachTuoc2_isOutMap = sp[0].o;
	LINE_NUMBER(75);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (109));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/data"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(78);
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	((func_nro_EffectData_readData2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_readData2_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(79);
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	sp[1].o = (jobject)SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/effectdata/109/img.png"_j))));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	LINE_NUMBER(80);
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_1;
	}
label_10:;
	{
	LINE_NUMBER(81);
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/effectdata/109/img.png"_j))));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(85);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(83);
	frame[2].o = sp[0].o;
	LINE_NUMBER(84);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestModTemplate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestModTemplate_int])(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId));
	}
label_11:;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_nro_BachTuoc2(ctx);
	sp[1].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_w = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(88);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w);
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_nro_BachTuoc2(ctx);
	sp[1].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_h = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:checkFrameTick", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_wt = (((jint)((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_wt) + (jint(1)));
	LINE_NUMBER(94);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(95);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(98);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_fy = ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt)));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_updateSuperEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:updateSuperEff", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	jint temp0 = (jint)((func_nro_BachTuoc2_isUpdate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BachTuoc2_isUpdate_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(106);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(107);
	frame[2].i = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size);
	LINE_NUMBER(108);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wCount = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(109);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_frame = (jint(0));
	LINE_NUMBER(110);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isShadown) <= 0) goto label_7;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wCount), ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isShadown), (jint(2)));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wCount) / (frame[2].i)), (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isShadown) / (frame[2].i)));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(112);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_tick = (jint(1));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(113);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wCount) / (frame[2].i)), (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isShadown) / (frame[2].i)));
	if (temp0 == 0) goto label_11;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wCount), ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isShadown), (jint(2)));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(114);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wCount = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(115);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isShadown = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(116);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(119);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[1].o)))->F_tick) == 0) goto label_7;
	}
	{
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[1].o)))->F_frame) >= (10)) goto label_7;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = frame[1].o;
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_frame = (((jint)((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_frame) + (jint(1)));
	LINE_NUMBER(121);
	sp[0].o = frame[1].o;
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_isShadown = (((jint)((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_isShadown) + (24));
	LINE_NUMBER(122);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[1].o)))->F_wCount), ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[1].o)))->F_isShadown), (jint(2)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(123);
	if ((((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[1].o)))->F_isShadown) % (24)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_isShadown = (((jint)((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_isShadown) - (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[1].o)))->F_isShadown) % (24)));
	goto label_7;
	}
label_7:;
	{
	LINE_NUMBER(131);
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
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_hurt;
	((func_nro_BachTuoc2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(135);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_28;
	}
	{
	LINE_NUMBER(136);
	jint temp0 = 167;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - (25)), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (25)));
	jint temp2 = (jint)SM_nro_Res_random_int_int_R_int(ctx, ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (50)) + (20)), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (50)) + (40)));
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp1, temp2, (jint(1)));
	}
label_28:;
	{
	LINE_NUMBER(139);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_a)) goto label_30;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isDontMove)) goto label_1;
	}
label_30:;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_a) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isDontMove) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	goto label_1;
	}
label_21:;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_hurt;
	((func_nro_BachTuoc2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_a)) goto label_33;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isDontMove)) goto label_34;
	}
label_33:;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_a) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isDontMove) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	}
label_34:;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
	{
	LINE_NUMBER(153);
	((func_nro_BachTuoc2_updateMobAttack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BachTuoc2_updateMobAttack])(ctx, (frame[0].o));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}
label_23:;
	{
	LINE_NUMBER(156);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(157);
	((func_nro_BachTuoc2_updateMobFly) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BachTuoc2_updateMobFly])(ctx, (frame[0].o));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}
label_24:;
	{
	LINE_NUMBER(160);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}
label_25:;
	{
	LINE_NUMBER(163);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1) + (jint(1)));
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1));
	LINE_NUMBER(166);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) < ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst)) goto label_1;
	}
	{
	LINE_NUMBER(167);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst);
	LINE_NUMBER(168);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(169);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}
label_26:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_updateMobFly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:updateMobFly", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_flyUp) == 0) goto label_1;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_stand = (((jint)((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_stand) + (jint(1)));
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) - ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_stand));
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_av;
	((func_nro_BachTuoc2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(185);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) > (-500)) goto label_1;
	}
	{
	LINE_NUMBER(186);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_flyUp = (jint(0));
	LINE_NUMBER(187);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_ty = (jint(1));
	LINE_NUMBER(188);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_stand = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(191);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_ty) == 0) goto label_9;
	}
	{
	LINE_NUMBER(192);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_a);
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_stand = (((jint)((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_stand) + (jint(2)));
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_stand));
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_frameArr;
	((func_nro_BachTuoc2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(196);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst)) goto label_9;
	}
	{
	LINE_NUMBER(197);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst);
	LINE_NUMBER(198);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_ty = (jint(0));
	LINE_NUMBER(199);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_stand = (jint(0));
	LINE_NUMBER(200);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(201);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_shock_scr = (10);
	LINE_NUMBER(202);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isGetFr = (jint(1));
	}
label_9:;
	LINE_NUMBER(205);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_setFly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:setFly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(4));
	LINE_NUMBER(209);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_flyUp = (jint(1));
	LINE_NUMBER(210);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_ty = (jint(0));
	LINE_NUMBER(211);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_stand = (jint(0));
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_updateInjure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:updateInjure", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_setAttack_nro_Char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:setAttack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(218);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (frame[1].o);
	LINE_NUMBER(219);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(220);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(221);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(222);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt = (jint(0));
	LINE_NUMBER(223);
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
	LINE_NUMBER(224);
	frame[2].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx);
	LINE_NUMBER(225);
	frame[3].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cy);
	LINE_NUMBER(226);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v) << (jint(1)))) goto label_11;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) << (jint(1)))) goto label_11;
	}
	{
	LINE_NUMBER(227);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(228);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(230);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	}
label_15:;
	{
	LINE_NUMBER(233);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(235);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_16:;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_BachTuoc2_isSpecial_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:isSpecial", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
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

void M_nro_BachTuoc2_a_Array1_nro_Char_Array1_long_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:a", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(244);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(245);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast = (jref) (frame[1].o);
	LINE_NUMBER(246);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_attack1 = (jref) (frame[2].o);
	LINE_NUMBER(247);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_attack2 = (frame[3].i);
	LINE_NUMBER(248);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt = (jint(0));
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_setAttack_Array1_nro_Char_Array1_long_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:setAttack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(252);
	((func_nro_BachTuoc2_a_Array1_nro_Char_Array1_long_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BachTuoc2_a_Array1_nro_Char_Array1_long_byte])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_updateMobAttack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:updateMobAttack", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_attack2) != 0) goto label_1;
	}
	{
	LINE_NUMBER(258);
	jint temp0 = (jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt;
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_offset;
	if (temp0 != ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_3;
	}
	{
	LINE_NUMBER(259);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_3:;
	{
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
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
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_offset;
	((func_nro_BachTuoc2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_cx) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_cy) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	LINE_NUMBER(266);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_a = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(267);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt) != (8)) goto label_1;
	}
	{
	LINE_NUMBER(268);
	frame[1].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_attack1;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[1].i))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(270);
	jint temp0 = 102;
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cx;
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp1, ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cy), (jint(1)));
	LINE_NUMBER(268);
	INST_IINC(1, 1);
	goto label_13;
	}
label_1:;
	{
	LINE_NUMBER(275);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_attack2) != (jint(1))) goto label_17;
	}
	{
	LINE_NUMBER(276);
	jint temp0 = (jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt;
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_mobz;
	if (temp0 != ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_19;
	}
	{
	LINE_NUMBER(277);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_19:;
	{
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
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
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_mobz;
	((func_nro_BachTuoc2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(282);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt) != (8)) goto label_17;
	}
	{
	LINE_NUMBER(283);
	frame[1].i = (jint(0));
	}
label_26:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_17;
	}
	{
	LINE_NUMBER(284);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_28;
	}
	INST_BIPUSH(45);
	goto label_29;
label_28:;
	INST_BIPUSH(-45);
label_29:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	jint temp1 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (25);
	jint temp2 = jint(1);
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_attack1;
	jlong temp3 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i));
	jlong temp4 = jlong(0);
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	SM_nro_MonsterDart_addMonsterDart_int_int_boolean_long_long_nro_Char_int(ctx, temp0, temp1, temp2, temp3, temp4, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (24));
	LINE_NUMBER(283);
	INST_IINC(1, 1);
	goto label_26;
	}
label_17:;
	{
	LINE_NUMBER(289);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_attack2) != (jint(2))) goto label_31;
	}
	{
	LINE_NUMBER(290);
	jint temp0 = (jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt;
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_av;
	if (temp0 != ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_33;
	}
	{
	LINE_NUMBER(291);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_33:;
	{
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
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
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_av;
	((func_nro_BachTuoc2_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_BachTuoc2_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_cx) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(297);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_a = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(298);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isDontMove = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(299);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt) != (12)) goto label_31;
	}
	{
	LINE_NUMBER(300);
	frame[1].i = (jint(0));
	}
label_43:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_31;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp[1].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_attack1;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[1].i))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(302);
	jint temp0 = 102;
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cx;
	sp[0].o = (jobject)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_moveFast;
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp1, ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cy), (jint(1)));
	LINE_NUMBER(300);
	INST_IINC(1, 1);
	goto label_43;
	}
label_31:;
	LINE_NUMBER(307);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_updateMobWalk(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:updateMobWalk", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(310);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_BachTuoc2_isPaint_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:isPaint", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_1;
	}
	{
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(315);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) <= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW))) goto label_3;
	}
	{
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(317);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_5;
	}
	{
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(319);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH)) + (30))) goto label_7;
	}
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(322);
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

jbool M_nro_BachTuoc2_isUpdate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:isUpdate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
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

jbool M_nro_BachTuoc2_checkIsBoss_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:checkIsBoss", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
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

void M_nro_BachTuoc2_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:paint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(335);
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(336);
	((func_nro_BachTuoc2_getDataB) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_BachTuoc2_getDataB])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(338);
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(339);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isHide) != 0) goto label_3;
	}
	{
	LINE_NUMBER(340);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isMafuba) == 0) goto label_6;
	}
	{
	LINE_NUMBER(341);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_8;
	}
	{
	LINE_NUMBER(342);
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_fy;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xMFB;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yMFB;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_10;
	}
	INST_ICONST(0);
	goto label_11;
label_10:;
	INST_ICONST(1);
label_11:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_3;
	}
label_8:;
	{
	LINE_NUMBER(344);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xMFB;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yMFB;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_12;
	}
	INST_ICONST(0);
	goto label_13;
label_12:;
	INST_ICONST(2);
label_13:;
	{
	sp -= 5;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, (33));
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(347);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wy) == 0) goto label_14;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_14;
	}
	{
	LINE_NUMBER(348);
	sp[0].o = frame[1].o;
	clinit_nro_BachTuoc2(ctx);
	sp[1].o = (jobject)SF_nro_BachTuoc2_shadowBig;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wCount), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst), (jint(3)));
	LINE_NUMBER(349);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) + ((jint(2)) * (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY))));
	}
label_14:;
	{
	LINE_NUMBER(352);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY));
	LINE_NUMBER(353);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_18;
	}
	{
	LINE_NUMBER(354);
	clinit_nro_BachTuoc2(ctx);
	sp[0].o = (jobject)SF_nro_BachTuoc2_isOutMap;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_fy;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_20;
	}
	INST_ICONST(0);
	goto label_21;
label_20:;
	INST_ICONST(1);
label_21:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_22;
	}
label_18:;
	{
	LINE_NUMBER(356);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (9);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_23;
	}
	INST_ICONST(0);
	goto label_24;
label_23:;
	INST_ICONST(2);
label_24:;
	INST_BIPUSH(33);
	POP_N(6); // Pop method args
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i);
label_22:;
	{
	LINE_NUMBER(359);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (-(clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)));
	LINE_NUMBER(360);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_imgHPtem;
	jint temp0 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(362);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_27;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == (jint(1))) goto label_27;
	}
	{
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur), (jlong(0)))) <= 0) goto label_27;
	}
	clinit_nro_Mob(ctx);
	(sp++)->o = SF_nro_Mob_imgHP;
	if ((--sp)->o == nullptr) goto label_27;
	{
	LINE_NUMBER(363);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_27;
	}
	{
	LINE_NUMBER(364);
	frame[3].i = (jint(((((((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur) * (jlong(100ll))) / ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp)) / (jlong(10ll))) - (jlong(1)))));
	LINE_NUMBER(365);
	if ((frame[3].i) >= 0) goto label_31;
	}
	INST_ICONST(0);
	INST_ISTORE(3);
label_31:;
	{
	LINE_NUMBER(366);
	if ((frame[3].i) <= (9)) goto label_32;
	}
	INST_BIPUSH(9);
	INST_ISTORE(3);
label_32:;
	{
	LINE_NUMBER(367);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((6) * ((9) - (frame[3].i))), (9), (6), (jint(0)), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h)) - (10)), ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_BOTTOM) | (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_HCENTER)));
	}
label_27:;
	{
	LINE_NUMBER(392);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isGetFr) == 0) goto label_3;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_move = (((jint)((nro_BachTuoc2 *) NULL_CHECK(sp[0].o))->F_move) + (jint(1)));
	LINE_NUMBER(394);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_attack2) != (jint(2))) goto label_35;
	}
	INST_BIPUSH(19);
	goto label_36;
label_35:;
	INST_BIPUSH(22);
label_36:;
	{
	sp -= 3;
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, sp[2].i, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_move) * (50))), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) + (25)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	LINE_NUMBER(395);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_attack2) != (jint(2))) goto label_38;
	}
	INST_BIPUSH(19);
	goto label_39;
label_38:;
	INST_BIPUSH(22);
label_39:;
	{
	sp -= 3;
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, sp[2].i, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_move) * (50))), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) + (25)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	LINE_NUMBER(396);
	if (((jint)((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_move) != (50)) goto label_3;
	}
	{
	LINE_NUMBER(397);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_move = (jint(0));
	LINE_NUMBER(398);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_isGetFr = (jint(0));
	}
label_3:;
	LINE_NUMBER(405);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_startDie(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:startDie", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (jlong(0));
	LINE_NUMBER(409);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (jlong(0));
	LINE_NUMBER(410);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(1));
	LINE_NUMBER(411);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (-3);
	LINE_NUMBER(412);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (-((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir));
	LINE_NUMBER(413);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_attackOtherMob_nro_Mob(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:attackOtherMob", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(417);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(418);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(419);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(420);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(421);
	((nro_BachTuoc2 *) NULL_CHECK((frame[0].o)))->F_wt = (jint(0));
	LINE_NUMBER(422);
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
	LINE_NUMBER(423);
	frame[2].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(424);
	frame[3].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(425);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v) << (jint(1)))) goto label_11;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) << (jint(1)))) goto label_11;
	}
	{
	LINE_NUMBER(426);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(427);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(429);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	}
label_15:;
	{
	LINE_NUMBER(432);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(434);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_16:;
	LINE_NUMBER(436);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_nro_BachTuoc2_getX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jint M_nro_BachTuoc2_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:getY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (50));
	}

	popStackFrame(ctx);
}

jint M_nro_BachTuoc2_getH_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:getH", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return (40);
	}

	popStackFrame(ctx);
}

jint M_nro_BachTuoc2_getW_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:getW", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return (50);
	}

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_stopMoving(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:stopMoving", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(455);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) != (jint(5))) goto label_1;
	}
	{
	LINE_NUMBER(456);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(457);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Mob *) NULL_CHECK(sp[2].o))->F_p3 = temp0;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_p2 = temp0;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = temp0;
	}
label_1:;
	LINE_NUMBER(460);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_BachTuoc2_isInvisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:isInvisible", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(463);
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

void M_nro_BachTuoc2_removeHoldEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:removeHoldEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(467);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_1;
	}
	{
	LINE_NUMBER(468);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID = (jint(0));
	}
label_1:;
	LINE_NUMBER(471);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_removeBlindEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:removeBlindEff", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(474);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BachTuoc2_removeSleepEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:removeSleepEff", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(477);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_BachTuoc2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Mob(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BachTuoc2:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BachTuoc2(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/shadowBig.png"_j))));
	clinit_nro_BachTuoc2(ctx);
	SF_nro_BachTuoc2_shadowBig = sp[0].o;
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dmobHP.png"_j))));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_BachTuoc2[] {
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
	(void *) M_nro_BachTuoc2_getX_R_int,
	(void *) M_nro_BachTuoc2_getY_R_int,
	(void *) M_nro_BachTuoc2_getW_R_int,
	(void *) M_nro_BachTuoc2_getH_R_int,
	(void *) M_nro_BachTuoc2_stopMoving,
	(void *) M_nro_BachTuoc2_isInvisible_R_boolean,
	(void *) M_nro_Mob_isBigBoss_R_boolean,
	(void *) M_nro_Mob_getData,
	(void *) M_nro_BachTuoc2_setBody_short,
	(void *) M_nro_BachTuoc2_clearBody,
	(void *) M_nro_BachTuoc2_checkFrameTick_Array1_int,
	(void *) M_nro_BachTuoc2_updateSuperEff,
	(void *) M_nro_BachTuoc2_update,
	(void *) M_nro_BachTuoc2_updateInjure,
	(void *) M_nro_BachTuoc2_setAttack_nro_Char,
	(void *) M_nro_BachTuoc2_isSpecial_R_boolean,
	(void *) M_nro_Mob_isNewModStand_R_boolean,
	(void *) M_nro_Mob_isNewMod_R_boolean,
	(void *) M_nro_BachTuoc2_updateMobAttack,
	(void *) M_nro_BachTuoc2_updateMobWalk,
	(void *) M_nro_Mob_getTemplate_R_nro_MobTemplate,
	(void *) M_nro_BachTuoc2_isPaint_R_boolean,
	(void *) M_nro_BachTuoc2_isUpdate_R_boolean,
	(void *) M_nro_BachTuoc2_checkIsBoss_R_boolean,
	(void *) M_nro_Mob_updateHp_bar,
	(void *) M_nro_Mob_paintShadow_lib_mGraphics,
	(void *) M_nro_BachTuoc2_paint_lib_mGraphics,
	(void *) M_nro_BachTuoc2_startDie,
	(void *) M_nro_BachTuoc2_attackOtherMob_nro_Mob,
	(void *) M_nro_BachTuoc2_removeHoldEff,
	(void *) M_nro_BachTuoc2_removeBlindEff,
	(void *) M_nro_BachTuoc2_removeSleepEff,
	(void *) M_nro_Mob_GetFrame,
	(void *) M_nro_Mob_isTypeNewMod_R_boolean,
	(void *) M_nro_BachTuoc2_getDataB,
	(void *) M_nro_BachTuoc2_updateMobFly,
	(void *) M_nro_BachTuoc2_setFly,
	(void *) M_nro_BachTuoc2_a_Array1_nro_Char_Array1_long_byte,
	(void *) M_nro_BachTuoc2_setAttack_Array1_nro_Char_Array1_long_byte,
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
	{ "updateMobFly", "()V" },
	{ "setFly", "()V" },
	{ "a", "([Lnro/Char;[JB)V" },
	{ "setAttack", "([Lnro/Char;[JB)V" },
};

static jclass interfaces[] { &class_nro_IMapObject, };

static FieldMetadata fields[] {
	{ "shadowBig", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BachTuoc2_shadowBig, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "isOutMap", &class_nro_EffectData, (intptr_t) &SF_nro_BachTuoc2_isOutMap, "Lnro/EffectData;", 10 },
	{ "a", &class_int, offsetof(nro_BachTuoc2, F_a), "I", 1 },
	{ "isDontMove", &class_int, offsetof(nro_BachTuoc2, F_isDontMove), "I", 1 },
	{ "wCount", &class_int, offsetof(nro_BachTuoc2, F_wCount), "I", 2 },
	{ "isShadown", &class_int, offsetof(nro_BachTuoc2, F_isShadown), "I", 2 },
	{ "tick", &class_boolean, offsetof(nro_BachTuoc2, F_tick), "Z", 2 },
	{ "frame", &class_int, offsetof(nro_BachTuoc2, F_frame), "I", 2 },
	{ "wy", &class_boolean, offsetof(nro_BachTuoc2, F_wy), "Z", 2 },
	{ "wt", &class_int, offsetof(nro_BachTuoc2, F_wt), "I", 2 },
	{ "fy", &class_int, offsetof(nro_BachTuoc2, F_fy), "I", 2 },
	{ "ty", &class_boolean, offsetof(nro_BachTuoc2, F_ty), "Z", 2 },
	{ "stand", &class_int, offsetof(nro_BachTuoc2, F_stand), "I", 2 },
	{ "move", &class_int, offsetof(nro_BachTuoc2, F_move), "I", 2 },
	{ "moveFast", getArrayClass(&class_nro_Char, 1), offsetof(nro_BachTuoc2, F_moveFast), "[Lnro/Char;", 2 },
	{ "attack1", getArrayClass(&class_long, 1), offsetof(nro_BachTuoc2, F_attack1), "[J", 2 },
	{ "attack2", &class_byte, offsetof(nro_BachTuoc2, F_attack2), "B", 2 },
	{ "hurt", getArrayClass(&class_int, 1), offsetof(nro_BachTuoc2, F_hurt), "[I", 2 },
	{ "offset", getArrayClass(&class_int, 1), offsetof(nro_BachTuoc2, F_offset), "[I", 2 },
	{ "mobz", getArrayClass(&class_int, 1), offsetof(nro_BachTuoc2, F_mobz), "[I", 2 },
	{ "av", getArrayClass(&class_int, 1), offsetof(nro_BachTuoc2, F_av), "[I", 2 },
	{ "frameArr", getArrayClass(&class_int, 1), offsetof(nro_BachTuoc2, F_frameArr), "[I", 2 },
	{ "isGetFr", &class_boolean, offsetof(nro_BachTuoc2, F_isGetFr), "Z", 2 },
	{ "flyUp", &class_boolean, offsetof(nro_BachTuoc2, F_flyUp), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "setBody", (intptr_t) M_nro_BachTuoc2_setBody_short, VTABLE_nro_BachTuoc2_setBody_short, "(S)V", 17 },
	{ "clearBody", (intptr_t) M_nro_BachTuoc2_clearBody, VTABLE_nro_BachTuoc2_clearBody, "()V", 17 },
	{ "<init>", (intptr_t) init_nro_BachTuoc2_int_short_short_int_long_long, 0, "(ISSIJJ)V", 1 },
	{ "getDataB", (intptr_t) M_nro_BachTuoc2_getDataB, VTABLE_nro_BachTuoc2_getDataB, "()V", 1 },
	{ "checkFrameTick", (intptr_t) M_nro_BachTuoc2_checkFrameTick_Array1_int, VTABLE_nro_BachTuoc2_checkFrameTick_Array1_int, "([I)V", 17 },
	{ "updateSuperEff", (intptr_t) M_nro_BachTuoc2_updateSuperEff, VTABLE_nro_BachTuoc2_updateSuperEff, "()V", 17 },
	{ "update", (intptr_t) M_nro_BachTuoc2_update, VTABLE_nro_BachTuoc2_update, "()V", 17 },
	{ "updateMobFly", (intptr_t) M_nro_BachTuoc2_updateMobFly, VTABLE_nro_BachTuoc2_updateMobFly, "()V", 1 },
	{ "setFly", (intptr_t) M_nro_BachTuoc2_setFly, VTABLE_nro_BachTuoc2_setFly, "()V", 1 },
	{ "updateInjure", (intptr_t) M_nro_BachTuoc2_updateInjure, VTABLE_nro_BachTuoc2_updateInjure, "()V", 17 },
	{ "setAttack", (intptr_t) M_nro_BachTuoc2_setAttack_nro_Char, VTABLE_nro_BachTuoc2_setAttack_nro_Char, "(Lnro/Char;)V", 17 },
	{ "isSpecial", (intptr_t) M_nro_BachTuoc2_isSpecial_R_boolean, VTABLE_nro_BachTuoc2_isSpecial_R_boolean, "()Z", 16 },
	{ "a", (intptr_t) M_nro_BachTuoc2_a_Array1_nro_Char_Array1_long_byte, VTABLE_nro_BachTuoc2_a_Array1_nro_Char_Array1_long_byte, "([Lnro/Char;[JB)V", 17 },
	{ "setAttack", (intptr_t) M_nro_BachTuoc2_setAttack_Array1_nro_Char_Array1_long_byte, VTABLE_nro_BachTuoc2_setAttack_Array1_nro_Char_Array1_long_byte, "([Lnro/Char;[JB)V", 17 },
	{ "updateMobAttack", (intptr_t) M_nro_BachTuoc2_updateMobAttack, VTABLE_nro_BachTuoc2_updateMobAttack, "()V", 17 },
	{ "updateMobWalk", (intptr_t) M_nro_BachTuoc2_updateMobWalk, VTABLE_nro_BachTuoc2_updateMobWalk, "()V", 17 },
	{ "isPaint", (intptr_t) M_nro_BachTuoc2_isPaint_R_boolean, VTABLE_nro_BachTuoc2_isPaint_R_boolean, "()Z", 17 },
	{ "isUpdate", (intptr_t) M_nro_BachTuoc2_isUpdate_R_boolean, VTABLE_nro_BachTuoc2_isUpdate_R_boolean, "()Z", 17 },
	{ "checkIsBoss", (intptr_t) M_nro_BachTuoc2_checkIsBoss_R_boolean, VTABLE_nro_BachTuoc2_checkIsBoss_R_boolean, "()Z", 17 },
	{ "paint", (intptr_t) M_nro_BachTuoc2_paint_lib_mGraphics, VTABLE_nro_BachTuoc2_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "startDie", (intptr_t) M_nro_BachTuoc2_startDie, VTABLE_nro_BachTuoc2_startDie, "()V", 17 },
	{ "attackOtherMob", (intptr_t) M_nro_BachTuoc2_attackOtherMob_nro_Mob, VTABLE_nro_BachTuoc2_attackOtherMob_nro_Mob, "(Lnro/Mob;)V", 17 },
	{ "getX", (intptr_t) M_nro_BachTuoc2_getX_R_int, VTABLE_nro_BachTuoc2_getX_R_int, "()I", 17 },
	{ "getY", (intptr_t) M_nro_BachTuoc2_getY_R_int, VTABLE_nro_BachTuoc2_getY_R_int, "()I", 17 },
	{ "getH", (intptr_t) M_nro_BachTuoc2_getH_R_int, VTABLE_nro_BachTuoc2_getH_R_int, "()I", 17 },
	{ "getW", (intptr_t) M_nro_BachTuoc2_getW_R_int, VTABLE_nro_BachTuoc2_getW_R_int, "()I", 17 },
	{ "stopMoving", (intptr_t) M_nro_BachTuoc2_stopMoving, VTABLE_nro_BachTuoc2_stopMoving, "()V", 17 },
	{ "isInvisible", (intptr_t) M_nro_BachTuoc2_isInvisible_R_boolean, VTABLE_nro_BachTuoc2_isInvisible_R_boolean, "()Z", 17 },
	{ "removeHoldEff", (intptr_t) M_nro_BachTuoc2_removeHoldEff, VTABLE_nro_BachTuoc2_removeHoldEff, "()V", 17 },
	{ "removeBlindEff", (intptr_t) M_nro_BachTuoc2_removeBlindEff, VTABLE_nro_BachTuoc2_removeBlindEff, "()V", 17 },
	{ "removeSleepEff", (intptr_t) M_nro_BachTuoc2_removeSleepEff, VTABLE_nro_BachTuoc2_removeSleepEff, "()V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_BachTuoc2, 0, "()V", 8 },
};

Class class_nro_BachTuoc2{
		.nativeName = (intptr_t) "nro/BachTuoc2",
		.parentClass = (intptr_t) &class_nro_Mob,
		.size = sizeof(nro_BachTuoc2),
		.classVtable = (intptr_t) vtable_nro_BachTuoc2,
		.staticInitializer = (intptr_t) clinit_nro_BachTuoc2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_BachTuoc2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 32,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 50,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_BachTuoc2 = registerClass(&class_nro_BachTuoc2);

}

