#include "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/utils/Align.h"
#include "java/lang/Object.h"
#include "java/lang/UnsupportedOperationException.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(34);
	init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(30);
	((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(31);
	((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_align = (12);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(30);
	((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(31);
	((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_align = (12);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(30);
	((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(31);
	((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_align = (12);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(46);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Batch_getPackedColor_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getPackedColor_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[6].f = temp0;
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Batch_getColor_R_com_badlogic_gdx_graphics_Color) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getColor_R_com_badlogic_gdx_graphics_Color, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[1].o, sp[2].o);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_com_badlogic_gdx_graphics_Color) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_com_badlogic_gdx_graphics_Color, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(49);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o));
	SM_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_int(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_scale), ((jint)((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_align));
	LINE_NUMBER(51);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setPackedColor_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setPackedColor_float, (frame[1].o)))(ctx, (frame[1].o), (frame[6].f));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jint param7) {
	jtype frame[45];
	auto stack = &frame[35];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:draw", 45 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(56);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, (frame[1].o));
	frame[8].f = ((jfloat(temp0)) * (frame[6].f));
	LINE_NUMBER(57);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, (frame[1].o));
	frame[9].f = ((jfloat(temp1)) * (frame[6].f));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, (frame[1].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(60);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, (frame[10].o));
	frame[11].f = ((jfloat(temp2)) * (frame[6].f));
	LINE_NUMBER(61);
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, (frame[10].o));
	frame[12].f = ((jfloat(temp3)) * (frame[6].f));
	LINE_NUMBER(62);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float])(ctx, (frame[1].o));
	frame[13].f = temp4;
	LINE_NUMBER(63);
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float])(ctx, (frame[1].o));
	frame[14].f = temp5;
	LINE_NUMBER(64);
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float])(ctx, (frame[1].o));
	frame[15].f = temp6;
	LINE_NUMBER(65);
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float])(ctx, (frame[1].o));
	frame[16].f = temp7;
	LINE_NUMBER(67);
	frame[17].i = (jint(((frame[4].f) / (frame[8].f))));
	LINE_NUMBER(70);
	jint temp8 = (jint)SM_com_badlogic_gdx_utils_Align_isLeft_int_R_boolean(ctx, (frame[7].i));
	if (temp8 == 0) goto label_11;
	}
	{
	LINE_NUMBER(71);
	frame[18].f = (jfloat(0));
	LINE_NUMBER(72);
	frame[19].f = ((frame[4].f) - ((frame[8].f) * (jfloat((frame[17].i)))));
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_Align_isRight_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(74);
	frame[18].f = ((frame[4].f) - ((frame[8].f) * (jfloat((frame[17].i)))));
	LINE_NUMBER(75);
	frame[19].f = (jfloat(0));
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(77);
	if ((frame[17].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(78);
	if (((frame[17].i) % (jint(2))) != (jint(1))) goto label_22;
	}
	INST_ILOAD(17);
	goto label_23;
label_22:;
	{
	jint temp0 = (frame[17].i) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_23:;
	{
	sp -= 1;
	frame[17].i = sp[0].i;
	LINE_NUMBER(79);
	frame[20].f = ((jfloat(0.5f)) * ((frame[4].f) - ((frame[8].f) * (jfloat((frame[17].i))))));
	LINE_NUMBER(80);
	frame[18].f = (frame[20].f);
	LINE_NUMBER(81);
	frame[19].f = (frame[20].f);
	LINE_NUMBER(82);
	goto label_15;
	}
label_20:;
	{
	LINE_NUMBER(83);
	frame[18].f = (jfloat(0));
	LINE_NUMBER(84);
	frame[19].f = (jfloat(0));
	}
label_15:;
	{
	LINE_NUMBER(87);
	frame[20].i = (jint(((frame[5].f) / (frame[9].f))));
	LINE_NUMBER(90);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_Align_isTop_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(91);
	frame[21].f = (jfloat(0));
	LINE_NUMBER(92);
	frame[22].f = ((frame[5].f) - ((frame[9].f) * (jfloat((frame[20].i)))));
	goto label_34;
	}
label_30:;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_Align_isBottom_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(94);
	frame[21].f = ((frame[5].f) - ((frame[9].f) * (jfloat((frame[20].i)))));
	LINE_NUMBER(95);
	frame[22].f = (jfloat(0));
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(97);
	if ((frame[20].i) == 0) goto label_39;
	}
	{
	LINE_NUMBER(98);
	if (((frame[20].i) % (jint(2))) != (jint(1))) goto label_41;
	}
	INST_ILOAD(20);
	goto label_42;
label_41:;
	{
	jint temp0 = (frame[20].i) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_42:;
	{
	sp -= 1;
	frame[20].i = sp[0].i;
	LINE_NUMBER(99);
	frame[23].f = ((jfloat(0.5f)) * ((frame[5].f) - ((frame[9].f) * (jfloat((frame[20].i))))));
	LINE_NUMBER(100);
	frame[21].f = (frame[23].f);
	LINE_NUMBER(101);
	frame[22].f = (frame[23].f);
	LINE_NUMBER(102);
	goto label_34;
	}
label_39:;
	{
	LINE_NUMBER(103);
	frame[21].f = (jfloat(0));
	LINE_NUMBER(104);
	frame[22].f = (jfloat(0));
	}
label_34:;
	{
	LINE_NUMBER(108);
	frame[23].f = (frame[2].f);
	LINE_NUMBER(109);
	frame[24].f = (frame[3].f);
	LINE_NUMBER(112);
	if ((floatCompare((frame[18].f), (jfloat(0)), -1)) <= 0) goto label_50;
	}
	{
	LINE_NUMBER(113);
	frame[25].f = ((frame[15].f) - ((frame[18].f) / (frame[11].f)));
	LINE_NUMBER(116);
	if ((floatCompare((frame[22].f), (jfloat(0)), -1)) <= 0) goto label_53;
	}
	{
	LINE_NUMBER(117);
	frame[26].f = ((frame[14].f) + ((frame[22].f) / (frame[12].f)));
	LINE_NUMBER(118);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[18].f), (frame[22].f), (frame[25].f), (frame[26].f), (frame[15].f), (frame[14].f));
	LINE_NUMBER(119);
	frame[24].f = ((frame[24].f) + (frame[22].f));
	}
label_53:;
	{
	LINE_NUMBER(123);
	if ((frame[20].i) != 0) goto label_57;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_Align_isCenterVertical_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(124);
	frame[26].f = (((jfloat(0.5f)) * ((frame[16].f) - (frame[14].f))) * ((jfloat(1)) - ((frame[5].f) / (frame[9].f))));
	LINE_NUMBER(125);
	frame[27].f = ((frame[16].f) - (frame[26].f));
	LINE_NUMBER(126);
	frame[28].f = ((frame[14].f) + (frame[26].f));
	LINE_NUMBER(127);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[18].f), (frame[5].f), (frame[25].f), (frame[27].f), (frame[15].f), (frame[28].f));
	LINE_NUMBER(128);
	frame[24].f = ((frame[24].f) + (frame[5].f));
	LINE_NUMBER(129);
	goto label_64;
	}
label_57:;
	{
	LINE_NUMBER(130);
	frame[26].i = (jint(0));
	}
label_65:;
	{
	if ((frame[26].i) >= (frame[20].i)) goto label_64;
	}
	{
	LINE_NUMBER(131);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[18].f), (frame[9].f), (frame[25].f), (frame[16].f), (frame[15].f), (frame[14].f));
	LINE_NUMBER(132);
	frame[24].f = ((frame[24].f) + (frame[9].f));
	LINE_NUMBER(130);
	INST_IINC(26, 1);
	goto label_65;
	}
label_64:;
	{
	LINE_NUMBER(137);
	if ((floatCompare((frame[21].f), (jfloat(0)), -1)) <= 0) goto label_50;
	}
	{
	LINE_NUMBER(138);
	frame[26].f = ((frame[16].f) - ((frame[21].f) / (frame[12].f)));
	LINE_NUMBER(139);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[18].f), (frame[21].f), (frame[25].f), (frame[16].f), (frame[15].f), (frame[26].f));
	}
label_50:;
	{
	LINE_NUMBER(146);
	if ((floatCompare((frame[22].f), (jfloat(0)), -1)) <= 0) goto label_71;
	}
	{
	LINE_NUMBER(147);
	frame[23].f = ((frame[2].f) + (frame[18].f));
	LINE_NUMBER(148);
	frame[24].f = (frame[3].f);
	LINE_NUMBER(150);
	frame[25].f = ((frame[14].f) + ((frame[22].f) / (frame[12].f)));
	LINE_NUMBER(152);
	if ((frame[17].i) != 0) goto label_76;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_Align_isCenterHorizontal_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_76;
	}
	{
	LINE_NUMBER(153);
	frame[26].f = (((jfloat(0.5f)) * ((frame[15].f) - (frame[13].f))) * ((jfloat(1)) - ((frame[4].f) / (frame[8].f))));
	LINE_NUMBER(154);
	frame[27].f = ((frame[13].f) + (frame[26].f));
	LINE_NUMBER(155);
	frame[28].f = ((frame[15].f) - (frame[26].f));
	LINE_NUMBER(156);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[4].f), (frame[22].f), (frame[27].f), (frame[25].f), (frame[28].f), (frame[14].f));
	LINE_NUMBER(157);
	frame[23].f = ((frame[23].f) + (frame[4].f));
	LINE_NUMBER(158);
	goto label_71;
	}
label_76:;
	{
	LINE_NUMBER(159);
	frame[26].i = (jint(0));
	}
label_83:;
	{
	if ((frame[26].i) >= (frame[17].i)) goto label_71;
	}
	{
	LINE_NUMBER(160);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[8].f), (frame[22].f), (frame[13].f), (frame[25].f), (frame[15].f), (frame[14].f));
	LINE_NUMBER(161);
	frame[23].f = ((frame[23].f) + (frame[8].f));
	LINE_NUMBER(159);
	INST_IINC(26, 1);
	goto label_83;
	}
label_71:;
	{
	LINE_NUMBER(168);
	frame[23].f = ((frame[2].f) + (frame[18].f));
	LINE_NUMBER(170);
	frame[25].i = (frame[17].i);
	LINE_NUMBER(171);
	frame[26].i = (frame[20].i);
	LINE_NUMBER(173);
	frame[27].f = (frame[8].f);
	LINE_NUMBER(174);
	frame[28].f = (frame[9].f);
	LINE_NUMBER(175);
	frame[29].f = (frame[13].f);
	LINE_NUMBER(176);
	frame[30].f = (frame[15].f);
	LINE_NUMBER(177);
	frame[31].f = (frame[16].f);
	LINE_NUMBER(178);
	frame[32].f = (frame[14].f);
	LINE_NUMBER(179);
	if ((frame[17].i) != 0) goto label_96;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_Align_isCenterHorizontal_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_96;
	}
	{
	LINE_NUMBER(180);
	frame[17].i = (jint(1));
	LINE_NUMBER(181);
	frame[27].f = (frame[4].f);
	LINE_NUMBER(182);
	frame[33].f = (((jfloat(0.5f)) * ((frame[15].f) - (frame[13].f))) * ((jfloat(1)) - ((frame[4].f) / (frame[8].f))));
	LINE_NUMBER(183);
	frame[29].f = ((frame[13].f) + (frame[33].f));
	LINE_NUMBER(184);
	frame[30].f = ((frame[15].f) - (frame[33].f));
	}
label_96:;
	{
	LINE_NUMBER(186);
	if ((frame[20].i) != 0) goto label_102;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_Align_isCenterVertical_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_102;
	}
	{
	LINE_NUMBER(187);
	frame[20].i = (jint(1));
	LINE_NUMBER(188);
	frame[28].f = (frame[5].f);
	LINE_NUMBER(189);
	frame[33].f = (((jfloat(0.5f)) * ((frame[16].f) - (frame[14].f))) * ((jfloat(1)) - ((frame[5].f) / (frame[9].f))));
	LINE_NUMBER(190);
	frame[31].f = ((frame[16].f) - (frame[33].f));
	LINE_NUMBER(191);
	frame[32].f = ((frame[14].f) + (frame[33].f));
	}
label_102:;
	{
	LINE_NUMBER(193);
	frame[33].i = (jint(0));
	}
label_108:;
	{
	if ((frame[33].i) >= (frame[17].i)) goto label_109;
	}
	{
	LINE_NUMBER(194);
	frame[24].f = ((frame[3].f) + (frame[22].f));
	LINE_NUMBER(195);
	frame[34].i = (jint(0));
	}
label_112:;
	{
	if ((frame[34].i) >= (frame[20].i)) goto label_113;
	}
	{
	LINE_NUMBER(196);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[27].f), (frame[28].f), (frame[29].f), (frame[31].f), (frame[30].f), (frame[32].f));
	LINE_NUMBER(198);
	frame[24].f = ((frame[24].f) + (frame[28].f));
	LINE_NUMBER(195);
	INST_IINC(34, 1);
	goto label_112;
	}
label_113:;
	{
	LINE_NUMBER(200);
	frame[23].f = ((frame[23].f) + (frame[27].f));
	LINE_NUMBER(193);
	INST_IINC(33, 1);
	goto label_108;
	}
label_109:;
	{
	LINE_NUMBER(203);
	frame[17].i = (frame[25].i);
	LINE_NUMBER(204);
	frame[20].i = (frame[26].i);
	LINE_NUMBER(208);
	if ((floatCompare((frame[21].f), (jfloat(0)), -1)) <= 0) goto label_120;
	}
	{
	LINE_NUMBER(209);
	frame[23].f = ((frame[2].f) + (frame[18].f));
	LINE_NUMBER(211);
	frame[25].f = ((frame[16].f) - ((frame[21].f) / (frame[12].f)));
	LINE_NUMBER(213);
	if ((frame[17].i) != 0) goto label_124;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_Align_isCenterHorizontal_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_124;
	}
	{
	LINE_NUMBER(214);
	frame[26].f = (((jfloat(0.5f)) * ((frame[15].f) - (frame[13].f))) * ((jfloat(1)) - ((frame[4].f) / (frame[8].f))));
	LINE_NUMBER(215);
	frame[27].f = ((frame[13].f) + (frame[26].f));
	LINE_NUMBER(216);
	frame[28].f = ((frame[15].f) - (frame[26].f));
	LINE_NUMBER(217);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[4].f), (frame[21].f), (frame[27].f), (frame[16].f), (frame[28].f), (frame[25].f));
	LINE_NUMBER(218);
	frame[23].f = ((frame[23].f) + (frame[4].f));
	LINE_NUMBER(219);
	goto label_120;
	}
label_124:;
	{
	LINE_NUMBER(220);
	frame[26].i = (jint(0));
	}
label_131:;
	{
	if ((frame[26].i) >= (frame[17].i)) goto label_120;
	}
	{
	LINE_NUMBER(221);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[8].f), (frame[21].f), (frame[13].f), (frame[16].f), (frame[15].f), (frame[25].f));
	LINE_NUMBER(222);
	frame[23].f = ((frame[23].f) + (frame[8].f));
	LINE_NUMBER(220);
	INST_IINC(26, 1);
	goto label_131;
	}
label_120:;
	{
	LINE_NUMBER(229);
	if ((floatCompare((frame[19].f), (jfloat(0)), -1)) <= 0) goto label_135;
	}
	{
	LINE_NUMBER(230);
	frame[24].f = (frame[3].f);
	LINE_NUMBER(232);
	frame[25].f = ((frame[13].f) + ((frame[19].f) / (frame[11].f)));
	LINE_NUMBER(235);
	if ((floatCompare((frame[22].f), (jfloat(0)), -1)) <= 0) goto label_139;
	}
	{
	LINE_NUMBER(236);
	frame[26].f = ((frame[14].f) + ((frame[22].f) / (frame[12].f)));
	LINE_NUMBER(237);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[19].f), (frame[22].f), (frame[13].f), (frame[26].f), (frame[25].f), (frame[14].f));
	LINE_NUMBER(238);
	frame[24].f = ((frame[24].f) + (frame[22].f));
	}
label_139:;
	{
	LINE_NUMBER(242);
	if ((frame[20].i) != 0) goto label_143;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_Align_isCenterVertical_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_143;
	}
	{
	LINE_NUMBER(243);
	frame[26].f = (((jfloat(0.5f)) * ((frame[16].f) - (frame[14].f))) * ((jfloat(1)) - ((frame[5].f) / (frame[9].f))));
	LINE_NUMBER(244);
	frame[27].f = ((frame[16].f) - (frame[26].f));
	LINE_NUMBER(245);
	frame[28].f = ((frame[14].f) + (frame[26].f));
	LINE_NUMBER(246);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[19].f), (frame[5].f), (frame[13].f), (frame[27].f), (frame[25].f), (frame[28].f));
	LINE_NUMBER(247);
	frame[24].f = ((frame[24].f) + (frame[5].f));
	LINE_NUMBER(248);
	goto label_150;
	}
label_143:;
	{
	LINE_NUMBER(249);
	frame[26].i = (jint(0));
	}
label_151:;
	{
	if ((frame[26].i) >= (frame[20].i)) goto label_150;
	}
	{
	LINE_NUMBER(250);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[19].f), (frame[9].f), (frame[13].f), (frame[16].f), (frame[25].f), (frame[14].f));
	LINE_NUMBER(251);
	frame[24].f = ((frame[24].f) + (frame[9].f));
	LINE_NUMBER(249);
	INST_IINC(26, 1);
	goto label_151;
	}
label_150:;
	{
	LINE_NUMBER(256);
	if ((floatCompare((frame[21].f), (jfloat(0)), -1)) <= 0) goto label_135;
	}
	{
	LINE_NUMBER(257);
	frame[26].f = ((frame[16].f) - ((frame[21].f) / (frame[12].f)));
	LINE_NUMBER(258);
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[10].o), (frame[23].f), (frame[24].f), (frame[19].f), (frame[21].f), (frame[13].f), (frame[16].f), (frame[25].f), (frame[26].f));
	}
label_135:;
	LINE_NUMBER(261);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(265);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:setScale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(273);
	((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_scale = (frame[1].f);
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:getScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_scale);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getAlign_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:getAlign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_align);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setAlign_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:setAlign", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(285);
	((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[0].o)))->F_align = (frame[1].i);
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:tint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(289);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(290);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable *) NULL_CHECK((frame[2].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(291);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getLeftWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getLeftWidth_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setLeftWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setLeftWidth_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(292);
	sp[0].o = frame[2].o;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getRightWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getRightWidth_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setRightWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setRightWidth_float])(ctx, sp[0].o, temp1);
	LINE_NUMBER(293);
	sp[0].o = frame[2].o;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getTopHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getTopHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setTopHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setTopHeight_float])(ctx, sp[0].o, temp2);
	LINE_NUMBER(294);
	sp[0].o = frame[2].o;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getBottomHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getBottomHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setBottomHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setBottomHeight_float])(ctx, sp[0].o, temp3);
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable:tint", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getLeftWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setLeftWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getRightWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setRightWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getTopHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setTopHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getBottomHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setBottomHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setMinWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setMinHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinSize_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getName_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setScale_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getScale_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getAlign_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setAlign_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable,
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
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V" },
	{ "getLeftWidth", "()F" },
	{ "setLeftWidth", "(F)V" },
	{ "getRightWidth", "()F" },
	{ "setRightWidth", "(F)V" },
	{ "getTopHeight", "()F" },
	{ "setTopHeight", "(F)V" },
	{ "getBottomHeight", "()F" },
	{ "setBottomHeight", "(F)V" },
	{ "setPadding", "(FFFF)V" },
	{ "setPadding", "(F)V" },
	{ "setPadding", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V" },
	{ "getMinWidth", "()F" },
	{ "setMinWidth", "(F)V" },
	{ "getMinHeight", "()F" },
	{ "setMinHeight", "(F)V" },
	{ "setMinSize", "(FF)V" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFFFFFF)V" },
	{ "setRegion", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V" },
	{ "getRegion", "()Lcom/badlogic/gdx/graphics/g2d/TextureRegion;" },
	{ "tint", "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "setScale", "(F)V" },
	{ "getScale", "()F" },
	{ "getAlign", "()I" },
	{ "setAlign", "(I)V" },
	{ "tint", "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/TiledDrawable;" },
};

static FieldMetadata fields[] {
	{ "color", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable, F_color), "Lcom/badlogic/gdx/graphics/Color;", 18 },
	{ "scale", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable, F_scale), "F", 2 },
	{ "align", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable, F_align), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable;)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 1 },
	{ "draw", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_int, 0, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFFFI)V", 9 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFFFFFF)V", 1 },
	{ "getColor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "setScale", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setScale_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setScale_float, "(F)V", 1 },
	{ "getScale", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getScale_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getScale_R_float, "()F", 1 },
	{ "getAlign", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getAlign_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_getAlign_R_int, "()I", 1 },
	{ "setAlign", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setAlign_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setAlign_int, "(I)V", 1 },
	{ "tint", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/TiledDrawable;", 1 },
	{ "tint", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable);

}

