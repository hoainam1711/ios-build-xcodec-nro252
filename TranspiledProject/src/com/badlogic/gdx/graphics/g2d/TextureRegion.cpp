#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_TextureRegion(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_TextureRegion *) object;
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"texture cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(38);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(44);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(46);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (frame[2].i), (frame[3].i));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(51);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(53);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int])(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(56);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(57);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(58);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(63);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(70);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(71);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setRegion", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setRegion", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(83);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[0].o);
	frame[5].f = (temp0 / (jfloat(temp1)));
	LINE_NUMBER(84);
	jfloat temp2 = jfloat(1);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[0].o);
	frame[6].f = (temp2 / (jfloat(temp3)));
	LINE_NUMBER(85);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float])(ctx, (frame[0].o), ((jfloat((frame[1].i))) * (frame[5].f)), ((jfloat((frame[2].i))) * (frame[6].f)), ((jfloat(((frame[1].i) + (frame[3].i)))) * (frame[5].f)), ((jfloat(((frame[2].i) + (frame[4].i)))) * (frame[6].f)));
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[3].i));
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_regionWidth = temp4;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[4].i));
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_regionHeight = temp5;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setRegion", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[0].o);
	frame[6].i = temp1;
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[3].f) - (frame[1].f)));
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp2 * (jfloat((frame[5].i)))));
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_regionWidth = temp3;
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[4].f) - (frame[2].f)));
	jint temp5 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp4 * (jfloat((frame[6].i)))));
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_regionHeight = temp5;
	LINE_NUMBER(96);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_regionWidth) != (jint(1))) goto label_5;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_regionHeight) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(97);
	frame[7].f = ((jfloat(0.25f)) / (jfloat((frame[5].i))));
	LINE_NUMBER(98);
	frame[1].f = ((frame[1].f) + (frame[7].f));
	LINE_NUMBER(99);
	frame[3].f = ((frame[3].f) - (frame[7].f));
	LINE_NUMBER(100);
	frame[8].f = ((jfloat(0.25f)) / (jfloat((frame[6].i))));
	LINE_NUMBER(101);
	frame[2].f = ((frame[2].f) + (frame[8].f));
	LINE_NUMBER(102);
	frame[4].f = ((frame[4].f) - (frame[8].f));
	}
label_5:;
	{
	LINE_NUMBER(105);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u = (frame[1].f);
	LINE_NUMBER(106);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v = (frame[2].f);
	LINE_NUMBER(107);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2 = (frame[3].f);
	LINE_NUMBER(108);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2 = (frame[4].f);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setRegion", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(114);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u), ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v), ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2), ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setRegion", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int])(ctx, (frame[1].o));
	jint temp1 = temp0 + (frame[2].i);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int])(ctx, sp[0].o, temp1, (temp2 + (frame[3].i)), (frame[4].i), (frame[5].i));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:getTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setTexture_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:getU", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setU_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setU", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(136);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u = (frame[1].f);
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2) - (frame[1].f)));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(temp1))));
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_regionWidth = temp2;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:getV", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setV_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setV", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(145);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v = (frame[1].f);
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2) - (frame[1].f)));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(temp1))));
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_regionHeight = temp2;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:getU2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setU2_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setU2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(154);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2 = (frame[1].f);
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u)));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(temp1))));
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_regionWidth = temp2;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:getV2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setV2_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setV2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(163);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2 = (frame[1].f);
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v)));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(temp1))));
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_regionHeight = temp2;
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:getRegionX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(temp1))));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionX_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setRegionX", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat((frame[1].i));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setU_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setU_float])(ctx, sp[0].o, (temp0 / (jfloat(temp1))));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:getRegionY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(temp1))));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionY_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setRegionY", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat((frame[1].i));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setV_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setV_float])(ctx, sp[0].o, (temp0 / (jfloat(temp1))));
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:getRegionWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_regionWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionWidth_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setRegionWidth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipX_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipX_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2;
	jfloat temp1 = jfloat((frame[1].i));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setU_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setU_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(temp2)))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u;
	jfloat temp1 = jfloat((frame[1].i));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setU2_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setU2_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(temp2)))));
	}
label_3:;
	LINE_NUMBER(194);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:getRegionHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_regionHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionHeight_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:setRegionHeight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2;
	jfloat temp1 = jfloat((frame[1].i));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setV_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setV_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(temp2)))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v;
	jfloat temp1 = jfloat((frame[1].i));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_TextureRegion_setV2_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setV2_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(temp2)))));
	}
label_3:;
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_flip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:flip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(210);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(211);
	frame[3].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u);
	LINE_NUMBER(212);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2);
	LINE_NUMBER(213);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2 = (frame[3].f);
	}
label_1:;
	{
	LINE_NUMBER(215);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(216);
	frame[3].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v);
	LINE_NUMBER(217);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2);
	LINE_NUMBER(218);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2 = (frame[3].f);
	}
label_5:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipX_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:isFlipX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u), ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2), -1)) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:isFlipY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v), ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2), -1)) <= 0) goto label_1;
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

void M_com_badlogic_gdx_graphics_g2d_TextureRegion_scroll_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:scroll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(235);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(236);
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2) - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[0].o);
	frame[3].f = (temp0 * (jfloat(temp1)));
	LINE_NUMBER(237);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u = (fmodf((((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u) + (frame[1].f)), (jfloat(1))));
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u;
	jfloat temp3 = frame[3].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_u2 = (temp2 + (temp3 / (jfloat(temp4))));
	}
label_1:;
	{
	LINE_NUMBER(240);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(241);
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2) - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[0].o);
	frame[3].f = (temp0 * (jfloat(temp1)));
	LINE_NUMBER(242);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v = (fmodf((((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v) + (frame[2].f)), (jfloat(1))));
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v;
	jfloat temp3 = frame[3].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_v2 = (temp2 + (temp3 / (jfloat(temp4))));
	}
label_5:;
	LINE_NUMBER(245);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureRegion_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:split", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(256);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(257);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int])(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(258);
	frame[5].i = ((jint)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_regionWidth);
	LINE_NUMBER(259);
	frame[6].i = ((jint)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_regionHeight);
	LINE_NUMBER(261);
	frame[7].i = ((frame[6].i) / (frame[2].i));
	LINE_NUMBER(262);
	frame[8].i = ((frame[5].i) / (frame[1].i));
	LINE_NUMBER(264);
	frame[9].i = (frame[3].i);
	LINE_NUMBER(265);
	sp[0].o = (jobject)createMultiArray(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, {(frame[7].i), (frame[8].i)});
	frame[10].o = sp[0].o;
	LINE_NUMBER(266);
	frame[11].i = (jint(0));
	}
label_9:;
	{
	if ((frame[11].i) >= (frame[7].i)) goto label_10;
	}
	{
	LINE_NUMBER(267);
	frame[3].i = (frame[9].i);
	LINE_NUMBER(268);
	frame[12].i = (jint(0));
	}
label_13:;
	{
	if ((frame[12].i) >= (frame[8].i)) goto label_14;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[11].i));
	jint temp0 = frame[12].i;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture_int_int_int_int(ctx, sp[1].o, sp[2].o, (frame[3].i), (frame[4].i), (frame[1].i), (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(268);
	INST_IINC(12, 1);
	frame[3].i = ((frame[3].i) + (frame[1].i));
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(266);
	INST_IINC(11, 1);
	frame[4].i = ((frame[4].i) + (frame[2].i));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_TextureRegion_split_com_badlogic_gdx_graphics_Texture_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureRegion:split", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(285);
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[3].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_TextureRegion[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setTexture_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setU_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setV_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setU2_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setV2_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionX_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionY_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionWidth_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionHeight_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_flip_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipX_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_scroll_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion,
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
};

static FieldMetadata fields[] {
	{ "texture", &class_com_badlogic_gdx_graphics_Texture, offsetof(com_badlogic_gdx_graphics_g2d_TextureRegion, F_texture), "Lcom/badlogic/gdx/graphics/Texture;", 0 },
	{ "u", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureRegion, F_u), "F", 0 },
	{ "v", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureRegion, F_v), "F", 0 },
	{ "u2", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureRegion, F_u2), "F", 0 },
	{ "v2", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureRegion, F_v2), "F", 0 },
	{ "regionWidth", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureRegion, F_regionWidth), "I", 0 },
	{ "regionHeight", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureRegion, F_regionHeight), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture, 0, "(Lcom/badlogic/gdx/graphics/Texture;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture_int_int, 0, "(Lcom/badlogic/gdx/graphics/Texture;II)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture_int_int_int_int, 0, "(Lcom/badlogic/gdx/graphics/Texture;IIII)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture_float_float_float_float, 0, "(Lcom/badlogic/gdx/graphics/Texture;FFFF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;IIII)V", 1 },
	{ "setRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_Texture, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_Texture, "(Lcom/badlogic/gdx/graphics/Texture;)V", 1 },
	{ "setRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int, "(IIII)V", 1 },
	{ "setRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float, "(FFFF)V", 1 },
	{ "setRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "setRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;IIII)V", 1 },
	{ "getTexture", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture, "()Lcom/badlogic/gdx/graphics/Texture;", 1 },
	{ "setTexture", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setTexture_com_badlogic_gdx_graphics_Texture, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setTexture_com_badlogic_gdx_graphics_Texture, "(Lcom/badlogic/gdx/graphics/Texture;)V", 1 },
	{ "getU", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float, "()F", 1 },
	{ "setU", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setU_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setU_float, "(F)V", 1 },
	{ "getV", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float, "()F", 1 },
	{ "setV", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setV_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setV_float, "(F)V", 1 },
	{ "getU2", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float, "()F", 1 },
	{ "setU2", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setU2_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setU2_float, "(F)V", 1 },
	{ "getV2", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float, "()F", 1 },
	{ "setV2", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setV2_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setV2_float, "(F)V", 1 },
	{ "getRegionX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int, "()I", 1 },
	{ "setRegionX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionX_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionX_int, "(I)V", 1 },
	{ "getRegionY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int, "()I", 1 },
	{ "setRegionY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionY_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionY_int, "(I)V", 1 },
	{ "getRegionWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int, "()I", 1 },
	{ "setRegionWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionWidth_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionWidth_int, "(I)V", 1 },
	{ "getRegionHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int, "()I", 1 },
	{ "setRegionHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionHeight_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionHeight_int, "(I)V", 1 },
	{ "flip", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_flip_boolean_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_flip_boolean_boolean, "(ZZ)V", 1 },
	{ "isFlipX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipX_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipX_R_boolean, "()Z", 1 },
	{ "isFlipY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean, "()Z", 1 },
	{ "scroll", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_scroll_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_scroll_float_float, "(FF)V", 1 },
	{ "split", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureRegion_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion, VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion, "(II)[[Lcom/badlogic/gdx/graphics/g2d/TextureRegion;", 1 },
	{ "split", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_TextureRegion_split_com_badlogic_gdx_graphics_Texture_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "(Lcom/badlogic/gdx/graphics/Texture;II)[[Lcom/badlogic/gdx/graphics/g2d/TextureRegion;", 9 },
};

Class class_com_badlogic_gdx_graphics_g2d_TextureRegion{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/TextureRegion",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_TextureRegion),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_TextureRegion,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_TextureRegion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_TextureRegion,
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
		.methodCount = 36,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 39,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_TextureRegion = registerClass(&class_com_badlogic_gdx_graphics_g2d_TextureRegion);

}

