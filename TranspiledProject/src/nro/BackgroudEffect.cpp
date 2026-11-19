#include "nro/BackgroudEffect.h"
#include "nro/GameScr.h"
#include "java/lang/Exception.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/SmallImage.h"
#include "java/lang/Object.h"
#include "nro/BackgroudEffect.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/MyVector.h"
#include "nro/Teleport.h"
#include "nro/Res.h"
#include "nro/Small.h"
#include "nro/mScreen.h"
#include "lib/mSystem.h"
#include "nro/TileMap.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jobject SF_nro_BackgroudEffect_vBgEffect;
jobject SF_nro_BackgroudEffect_wP;
jobject SF_nro_BackgroudEffect_imgSnow;
jobject SF_nro_BackgroudEffect_imgHatMua;
jobject SF_nro_BackgroudEffect_imgMua1;
jobject SF_nro_BackgroudEffect_imgMua2;
jobject SF_nro_BackgroudEffect_imgSao;
jobject SF_nro_BackgroudEffect_imgLacay;
jobject SF_nro_BackgroudEffect_imgShip;
jobject SF_nro_BackgroudEffect_imgFire1;
jint SF_nro_BackgroudEffect_L;
jobject SF_nro_BackgroudEffect_water1;
jobject SF_nro_BackgroudEffect_water2;
jobject SF_nro_BackgroudEffect_imgChamTron1;
jobject SF_nro_BackgroudEffect_imgChamTron2;
jshort SF_nro_BackgroudEffect_id_water1;
jobject SF_nro_BackgroudEffect_water3;
jbool SF_nro_BackgroudEffect_isFog;
jbool SF_nro_BackgroudEffect_isPaintFar;
jint SF_nro_BackgroudEffect_nCloud;
jobject SF_nro_BackgroudEffect_imgCloud1;
jobject SF_nro_BackgroudEffect_imgFog;
jint SF_nro_BackgroudEffect_cloudw;
jint SF_nro_BackgroudEffect_xfog;
jint SF_nro_BackgroudEffect_yfog;
jint SF_nro_BackgroudEffect_fogw;

void mark_nro_BackgroudEffect(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_BackgroudEffect_vBgEffect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_vBgEffect)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_vBgEffect, mark, depth + 1);
		if (SF_nro_BackgroudEffect_wP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_wP)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_wP, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgSnow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgSnow)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgSnow, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgHatMua)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgHatMua)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgHatMua, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgMua1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgMua1)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgMua1, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgMua2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgMua2)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgMua2, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgSao)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgSao)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgSao, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgLacay)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgLacay)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgLacay, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgShip)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgShip)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgShip, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgFire1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgFire1)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgFire1, mark, depth + 1);
		if (SF_nro_BackgroudEffect_water1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_water1)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_water1, mark, depth + 1);
		if (SF_nro_BackgroudEffect_water2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_water2)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_water2, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgChamTron1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgChamTron1)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgChamTron1, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgChamTron2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgChamTron2)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgChamTron2, mark, depth + 1);
		if (SF_nro_BackgroudEffect_water3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_water3)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_water3, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgCloud1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgCloud1)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgCloud1, mark, depth + 1);
		if (SF_nro_BackgroudEffect_imgFog)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BackgroudEffect_imgFog)->clazz)->markFunction)((jobject) SF_nro_BackgroudEffect_imgFog, mark, depth + 1);
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
	auto self = (nro_BackgroudEffect *) object;
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_vx)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vx)->clazz)->markFunction)((jobject) self->F_vx, mark, depth + 1);
	if (self->F_vy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vy)->clazz)->markFunction)((jobject) self->F_vy, mark, depth + 1);
	if (self->F_imgFire2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgFire2)->clazz)->markFunction)((jobject) self->F_imgFire2, mark, depth + 1);
	if (self->F_isRainEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_isRainEffect)->clazz)->markFunction)((jobject) self->F_isRainEffect, mark, depth + 1);
	if (self->F_tick)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tick)->clazz)->markFunction)((jobject) self->F_tick, mark, depth + 1);
	if (self->F_frame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frame)->clazz)->markFunction)((jobject) self->F_frame, mark, depth + 1);
	if (self->F_activeEff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_activeEff)->clazz)->markFunction)((jobject) self->F_activeEff, mark, depth + 1);
	if (self->F_t)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_t)->clazz)->markFunction)((jobject) self->F_t, mark, depth + 1);
	if (self->F_dem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dem)->clazz)->markFunction)((jobject) self->F_dem, mark, depth + 1);
}

void SM_nro_BackgroudEffect_loadWaterImages(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:loadWaterImages", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	{
	LINE_NUMBER(64);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_water1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dwater1.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_water1 = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(67);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_water2;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dwater2.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_water2 = sp[0].o;
	}
label_3:;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_clearImage(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:clearImage", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	{
	LINE_NUMBER(73);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_county = (jint(0));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_nro_BackgroudEffect_isHaveRain_R_boolean(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:isHaveRain", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	{
	LINE_NUMBER(77);
	frame[0].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(79);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = checkCast(ctx, &class_nro_BackgroudEffect, sp[0].o);
	frame[1].o = sp[0].o;
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_typeEff) == 0) goto label_5;
	}
	{
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_typeEff) != (12)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(77);
	INST_IINC(0, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void init_nro_BackgroudEffect_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(87);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (6));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_t = (jref) sp[1].o;
	LINE_NUMBER(88);
	((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff = (frame[1].i);
	LINE_NUMBER(90);
	switch(((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff)) {
		case 0: goto label_4;
		case 1: goto label_5;
		case 2: goto label_5;
		case 3: goto label_6;
		case 4: goto label_7;
		case 5: goto label_5;
		case 6: goto label_5;
		case 7: goto label_5;
		case 8: goto label_8;
		case 9: goto label_9;
		case 10: goto label_10;
		case 11: goto label_5;
		case 12: goto label_4;
		case 13: goto label_11;
		case 14: goto label_12;
		case 15: goto label_5;
		default: goto label_13;
	}
	}
label_4:;
	{
	LINE_NUMBER(93);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgSnow;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/mua.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgSnow = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(97);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgHatMua;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/mua1.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgHatMua = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(101);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgMua1;
	if (sp[0].o != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/mua2.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgMua1 = sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(3))), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_sum = temp0;
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_x = (jref) sp[1].o;
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_y = (jref) sp[1].o;
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_vx = (jref) sp[1].o;
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_vy = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_imgFire2 = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_frame = (jref) sp[1].o;
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_tick = (jref) sp[1].o;
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_isRainEffect = (jref) sp[1].o;
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_activeEff = (jref) sp[1].o;
	LINE_NUMBER(116);
	frame[2].i = (jint(0));
	}
label_30:;
	{
	if ((frame[2].i) >= ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum)) goto label_31;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-10), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) + (100)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = frame[2].i;
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-10), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) + (300)));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp4 = frame[2].i;
	jint temp5 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, temp4) = temp5;
	LINE_NUMBER(120);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_vx;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (-12);
	LINE_NUMBER(121);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_vy;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (12);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_imgFire2;
	jint temp6 = frame[2].i;
	jint temp7 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, temp6) = temp7;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_isRainEffect;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)) = (jint(0));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_imgFire2;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) != (jint(2))) goto label_40;
	}
	{
	if (((frame[2].i) % (jint(2))) != 0) goto label_40;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_isRainEffect;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)) = (jint(1));
	}
label_40:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_activeEff;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)) = (jint(0));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_tick;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(116);
	INST_IINC(2, 1);
	goto label_30;
	}
label_31:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(140);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgSao;
	if (sp[0].o == nullptr) goto label_44;
	}
	clinit_nro_SmallImage(ctx);
	(sp++)->o = SF_nro_SmallImage_imgNew;
	if ((--sp)->o == nullptr) goto label_45;
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (11120)) goto label_45;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (11120))) == nullptr) goto label_45;
	}
	{
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgSao;
	clinit_nro_SmallImage(ctx);
	sp[1].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[1].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (11120)))))->F_img;
	if (sp[0].o == sp[1].o) goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(141);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgSao;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(142);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgSao = (jobject(nullptr));
	}
label_44:;
	{
	LINE_NUMBER(144);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (jint(1))) goto label_47;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/lacay.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgSao = sp[0].o;
	LINE_NUMBER(146);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_L = (10);
	}
label_47:;
	{
	LINE_NUMBER(149);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (jint(2))) goto label_50;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/lacay2.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgSao = sp[0].o;
	LINE_NUMBER(151);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_L = (18);
	}
label_50:;
	{
	LINE_NUMBER(154);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (jint(5))) goto label_53;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/lacay3.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgSao = sp[0].o;
	LINE_NUMBER(156);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_L = (14);
	}
label_53:;
	{
	LINE_NUMBER(159);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (6)) goto label_56;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/lacay4.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgSao = sp[0].o;
	LINE_NUMBER(161);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_L = (14);
	}
label_56:;
	{
	LINE_NUMBER(164);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (7)) goto label_59;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/lacay5.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgSao = sp[0].o;
	LINE_NUMBER(166);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_L = (12);
	}
label_59:;
	{
	LINE_NUMBER(169);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (11)) goto label_62;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/tuyet.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgSao = sp[0].o;
	}
label_62:;
	{
	LINE_NUMBER(173);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (15)) goto label_64;
	}
	{
	LINE_NUMBER(174);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (11120))) != nullptr) goto label_66;
	}
	{
	LINE_NUMBER(175);
	SM_nro_SmallImage_createImage_int(ctx, (11120));
	}
label_66:;
	{
	LINE_NUMBER(178);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_L = (16);
	}
label_64:;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (15), (25));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_sum = temp0;
	LINE_NUMBER(182);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (11)) goto label_69;
	}
	{
	LINE_NUMBER(183);
	((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum = (100);
	}
label_69:;
	{
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_x = (jref) sp[1].o;
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_y = (jref) sp[1].o;
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_vx = (jref) sp[1].o;
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_vy = (jref) sp[1].o;
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_frame = (jref) sp[1].o;
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_tick = (jref) sp[1].o;
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_activeEff = (jref) sp[1].o;
	LINE_NUMBER(194);
	frame[2].i = (jint(0));
	}
label_78:;
	{
	if ((frame[2].i) >= ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum)) goto label_79;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-10), ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) + (10)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(196);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = frame[2].i;
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxh));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	LINE_NUMBER(197);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_tick;
	jint temp4 = frame[2].i;
	jint temp5 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, temp4) = temp5;
	LINE_NUMBER(198);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp6 = frame[2].i;
	jint temp7 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, temp6) = temp7;
	LINE_NUMBER(199);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_vx;
	jint temp8 = frame[2].i;
	jint temp9 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-3), (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, temp8) = temp9;
	LINE_NUMBER(200);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_vy;
	jint temp10 = frame[2].i;
	jint temp11 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, temp10) = temp11;
	LINE_NUMBER(201);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (11)) goto label_87;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_tick;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(203);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_vx;
	jint temp2 = frame[2].i;
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(3)));
	jint temp4 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp3);
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp4;
	LINE_NUMBER(204);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_vy;
	jint temp5 = frame[2].i;
	jint temp6 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(3)));
	jint temp7 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp6);
	ARRAY_ACCESS(jint, sp[0].o, temp5) = temp7;
	}
label_87:;
	{
	LINE_NUMBER(207);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (15)) goto label_91;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_tick;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(209);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_vx;
	jint temp2 = frame[2].i;
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(3)));
	jint temp4 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp3);
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp4;
	LINE_NUMBER(210);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_vy;
	jint temp5 = frame[2].i;
	jint temp6 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(3)));
	jint temp7 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp6);
	ARRAY_ACCESS(jint, sp[0].o, temp5) = temp7;
	}
label_91:;
	{
	LINE_NUMBER(194);
	INST_IINC(2, 1);
	goto label_78;
	}
label_79:;
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(216);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isBoltEff = (jint(1));
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(5)), (10));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_sum = temp0;
	LINE_NUMBER(220);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgMua2;
	if (sp[0].o != nullptr) goto label_97;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/sao.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgMua2 = sp[0].o;
	}
label_97:;
	{
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_x = (jref) sp[1].o;
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_y = (jref) sp[1].o;
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_tick = (jref) sp[1].o;
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_frame = (jref) sp[1].o;
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_dem = (jref) sp[1].o;
	LINE_NUMBER(230);
	frame[2].i = (jint(0));
	}
label_104:;
	{
	if ((frame[2].i) >= ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_sum)) goto label_105;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(232);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = frame[2].i;
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (50));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	LINE_NUMBER(233);
	if (((frame[2].i) % (jint(2))) != 0) goto label_109;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_dem;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (jint(0));
	goto label_111;
	}
label_109:;
	{
	LINE_NUMBER(235);
	if (((frame[2].i) % (jint(3))) != 0) goto label_112;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_dem;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (jint(1));
	goto label_111;
	}
label_112:;
	{
	LINE_NUMBER(237);
	if (((frame[2].i) % (jint(4))) != 0) goto label_114;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_dem;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (jint(2));
	goto label_111;
	}
label_114:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_dem;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (jint(3));
	}
label_111:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (10));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(230);
	INST_IINC(2, 1);
	goto label_104;
	}
label_105:;
	LINE_NUMBER(246);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (100), (300));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_tStart = temp0;
	LINE_NUMBER(249);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgLacay;
	if (sp[0].o != nullptr) goto label_118;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/ship.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgLacay = sp[0].o;
	}
label_118:;
	{
	LINE_NUMBER(253);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgShip;
	if (sp[0].o != nullptr) goto label_120;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/fire1.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgShip = sp[0].o;
	}
label_120:;
	{
	LINE_NUMBER(257);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgFire1;
	if (sp[0].o != nullptr) goto label_122;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/fire2.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgFire1 = sp[0].o;
	}
label_122:;
	{
	LINE_NUMBER(261);
	((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_isFly = (jint(0));
	LINE_NUMBER(262);
	M_nro_BackgroudEffect_e(ctx, (frame[0].o));
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return;
	}
label_9:;
	{
	LINE_NUMBER(265);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgChamTron1;
	if (sp[0].o != nullptr) goto label_126;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/cham-tron1.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgChamTron1 = sp[0].o;
	}
label_126:;
	{
	LINE_NUMBER(269);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgChamTron2;
	if (sp[0].o != nullptr) goto label_128;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/cham-tron2.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgChamTron2 = sp[0].o;
	}
label_128:;
	{
	LINE_NUMBER(273);
	((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num = (20);
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_x = (jref) sp[1].o;
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_y = (jref) sp[1].o;
	LINE_NUMBER(276);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_wP = sp[0].o;
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_vx = (jref) sp[1].o;
	LINE_NUMBER(279);
	frame[2].i = (jint(0));
	}
label_135:;
	{
	if ((frame[2].i) >= ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num)) goto label_136;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w));
	jint temp2 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp2;
	LINE_NUMBER(281);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp3 = frame[2].i;
	jint temp4 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (10), (80));
	jint temp5 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp4);
	ARRAY_ACCESS(jint, sp[0].o, temp3) = temp5;
	LINE_NUMBER(282);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_wP;
	jint temp6 = frame[2].i;
	jint temp7 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(3)));
	jint temp8 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp7);
	ARRAY_ACCESS(jint, sp[0].o, temp6) = temp8;
	LINE_NUMBER(283);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_vx;
	jint temp9 = frame[2].i;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_wP;
	ARRAY_ACCESS(jint, sp[0].o, temp9) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i)));
	LINE_NUMBER(279);
	INST_IINC(2, 1);
	goto label_135;
	}
label_136:;
	LINE_NUMBER(286);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(288);
	((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num = (30);
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_x = (jref) sp[1].o;
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_y = (jref) sp[1].o;
	LINE_NUMBER(291);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_wP = sp[0].o;
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_vx = (jref) sp[1].o;
	LINE_NUMBER(293);
	frame[1].i = (jint(0));
	LINE_NUMBER(295);
	frame[2].i = (jint(0));
	}
label_148:;
	{
	if ((frame[2].i) >= ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num)) goto label_149;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w));
	jint temp2 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp2 + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	LINE_NUMBER(297);
	INST_IINC(1, 1);
	LINE_NUMBER(298);
	if ((frame[1].i) <= (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_num) / (jint(2)))) goto label_153;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (20), (60));
	jint temp2 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp2;
	LINE_NUMBER(300);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_wP;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (10);
	goto label_156;
	}
label_153:;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (20));
	jint temp2 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp2;
	LINE_NUMBER(303);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_wP;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (7);
	}
label_156:;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_vx;
	jint temp0 = frame[2].i;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_wP;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))) / (jint(2))) - (jint(2)));
	LINE_NUMBER(295);
	INST_IINC(2, 1);
	goto label_148;
	}
label_149:;
	LINE_NUMBER(309);
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(2)));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp0);
	if (temp1 != 0) goto label_13;
	}
	{
	LINE_NUMBER(312);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(2)));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp0);
	if (temp1 != 0) goto label_160;
	}
	{
	LINE_NUMBER(313);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_isPaintFar = (jint(1));
	goto label_162;
	}
label_160:;
	{
	LINE_NUMBER(315);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_isPaintFar = (jint(0));
	}
label_162:;
	{
	LINE_NUMBER(318);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(2)), (jint(5)));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp0);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_nCloud = temp1;
	LINE_NUMBER(319);
	SM_nro_BackgroudEffect_d(ctx);
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}
label_12:;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(2)));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp0);
	if (temp1 != 0) goto label_13;
	}
	{
	LINE_NUMBER(325);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_isFog = (jint(1));
	LINE_NUMBER(326);
	SM_nro_BackgroudEffect_d(ctx);
	}
label_13:;
	LINE_NUMBER(330);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_d(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:d", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	{
	LINE_NUMBER(333);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(334);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgCloud1;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(335);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgFog;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(336);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgCloud1 = (jobject(nullptr));
	LINE_NUMBER(337);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgFog = (jobject(nullptr));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(338);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) == 0) goto label_7;
	}
	{
	LINE_NUMBER(339);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgCloud1;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(340);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgFog;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(341);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgCloud1 = (jobject(nullptr));
	LINE_NUMBER(342);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgFog = (jobject(nullptr));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(344);
	if ((clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_nCloud) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(345);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgCloud1;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/fog1.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgCloud1 = sp[0].o;
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, sp[0].o);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_cloudw = temp0;
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(349);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgCloud1;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(350);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgCloud1 = (jobject(nullptr));
	}
label_14:;
	{
	LINE_NUMBER(353);
	if ((clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_isFog) != 0) goto label_17;
	}
	{
	LINE_NUMBER(354);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgFog;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(355);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgFog = (jobject(nullptr));
	goto label_6;
	}
label_17:;
	{
	LINE_NUMBER(357);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgFog;
	if (sp[0].o != nullptr) goto label_20;
	}
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/fog0.png"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgFog = sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(361);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_fogw = (287);
	}
label_6:;
	LINE_NUMBER(364);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_paintBack_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:paintBack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(367);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(368);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_1;
	}
	{
	LINE_NUMBER(369);
	if ((clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_nCloud) == 0) goto label_1;
	}
	{
	LINE_NUMBER(370);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgCloud1;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(371);
	frame[1].i = (jint(0));
	}
label_6:;
	{
	if ((frame[1].i) >= (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_nCloud)) goto label_1;
	}
	{
	LINE_NUMBER(372);
	sp[0].o = frame[0].o;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_imgCloud1;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_cloudX;
	jfloat temp0 = jfloat(((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[1].i))));
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_cloudY;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_float_float_int])(ctx, sp[0].o, sp[1].o, temp0, (jfloat(((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[1].i))))), (jint(3)));
	LINE_NUMBER(371);
	INST_IINC(1, 1);
	goto label_6;
	}
label_1:;
	LINE_NUMBER(379);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_paintFog_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:paintFog", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(382);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(383);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_1;
	}
	{
	LINE_NUMBER(384);
	if ((clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_isFog) == 0) goto label_1;
	}
	{
	LINE_NUMBER(385);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgFog;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(386);
	frame[1].i = (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_xfog);
	}
label_6:;
	{
	if ((frame[1].i) >= (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw)) goto label_1;
	}
	{
	LINE_NUMBER(387);
	if ((frame[1].i) < ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) - (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_fogw))) goto label_8;
	}
	{
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_imgFog;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_float_float_int])(ctx, sp[0].o, sp[1].o, (jfloat((frame[1].i))), (jfloat((clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_yfog))), (jint(0)));
	}
label_8:;
	{
	LINE_NUMBER(386);
	frame[1].i = ((frame[1].i) + (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_fogw));
	goto label_6;
	}
label_1:;
	LINE_NUMBER(396);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BackgroudEffect_e(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:e", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(399);
	frame[1].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx);
	LINE_NUMBER(400);
	frame[2].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy);
	LINE_NUMBER(401);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(3)));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_way = temp0;
	LINE_NUMBER(402);
	((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_isFly = (jint(0));
	LINE_NUMBER(403);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(3)), (jint(5)));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_speed = temp1;
	LINE_NUMBER(406);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_way) != (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(407);
	((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_xShip = (-50);
	LINE_NUMBER(408);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (frame[2].i), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (100)) + (frame[2].i)));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_yShip = temp0;
	LINE_NUMBER(409);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(410);
	frame[4].i = (jint(0));
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(413);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_way) != (jint(2))) goto label_13;
	}
	{
	LINE_NUMBER(414);
	((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_xShip = ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) + (50));
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (frame[2].i), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (100)) + (frame[2].i)));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_yShip = temp0;
	LINE_NUMBER(416);
	frame[3].o = (frame[0].o);
	goto label_18;
	}
label_13:;
	{
	LINE_NUMBER(418);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_way) != (jint(3))) goto label_19;
	}
	{
	LINE_NUMBER(419);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, ((frame[1].i) + (50)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (50)) + (frame[1].i)));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_xShip = temp0;
	LINE_NUMBER(420);
	((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_yShip = (-50);
	LINE_NUMBER(421);
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(2)));
	frame[1].i = temp1;
	LINE_NUMBER(422);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) != 0) goto label_24;
	}
	INST_ICONST(0);
	goto label_25;
label_24:;
	INST_ICONST(2);
label_25:;
	{
	sp -= 2;
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_trans = sp[1].i;
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return;
	}
label_19:;
	{
	LINE_NUMBER(426);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_way) == (jint(4))) goto label_27;
	}
	LINE_NUMBER(427);
	popStackFrame(ctx);
	INST_RETURN();
label_27:;
	{
	LINE_NUMBER(430);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, ((frame[1].i) + (50)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (50)) + (frame[1].i)));
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_xShip = temp0;
	LINE_NUMBER(431);
	((nro_BackgroudEffect *) NULL_CHECK((frame[0].o)))->F_yShip = ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxh) + (50));
	LINE_NUMBER(432);
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(2)));
	frame[1].i = temp1;
	LINE_NUMBER(433);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(434);
	if ((frame[1].i) != 0) goto label_18;
	}
	{
	LINE_NUMBER(435);
	frame[4].i = (jint(0));
	LINE_NUMBER(436);
	goto label_12;
	}
label_18:;
	{
	LINE_NUMBER(440);
	frame[4].i = (jint(2));
	}
label_12:;
	{
	LINE_NUMBER(444);
	((nro_BackgroudEffect *) NULL_CHECK((frame[3].o)))->F_trans = (frame[4].i);
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_addEffect_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:addEffect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(448);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_1;
	}
	{
	LINE_NUMBER(449);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_BackgroudEffect);
	init_nro_BackgroudEffect_int(ctx, sp[0].o, (frame[0].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(450);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(452);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_a_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:a", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(456);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_BackgroudEffect);
	init_nro_BackgroudEffect_int(ctx, sp[0].o, (10));
	frame[2].o = sp[0].o;
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_colorWater = (frame[0].i);
	LINE_NUMBER(457);
	((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_yWater = (frame[1].i);
	LINE_NUMBER(458);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_paintWater_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:paintWater", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(463);
	SM_nro_BackgroudEffect_loadWaterImages(ctx);
	LINE_NUMBER(465);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(466);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_nro_BackgroudEffect, sp[0].o));
	LINE_NUMBER(467);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(468);
	frame[4].o = (frame[2].o);
	LINE_NUMBER(469);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_typeEff) != (10)) goto label_8;
	}
	{
	LINE_NUMBER(470);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_colorWater));
	LINE_NUMBER(473);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_num)) goto label_12;
	}
	{
	LINE_NUMBER(474);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_water1;
	if (sp[0].o == nullptr) goto label_14;
	}
	clinit_nro_BackgroudEffect(ctx);
	(sp++)->o = SF_nro_BackgroudEffect_water2;
	if ((--sp)->o == nullptr) goto label_14;
	{
	LINE_NUMBER(475);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[5].i) >= (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_num) / (jint(2)))) goto label_16;
	}
	clinit_nro_BackgroudEffect(ctx);
	(sp++)->o = SF_nro_BackgroudEffect_water2;
	goto label_17;
label_16:;
	clinit_nro_BackgroudEffect(ctx);
	(sp++)->o = SF_nro_BackgroudEffect_water1;
label_17:;
	{
	sp -= 2;
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i));
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i))) + ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_yWater)), (jint(0)));
	}
label_14:;
	{
	LINE_NUMBER(473);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(479);
	if ((clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_id_water1) == 0) goto label_18;
	}
	clinit_nro_BackgroudEffect(ctx);
	(sp++)->o = SF_nro_BackgroudEffect_water3;
	if ((--sp)->o == nullptr) goto label_19;
	{
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_water3;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(480);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_id_water1))) == nullptr) goto label_18;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_id_water1)))))->F_img;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(481);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_id_water1));
	clinit_nro_SmallImage(ctx);
	sp[1].o = (jobject)SF_nro_SmallImage_imgNew;
	((nro_Small *) NULL_CHECK(sp[0].o))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_id_water1)))))->F_timeUpdate);
	LINE_NUMBER(482);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_id_water1)))))->F_img;
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_water3 = sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(486);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_water3;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(487);
	frame[5].i = (jint(0));
	}
label_23:;
	{
	if ((frame[5].i) >= (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_num) / (jint(2)))) goto label_8;
	}
	{
	LINE_NUMBER(488);
	sp[0].o = frame[3].o;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_water3;
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i));
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i))) + ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_yWater)), (jint(0)));
	LINE_NUMBER(487);
	INST_IINC(5, 1);
	goto label_23;
	}
label_8:;
	{
	LINE_NUMBER(465);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(494);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_paintBehindTile_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:paintBehindTile", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(497);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(499);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_BackgroudEffect, sp[0].o);
	frame[2].o = sp[0].o;
	switch(((jint)((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_typeEff)) {
		case 8: goto label_5;
		case 13: goto label_6;
		default: goto label_7;
	}
	}
label_5:;
	{
	LINE_NUMBER(501);
	sp[0].o = frame[0].o;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_imgLacay;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	clinit_nro_BackgroudEffect(ctx);
	sp[2].o = (jobject)SF_nro_BackgroudEffect_imgLacay;
	jint temp2 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, sp[2].o);
	clinit_nro_BackgroudEffect(ctx);
	sp[2].o = (jobject)SF_nro_BackgroudEffect_imgLacay;
	jint temp3 = (jint)((func_javax_microedition_lcdui_Image_getHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getHeight_R_int])(ctx, sp[2].o);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_trans), ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_xShip), ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_yShip), (jint(3)));
	LINE_NUMBER(503);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_way) == (jint(1))) goto label_9;
	}
	{
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_way) == (jint(2))) goto label_9;
	}
	{
	LINE_NUMBER(504);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_trans) != 0) goto label_11;
	}
	INST_BIPUSH(11);
	goto label_12;
label_11:;
	INST_BIPUSH(-11);
label_12:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(505);
	sp[0].o = frame[0].o;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_imgFire1;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_frameFire) * (18)), (8), (18), ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_trans), (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_xShip) + (frame[3].i)), (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_yShip) + (22)), (jint(3)));
	LINE_NUMBER(506);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(509);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_trans) != 0) goto label_15;
	}
	INST_BIPUSH(-25);
	goto label_16;
label_15:;
	INST_BIPUSH(25);
label_16:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_imgShip;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_frameFire) << (jint(3))), (20), (8), ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_trans), (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_xShip) + (frame[3].i)), (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_yShip) + (jint(5))), (jint(3)));
	LINE_NUMBER(511);
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(513);
	if ((clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_isPaintFar) == 0) goto label_7;
	}
	{
	LINE_NUMBER(514);
	SM_nro_BackgroudEffect_paintBack_lib_mGraphics(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(497);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(519);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_paintFrontAll_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:paintFrontAll", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[16]{};

	clinit_nro_BackgroudEffect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(523);
	frame[1].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_16;
	}
	{
	LINE_NUMBER(524);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_nro_BackgroudEffect, sp[0].o));
	LINE_NUMBER(525);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(526);
	frame[4].o = (frame[2].o);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[15]) { bypasses[15] = false; goto label_24; }
	{
	LINE_NUMBER(529);
	switch(((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_typeEff)) {
		case 0: goto label_20;
		case 1: { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_10; } // goto label_21
		case 2: { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_10; } // goto label_21
		case 3: { popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_13; } // goto label_22
		case 4: { popExceptionFrames(frameRef, 1); bypasses[7] = true; goto label_13; } // goto label_22
		case 5: { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_10; } // goto label_21
		case 6: { popExceptionFrames(frameRef, 1); bypasses[5] = true; goto label_10; } // goto label_21
		case 7: { popExceptionFrames(frameRef, 1); bypasses[6] = true; goto label_10; } // goto label_21
		case 8: { popExceptionFrames(frameRef, 1); bypasses[8] = true; goto label_13; } // goto label_22
		case 9: { popExceptionFrames(frameRef, 1); bypasses[9] = true; goto label_13; } // goto label_22
		case 10: { popExceptionFrames(frameRef, 1); bypasses[12] = true; goto label_13; } // goto label_22
		case 11: { popExceptionFrames(frameRef, 1); bypasses[10] = true; goto label_10; } // goto label_21
		case 12: goto label_20;
		case 13: { popExceptionFrames(frameRef, 1); bypasses[11] = true; goto label_13; } // goto label_23
		case 14: { popExceptionFrames(frameRef, 1); bypasses[14] = true; goto label_13; } // goto label_22
		case 15: { popExceptionFrames(frameRef, 1); bypasses[13] = true; goto label_10; } // goto label_21
		default: { bypasses[2] = true; goto label_13; } // goto label_22
	}
	}
label_20:;
	{
	LINE_NUMBER(532);
	frame[5].i = (jint(0));
	}
label_24:;
	{
	LINE_NUMBER(535);
	if ((frame[5].i) < ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_sum)) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(536);
	goto label_25;
label_8:;
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_21; }
	if (bypasses[1]) { bypasses[1] = false; goto label_21; }
	if (bypasses[4]) { bypasses[4] = false; goto label_21; }
	if (bypasses[5]) { bypasses[5] = false; goto label_21; }
	if (bypasses[6]) { bypasses[6] = false; goto label_21; }
	if (bypasses[10]) { bypasses[10] = false; goto label_21; }
	if (bypasses[13]) { bypasses[13] = false; goto label_21; }
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_imgFire2;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) != (jint(2))) goto label_26;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_26;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) > ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx))) goto label_26;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_26;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) > ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy))) goto label_26;
	}
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_activeEff;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[5].i))) == 0) goto label_28;
	}
	{
	LINE_NUMBER(541);
	sp[0].o = frame[3].o;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_imgSnow;
	jint temp0 = jint(0);
	jint temp1 = 10;
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_tick;
	jint temp2 = temp1 * ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i)));
	jint temp3 = 13;
	jint temp4 = 10;
	jint temp5 = jint(0);
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i));
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp2, temp3, temp4, temp5, temp6, (((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i))) - (10)), (jint(0)));
	goto label_26;
	}
label_28:;
	{
	LINE_NUMBER(543);
	sp[0].o = frame[3].o;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_imgHatMua;
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i));
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i))), (jint(0)));
	}
label_26:;
	{
	LINE_NUMBER(547);
	INST_IINC(5, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[15] = true; goto label_7; } // goto label_24
	}
label_21:;
	{
	LINE_NUMBER(556);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_typeEff) != (15)) { popExceptionFrames(frameRef, 1); goto label_11; }
	}
	{
	LINE_NUMBER(557);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (11120))) == nullptr) goto label_31;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (11120)))))->F_img;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(558);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (11120));
	clinit_nro_SmallImage(ctx);
	sp[1].o = (jobject)SF_nro_SmallImage_imgNew;
	((nro_Small *) NULL_CHECK(sp[0].o))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (11120)))))->F_timeUpdate);
	LINE_NUMBER(559);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (11120)))))->F_img;
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgSao = sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(562);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgSao;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_11; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(563);
	goto label_25;
label_11:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_22; }
	if (bypasses[3]) { bypasses[3] = false; goto label_22; }
	if (bypasses[7]) { bypasses[7] = false; goto label_22; }
	if (bypasses[8]) { bypasses[8] = false; goto label_22; }
	if (bypasses[9]) { bypasses[9] = false; goto label_22; }
	if (bypasses[11]) { bypasses[11] = false; goto label_23; }
	if (bypasses[12]) { bypasses[12] = false; goto label_22; }
	if (bypasses[14]) { bypasses[14] = false; goto label_22; }
	{
	LINE_NUMBER(567);
	frame[2].o = (frame[4].o);
	LINE_NUMBER(568);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgSao;
	frame[6].o = sp[0].o;
	LINE_NUMBER(569);
	frame[3].o = (frame[3].o);
	LINE_NUMBER(570);
	frame[4].o = (frame[4].o);
	LINE_NUMBER(571);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_typeEff) != (11)) goto label_0;
	}
	{
	LINE_NUMBER(572);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_L = (jint(5));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(576);
	frame[7].i = (jint(0));
	}
label_39:;
	{
	if ((frame[7].i) >= ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_sum)) goto label_1;
	}
	{
	LINE_NUMBER(577);
	if (((frame[7].i) % (jint(3))) != 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i))) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_41;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i))) > ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx))) goto label_41;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i))) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_41;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i))) > ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy))) goto label_41;
	}
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_41;
	{
	LINE_NUMBER(578);
	sp[0].o = frame[3].o;
	sp[1].o = frame[6].o;
	jint temp0 = jint(0);
	clinit_nro_BackgroudEffect(ctx);
	jint temp1 = (jint)SF_nro_BackgroudEffect_L;
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_tick;
	jint temp2 = temp1 * ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[7].i)));
	jint temp3 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, (frame[6].o));
	clinit_nro_BackgroudEffect(ctx);
	jint temp4 = (jint)SF_nro_BackgroudEffect_L;
	jint temp5 = jint(0);
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[7].i));
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp2, temp3, temp4, temp5, temp6, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[7].i))), (jint(0)));
	}
label_41:;
	{
	LINE_NUMBER(576);
	INST_IINC(7, 1);
	goto label_39;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(582);
	goto label_22;
label_2:;
	LINE_NUMBER(581);
	INST_ASTORE(7);
label_22:;
	LINE_NUMBER(590);
	goto label_12;
label_23:;
	{
	LINE_NUMBER(592);
	if ((clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_isPaintFar) != 0) goto label_12;
	}
	{
	LINE_NUMBER(593);
	SM_nro_BackgroudEffect_paintBack_lib_mGraphics(ctx, (frame[3].o));
	}
label_12:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(597);
	goto label_25;
label_6:;
	LINE_NUMBER(596);
	INST_ASTORE(5);
label_25:;
	{
	LINE_NUMBER(523);
	INST_IINC(1, 1);
	goto label_15;
	}
label_16:;
	LINE_NUMBER(600);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_paintFar_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:paintFar", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(603);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(604);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_nro_BackgroudEffect, sp[0].o));
	LINE_NUMBER(605);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(606);
	frame[4].o = (frame[2].o);
	LINE_NUMBER(607);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[0].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[0].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(609);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_typeEff) != (jint(4))) goto label_8;
	}
	{
	LINE_NUMBER(610);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_sum)) goto label_8;
	}
	{
	LINE_NUMBER(611);
	sp[0].o = frame[3].o;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_imgMua2;
	jint temp0 = jint(0);
	jint temp1 = 16;
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_tick;
	jint temp2 = temp1 * ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i)));
	jint temp3 = 16;
	jint temp4 = 16;
	jint temp5 = jint(0);
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i));
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp2, temp3, temp4, temp5, temp6, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i))), (jint(0)));
	LINE_NUMBER(610);
	INST_IINC(5, 1);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(615);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_typeEff) != (9)) goto label_13;
	}
	{
	LINE_NUMBER(616);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[3].o), (jint(16777215)));
	LINE_NUMBER(618);
	frame[5].i = (jint(0));
	}
label_16:;
	{
	if ((frame[5].i) >= ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_num)) goto label_13;
	}
	{
	LINE_NUMBER(619);
	sp[0].o = frame[3].o;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_wP;
	sp += 1;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) != (jint(1))) goto label_18;
	}
	clinit_nro_BackgroudEffect(ctx);
	(sp++)->o = SF_nro_BackgroudEffect_imgChamTron1;
	goto label_19;
label_18:;
	clinit_nro_BackgroudEffect(ctx);
	(sp++)->o = SF_nro_BackgroudEffect_imgChamTron2;
label_19:;
	{
	sp -= 2;
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i));
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i))), (jint(3)));
	LINE_NUMBER(618);
	INST_IINC(5, 1);
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(603);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(624);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_paintBackAll_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:paintBackAll", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(628);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(629);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_nro_BackgroudEffect, sp[0].o));
	LINE_NUMBER(630);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(631);
	frame[4].o = (frame[2].o);
	LINE_NUMBER(632);
	switch(((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_typeEff)) {
		case 0: goto label_11;
		case 1: goto label_12;
		case 2: goto label_12;
		case 3: goto label_13;
		case 4: goto label_13;
		case 5: goto label_12;
		case 6: goto label_12;
		case 7: goto label_12;
		case 8: goto label_13;
		case 9: goto label_13;
		case 10: goto label_13;
		case 11: goto label_12;
		case 12: goto label_13;
		case 13: goto label_13;
		case 14: goto label_13;
		case 15: goto label_12;
		default: goto label_13;
	}
	}
label_11:;
	{
	LINE_NUMBER(634);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(10742731)));
	LINE_NUMBER(635);
	frame[5].i = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(638);
	if ((frame[5].i) < ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_sum)) goto label_16;
	}
	LINE_NUMBER(639);
	goto label_13;
label_16:;
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_imgFire2;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) == (jint(2))) goto label_18;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_18;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) > ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx))) goto label_18;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_18;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) > ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy))) goto label_18;
	}
	{
	LINE_NUMBER(643);
	sp[0].o = frame[3].o;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_imgMua1;
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i));
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i))), (jint(0)));
	}
label_18:;
	{
	LINE_NUMBER(646);
	INST_IINC(5, 1);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(655);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_typeEff) != (15)) goto label_20;
	}
	{
	LINE_NUMBER(656);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (11120))) == nullptr) goto label_22;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (11120)))))->F_img;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(657);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (11120));
	clinit_nro_SmallImage(ctx);
	sp[1].o = (jobject)SF_nro_SmallImage_imgNew;
	((nro_Small *) NULL_CHECK(sp[0].o))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (11120)))))->F_timeUpdate);
	LINE_NUMBER(658);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (11120)))))->F_img;
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_imgSao = sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(661);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgSao;
	if (sp[0].o != nullptr) goto label_20;
	}
	LINE_NUMBER(662);
	goto label_13;
label_20:;
	{
	LINE_NUMBER(666);
	frame[2].o = (frame[4].o);
	LINE_NUMBER(667);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_imgSao;
	frame[6].o = sp[0].o;
	LINE_NUMBER(668);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(669);
	frame[4].o = (frame[4].o);
	LINE_NUMBER(670);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[2].o)))->F_typeEff) != (11)) goto label_0;
	}
	{
	LINE_NUMBER(671);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_L = (jint(5));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(675);
	frame[7].i = (jint(0));
	}
label_31:;
	{
	if ((frame[7].i) >= ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_sum)) goto label_1;
	}
	{
	LINE_NUMBER(676);
	if (((frame[7].i) % (jint(3))) == 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i))) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_33;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i))) > ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx))) goto label_33;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i))) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_33;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i))) > ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy))) goto label_33;
	}
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_33;
	{
	LINE_NUMBER(677);
	sp[0].o = frame[3].o;
	sp[1].o = frame[6].o;
	jint temp0 = jint(0);
	clinit_nro_BackgroudEffect(ctx);
	jint temp1 = (jint)SF_nro_BackgroudEffect_L;
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_tick;
	jint temp2 = temp1 * ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[7].i)));
	jint temp3 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, (frame[6].o));
	clinit_nro_BackgroudEffect(ctx);
	jint temp4 = (jint)SF_nro_BackgroudEffect_L;
	jint temp5 = jint(0);
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[7].i));
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[4].o)))->F_y;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp2, temp3, temp4, temp5, temp6, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[7].i))), (jint(0)));
	}
label_33:;
	{
	LINE_NUMBER(675);
	INST_IINC(7, 1);
	goto label_31;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(681);
	goto label_13;
label_2:;
	LINE_NUMBER(680);
	INST_ASTORE(7);
label_13:;
	{
	LINE_NUMBER(628);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(693);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_BackgroudEffect_updateEff(jcontext ctx) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:updateEff", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[30]{};

	clinit_nro_BackgroudEffect(ctx);
	{
	LINE_NUMBER(697);
	frame[0].i = (jint(0));
	}
label_17:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_18;
	}
	{
	LINE_NUMBER(698);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	frame[1].o = (checkCast(ctx, &class_nro_BackgroudEffect, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[15]) { bypasses[15] = false; goto label_29; }
	{
	LINE_NUMBER(705);
	switch(((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_typeEff)) {
		case 0: goto label_20;
		case 1: { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_21
		case 2: { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_6; } // goto label_21
		case 3: { popExceptionFrames(frameRef, 1); bypasses[14] = true; goto label_6; } // goto label_22
		case 4: { popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_6; } // goto label_23
		case 5: { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_6; } // goto label_21
		case 6: { popExceptionFrames(frameRef, 1); bypasses[5] = true; goto label_6; } // goto label_21
		case 7: { popExceptionFrames(frameRef, 1); bypasses[6] = true; goto label_6; } // goto label_21
		case 8: { popExceptionFrames(frameRef, 1); bypasses[7] = true; goto label_9; } // goto label_24
		case 9: { popExceptionFrames(frameRef, 1); bypasses[8] = true; goto label_9; } // goto label_25
		case 10: { popExceptionFrames(frameRef, 1); bypasses[9] = true; goto label_12; } // goto label_26
		case 11: { popExceptionFrames(frameRef, 1); bypasses[10] = true; goto label_6; } // goto label_21
		case 12: goto label_20;
		case 13: { popExceptionFrames(frameRef, 1); bypasses[11] = true; goto label_15; } // goto label_27
		case 14: { popExceptionFrames(frameRef, 1); bypasses[12] = true; goto label_15; } // goto label_28
		case 15: { popExceptionFrames(frameRef, 1); bypasses[13] = true; goto label_6; } // goto label_21
		default: { bypasses[2] = true; goto label_6; } // goto label_22
	}
	}
label_20:;
	{
	LINE_NUMBER(708);
	frame[3].i = (jint(0));
	}
label_29:;
	{
	LINE_NUMBER(711);
	if ((frame[3].i) < ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_sum)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(712);
	goto label_30;
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_21; }
	if (bypasses[1]) { bypasses[1] = false; goto label_21; }
	if (bypasses[2]) { bypasses[2] = false; goto label_22; }
	if (bypasses[3]) { bypasses[3] = false; goto label_23; }
	if (bypasses[4]) { bypasses[4] = false; goto label_21; }
	if (bypasses[5]) { bypasses[5] = false; goto label_21; }
	if (bypasses[6]) { bypasses[6] = false; goto label_21; }
	if (bypasses[10]) { bypasses[10] = false; goto label_21; }
	if (bypasses[13]) { bypasses[13] = false; goto label_21; }
	if (bypasses[14]) { bypasses[14] = false; goto label_22; }
	if (bypasses[17]) { bypasses[17] = false; goto label_89; }
	{
	LINE_NUMBER(715);
	if (((frame[3].i) % (jint(3))) == 0) goto label_31;
	}
	{
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_typeEff) == (12)) goto label_31;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp1 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, temp0, (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)), (jint(2)));
	if (temp1 == 0) goto label_31;
	}
	{
	LINE_NUMBER(716);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_activeEff;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(1));
	}
label_31:;
	{
	LINE_NUMBER(719);
	if (((frame[3].i) % (jint(3))) != 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy))) goto label_33;
	}
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-10), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) + (300)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	LINE_NUMBER(721);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = frame[3].i;
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-100), (jint(0)));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy));
	}
label_33:;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_activeEff;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) != 0) goto label_36;
	}
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	frame[2].o = sp[0].o;
	LINE_NUMBER(726);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_vy;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	LINE_NUMBER(727);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	frame[2].o = sp[0].o;
	LINE_NUMBER(728);
	sp[0].o = frame[2].o;
	jint temp4 = frame[3].i;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp4);
	sp[1].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_vx;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = (temp7 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	}
label_36:;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_activeEff;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) == 0) goto label_41;
	}
	{
	LINE_NUMBER(732);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (jint(1)));
	frame[4].i = temp3;
	LINE_NUMBER(733);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= (jint(2))) goto label_41;
	}
	{
	LINE_NUMBER(734);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_tick;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (jint(1)));
	frame[4].i = temp3;
	LINE_NUMBER(735);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(736);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_tick;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= (jint(1))) goto label_41;
	}
	{
	LINE_NUMBER(737);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_tick;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(738);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_activeEff;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(739);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-10), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) + (300)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	LINE_NUMBER(740);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = frame[3].i;
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-100), (jint(0)));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy));
	}
label_41:;
	{
	LINE_NUMBER(745);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[15] = true; goto label_3; } // goto label_29
	}
label_21:;
	{
	LINE_NUMBER(754);
	frame[3].i = (jint(0));
	}
label_51:;
	{
	if ((frame[3].i) >= ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_sum)) goto label_22;
	}
	{
	LINE_NUMBER(755);
	if (((frame[3].i) % (jint(3))) == 0) goto label_53;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i));
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID) != (15)) goto label_54;
	}
	INST_BIPUSH(10);
	goto label_55;
label_54:;
	INST_ICONST(0);
label_55:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, sp[0].i, (sp[1].i + sp[2].i), (jint(2)));
	if (temp0 == 0) goto label_53;
	}
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_activeEff;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(1));
	}
label_53:;
	{
	LINE_NUMBER(759);
	if (((frame[3].i) % (jint(3))) != 0) goto label_57;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxh)) goto label_57;
	}
	{
	LINE_NUMBER(760);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-10), ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) + (50)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(761);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = frame[3].i;
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-50), (jint(0)));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	}
label_57:;
	{
	LINE_NUMBER(764);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_activeEff;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) == 0) goto label_60;
	}
	{
	LINE_NUMBER(765);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (jint(1)));
	frame[4].i = temp3;
	LINE_NUMBER(766);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) != (100)) goto label_63;
	}
	{
	LINE_NUMBER(767);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(768);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-10), ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) + (50)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(769);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = frame[3].i;
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-50), (jint(0)));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	LINE_NUMBER(770);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_activeEff;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(0));
	goto label_63;
	}
label_60:;
	{
	LINE_NUMBER(773);
	frame[5].i = (jint(0));
	}
label_68:;
	{
	jint temp0 = frame[5].i;
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_vTeleport;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_69;
	}
	{
	LINE_NUMBER(775);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_vTeleport;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_nro_Teleport, sp[0].o);
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_72;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[6].o)))->F_paintFire) == 0) goto label_72;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) >= (((jint)((nro_Teleport *) NULL_CHECK((frame[6].o)))->F_x) + (80))) goto label_72;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= (((jint)((nro_Teleport *) NULL_CHECK((frame[6].o)))->F_x) - (80))) goto label_72;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) >= (((jint)((nro_Teleport *) NULL_CHECK((frame[6].o)))->F_y) + (80))) goto label_72;
	}
	{
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= (((jint)((nro_Teleport *) NULL_CHECK((frame[6].o)))->F_y) - (80))) goto label_72;
	}
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	frame[2].o = sp[0].o;
	LINE_NUMBER(777);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	jobject temp4 = sp[1].o;
	sp[1].i = temp0;
	sp[2].i = temp3;
	sp += 3;
	if (((jint)ARRAY_ACCESS(jint, temp4, (frame[3].i))) >= ((jint)((nro_Teleport *) NULL_CHECK((frame[6].o)))->F_x)) goto label_75;
	}
	INST_BIPUSH(-10);
	goto label_76;
label_75:;
	INST_BIPUSH(10);
label_76:;
	INST_IADD();
	INST_IASTORE();
label_72:;
	{
	LINE_NUMBER(773);
	INST_IINC(5, 1);
	goto label_68;
	}
label_69:;
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_y;
	frame[2].o = sp[0].o;
	LINE_NUMBER(782);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_vy;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	LINE_NUMBER(783);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	frame[2].o = sp[0].o;
	LINE_NUMBER(784);
	sp[0].o = frame[2].o;
	jint temp4 = frame[3].i;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp4);
	sp[1].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_vx;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = (temp7 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	LINE_NUMBER(785);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	jint temp8 = frame[3].i;
	jint temp11 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp8);
	ARRAY_ACCESS(jint, sp[0].o, temp8) = (temp11 + (jint(1)));
	frame[4].i = temp11;
	LINE_NUMBER(786);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	jint temp15 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i));
	sp[0].i = temp15;
	sp += 1;
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_typeEff) == (jint(2))) goto label_82;
	}
	INST_ICONST(2);
	goto label_83;
label_82:;
	INST_ICONST(4);
label_83:;
	sp -= 2; if (sp[0].i <= sp[1].i) goto label_63;
	{
	LINE_NUMBER(787);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_typeEff) == (11)) goto label_85;
	}
	{
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_typeEff) == (15)) goto label_85;
	}
	{
	LINE_NUMBER(788);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_tick;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (jint(1)));
	frame[4].i = temp3;
	}
label_85:;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(792);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_tick;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= (jint(3))) goto label_63;
	}
	{
	LINE_NUMBER(793);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_tick;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (jint(0));
	}
label_63:;
	{
	LINE_NUMBER(754);
	INST_IINC(3, 1);
	goto label_51;
	}
label_22:;
	LINE_NUMBER(800);
	{ popExceptionFrames(frameRef, 1); bypasses[16] = true; goto label_15; } // goto label_14
label_23:;
	{
	LINE_NUMBER(802);
	frame[3].i = (jint(0));
	}
label_89:;
	{
	LINE_NUMBER(805);
	if ((frame[3].i) < ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_sum)) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(806);
	goto label_30;
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[7]) { bypasses[7] = false; goto label_24; }
	if (bypasses[8]) { bypasses[8] = false; goto label_25; }
	if (bypasses[28]) { bypasses[28] = false; goto label_121; }
	{
	LINE_NUMBER(809);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (jint(1)));
	frame[4].i = temp3;
	LINE_NUMBER(810);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= (10)) goto label_91;
	}
	{
	LINE_NUMBER(811);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_dem;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (jint(1)));
	frame[4].i = temp3;
	LINE_NUMBER(812);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frame;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(813);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_dem;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= (jint(5))) goto label_95;
	}
	{
	LINE_NUMBER(814);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_dem;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (jint(0));
	}
label_95:;
	{
	LINE_NUMBER(817);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_tick;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_t;
	sp[2].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_dem;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[3].i)))));
	}
label_91:;
	{
	LINE_NUMBER(820);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[17] = true; goto label_6; } // goto label_89
	}
label_24:;
	{
	LINE_NUMBER(823);
	sp[0].o = frame[1].o;
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_tFire = (((jint)((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_tFire) + (jint(1)));
	LINE_NUMBER(824);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_tFire) != (jint(3))) goto label_98;
	}
	{
	LINE_NUMBER(825);
	((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_tFire = (jint(0));
	LINE_NUMBER(826);
	sp[0].o = frame[1].o;
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_frameFire = (((jint)((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_frameFire) + (jint(1)));
	LINE_NUMBER(827);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frameFire) <= (jint(1))) goto label_98;
	}
	{
	LINE_NUMBER(828);
	((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_frameFire = (jint(0));
	}
label_98:;
	{
	LINE_NUMBER(832);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_tStart)) != 0) goto label_103;
	}
	{
	LINE_NUMBER(833);
	((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_isFly = (jint(1));
	}
label_103:;
	{
	LINE_NUMBER(836);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_isFly) == 0) { popExceptionFrames(frameRef, 1); bypasses[18] = true; goto label_15; } // goto label_14
	}
	{
	LINE_NUMBER(837);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_way) != (jint(1))) goto label_106;
	}
	{
	LINE_NUMBER(838);
	sp[0].o = frame[1].o;
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_xShip = (((jint)((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_xShip) + ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_speed));
	LINE_NUMBER(839);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_xShip) <= ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) + (50))) { popExceptionFrames(frameRef, 1); bypasses[19] = true; goto label_15; } // goto label_14
	}
	{
	LINE_NUMBER(840);
	M_nro_BackgroudEffect_e(ctx, (frame[1].o));
	{ popExceptionFrames(frameRef, 1); bypasses[20] = true; goto label_15; } // goto label_14
	}
label_106:;
	{
	LINE_NUMBER(842);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_way) != (jint(2))) goto label_110;
	}
	{
	LINE_NUMBER(843);
	sp[0].o = frame[1].o;
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_xShip = (((jint)((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_xShip) - ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_speed));
	LINE_NUMBER(844);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_xShip) >= (-50)) { popExceptionFrames(frameRef, 1); bypasses[21] = true; goto label_15; } // goto label_14
	}
	{
	LINE_NUMBER(845);
	M_nro_BackgroudEffect_e(ctx, (frame[1].o));
	{ popExceptionFrames(frameRef, 1); bypasses[22] = true; goto label_15; } // goto label_14
	}
label_110:;
	{
	LINE_NUMBER(847);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_way) != (jint(3))) goto label_114;
	}
	{
	LINE_NUMBER(848);
	sp[0].o = frame[1].o;
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_yShip = (((jint)((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_yShip) + ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_speed));
	LINE_NUMBER(849);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_yShip) <= ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxh) + (50))) { popExceptionFrames(frameRef, 1); bypasses[23] = true; goto label_15; } // goto label_14
	}
	{
	LINE_NUMBER(850);
	M_nro_BackgroudEffect_e(ctx, (frame[1].o));
	{ popExceptionFrames(frameRef, 1); bypasses[24] = true; goto label_15; } // goto label_14
	}
label_114:;
	{
	LINE_NUMBER(852);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_way) != (jint(4))) { popExceptionFrames(frameRef, 1); bypasses[25] = true; goto label_15; } // goto label_14
	}
	{
	LINE_NUMBER(853);
	sp[0].o = frame[1].o;
	((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_yShip = (((jint)((nro_BackgroudEffect *) NULL_CHECK(sp[0].o))->F_yShip) - ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_speed));
	LINE_NUMBER(854);
	if (((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_yShip) >= (-50)) { popExceptionFrames(frameRef, 1); bypasses[26] = true; goto label_15; } // goto label_14
	}
	{
	LINE_NUMBER(855);
	M_nro_BackgroudEffect_e(ctx, (frame[1].o));
	{ popExceptionFrames(frameRef, 1); bypasses[27] = true; goto label_15; } // goto label_14
	}
label_25:;
	{
	LINE_NUMBER(861);
	frame[3].i = (jint(0));
	}
label_121:;
	{
	LINE_NUMBER(864);
	if ((frame[3].i) < ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_num)) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(865);
	goto label_30;
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[9]) { bypasses[9] = false; goto label_26; }
	if (bypasses[29]) { bypasses[29] = false; goto label_128; }
	{
	LINE_NUMBER(868);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	frame[2].o = sp[0].o;
	LINE_NUMBER(869);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_vx;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	LINE_NUMBER(870);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp4 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_vx;
	if (temp4 >= (-((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))))) goto label_124;
	}
	{
	LINE_NUMBER(871);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_wP;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(3)));
	jint temp2 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp2;
	LINE_NUMBER(872);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_vx;
	jint temp3 = frame[3].i;
	clinit_nro_BackgroudEffect(ctx);
	sp[1].o = (jobject)SF_nro_BackgroudEffect_wP;
	ARRAY_ACCESS(jint, sp[0].o, temp3) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i)));
	LINE_NUMBER(873);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp4 = frame[3].i;
	clinit_main_GameCanvas(ctx);
	jint temp5 = (jint)SF_main_GameCanvas_w;
	sp[1].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_vx;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = (temp5 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	}
label_124:;
	{
	LINE_NUMBER(876);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[28] = true; goto label_9; } // goto label_121
	}
label_26:;
	{
	LINE_NUMBER(879);
	frame[3].i = (jint(0));
	}
label_128:;
	{
	LINE_NUMBER(882);
	if ((frame[3].i) < ((jint)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_num)) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(883);
	goto label_30;
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[11]) { bypasses[11] = false; goto label_27; }
	if (bypasses[12]) { bypasses[12] = false; goto label_28; }
	if (bypasses[16]) { bypasses[16] = false; goto label_14; }
	if (bypasses[18]) { bypasses[18] = false; goto label_14; }
	if (bypasses[19]) { bypasses[19] = false; goto label_14; }
	if (bypasses[20]) { bypasses[20] = false; goto label_14; }
	if (bypasses[21]) { bypasses[21] = false; goto label_14; }
	if (bypasses[22]) { bypasses[22] = false; goto label_14; }
	if (bypasses[23]) { bypasses[23] = false; goto label_14; }
	if (bypasses[24]) { bypasses[24] = false; goto label_14; }
	if (bypasses[25]) { bypasses[25] = false; goto label_14; }
	if (bypasses[26]) { bypasses[26] = false; goto label_14; }
	if (bypasses[27]) { bypasses[27] = false; goto label_14; }
	{
	LINE_NUMBER(886);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	frame[2].o = sp[0].o;
	LINE_NUMBER(887);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_vx;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	LINE_NUMBER(888);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp4 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_vx;
	if (temp4 >= ((-((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)))) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx))) goto label_131;
	}
	{
	LINE_NUMBER(889);
	sp[0].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp0 = frame[3].i;
	clinit_main_GameCanvas(ctx);
	jint temp1 = (jint)SF_main_GameCanvas_w;
	sp[1].o = (jobject)((nro_BackgroudEffect *) NULL_CHECK((frame[1].o)))->F_vx;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i)))) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	}
label_131:;
	{
	LINE_NUMBER(892);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[29] = true; goto label_12; } // goto label_128
	}
label_27:;
	{
	LINE_NUMBER(895);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (jint(1))) goto label_14;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_lowGraphic;
	if ((--sp)->i != 0) goto label_14;
	clinit_nro_BackgroudEffect(ctx);
	(sp++)->i = SF_nro_BackgroudEffect_nCloud;
	if ((--sp)->i <= 0) goto label_14;
	{
	LINE_NUMBER(896);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (sp[0].o != sp[1].o) goto label_134;
	}
	clinit_nro_TileMap(ctx);
	(sp++)->i = SF_nro_TileMap_pxw;
	goto label_135;
label_134:;
	{
	jint temp0 = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w);
	sp[0].i = temp0;
	sp += 1;
	}
label_135:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(898);
	frame[3].i = (jint(0));
	}
label_137:;
	{
	if ((frame[3].i) >= (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_nCloud)) goto label_138;
	}
	{
	LINE_NUMBER(899);
	frame[5].i = ((frame[3].i) + (jint(1)));
	LINE_NUMBER(900);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_cloudX;
	frame[2].o = sp[0].o;
	LINE_NUMBER(901);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) - (frame[5].i));
	LINE_NUMBER(902);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_cloudX;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) >= (-(clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_cloudw))) goto label_143;
	}
	{
	LINE_NUMBER(903);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_cloudX;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = ((frame[6].i) + (100));
	}
label_143:;
	{
	LINE_NUMBER(898);
	INST_IINC(3, 1);
	goto label_137;
	}
label_138:;
	LINE_NUMBER(906);
	goto label_14;
label_28:;
	{
	LINE_NUMBER(909);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (jint(1))) goto label_14;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_lowGraphic;
	if ((--sp)->i != 0) goto label_14;
	clinit_nro_BackgroudEffect(ctx);
	(sp++)->i = SF_nro_BackgroudEffect_isFog;
	if ((--sp)->i == 0) goto label_14;
	{
	jint temp0 = (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_xfog) - (jint(1));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_xfog = temp0;
	if (temp0 >= (-(clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_fogw))) goto label_14;
	}
	{
	LINE_NUMBER(910);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_xfog = (jint(0));
	}
label_14:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(914);
	goto label_30;
label_2:;
	LINE_NUMBER(913);
	INST_ASTORE(2);
label_30:;
	{
	LINE_NUMBER(697);
	INST_IINC(0, 1);
	goto label_17;
	}
label_18:;
	LINE_NUMBER(917);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_BackgroudEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BackgroudEffect:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BackgroudEffect(ctx);
	{
	LINE_NUMBER(10);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vBG Effect"_j))));
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_vBgEffect = sp[0].o;
	LINE_NUMBER(43);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_L = (16);
	LINE_NUMBER(49);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_water3 = (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_BackgroudEffect[] {
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
	(void *) M_nro_BackgroudEffect_e,
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
	{ "e", "()V" },
};

static FieldMetadata fields[] {
	{ "vBgEffect", &class_nro_MyVector, (intptr_t) &SF_nro_BackgroudEffect_vBgEffect, "Lnro/MyVector;", 9 },
	{ "x", getArrayClass(&class_int, 1), offsetof(nro_BackgroudEffect, F_x), "[I", 2 },
	{ "y", getArrayClass(&class_int, 1), offsetof(nro_BackgroudEffect, F_y), "[I", 2 },
	{ "vx", getArrayClass(&class_int, 1), offsetof(nro_BackgroudEffect, F_vx), "[I", 2 },
	{ "vy", getArrayClass(&class_int, 1), offsetof(nro_BackgroudEffect, F_vy), "[I", 2 },
	{ "wP", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_BackgroudEffect_wP, "[I", 10 },
	{ "num", &class_int, offsetof(nro_BackgroudEffect, F_num), "I", 2 },
	{ "xShip", &class_int, offsetof(nro_BackgroudEffect, F_xShip), "I", 2 },
	{ "yShip", &class_int, offsetof(nro_BackgroudEffect, F_yShip), "I", 2 },
	{ "way", &class_int, offsetof(nro_BackgroudEffect, F_way), "I", 2 },
	{ "trans", &class_int, offsetof(nro_BackgroudEffect, F_trans), "I", 2 },
	{ "frameFire", &class_int, offsetof(nro_BackgroudEffect, F_frameFire), "I", 2 },
	{ "tFire", &class_int, offsetof(nro_BackgroudEffect, F_tFire), "I", 2 },
	{ "tStart", &class_int, offsetof(nro_BackgroudEffect, F_tStart), "I", 2 },
	{ "speed", &class_int, offsetof(nro_BackgroudEffect, F_speed), "I", 2 },
	{ "isFly", &class_boolean, offsetof(nro_BackgroudEffect, F_isFly), "Z", 2 },
	{ "imgSnow", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgSnow, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgHatMua", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgHatMua, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgMua1", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgMua1, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgMua2", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgMua2, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgSao", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgSao, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgLacay", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgLacay, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgShip", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgShip, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgFire1", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgFire1, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgFire2", getArrayClass(&class_int, 1), offsetof(nro_BackgroudEffect, F_imgFire2), "[I", 2 },
	{ "sum", &class_int, offsetof(nro_BackgroudEffect, F_sum), "I", 2 },
	{ "typeEff", &class_int, offsetof(nro_BackgroudEffect, F_typeEff), "I", 1 },
	{ "isRainEffect", getArrayClass(&class_boolean, 1), offsetof(nro_BackgroudEffect, F_isRainEffect), "[Z", 2 },
	{ "tick", getArrayClass(&class_int, 1), offsetof(nro_BackgroudEffect, F_tick), "[I", 2 },
	{ "frame", getArrayClass(&class_int, 1), offsetof(nro_BackgroudEffect, F_frame), "[I", 2 },
	{ "activeEff", getArrayClass(&class_boolean, 1), offsetof(nro_BackgroudEffect, F_activeEff), "[Z", 2 },
	{ "yWater", &class_int, offsetof(nro_BackgroudEffect, F_yWater), "I", 2 },
	{ "colorWater", &class_int, offsetof(nro_BackgroudEffect, F_colorWater), "I", 2 },
	{ "L", &class_int, (intptr_t) &SF_nro_BackgroudEffect_L, "I", 10 },
	{ "water1", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_water1, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "water2", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_water2, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgChamTron1", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgChamTron1, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgChamTron2", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgChamTron2, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "id_water1", &class_short, (intptr_t) &SF_nro_BackgroudEffect_id_water1, "S", 9 },
	{ "water3", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_water3, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "isFog", &class_boolean, (intptr_t) &SF_nro_BackgroudEffect_isFog, "Z", 9 },
	{ "isPaintFar", &class_boolean, (intptr_t) &SF_nro_BackgroudEffect_isPaintFar, "Z", 10 },
	{ "nCloud", &class_int, (intptr_t) &SF_nro_BackgroudEffect_nCloud, "I", 9 },
	{ "imgCloud1", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgCloud1, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgFog", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_BackgroudEffect_imgFog, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "cloudw", &class_int, (intptr_t) &SF_nro_BackgroudEffect_cloudw, "I", 10 },
	{ "xfog", &class_int, (intptr_t) &SF_nro_BackgroudEffect_xfog, "I", 10 },
	{ "yfog", &class_int, (intptr_t) &SF_nro_BackgroudEffect_yfog, "I", 9 },
	{ "fogw", &class_int, (intptr_t) &SF_nro_BackgroudEffect_fogw, "I", 10 },
	{ "t", getArrayClass(&class_int, 1), offsetof(nro_BackgroudEffect, F_t), "[I", 2 },
	{ "dem", getArrayClass(&class_int, 1), offsetof(nro_BackgroudEffect, F_dem), "[I", 2 },
};

static MethodMetadata methods[] {
	{ "loadWaterImages", (intptr_t) SM_nro_BackgroudEffect_loadWaterImages, 0, "()V", 10 },
	{ "clearImage", (intptr_t) SM_nro_BackgroudEffect_clearImage, 0, "()V", 9 },
	{ "isHaveRain", (intptr_t) SM_nro_BackgroudEffect_isHaveRain_R_boolean, 0, "()Z", 9 },
	{ "<init>", (intptr_t) init_nro_BackgroudEffect_int, 0, "(I)V", 2 },
	{ "d", (intptr_t) SM_nro_BackgroudEffect_d, 0, "()V", 10 },
	{ "paintBack", (intptr_t) SM_nro_BackgroudEffect_paintBack_lib_mGraphics, 0, "(Llib/mGraphics;)V", 10 },
	{ "paintFog", (intptr_t) SM_nro_BackgroudEffect_paintFog_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "e", (intptr_t) M_nro_BackgroudEffect_e, VTABLE_nro_BackgroudEffect_e, "()V", 2 },
	{ "addEffect", (intptr_t) SM_nro_BackgroudEffect_addEffect_int, 0, "(I)V", 9 },
	{ "a", (intptr_t) SM_nro_BackgroudEffect_a_int_int, 0, "(II)V", 9 },
	{ "paintWater", (intptr_t) SM_nro_BackgroudEffect_paintWater_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "paintBehindTile", (intptr_t) SM_nro_BackgroudEffect_paintBehindTile_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "paintFrontAll", (intptr_t) SM_nro_BackgroudEffect_paintFrontAll_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "paintFar", (intptr_t) SM_nro_BackgroudEffect_paintFar_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "paintBackAll", (intptr_t) SM_nro_BackgroudEffect_paintBackAll_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "updateEff", (intptr_t) SM_nro_BackgroudEffect_updateEff, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_BackgroudEffect, 0, "()V", 8 },
};

Class class_nro_BackgroudEffect{
		.nativeName = (intptr_t) "nro/BackgroudEffect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_BackgroudEffect),
		.classVtable = (intptr_t) vtable_nro_BackgroudEffect,
		.staticInitializer = (intptr_t) clinit_nro_BackgroudEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_BackgroudEffect,
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
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_BackgroudEffect = registerClass(&class_nro_BackgroudEffect);

}

