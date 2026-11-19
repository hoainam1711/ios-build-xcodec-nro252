#include "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/TransformDrawable.h"
#include "com/badlogic/gdx/graphics/g2d/Sprite.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasSprite.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/graphics/Color.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) object;
	if (self->F_sprite)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sprite)->clazz)->markFunction)((jobject) self->F_sprite, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setSprite_com_badlogic_gdx_graphics_g2d_Sprite) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setSprite_com_badlogic_gdx_graphics_g2d_Sprite])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[1].o)))->F_sprite;
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setSprite_com_badlogic_gdx_graphics_g2d_Sprite) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setSprite_com_badlogic_gdx_graphics_g2d_Sprite])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float])(ctx, sp[0].o);
	frame[7].f = temp0;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	sp[1].o = frame[6].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Batch_getColor_R_com_badlogic_gdx_graphics_Color) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getColor_R_com_badlogic_gdx_graphics_Color, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[1].o, sp[2].o);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float])(ctx, sp[0].o, (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	((func_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float])(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable:draw", 18 };
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
	LINE_NUMBER(58);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float])(ctx, sp[0].o);
	frame[12].f = temp0;
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	sp[1].o = frame[11].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Batch_getColor_R_com_badlogic_gdx_graphics_Color) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getColor_R_com_badlogic_gdx_graphics_Color, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[1].o, sp[2].o);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float])(ctx, sp[0].o, (frame[10].f));
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float])(ctx, sp[0].o, (frame[8].f), (frame[9].f));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f), (frame[6].f), (frame[7].f));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	((func_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float])(ctx, sp[0].o, (frame[12].f));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setSprite_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable:setSprite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite = (jref) (frame[1].o);
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setMinWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setMinWidth_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setMinHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setMinHeight_float])(ctx, sp[0].o, temp1);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getSprite_R_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable:getSprite", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable:tint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(85);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite, sp[1].o)));
	frame[2].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(87);
	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable *) NULL_CHECK((frame[0].o)))->F_sprite;
	init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_Sprite(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(88);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(89);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getMinWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getMinWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getMinHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getMinHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(90);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_com_badlogic_gdx_graphics_g2d_Sprite(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = frame[3].o;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getLeftWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getLeftWidth_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setLeftWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setLeftWidth_float])(ctx, sp[0].o, temp2);
	LINE_NUMBER(92);
	sp[0].o = frame[3].o;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getRightWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getRightWidth_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setRightWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setRightWidth_float])(ctx, sp[0].o, temp3);
	LINE_NUMBER(93);
	sp[0].o = frame[3].o;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getTopHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getTopHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setTopHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setTopHeight_float])(ctx, sp[0].o, temp4);
	LINE_NUMBER(94);
	sp[0].o = frame[3].o;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getBottomHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getBottomHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setBottomHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setBottomHeight_float])(ctx, sp[0].o, temp5);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setSprite_com_badlogic_gdx_graphics_g2d_Sprite,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getSprite_R_com_badlogic_gdx_graphics_g2d_Sprite,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable,
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
	{ "setSprite", "(Lcom/badlogic/gdx/graphics/g2d/Sprite;)V" },
	{ "getSprite", "()Lcom/badlogic/gdx/graphics/g2d/Sprite;" },
	{ "tint", "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable, };

static FieldMetadata fields[] {
	{ "sprite", &class_com_badlogic_gdx_graphics_g2d_Sprite, offsetof(com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable, F_sprite), "Lcom/badlogic/gdx/graphics/g2d/Sprite;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_com_badlogic_gdx_graphics_g2d_Sprite, 0, "(Lcom/badlogic/gdx/graphics/g2d/Sprite;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable;)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFFFFFF)V", 1 },
	{ "setSprite", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setSprite_com_badlogic_gdx_graphics_g2d_Sprite, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setSprite_com_badlogic_gdx_graphics_g2d_Sprite, "(Lcom/badlogic/gdx/graphics/g2d/Sprite;)V", 1 },
	{ "getSprite", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getSprite_R_com_badlogic_gdx_graphics_g2d_Sprite, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_getSprite_R_com_badlogic_gdx_graphics_g2d_Sprite, "()Lcom/badlogic/gdx/graphics/g2d/Sprite;", 1 },
	{ "tint", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable);

}

