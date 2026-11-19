#include "com/badlogic/gdx/scenes/scene2d/ui/Image.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Image.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/utils/Scaling.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Widget.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/TransformDrawable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "com/badlogic/gdx/graphics/g2d/NinePatch.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Image(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_Widget(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Image *) object;
	if (self->F_scaling)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scaling)->clazz)->markFunction)((jobject) self->F_scaling, mark, depth + 1);
	if (self->F_drawable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drawable)->clazz)->markFunction)((jobject) self->F_drawable, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Image(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Image(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Image(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(44);
	init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, (jobject(nullptr)))));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_com_badlogic_gdx_graphics_g2d_NinePatch(ctx, sp[1].o, (frame[1].o));
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_stretch;
	init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_utils_Scaling_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[1].o));
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_stretch;
	init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_utils_Scaling_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable);
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(ctx, sp[2].o, (frame[1].o));
	init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[1].o), (frame[2].o));
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_stretch;
	init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_utils_Scaling_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_stretch;
	init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_utils_Scaling_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_utils_Scaling(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(78);
	init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_utils_Scaling_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_utils_Scaling_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(82);
	init_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx, (frame[0].o));
	LINE_NUMBER(38);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_align = (jint(1));
	LINE_NUMBER(83);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(84);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_scaling = (jref) (frame[2].o);
	LINE_NUMBER(85);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_align = (frame[3].i);
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Image_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Image_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:layout", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = temp0;
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	frame[2].f = temp1;
	LINE_NUMBER(94);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getWidth_R_float])(ctx, (frame[0].o));
	frame[3].f = temp2;
	LINE_NUMBER(95);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getHeight_R_float])(ctx, (frame[0].o));
	frame[4].f = temp3;
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_scaling;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Scaling_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Scaling_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	frame[5].o = sp[0].o;
	LINE_NUMBER(98);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[5].o)))->F_x);
	LINE_NUMBER(99);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[5].o)))->F_y);
	LINE_NUMBER(101);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_align) & (8)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(102);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX = (jfloat(0));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(103);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_align) & (16)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(104);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX = (jfloat((jint(((frame[3].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth))))));
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(106);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX = (jfloat((jint((((frame[3].f) / (jfloat(2))) - (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth) / (jfloat(2))))))));
	}
label_11:;
	{
	LINE_NUMBER(108);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_align) & (jint(2))) == 0) goto label_14;
	}
	{
	LINE_NUMBER(109);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY = (jfloat((jint(((frame[4].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight))))));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(110);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_align) & (jint(4))) == 0) goto label_17;
	}
	{
	LINE_NUMBER(111);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY = (jfloat(0));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(113);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY = (jfloat((jint((((frame[4].f) / (jfloat(2))) - (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight) / (jfloat(2))))))));
	}
label_16:;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Image_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:draw", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(117);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Image_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_validate])(ctx, (frame[0].o));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(120);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(122);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getX_R_float])(ctx, (frame[0].o));
	frame[4].f = temp0;
	LINE_NUMBER(123);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getY_R_float])(ctx, (frame[0].o));
	frame[5].f = temp1;
	LINE_NUMBER(124);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getScaleX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getScaleX_R_float])(ctx, (frame[0].o));
	frame[6].f = temp2;
	LINE_NUMBER(125);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getScaleY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getScaleY_R_float])(ctx, (frame[0].o));
	frame[7].f = temp3;
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(128);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getRotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getRotation_R_float])(ctx, (frame[0].o));
	frame[8].f = temp0;
	LINE_NUMBER(129);
	if ((floatCompare((frame[6].f), (jfloat(1)), -1)) != 0) goto label_11;
	}
	{
	if ((floatCompare((frame[7].f), (jfloat(1)), -1)) != 0) goto label_11;
	}
	{
	if ((floatCompare((frame[8].f), (jfloat(0)), -1)) == 0) goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable, sp[0].o);
	sp[1].o = frame[1].o;
	jfloat temp0 = (frame[4].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX);
	jfloat temp1 = (frame[5].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getOriginX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getOriginX_R_float])(ctx, (frame[0].o));
	jfloat temp3 = temp2 - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getOriginY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getOriginY_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3, (temp4 - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight), (frame[6].f), (frame[7].f), (frame[8].f));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].o), ((frame[4].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX)), ((frame[5].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY)), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth) * (frame[6].f)), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight) * (frame[7].f)));
	}
label_13:;
	LINE_NUMBER(136);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:setDrawable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[1].o), (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:setDrawable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(147);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(148);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	if ((floatCompare(temp0, temp1, -1)) != 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefHeight_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	if ((floatCompare(temp0, temp1, -1)) == 0) goto label_5;
	}
label_4:;
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_Image_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_invalidateHierarchy])(ctx, (frame[0].o));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(150);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Image_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_invalidateHierarchy])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(151);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable = (jref) (frame[1].o);
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Image_getDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:getDrawable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Image_setScaling_com_badlogic_gdx_utils_Scaling(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:setScaling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(160);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scaling cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(161);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_scaling = (jref) (frame[1].o);
	LINE_NUMBER(162);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Image_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Image_setAlign_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:setAlign", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(166);
	((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_align = (frame[1].i);
	LINE_NUMBER(167);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Image_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Image_getAlign_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:getAlign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_align);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Image_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Image_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:getImageX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:getImageY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:getImageWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:getImageHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Image_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Image:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getName_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(210);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(212);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[2].o), (46));
	frame[3].i = temp0;
	LINE_NUMBER(213);
	if ((frame[3].i) == (jint(-1))) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), ((frame[3].i) + (jint(1))));
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(214);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[2].o), (36));
	sp += 1;
	if (temp0 == (jint(-1))) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Image "_j));
	goto label_7;
label_6:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Image[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getCaptureListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasActions_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearActions,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearListeners,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_firstAscendant_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasParent_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchable_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setVisible_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ascendantsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ancestorsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasKeyboardFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasScrollFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusTarget_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getUserObject_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setUserObject_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_moveBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_sizeChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRotation_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setRotation_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotateBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getName_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setName_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toFront,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toBack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipEnd,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_screenToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToParentCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToActorCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_setScaling_com_badlogic_gdx_utils_Scaling,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_setAlign_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getAlign_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageHeight_R_float,
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
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "act", "(F)V" },
	{ "fire", "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z" },
	{ "notify", "(Lcom/badlogic/gdx/scenes/scene2d/Event;Z)Z" },
	{ "hit", "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "remove", "()Z" },
	{ "addListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getCaptureListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "removeAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "getActions", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getStage", "()Lcom/badlogic/gdx/scenes/scene2d/Stage;" },
	{ "setStage", "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V" },
	{ "isDescendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "isAscendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "firstAscendant", "(Ljava/lang/Class;)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "hasParent", "()Z" },
	{ "getParent", "()Lcom/badlogic/gdx/scenes/scene2d/Group;" },
	{ "setParent", "(Lcom/badlogic/gdx/scenes/scene2d/Group;)V" },
	{ "isTouchable", "()Z" },
	{ "getTouchable", "()Lcom/badlogic/gdx/scenes/scene2d/Touchable;" },
	{ "setTouchable", "(Lcom/badlogic/gdx/scenes/scene2d/Touchable;)V" },
	{ "isVisible", "()Z" },
	{ "setVisible", "(Z)V" },
	{ "ascendantsVisible", "()Z" },
	{ "ancestorsVisible", "()Z" },
	{ "hasKeyboardFocus", "()Z" },
	{ "hasScrollFocus", "()Z" },
	{ "isTouchFocusTarget", "()Z" },
	{ "isTouchFocusListener", "()Z" },
	{ "getUserObject", "()Ljava/lang/Object;" },
	{ "setUserObject", "(Ljava/lang/Object;)V" },
	{ "getX", "()F" },
	{ "getX", "(I)F" },
	{ "setX", "(F)V" },
	{ "setX", "(FI)V" },
	{ "getY", "()F" },
	{ "setY", "(F)V" },
	{ "setY", "(FI)V" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "positionChanged", "()V" },
	{ "sizeChanged", "()V" },
	{ "scaleChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "getOriginX", "()F" },
	{ "setOriginX", "(F)V" },
	{ "getOriginY", "()F" },
	{ "setOriginY", "(F)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "getScaleX", "()F" },
	{ "setScaleX", "(F)V" },
	{ "getScaleY", "()F" },
	{ "setScaleY", "(F)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "setZIndex", "(I)Z" },
	{ "getZIndex", "()I" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "stageToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "parentToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToScreenCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToStageCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToParentCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToAscendantCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToActorCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "drawDebug", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "drawDebugBounds", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "setDebug", "(Z)V" },
	{ "getDebug", "()Z" },
	{ "debug", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "layout", "()V" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "validate", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "needsLayout", "()Z" },
	{ "setDrawable", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V" },
	{ "setDrawable", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V" },
	{ "getDrawable", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "setScaling", "(Lcom/badlogic/gdx/utils/Scaling;)V" },
	{ "setAlign", "(I)V" },
	{ "getAlign", "()I" },
	{ "getImageX", "()F" },
	{ "getImageY", "()F" },
	{ "getImageWidth", "()F" },
	{ "getImageHeight", "()F" },
};

static FieldMetadata fields[] {
	{ "scaling", &class_com_badlogic_gdx_utils_Scaling, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Image, F_scaling), "Lcom/badlogic/gdx/utils/Scaling;", 2 },
	{ "align", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Image, F_align), "I", 2 },
	{ "imageX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Image, F_imageX), "F", 2 },
	{ "imageY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Image, F_imageY), "F", 2 },
	{ "imageWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Image, F_imageWidth), "F", 2 },
	{ "imageHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Image, F_imageHeight), "F", 2 },
	{ "drawable", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Image, F_drawable), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Image, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_graphics_g2d_NinePatch, 0, "(Lcom/badlogic/gdx/graphics/g2d/NinePatch;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_graphics_Texture, 0, "(Lcom/badlogic/gdx/graphics/Texture;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_utils_Scaling, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/utils/Scaling;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_utils_Scaling_int, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/utils/Scaling;I)V", 1 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_layout, "()V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "setDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "setDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "getDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "setScaling", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_setScaling_com_badlogic_gdx_utils_Scaling, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_setScaling_com_badlogic_gdx_utils_Scaling, "(Lcom/badlogic/gdx/utils/Scaling;)V", 1 },
	{ "setAlign", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_setAlign_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_setAlign_int, "(I)V", 1 },
	{ "getAlign", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getAlign_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getAlign_R_int, "()I", 1 },
	{ "getMinWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getMinWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getMinHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getMinHeight_R_float, "()F", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getPrefHeight_R_float, "()F", 1 },
	{ "getImageX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageX_R_float, "()F", 1 },
	{ "getImageY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageY_R_float, "()F", 1 },
	{ "getImageWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageWidth_R_float, "()F", 1 },
	{ "getImageHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getImageHeight_R_float, "()F", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Image_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Image{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Image",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Widget,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Image),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Image,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Image,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Image,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 142,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Image = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Image);

}

