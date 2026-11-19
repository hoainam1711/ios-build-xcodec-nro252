#include "com/badlogic/gdx/graphics/g2d/Sprite.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Sprite.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_g2d_Sprite_VERTEX_SIZE;
jint SF_com_badlogic_gdx_graphics_g2d_Sprite_SPRITE_SIZE;

void mark_com_badlogic_gdx_graphics_g2d_Sprite(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_TextureRegion(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_Sprite *) object;
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_bounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bounds)->clazz)->markFunction)((jobject) self->F_bounds, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	SF_com_badlogic_gdx_graphics_g2d_Sprite_VERTEX_SIZE = jint(5);
	SF_com_badlogic_gdx_graphics_g2d_Sprite_SPRITE_SIZE = jint(20);
}

void init_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(50);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, (frame[0].o));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (20));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(40);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor = (clinit_com_badlogic_gdx_graphics_Color(ctx), (jfloat)SF_com_badlogic_gdx_graphics_Color_WHITE_FLOAT_BITS);
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(51);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float])(ctx, (frame[0].o), (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, (frame[1].o));
	init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture_int_int_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(64);
	init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture_int_int_int_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(0)), (frame[2].i), (frame[3].i));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(70);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, (frame[0].o));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (20));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(40);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor = (clinit_com_badlogic_gdx_graphics_Color(ctx), (jfloat)SF_com_badlogic_gdx_graphics_Color_WHITE_FLOAT_BITS);
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(71);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"texture cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(72);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(73);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_int_int_int_int])(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(74);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float])(ctx, (frame[0].o), (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[4].i));
	jfloat temp1 = jfloat(temp0);
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[5].i));
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float])(ctx, sp[0].o, temp1, (jfloat(temp2)));
	LINE_NUMBER(76);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))), (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, (frame[0].o));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (20));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(40);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor = (clinit_com_badlogic_gdx_graphics_Color(ctx), (jfloat)SF_com_badlogic_gdx_graphics_Color_WHITE_FLOAT_BITS);
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(83);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(84);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float])(ctx, (frame[0].o), (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, (frame[1].o));
	jfloat temp1 = jfloat(temp0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float])(ctx, sp[0].o, temp1, (jfloat(temp2)));
	LINE_NUMBER(86);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))), (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(93);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, (frame[0].o));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (20));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(40);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor = (clinit_com_badlogic_gdx_graphics_Color(ctx), (jfloat)SF_com_badlogic_gdx_graphics_Color_WHITE_FLOAT_BITS);
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(94);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(95);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float])(ctx, (frame[0].o), (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[4].i));
	jfloat temp1 = jfloat(temp0);
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[5].i));
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float])(ctx, sp[0].o, temp1, (jfloat(temp2)));
	LINE_NUMBER(97);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))), (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, (frame[0].o));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (20));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(40);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor = (clinit_com_badlogic_gdx_graphics_Color(ctx), (jfloat)SF_com_badlogic_gdx_graphics_Color_WHITE_FLOAT_BITS);
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(102);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_set_com_badlogic_gdx_graphics_g2d_Sprite) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_set_com_badlogic_gdx_graphics_g2d_Sprite])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_set_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprite cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_vertices;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (20));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(110);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(111);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(112);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2 = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(113);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2 = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(114);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(115);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(116);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(117);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(118);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_regionWidth = ((jint)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_regionWidth);
	LINE_NUMBER(119);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_regionHeight = ((jint)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_regionHeight);
	LINE_NUMBER(120);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originX = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_originX);
	LINE_NUMBER(121);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originY = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_originY);
	LINE_NUMBER(122);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_rotation);
	LINE_NUMBER(123);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_scaleX);
	LINE_NUMBER(124);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_scaleY);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(126);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = ((jint)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[1].o)))->F_dirty);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setBounds", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(132);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(133);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(134);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width = (frame[3].f);
	LINE_NUMBER(135);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].f);
	LINE_NUMBER(137);
	if (((jint)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(138);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation), (jfloat(0)), -1)) != 0) goto label_6;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX), (jfloat(1)), -1)) != 0) goto label_6;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY), (jfloat(1)), -1)) == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(139);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(143);
	frame[5].f = ((frame[1].f) + (frame[3].f));
	LINE_NUMBER(144);
	frame[6].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[7].o = sp[0].o;
	LINE_NUMBER(146);
	ARRAY_ACCESS(jfloat, (frame[7].o), (jint(0))) = (frame[1].f);
	LINE_NUMBER(147);
	ARRAY_ACCESS(jfloat, (frame[7].o), (jint(1))) = (frame[2].f);
	LINE_NUMBER(149);
	ARRAY_ACCESS(jfloat, (frame[7].o), (jint(5))) = (frame[1].f);
	LINE_NUMBER(150);
	ARRAY_ACCESS(jfloat, (frame[7].o), (6)) = (frame[6].f);
	LINE_NUMBER(152);
	ARRAY_ACCESS(jfloat, (frame[7].o), (10)) = (frame[5].f);
	LINE_NUMBER(153);
	ARRAY_ACCESS(jfloat, (frame[7].o), (11)) = (frame[6].f);
	LINE_NUMBER(155);
	ARRAY_ACCESS(jfloat, (frame[7].o), (15)) = (frame[5].f);
	LINE_NUMBER(156);
	ARRAY_ACCESS(jfloat, (frame[7].o), (16)) = (frame[2].f);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setSize", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(163);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(164);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].f);
	LINE_NUMBER(166);
	if (((jint)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(167);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation), (jfloat(0)), -1)) != 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX), (jfloat(1)), -1)) != 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY), (jfloat(1)), -1)) == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(168);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(172);
	frame[3].f = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f));
	LINE_NUMBER(173);
	frame[4].f = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[5].o = sp[0].o;
	LINE_NUMBER(175);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(0))) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(176);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(1))) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(178);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(5))) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(179);
	ARRAY_ACCESS(jfloat, (frame[5].o), (6)) = (frame[4].f);
	LINE_NUMBER(181);
	ARRAY_ACCESS(jfloat, (frame[5].o), (10)) = (frame[3].f);
	LINE_NUMBER(182);
	ARRAY_ACCESS(jfloat, (frame[5].o), (11)) = (frame[4].f);
	LINE_NUMBER(184);
	ARRAY_ACCESS(jfloat, (frame[5].o), (15)) = (frame[3].f);
	LINE_NUMBER(185);
	ARRAY_ACCESS(jfloat, (frame[5].o), (16)) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setPosition", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(192);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(193);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(195);
	if (((jint)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(196);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation), (jfloat(0)), -1)) != 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX), (jfloat(1)), -1)) != 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY), (jfloat(1)), -1)) == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(197);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(201);
	frame[3].f = ((frame[1].f) + ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(202);
	frame[4].f = ((frame[2].f) + ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[5].o = sp[0].o;
	LINE_NUMBER(204);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(0))) = (frame[1].f);
	LINE_NUMBER(205);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(1))) = (frame[2].f);
	LINE_NUMBER(207);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(5))) = (frame[1].f);
	LINE_NUMBER(208);
	ARRAY_ACCESS(jfloat, (frame[5].o), (6)) = (frame[4].f);
	LINE_NUMBER(210);
	ARRAY_ACCESS(jfloat, (frame[5].o), (10)) = (frame[3].f);
	LINE_NUMBER(211);
	ARRAY_ACCESS(jfloat, (frame[5].o), (11)) = (frame[4].f);
	LINE_NUMBER(213);
	ARRAY_ACCESS(jfloat, (frame[5].o), (15)) = (frame[3].f);
	LINE_NUMBER(214);
	ARRAY_ACCESS(jfloat, (frame[5].o), (16)) = (frame[2].f);
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setOriginBasedPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setOriginBasedPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(219);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float])(ctx, (frame[0].o), ((frame[1].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originX)), ((frame[2].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originY)));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setX", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(226);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(228);
	if (((jint)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(229);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation), (jfloat(0)), -1)) != 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX), (jfloat(1)), -1)) != 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY), (jfloat(1)), -1)) == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(230);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(234);
	frame[2].f = ((frame[1].f) + ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(235);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[3].o = sp[0].o;
	LINE_NUMBER(236);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = (frame[1].f);
	LINE_NUMBER(237);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))) = (frame[1].f);
	LINE_NUMBER(238);
	ARRAY_ACCESS(jfloat, (frame[3].o), (10)) = (frame[2].f);
	LINE_NUMBER(239);
	ARRAY_ACCESS(jfloat, (frame[3].o), (15)) = (frame[2].f);
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setY", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(246);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(248);
	if (((jint)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(249);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation), (jfloat(0)), -1)) != 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX), (jfloat(1)), -1)) != 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY), (jfloat(1)), -1)) == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(250);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(254);
	frame[2].f = ((frame[1].f) + ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[3].o = sp[0].o;
	LINE_NUMBER(256);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = (frame[1].f);
	LINE_NUMBER(257);
	ARRAY_ACCESS(jfloat, (frame[3].o), (6)) = (frame[2].f);
	LINE_NUMBER(258);
	ARRAY_ACCESS(jfloat, (frame[3].o), (11)) = (frame[2].f);
	LINE_NUMBER(259);
	ARRAY_ACCESS(jfloat, (frame[3].o), (16)) = (frame[1].f);
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setCenterX", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(264);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setX_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setX_float])(ctx, (frame[0].o), ((frame[1].f) - (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))));
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setCenterY", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(269);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setY_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setY_float])(ctx, (frame[0].o), ((frame[1].f) - (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setCenter_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setCenter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(274);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float])(ctx, (frame[0].o), ((frame[1].f) - (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), ((frame[2].f) - (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_translateX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:translateX", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(282);
	if (((jint)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(283);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation), (jfloat(0)), -1)) != 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX), (jfloat(1)), -1)) != 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY), (jfloat(1)), -1)) == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(284);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[2].o = sp[0].o;
	LINE_NUMBER(289);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(290);
	sp[0].o = frame[2].o;
	jint temp3 = jint(5);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + (frame[1].f));
	LINE_NUMBER(291);
	sp[0].o = frame[2].o;
	jint temp6 = 10;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) + (frame[1].f));
	LINE_NUMBER(292);
	sp[0].o = frame[2].o;
	jint temp9 = 15;
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp9)) + (frame[1].f));
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_translateY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:translateY", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_y) + (frame[1].f));
	LINE_NUMBER(300);
	if (((jint)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(301);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation), (jfloat(0)), -1)) != 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX), (jfloat(1)), -1)) != 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY), (jfloat(1)), -1)) == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(302);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[2].o = sp[0].o;
	LINE_NUMBER(307);
	sp[0].o = frame[2].o;
	jint temp0 = jint(1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(308);
	sp[0].o = frame[2].o;
	jint temp3 = 6;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + (frame[1].f));
	LINE_NUMBER(309);
	sp[0].o = frame[2].o;
	jint temp6 = 11;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) + (frame[1].f));
	LINE_NUMBER(310);
	sp[0].o = frame[2].o;
	jint temp9 = 16;
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp9)) + (frame[1].f));
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_translate_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:translate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(317);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(319);
	if (((jint)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(320);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation), (jfloat(0)), -1)) != 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX), (jfloat(1)), -1)) != 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY), (jfloat(1)), -1)) == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(321);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[3].o = sp[0].o;
	LINE_NUMBER(326);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(327);
	sp[0].o = frame[3].o;
	jint temp3 = jint(1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + (frame[2].f));
	LINE_NUMBER(329);
	sp[0].o = frame[3].o;
	jint temp6 = jint(5);
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) + (frame[1].f));
	LINE_NUMBER(330);
	sp[0].o = frame[3].o;
	jint temp9 = 6;
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp9)) + (frame[2].f));
	LINE_NUMBER(332);
	sp[0].o = frame[3].o;
	jint temp12 = 10;
	ARRAY_ACCESS(jfloat, sp[0].o, temp12) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp12)) + (frame[1].f));
	LINE_NUMBER(333);
	sp[0].o = frame[3].o;
	jint temp15 = 11;
	ARRAY_ACCESS(jfloat, sp[0].o, temp15) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp15)) + (frame[2].f));
	LINE_NUMBER(335);
	sp[0].o = frame[3].o;
	jint temp18 = 15;
	ARRAY_ACCESS(jfloat, sp[0].o, temp18) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp18)) + (frame[1].f));
	LINE_NUMBER(336);
	sp[0].o = frame[3].o;
	jint temp21 = 16;
	ARRAY_ACCESS(jfloat, sp[0].o, temp21) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp21)) + (frame[2].f));
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setColor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_packedColor = temp0;
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[2].o = sp[0].o;
	LINE_NUMBER(344);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	LINE_NUMBER(345);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	LINE_NUMBER(346);
	ARRAY_ACCESS(jfloat, (frame[2].o), (12)) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	LINE_NUMBER(347);
	ARRAY_ACCESS(jfloat, (frame[2].o), (17)) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setAlpha", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_color;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (frame[1].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_color;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (frame[1].f);
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_packedColor = temp0;
	LINE_NUMBER(355);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	LINE_NUMBER(356);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	LINE_NUMBER(357);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	LINE_NUMBER(358);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	}
label_1:;
	LINE_NUMBER(360);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setColor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_packedColor = temp0;
	LINE_NUMBER(366);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[5].o = sp[0].o;
	LINE_NUMBER(367);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(2))) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	LINE_NUMBER(368);
	ARRAY_ACCESS(jfloat, (frame[5].o), (7)) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	LINE_NUMBER(369);
	ARRAY_ACCESS(jfloat, (frame[5].o), (12)) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	LINE_NUMBER(370);
	ARRAY_ACCESS(jfloat, (frame[5].o), (17)) = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setPackedColor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(378);
	if ((floatCompare((frame[1].f), ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	jfloat temp0 = frame[1].f;
	LINE_NUMBER(379);
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, temp0);
	jint temp2 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor));
	if (temp1 == temp2) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(380);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor = (frame[1].f);
	LINE_NUMBER(381);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_color;
	SM_com_badlogic_gdx_graphics_Color_abgr8888ToColor_com_badlogic_gdx_graphics_Color_float(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(382);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[2].o = sp[0].o;
	LINE_NUMBER(383);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (frame[1].f);
	LINE_NUMBER(384);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = (frame[1].f);
	LINE_NUMBER(385);
	ARRAY_ACCESS(jfloat, (frame[2].o), (12)) = (frame[1].f);
	LINE_NUMBER(386);
	ARRAY_ACCESS(jfloat, (frame[2].o), (17)) = (frame[1].f);
	}
label_2:;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setOrigin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(392);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originX = (frame[1].f);
	LINE_NUMBER(393);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originY = (frame[2].f);
	LINE_NUMBER(394);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setOriginCenter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setOriginCenter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(399);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originX = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)));
	LINE_NUMBER(400);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originY = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)));
	LINE_NUMBER(401);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(406);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(407);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_rotate_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:rotate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(418);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(419);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_rotation = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_rotation) + (frame[1].f));
	LINE_NUMBER(420);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:rotate90", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[2].o = sp[0].o;
	LINE_NUMBER(428);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(429);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))));
	LINE_NUMBER(430);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (19)));
	LINE_NUMBER(431);
	ARRAY_ACCESS(jfloat, (frame[2].o), (19)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (14)));
	LINE_NUMBER(432);
	ARRAY_ACCESS(jfloat, (frame[2].o), (14)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9)));
	LINE_NUMBER(433);
	ARRAY_ACCESS(jfloat, (frame[2].o), (9)) = (frame[3].f);
	LINE_NUMBER(435);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))));
	LINE_NUMBER(436);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (18)));
	LINE_NUMBER(437);
	ARRAY_ACCESS(jfloat, (frame[2].o), (18)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (13)));
	LINE_NUMBER(438);
	ARRAY_ACCESS(jfloat, (frame[2].o), (13)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)));
	LINE_NUMBER(439);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (frame[3].f);
	LINE_NUMBER(440);
	goto label_14;
	}
label_2:;
	{
	LINE_NUMBER(441);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))));
	LINE_NUMBER(442);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9)));
	LINE_NUMBER(443);
	ARRAY_ACCESS(jfloat, (frame[2].o), (9)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (14)));
	LINE_NUMBER(444);
	ARRAY_ACCESS(jfloat, (frame[2].o), (14)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (19)));
	LINE_NUMBER(445);
	ARRAY_ACCESS(jfloat, (frame[2].o), (19)) = (frame[3].f);
	LINE_NUMBER(447);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))));
	LINE_NUMBER(448);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)));
	LINE_NUMBER(449);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (13)));
	LINE_NUMBER(450);
	ARRAY_ACCESS(jfloat, (frame[2].o), (13)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (18)));
	LINE_NUMBER(451);
	ARRAY_ACCESS(jfloat, (frame[2].o), (18)) = (frame[3].f);
	}
label_14:;
	LINE_NUMBER(453);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setScale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(458);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX = (frame[1].f);
	LINE_NUMBER(459);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY = (frame[1].f);
	LINE_NUMBER(460);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(466);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX = (frame[1].f);
	LINE_NUMBER(467);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY = (frame[2].f);
	LINE_NUMBER(468);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_scale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:scale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_scaleX = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_scaleX) + (frame[1].f));
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_scaleY = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_scaleY) + (frame[1].f));
	LINE_NUMBER(477);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[29];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getVertices", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(482);
	if (((jint)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_1;
	}
	{
	LINE_NUMBER(483);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	LINE_NUMBER(485);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[1].o = sp[0].o;
	LINE_NUMBER(486);
	frame[2].f = (-((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originX));
	LINE_NUMBER(487);
	frame[3].f = (-((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originY));
	LINE_NUMBER(488);
	frame[4].f = ((frame[2].f) + ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(489);
	frame[5].f = ((frame[3].f) + ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(490);
	frame[6].f = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_x) - (frame[2].f));
	LINE_NUMBER(491);
	frame[7].f = (((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_y) - (frame[3].f));
	LINE_NUMBER(492);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX), (jfloat(1)), -1)) != 0) goto label_11;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY), (jfloat(1)), -1)) == 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(493);
	frame[2].f = ((frame[2].f) * ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX));
	LINE_NUMBER(494);
	frame[3].f = ((frame[3].f) * ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY));
	LINE_NUMBER(495);
	frame[4].f = ((frame[4].f) * ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX));
	LINE_NUMBER(496);
	frame[5].f = ((frame[5].f) * ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY));
	}
label_12:;
	{
	LINE_NUMBER(498);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation), (jfloat(0)), -1)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(499);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation));
	frame[8].f = temp0;
	LINE_NUMBER(500);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_rotation));
	frame[9].f = temp1;
	LINE_NUMBER(501);
	frame[10].f = ((frame[2].f) * (frame[8].f));
	LINE_NUMBER(502);
	frame[11].f = ((frame[2].f) * (frame[9].f));
	LINE_NUMBER(503);
	frame[12].f = ((frame[3].f) * (frame[8].f));
	LINE_NUMBER(504);
	frame[13].f = ((frame[3].f) * (frame[9].f));
	LINE_NUMBER(505);
	frame[14].f = ((frame[4].f) * (frame[8].f));
	LINE_NUMBER(506);
	frame[15].f = ((frame[4].f) * (frame[9].f));
	LINE_NUMBER(507);
	frame[16].f = ((frame[5].f) * (frame[8].f));
	LINE_NUMBER(508);
	frame[17].f = ((frame[5].f) * (frame[9].f));
	LINE_NUMBER(510);
	frame[18].f = (((frame[10].f) - (frame[13].f)) + (frame[6].f));
	LINE_NUMBER(511);
	frame[19].f = (((frame[12].f) + (frame[11].f)) + (frame[7].f));
	LINE_NUMBER(512);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (frame[18].f);
	LINE_NUMBER(513);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (frame[19].f);
	LINE_NUMBER(515);
	frame[20].f = (((frame[10].f) - (frame[17].f)) + (frame[6].f));
	LINE_NUMBER(516);
	frame[21].f = (((frame[16].f) + (frame[11].f)) + (frame[7].f));
	LINE_NUMBER(517);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))) = (frame[20].f);
	LINE_NUMBER(518);
	ARRAY_ACCESS(jfloat, (frame[1].o), (6)) = (frame[21].f);
	LINE_NUMBER(520);
	frame[22].f = (((frame[14].f) - (frame[17].f)) + (frame[6].f));
	LINE_NUMBER(521);
	frame[23].f = (((frame[16].f) + (frame[15].f)) + (frame[7].f));
	LINE_NUMBER(522);
	ARRAY_ACCESS(jfloat, (frame[1].o), (10)) = (frame[22].f);
	LINE_NUMBER(523);
	ARRAY_ACCESS(jfloat, (frame[1].o), (11)) = (frame[23].f);
	LINE_NUMBER(525);
	ARRAY_ACCESS(jfloat, (frame[1].o), (15)) = ((frame[18].f) + ((frame[22].f) - (frame[20].f)));
	LINE_NUMBER(526);
	ARRAY_ACCESS(jfloat, (frame[1].o), (16)) = ((frame[23].f) - ((frame[21].f) - (frame[19].f)));
	LINE_NUMBER(527);
	goto label_1;
	}
label_16:;
	{
	LINE_NUMBER(528);
	frame[8].f = ((frame[2].f) + (frame[6].f));
	LINE_NUMBER(529);
	frame[9].f = ((frame[3].f) + (frame[7].f));
	LINE_NUMBER(530);
	frame[10].f = ((frame[4].f) + (frame[6].f));
	LINE_NUMBER(531);
	frame[11].f = ((frame[5].f) + (frame[7].f));
	LINE_NUMBER(533);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (frame[8].f);
	LINE_NUMBER(534);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (frame[9].f);
	LINE_NUMBER(536);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))) = (frame[8].f);
	LINE_NUMBER(537);
	ARRAY_ACCESS(jfloat, (frame[1].o), (6)) = (frame[11].f);
	LINE_NUMBER(539);
	ARRAY_ACCESS(jfloat, (frame[1].o), (10)) = (frame[10].f);
	LINE_NUMBER(540);
	ARRAY_ACCESS(jfloat, (frame[1].o), (11)) = (frame[11].f);
	LINE_NUMBER(542);
	ARRAY_ACCESS(jfloat, (frame[1].o), (15)) = (frame[10].f);
	LINE_NUMBER(543);
	ARRAY_ACCESS(jfloat, (frame[1].o), (16)) = (frame[9].f);
	}
label_1:;
	{
	LINE_NUMBER(546);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_Sprite_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getBoundingRectangle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(555);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(557);
	frame[2].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))));
	LINE_NUMBER(558);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))));
	LINE_NUMBER(559);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))));
	LINE_NUMBER(560);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))));
	LINE_NUMBER(562);
	if ((floatCompare((frame[2].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))), -1)) <= 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)));
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_FLOAD(2);
label_7:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(563);
	if ((floatCompare((frame[2].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10))), -1)) <= 0) goto label_9;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10));
	sp[0].f = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_FLOAD(2);
label_10:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(564);
	if ((floatCompare((frame[2].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15))), -1)) <= 0) goto label_12;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15));
	sp[0].f = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_FLOAD(2);
label_13:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(566);
	if ((floatCompare((frame[4].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))), 1)) >= 0) goto label_15;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)));
	sp[0].f = temp0;
	sp += 1;
	goto label_16;
	}
label_15:;
	INST_FLOAD(4);
label_16:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(567);
	if ((floatCompare((frame[4].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10))), 1)) >= 0) goto label_18;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10));
	sp[0].f = temp0;
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_FLOAD(4);
label_19:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(568);
	if ((floatCompare((frame[4].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15))), 1)) >= 0) goto label_21;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15));
	sp[0].f = temp0;
	sp += 1;
	goto label_22;
	}
label_21:;
	INST_FLOAD(4);
label_22:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(570);
	if ((floatCompare((frame[3].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))), -1)) <= 0) goto label_24;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6));
	sp[0].f = temp0;
	sp += 1;
	goto label_25;
	}
label_24:;
	INST_FLOAD(3);
label_25:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(571);
	if ((floatCompare((frame[3].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11))), -1)) <= 0) goto label_27;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11));
	sp[0].f = temp0;
	sp += 1;
	goto label_28;
	}
label_27:;
	INST_FLOAD(3);
label_28:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(572);
	if ((floatCompare((frame[3].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (16))), -1)) <= 0) goto label_30;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (16));
	sp[0].f = temp0;
	sp += 1;
	goto label_31;
	}
label_30:;
	INST_FLOAD(3);
label_31:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(574);
	if ((floatCompare((frame[5].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))), 1)) >= 0) goto label_33;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6));
	sp[0].f = temp0;
	sp += 1;
	goto label_34;
	}
label_33:;
	INST_FLOAD(5);
label_34:;
	{
	sp -= 1;
	frame[5].f = sp[0].f;
	LINE_NUMBER(575);
	if ((floatCompare((frame[5].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11))), 1)) >= 0) goto label_36;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11));
	sp[0].f = temp0;
	sp += 1;
	goto label_37;
	}
label_36:;
	INST_FLOAD(5);
label_37:;
	{
	sp -= 1;
	frame[5].f = sp[0].f;
	LINE_NUMBER(576);
	if ((floatCompare((frame[5].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (16))), 1)) >= 0) goto label_39;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (16));
	sp[0].f = temp0;
	sp += 1;
	goto label_40;
	}
label_39:;
	INST_FLOAD(5);
label_40:;
	{
	sp -= 1;
	frame[5].f = sp[0].f;
	LINE_NUMBER(578);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_bounds;
	if (sp[0].o != nullptr) goto label_42;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	}
label_42:;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_bounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = (frame[2].f);
	LINE_NUMBER(580);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_bounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = (frame[3].f);
	LINE_NUMBER(581);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_bounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = ((frame[4].f) - (frame[2].f));
	LINE_NUMBER(582);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_bounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = ((frame[5].f) - (frame[3].f));
	LINE_NUMBER(583);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_bounds;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(587);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[2].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), (20));
	LINE_NUMBER(588);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[3].f = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a);
	LINE_NUMBER(592);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float])(ctx, (frame[0].o), ((frame[3].f) * (frame[2].f)));
	LINE_NUMBER(593);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(594);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float])(ctx, (frame[0].o), (frame[3].f));
	LINE_NUMBER(595);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(598);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(612);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getOriginX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(618);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originX);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getOriginY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_originY);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getScaleX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(629);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleX);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getScaleY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(634);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_scaleY);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:getPackedColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(645);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_packedColor);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setRegion", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(649);
	M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(651);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[5].o = sp[0].o;
	LINE_NUMBER(652);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(3))) = (frame[1].f);
	LINE_NUMBER(653);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(4))) = (frame[4].f);
	LINE_NUMBER(655);
	ARRAY_ACCESS(jfloat, (frame[5].o), (8)) = (frame[1].f);
	LINE_NUMBER(656);
	ARRAY_ACCESS(jfloat, (frame[5].o), (9)) = (frame[2].f);
	LINE_NUMBER(658);
	ARRAY_ACCESS(jfloat, (frame[5].o), (13)) = (frame[3].f);
	LINE_NUMBER(659);
	ARRAY_ACCESS(jfloat, (frame[5].o), (14)) = (frame[2].f);
	LINE_NUMBER(661);
	ARRAY_ACCESS(jfloat, (frame[5].o), (18)) = (frame[3].f);
	LINE_NUMBER(662);
	ARRAY_ACCESS(jfloat, (frame[5].o), (19)) = (frame[4].f);
	LINE_NUMBER(663);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setU_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setU", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(666);
	M_com_badlogic_gdx_graphics_g2d_TextureRegion_setU_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(667);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[1].f);
	LINE_NUMBER(668);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[1].f);
	LINE_NUMBER(669);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setV_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setV", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(672);
	M_com_badlogic_gdx_graphics_g2d_TextureRegion_setV_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(673);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[1].f);
	LINE_NUMBER(674);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[1].f);
	LINE_NUMBER(675);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setU2_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setU2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(678);
	M_com_badlogic_gdx_graphics_g2d_TextureRegion_setU2_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(679);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[1].f);
	LINE_NUMBER(680);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = (frame[1].f);
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setV2_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setV2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(684);
	M_com_badlogic_gdx_graphics_g2d_TextureRegion_setV2_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(685);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[1].f);
	LINE_NUMBER(686);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = (frame[1].f);
	LINE_NUMBER(687);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_setFlip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:setFlip", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(693);
	frame[3].i = (jint(0));
	LINE_NUMBER(694);
	frame[4].i = (jint(0));
	LINE_NUMBER(695);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_Sprite_isFlipX_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_isFlipX_R_boolean])(ctx, (frame[0].o));
	if (temp0 == (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(696);
	frame[3].i = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(698);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_Sprite_isFlipY_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_isFlipY_R_boolean])(ctx, (frame[0].o));
	if (temp0 == (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(699);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(701);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean])(ctx, (frame[0].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:flip", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(708);
	M_com_badlogic_gdx_graphics_g2d_TextureRegion_flip_boolean_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(709);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[3].o = sp[0].o;
	LINE_NUMBER(710);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(711);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))));
	LINE_NUMBER(712);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (13)));
	LINE_NUMBER(713);
	ARRAY_ACCESS(jfloat, (frame[3].o), (13)) = (frame[4].f);
	LINE_NUMBER(714);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (8)));
	LINE_NUMBER(715);
	ARRAY_ACCESS(jfloat, (frame[3].o), (8)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (18)));
	LINE_NUMBER(716);
	ARRAY_ACCESS(jfloat, (frame[3].o), (18)) = (frame[4].f);
	}
label_3:;
	{
	LINE_NUMBER(718);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(719);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))));
	LINE_NUMBER(720);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (14)));
	LINE_NUMBER(721);
	ARRAY_ACCESS(jfloat, (frame[3].o), (14)) = (frame[4].f);
	LINE_NUMBER(722);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (9)));
	LINE_NUMBER(723);
	ARRAY_ACCESS(jfloat, (frame[3].o), (9)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (19)));
	LINE_NUMBER(724);
	ARRAY_ACCESS(jfloat, (frame[3].o), (19)) = (frame[4].f);
	}
label_10:;
	LINE_NUMBER(726);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Sprite_scroll_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Sprite:scroll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(729);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[3].o = sp[0].o;
	LINE_NUMBER(730);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(731);
	frame[4].f = (fmodf((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3)))) + (frame[1].f)), (jfloat(1))));
	LINE_NUMBER(732);
	jfloat temp0 = frame[4].f;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[0].o);
	frame[5].f = (temp0 + (temp1 / (jfloat(temp2))));
	LINE_NUMBER(733);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u = (frame[4].f);
	LINE_NUMBER(734);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2 = (frame[5].f);
	LINE_NUMBER(735);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = (frame[4].f);
	LINE_NUMBER(736);
	ARRAY_ACCESS(jfloat, (frame[3].o), (8)) = (frame[4].f);
	LINE_NUMBER(737);
	ARRAY_ACCESS(jfloat, (frame[3].o), (13)) = (frame[5].f);
	LINE_NUMBER(738);
	ARRAY_ACCESS(jfloat, (frame[3].o), (18)) = (frame[5].f);
	}
label_2:;
	{
	LINE_NUMBER(740);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(741);
	frame[4].f = (fmodf((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (9))) + (frame[2].f)), (jfloat(1))));
	LINE_NUMBER(742);
	jfloat temp0 = frame[4].f;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[0].o);
	frame[5].f = (temp0 + (temp1 / (jfloat(temp2))));
	LINE_NUMBER(743);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v = (frame[4].f);
	LINE_NUMBER(744);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2 = (frame[5].f);
	LINE_NUMBER(745);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = (frame[5].f);
	LINE_NUMBER(746);
	ARRAY_ACCESS(jfloat, (frame[3].o), (9)) = (frame[4].f);
	LINE_NUMBER(747);
	ARRAY_ACCESS(jfloat, (frame[3].o), (14)) = (frame[4].f);
	LINE_NUMBER(748);
	ARRAY_ACCESS(jfloat, (frame[3].o), (19)) = (frame[5].f);
	}
label_11:;
	LINE_NUMBER(750);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_Sprite[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setTexture_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setU_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setV_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setU2_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setV2_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionX_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionY_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionWidth_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionHeight_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipX_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_scroll_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_set_com_badlogic_gdx_graphics_g2d_Sprite,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setOriginBasedPosition_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setX_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setY_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterX_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterY_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenter_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_translateX_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_translateY_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_translate_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setOriginCenter,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getRotation_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_rotate_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_scale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setFlip_boolean_boolean,
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
	{ "setRegion", "(Lcom/badlogic/gdx/graphics/Texture;)V" },
	{ "setRegion", "(IIII)V" },
	{ "setRegion", "(FFFF)V" },
	{ "setRegion", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V" },
	{ "setRegion", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;IIII)V" },
	{ "getTexture", "()Lcom/badlogic/gdx/graphics/Texture;" },
	{ "setTexture", "(Lcom/badlogic/gdx/graphics/Texture;)V" },
	{ "getU", "()F" },
	{ "setU", "(F)V" },
	{ "getV", "()F" },
	{ "setV", "(F)V" },
	{ "getU2", "()F" },
	{ "setU2", "(F)V" },
	{ "getV2", "()F" },
	{ "setV2", "(F)V" },
	{ "getRegionX", "()I" },
	{ "setRegionX", "(I)V" },
	{ "getRegionY", "()I" },
	{ "setRegionY", "(I)V" },
	{ "getRegionWidth", "()I" },
	{ "setRegionWidth", "(I)V" },
	{ "getRegionHeight", "()I" },
	{ "setRegionHeight", "(I)V" },
	{ "flip", "(ZZ)V" },
	{ "isFlipX", "()Z" },
	{ "isFlipY", "()Z" },
	{ "scroll", "(FF)V" },
	{ "split", "(II)[[Lcom/badlogic/gdx/graphics/g2d/TextureRegion;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g2d/Sprite;)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setSize", "(FF)V" },
	{ "setPosition", "(FF)V" },
	{ "setOriginBasedPosition", "(FF)V" },
	{ "setX", "(F)V" },
	{ "setY", "(F)V" },
	{ "setCenterX", "(F)V" },
	{ "setCenterY", "(F)V" },
	{ "setCenter", "(FF)V" },
	{ "translateX", "(F)V" },
	{ "translateY", "(F)V" },
	{ "translate", "(FF)V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setAlpha", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setPackedColor", "(F)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOriginCenter", "()V" },
	{ "setRotation", "(F)V" },
	{ "getRotation", "()F" },
	{ "rotate", "(F)V" },
	{ "rotate90", "(Z)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scale", "(F)V" },
	{ "getVertices", "()[F" },
	{ "getBoundingRectangle", "()Lcom/badlogic/gdx/math/Rectangle;" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "getWidth", "()F" },
	{ "getHeight", "()F" },
	{ "getOriginX", "()F" },
	{ "getOriginY", "()F" },
	{ "getScaleX", "()F" },
	{ "getScaleY", "()F" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "getPackedColor", "()F" },
	{ "setFlip", "(ZZ)V" },
};

static FieldMetadata fields[] {
	{ "VERTEX_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Sprite_VERTEX_SIZE, "I", 24 },
	{ "SPRITE_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Sprite_SPRITE_SIZE, "I", 24 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_vertices), "[F", 16 },
	{ "color", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_color), "Lcom/badlogic/gdx/graphics/Color;", 18 },
	{ "packedColor", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_packedColor), "F", 2 },
	{ "x", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_x), "F", 2 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_y), "F", 2 },
	{ "width", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_width), "F", 0 },
	{ "height", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_height), "F", 0 },
	{ "originX", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_originX), "F", 2 },
	{ "originY", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_originY), "F", 2 },
	{ "rotation", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_rotation), "F", 2 },
	{ "scaleX", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_scaleX), "F", 2 },
	{ "scaleY", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_scaleY), "F", 2 },
	{ "dirty", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_dirty), "Z", 2 },
	{ "bounds", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_graphics_g2d_Sprite, F_bounds), "Lcom/badlogic/gdx/math/Rectangle;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Sprite, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture, 0, "(Lcom/badlogic/gdx/graphics/Texture;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture_int_int, 0, "(Lcom/badlogic/gdx/graphics/Texture;II)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture_int_int_int_int, 0, "(Lcom/badlogic/gdx/graphics/Texture;IIII)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;IIII)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_Sprite, 0, "(Lcom/badlogic/gdx/graphics/g2d/Sprite;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_set_com_badlogic_gdx_graphics_g2d_Sprite, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_set_com_badlogic_gdx_graphics_g2d_Sprite, "(Lcom/badlogic/gdx/graphics/g2d/Sprite;)V", 1 },
	{ "setBounds", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float, "(FFFF)V", 1 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float, "(FF)V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float, "(FF)V", 1 },
	{ "setOriginBasedPosition", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setOriginBasedPosition_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setOriginBasedPosition_float_float, "(FF)V", 1 },
	{ "setX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setX_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setX_float, "(F)V", 1 },
	{ "setY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setY_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setY_float, "(F)V", 1 },
	{ "setCenterX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterX_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setCenterX_float, "(F)V", 1 },
	{ "setCenterY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterY_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setCenterY_float, "(F)V", 1 },
	{ "setCenter", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenter_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setCenter_float_float, "(FF)V", 1 },
	{ "translateX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_translateX_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_translateX_float, "(F)V", 1 },
	{ "translateY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_translateY_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_translateY_float, "(F)V", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_translate_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_translate_float_float, "(FF)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "setAlpha", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float, "(F)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float, "(FFFF)V", 1 },
	{ "setPackedColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float, "(F)V", 1 },
	{ "setOrigin", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float, "(FF)V", 1 },
	{ "setOriginCenter", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setOriginCenter, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setOriginCenter, "()V", 1 },
	{ "setRotation", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float, "(F)V", 1 },
	{ "getRotation", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getRotation_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getRotation_R_float, "()F", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_rotate_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_rotate_float, "(F)V", 1 },
	{ "rotate90", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean, "(Z)V", 1 },
	{ "setScale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float, "(F)V", 1 },
	{ "setScale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float, "(FF)V", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_scale_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_scale_float, "(F)V", 1 },
	{ "getVertices", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float, "()[F", 1 },
	{ "getBoundingRectangle", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle, "()Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch, "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "getX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getX_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getY_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getY_R_float, "()F", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float, "()F", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float, "()F", 1 },
	{ "getOriginX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float, "()F", 1 },
	{ "getOriginY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float, "()F", 1 },
	{ "getScaleX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleX_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getScaleX_R_float, "()F", 1 },
	{ "getScaleY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleY_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getScaleY_R_float, "()F", 1 },
	{ "getColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "getPackedColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float, "()F", 1 },
	{ "setRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_float_float_float_float, "(FFFF)V", 1 },
	{ "setU", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setU_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setU_float, "(F)V", 1 },
	{ "setV", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setV_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setV_float, "(F)V", 1 },
	{ "setU2", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setU2_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setU2_float, "(F)V", 1 },
	{ "setV2", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setV2_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setV2_float, "(F)V", 1 },
	{ "setFlip", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_setFlip_boolean_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setFlip_boolean_boolean, "(ZZ)V", 1 },
	{ "flip", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean, "(ZZ)V", 1 },
	{ "scroll", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Sprite_scroll_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_scroll_float_float, "(FF)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_Sprite{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/Sprite",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_TextureRegion,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_Sprite),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_Sprite,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_Sprite,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_Sprite,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 55,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 80,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_Sprite = registerClass(&class_com_badlogic_gdx_graphics_g2d_Sprite);

}

