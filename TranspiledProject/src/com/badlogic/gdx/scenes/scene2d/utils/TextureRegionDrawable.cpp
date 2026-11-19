#include "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/graphics/g2d/Sprite.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/TransformDrawable.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasSprite.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable *) object;
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(ctx, sp[1].o, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable *) NULL_CHECK((frame[1].o)))->F_region;
	((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable:draw", 22 };
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
	LINE_NUMBER(55);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f), (frame[9].f), (frame[10].f));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable:setRegion", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	((com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region = (jref) (frame[1].o);
	LINE_NUMBER(60);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setMinWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setMinWidth_float])(ctx, sp[0].o, (jfloat(temp0)));
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setMinHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setMinHeight_float])(ctx, sp[0].o, (jfloat(temp1)));
	}
label_2:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable:getRegion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable:tint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(74);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[1].o)));
	frame[2].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(76);
	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(77);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(78);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getMinWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getMinWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getMinHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getMinHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(79);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_com_badlogic_gdx_graphics_g2d_Sprite(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = frame[3].o;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getLeftWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getLeftWidth_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setLeftWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setLeftWidth_float])(ctx, sp[0].o, temp2);
	LINE_NUMBER(81);
	sp[0].o = frame[3].o;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getRightWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getRightWidth_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setRightWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setRightWidth_float])(ctx, sp[0].o, temp3);
	LINE_NUMBER(82);
	sp[0].o = frame[3].o;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getTopHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getTopHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setTopHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setTopHeight_float])(ctx, sp[0].o, temp4);
	LINE_NUMBER(83);
	sp[0].o = frame[3].o;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getBottomHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getBottomHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setBottomHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_setBottomHeight_float])(ctx, sp[0].o, temp5);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
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
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable, };

static FieldMetadata fields[] {
	{ "region", &class_com_badlogic_gdx_graphics_g2d_TextureRegion, offsetof(com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable, F_region), "Lcom/badlogic/gdx/graphics/g2d/TextureRegion;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_graphics_Texture, 0, "(Lcom/badlogic/gdx/graphics/Texture;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable;)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFFFFFF)V", 1 },
	{ "setRegion", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "getRegion", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion, "()Lcom/badlogic/gdx/graphics/g2d/TextureRegion;", 1 },
	{ "tint", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable,
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
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable);

}

