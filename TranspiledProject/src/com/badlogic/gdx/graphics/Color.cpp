#include "com/badlogic/gdx/graphics/Color.h"
#include "java/lang/Math.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_Color_WHITE;
jobject SF_com_badlogic_gdx_graphics_Color_LIGHT_GRAY;
jobject SF_com_badlogic_gdx_graphics_Color_GRAY;
jobject SF_com_badlogic_gdx_graphics_Color_DARK_GRAY;
jobject SF_com_badlogic_gdx_graphics_Color_BLACK;
jfloat SF_com_badlogic_gdx_graphics_Color_WHITE_FLOAT_BITS;
jobject SF_com_badlogic_gdx_graphics_Color_CLEAR;
jobject SF_com_badlogic_gdx_graphics_Color_CLEAR_WHITE;
jobject SF_com_badlogic_gdx_graphics_Color_BLUE;
jobject SF_com_badlogic_gdx_graphics_Color_NAVY;
jobject SF_com_badlogic_gdx_graphics_Color_ROYAL;
jobject SF_com_badlogic_gdx_graphics_Color_SLATE;
jobject SF_com_badlogic_gdx_graphics_Color_SKY;
jobject SF_com_badlogic_gdx_graphics_Color_CYAN;
jobject SF_com_badlogic_gdx_graphics_Color_TEAL;
jobject SF_com_badlogic_gdx_graphics_Color_GREEN;
jobject SF_com_badlogic_gdx_graphics_Color_CHARTREUSE;
jobject SF_com_badlogic_gdx_graphics_Color_LIME;
jobject SF_com_badlogic_gdx_graphics_Color_FOREST;
jobject SF_com_badlogic_gdx_graphics_Color_OLIVE;
jobject SF_com_badlogic_gdx_graphics_Color_YELLOW;
jobject SF_com_badlogic_gdx_graphics_Color_GOLD;
jobject SF_com_badlogic_gdx_graphics_Color_GOLDENROD;
jobject SF_com_badlogic_gdx_graphics_Color_ORANGE;
jobject SF_com_badlogic_gdx_graphics_Color_BROWN;
jobject SF_com_badlogic_gdx_graphics_Color_TAN;
jobject SF_com_badlogic_gdx_graphics_Color_FIREBRICK;
jobject SF_com_badlogic_gdx_graphics_Color_RED;
jobject SF_com_badlogic_gdx_graphics_Color_SCARLET;
jobject SF_com_badlogic_gdx_graphics_Color_CORAL;
jobject SF_com_badlogic_gdx_graphics_Color_SALMON;
jobject SF_com_badlogic_gdx_graphics_Color_PINK;
jobject SF_com_badlogic_gdx_graphics_Color_MAGENTA;
jobject SF_com_badlogic_gdx_graphics_Color_PURPLE;
jobject SF_com_badlogic_gdx_graphics_Color_VIOLET;
jobject SF_com_badlogic_gdx_graphics_Color_MAROON;

void mark_com_badlogic_gdx_graphics_Color(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_Color_WHITE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_WHITE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_WHITE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_LIGHT_GRAY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_LIGHT_GRAY)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_LIGHT_GRAY, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_GRAY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_GRAY)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_GRAY, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_DARK_GRAY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_DARK_GRAY)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_DARK_GRAY, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_BLACK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_BLACK)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_BLACK, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_CLEAR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_CLEAR)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_CLEAR, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_CLEAR_WHITE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_CLEAR_WHITE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_CLEAR_WHITE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_BLUE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_BLUE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_BLUE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_NAVY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_NAVY)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_NAVY, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_ROYAL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_ROYAL)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_ROYAL, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_SLATE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_SLATE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_SLATE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_SKY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_SKY)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_SKY, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_CYAN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_CYAN)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_CYAN, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_TEAL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_TEAL)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_TEAL, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_GREEN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_GREEN)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_GREEN, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_CHARTREUSE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_CHARTREUSE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_CHARTREUSE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_LIME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_LIME)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_LIME, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_FOREST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_FOREST)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_FOREST, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_OLIVE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_OLIVE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_OLIVE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_YELLOW)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_YELLOW)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_YELLOW, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_GOLD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_GOLD)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_GOLD, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_GOLDENROD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_GOLDENROD)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_GOLDENROD, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_ORANGE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_ORANGE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_ORANGE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_BROWN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_BROWN)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_BROWN, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_TAN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_TAN)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_TAN, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_FIREBRICK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_FIREBRICK)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_FIREBRICK, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_RED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_RED)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_RED, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_SCARLET)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_SCARLET)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_SCARLET, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_CORAL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_CORAL)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_CORAL, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_SALMON)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_SALMON)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_SALMON, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_PINK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_PINK)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_PINK, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_MAGENTA)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_MAGENTA)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_MAGENTA, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_PURPLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_PURPLE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_PURPLE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_VIOLET)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_VIOLET)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_VIOLET, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Color_MAROON)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Color_MAROON)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Color_MAROON, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_Color *) object;
}

void init_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(77);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Color_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(81);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(82);
	SM_com_badlogic_gdx_graphics_Color_rgba8888ToColor_com_badlogic_gdx_graphics_Color_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Color_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(91);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(92);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[1].f);
	LINE_NUMBER(93);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[2].f);
	LINE_NUMBER(94);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[3].f);
	LINE_NUMBER(95);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = (frame[4].f);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r);
	LINE_NUMBER(112);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g);
	LINE_NUMBER(113);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b);
	LINE_NUMBER(114);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(124);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r);
	LINE_NUMBER(125);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g);
	LINE_NUMBER(126);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b);
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (frame[2].f), (jfloat(0)), (jfloat(1)));
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = temp0;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:mul", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r));
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g));
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b));
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_mul_float_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:mul", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * (frame[1].f));
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * (frame[1].f));
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * (frame[1].f));
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (frame[1].f));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_add_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) + ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r));
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) + ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g));
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) + ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b));
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) + ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_sub_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:sub", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r));
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g));
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b));
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:clamp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(183);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (jfloat(0));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(184);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), (jfloat(1)), -1)) <= 0) goto label_3;
	}
	{
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (jfloat(1));
	}
label_3:;
	{
	LINE_NUMBER(186);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(187);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (jfloat(0));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(188);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g), (jfloat(1)), -1)) <= 0) goto label_6;
	}
	{
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (jfloat(1));
	}
label_6:;
	{
	LINE_NUMBER(190);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b), (jfloat(0)), 1)) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(191);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (jfloat(0));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(192);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b), (jfloat(1)), -1)) <= 0) goto label_9;
	}
	{
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (jfloat(1));
	}
label_9:;
	{
	LINE_NUMBER(194);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a), (jfloat(0)), 1)) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(195);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = (jfloat(0));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(196);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a), (jfloat(1)), -1)) <= 0) goto label_12;
	}
	{
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = (jfloat(1));
	}
label_12:;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(209);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[1].f);
	LINE_NUMBER(210);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[2].f);
	LINE_NUMBER(211);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[3].f);
	LINE_NUMBER(212);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = (frame[4].f);
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_set_int_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(221);
	SM_com_badlogic_gdx_graphics_Color_rgba8888ToColor_com_badlogic_gdx_graphics_Color_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_add_float_float_float_float_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) + (frame[1].f));
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) + (frame[2].f));
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) + (frame[3].f));
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) + (frame[4].f));
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_sub_float_float_float_float_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:sub", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) - (frame[1].f));
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) - (frame[2].f));
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) - (frame[3].f));
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) - (frame[4].f));
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_mul_float_float_float_float_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:mul", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * (frame[1].f));
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * (frame[2].f));
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * (frame[3].f));
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (frame[4].f));
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_lerp_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:lerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) + ((frame[2].f) * (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r))));
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) + ((frame[2].f) * (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g))));
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) + ((frame[2].f) * (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b))));
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) + ((frame[2].f) * (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a))));
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_lerp_float_float_float_float_float_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:lerp", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) + ((frame[5].f) * ((frame[1].f) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r))));
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) + ((frame[5].f) * ((frame[2].f) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g))));
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) + ((frame[5].f) * ((frame[3].f) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b))));
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) + ((frame[5].f) * ((frame[4].f) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a))));
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_premultiplyAlpha_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:premultiplyAlpha", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a));
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a));
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_Color_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(312);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(313);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(314);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Color, (frame[1].o)));
	LINE_NUMBER(315);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Color_toIntBits_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toIntBits_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Color_toIntBits_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toIntBits_R_int])(ctx, (frame[2].o));
	if (temp0 != temp1) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Color_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(321);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g), (jfloat(0)), -1)) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g));
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(322);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b), (jfloat(0)), -1)) == 0) goto label_7;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b));
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(323);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a), (jfloat(0)), -1)) == 0) goto label_10;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a));
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_Color_toFloatBits_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:toFloatBits", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	frame[1].i = (((((jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a)))) << (24)) | ((jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b)))) << (16))) | ((jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g)))) << (8))) | (jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r)))));
	LINE_NUMBER(333);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_utils_NumberUtils_intToFloatColor_int_R_float(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Color_toIntBits_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:toIntBits", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return (((((jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a)))) << (24)) | ((jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b)))) << (16))) | ((jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g)))) << (8))) | (jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r)))));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(344);
	jint temp0 = ((((jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r)))) << (24)) | ((jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g)))) << (16))) | ((jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b)))) << (8))) | (jint(((jfloat(255.0f)) * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a))));
	LINE_NUMBER(345);
	sp[0].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, temp0);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= (8)) goto label_3;
	}
	{
	LINE_NUMBER(347);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Color_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color(ctx, sp[1].o);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_Color_valueOf_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Color_valueOf_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:valueOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(360);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp0 != (35)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[0].o), (jint(1)));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
label_2:;
	{
	sp -= 1;
	frame[0].o = sp[0].o;
	LINE_NUMBER(361);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)), (jint(2)));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, sp[1].o, (16));
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = ((jfloat(temp0)) / (jfloat(255.0f)));
	LINE_NUMBER(362);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(2)), (jint(4)));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, sp[1].o, (16));
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = ((jfloat(temp1)) / (jfloat(255.0f)));
	LINE_NUMBER(363);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(4)), (6));
	jint temp2 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, sp[1].o, (16));
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = ((jfloat(temp2)) / (jfloat(255.0f)));
	LINE_NUMBER(364);
	sp[0].o = frame[1].o;
	jint temp3 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp += 1;
	if (temp3 == (8)) goto label_7;
	}
	INST_FCONST(1);
	goto label_8;
label_7:;
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (6), (8));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, sp[0].o, (16));
	jfloat temp1 = (jfloat(temp0)) / (jfloat(255.0f));
	sp[0].f = temp1;
	sp += 1;
	}
label_8:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = sp[1].f;
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_graphics_Color_toFloatBits_int_int_int_int_R_float(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:toFloatBits", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(377);
	frame[4].i = (((((frame[3].i) << (24)) | ((frame[2].i) << (16))) | ((frame[1].i) << (8))) | (frame[0].i));
	LINE_NUMBER(378);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_utils_NumberUtils_intToFloatColor_int_R_float(ctx, (frame[4].i));
	frame[5].f = temp0;
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return (frame[5].f);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_graphics_Color_toFloatBits_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:toFloatBits", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(386);
	frame[4].i = (((((jint(((jfloat(255.0f)) * (frame[3].f)))) << (24)) | ((jint(((jfloat(255.0f)) * (frame[2].f)))) << (16))) | ((jint(((jfloat(255.0f)) * (frame[1].f)))) << (8))) | (jint(((jfloat(255.0f)) * (frame[0].f)))));
	LINE_NUMBER(387);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_utils_NumberUtils_intToFloatColor_int_R_float(ctx, (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_toIntBits_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:toIntBits", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return (((((frame[3].i) << (24)) | ((frame[2].i) << (16))) | ((frame[1].i) << (8))) | (frame[0].i));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_alpha_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:alpha", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return (jint(((frame[0].f) * (jfloat(255.0f)))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_luminanceAlpha_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:luminanceAlpha", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (((jint(((frame[0].f) * (jfloat(255.0f))))) << (8)) | (jint(((frame[1].f) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_rgb565_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgb565", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return ((((jint(((frame[0].f) * (jfloat(31.0f))))) << (11)) | ((jint(((frame[1].f) * (jfloat(63.0f))))) << (jint(5)))) | (jint(((frame[2].f) * (jfloat(31.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_rgba4444_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgba4444", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return (((((jint(((frame[0].f) * (jfloat(15.0f))))) << (12)) | ((jint(((frame[1].f) * (jfloat(15.0f))))) << (8))) | ((jint(((frame[2].f) * (jfloat(15.0f))))) << (jint(4)))) | (jint(((frame[3].f) * (jfloat(15.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_rgb888_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgb888", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return ((((jint(((frame[0].f) * (jfloat(255.0f))))) << (16)) | ((jint(((frame[1].f) * (jfloat(255.0f))))) << (8))) | (jint(((frame[2].f) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_rgba8888_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgba8888", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(422);
	popStackFrame(ctx);
	return (((((jint(((frame[0].f) * (jfloat(255.0f))))) << (24)) | ((jint(((frame[1].f) * (jfloat(255.0f))))) << (16))) | ((jint(((frame[2].f) * (jfloat(255.0f))))) << (8))) | (jint(((frame[3].f) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_argb8888_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:argb8888", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (((((jint(((frame[0].f) * (jfloat(255.0f))))) << (24)) | ((jint(((frame[1].f) * (jfloat(255.0f))))) << (16))) | ((jint(((frame[2].f) * (jfloat(255.0f))))) << (8))) | (jint(((frame[3].f) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_rgb565_com_badlogic_gdx_graphics_Color_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgb565", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return ((((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) * (jfloat(31.0f))))) << (11)) | ((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) * (jfloat(63.0f))))) << (jint(5)))) | (jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) * (jfloat(31.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_rgba4444_com_badlogic_gdx_graphics_Color_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgba4444", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return (((((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) * (jfloat(15.0f))))) << (12)) | ((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) * (jfloat(15.0f))))) << (8))) | ((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) * (jfloat(15.0f))))) << (jint(4)))) | (jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a) * (jfloat(15.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_rgb888_com_badlogic_gdx_graphics_Color_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgb888", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return ((((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) * (jfloat(255.0f))))) << (16)) | ((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) * (jfloat(255.0f))))) << (8))) | (jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_rgba8888_com_badlogic_gdx_graphics_Color_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgba8888", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return (((((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) * (jfloat(255.0f))))) << (24)) | ((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) * (jfloat(255.0f))))) << (16))) | ((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) * (jfloat(255.0f))))) << (8))) | (jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Color_argb8888_com_badlogic_gdx_graphics_Color_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:argb8888", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return (((((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a) * (jfloat(255.0f))))) << (24)) | ((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) * (jfloat(255.0f))))) << (16))) | ((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) * (jfloat(255.0f))))) << (8))) | (jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Color_rgb565ToColor_com_badlogic_gdx_graphics_Color_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgb565ToColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(455);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(63488)))) >> (11))))) / (jfloat(31.0f)));
	LINE_NUMBER(456);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (2016))) >> (jint(5)))))) / (jfloat(63.0f)));
	LINE_NUMBER(457);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (31))) >> (jint(0)))))) / (jfloat(31.0f)));
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Color_rgba4444ToColor_com_badlogic_gdx_graphics_Color_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgba4444ToColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(466);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(61440)))) >> (12))))) / (jfloat(15.0f)));
	LINE_NUMBER(467);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (3840))) >> (8))))) / (jfloat(15.0f)));
	LINE_NUMBER(468);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (240))) >> (jint(4)))))) / (jfloat(15.0f)));
	LINE_NUMBER(469);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat(((frame[1].i) & (15)))) / (jfloat(15.0f)));
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Color_rgb888ToColor_com_badlogic_gdx_graphics_Color_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgb888ToColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(478);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(16711680)))) >> (16))))) / (jfloat(255.0f)));
	LINE_NUMBER(479);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(65280)))) >> (8))))) / (jfloat(255.0f)));
	LINE_NUMBER(480);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat(((frame[1].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Color_rgba8888ToColor_com_badlogic_gdx_graphics_Color_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:rgba8888ToColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(489);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(-16777216)))) >> (24))))) / (jfloat(255.0f)));
	LINE_NUMBER(490);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(16711680)))) >> (16))))) / (jfloat(255.0f)));
	LINE_NUMBER(491);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(65280)))) >> (8))))) / (jfloat(255.0f)));
	LINE_NUMBER(492);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat(((frame[1].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Color_argb8888ToColor_com_badlogic_gdx_graphics_Color_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:argb8888ToColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(501);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(-16777216)))) >> (24))))) / (jfloat(255.0f)));
	LINE_NUMBER(502);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(16711680)))) >> (16))))) / (jfloat(255.0f)));
	LINE_NUMBER(503);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(65280)))) >> (8))))) / (jfloat(255.0f)));
	LINE_NUMBER(504);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat(((frame[1].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Color_abgr8888ToColor_com_badlogic_gdx_graphics_Color_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:abgr8888ToColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(510);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(-16777216)))) >> (24))))) / (jfloat(255.0f)));
	LINE_NUMBER(511);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(16711680)))) >> (16))))) / (jfloat(255.0f)));
	LINE_NUMBER(512);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(65280)))) >> (8))))) / (jfloat(255.0f)));
	LINE_NUMBER(513);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat(((frame[1].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Color_abgr8888ToColor_com_badlogic_gdx_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:abgr8888ToColor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(519);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntColor_float_R_int(ctx, (frame[1].f));
	frame[2].i = temp0;
	LINE_NUMBER(520);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[2].i) & (jint(-16777216)))) >> (24))))) / (jfloat(255.0f)));
	LINE_NUMBER(521);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[2].i) & (jint(16711680)))) >> (16))))) / (jfloat(255.0f)));
	LINE_NUMBER(522);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[2].i) & (jint(65280)))) >> (8))))) / (jfloat(255.0f)));
	LINE_NUMBER(523);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat(((frame[2].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_fromHsv_float_float_float_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:fromHsv", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(533);
	frame[4].f = (fmodf((((frame[1].f) / (jfloat(60.0f))) + (jfloat(6.0f))), (jfloat(6.0f))));
	LINE_NUMBER(534);
	frame[5].i = (jint((frame[4].f)));
	LINE_NUMBER(535);
	frame[6].f = ((frame[4].f) - (jfloat((frame[5].i))));
	LINE_NUMBER(536);
	frame[7].f = ((frame[3].f) * ((jfloat(1)) - (frame[2].f)));
	LINE_NUMBER(537);
	frame[8].f = ((frame[3].f) * ((jfloat(1)) - ((frame[2].f) * (frame[6].f))));
	LINE_NUMBER(538);
	frame[9].f = ((frame[3].f) * ((jfloat(1)) - ((frame[2].f) * ((jfloat(1)) - (frame[6].f)))));
	LINE_NUMBER(539);
	switch((frame[5].i)) {
		case 0: goto label_7;
		case 1: goto label_8;
		case 2: goto label_9;
		case 3: goto label_10;
		case 4: goto label_11;
		default: goto label_12;
	}
	}
label_7:;
	{
	LINE_NUMBER(541);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[3].f);
	LINE_NUMBER(542);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[9].f);
	LINE_NUMBER(543);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[7].f);
	LINE_NUMBER(544);
	goto label_16;
	}
label_8:;
	{
	LINE_NUMBER(546);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[8].f);
	LINE_NUMBER(547);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[3].f);
	LINE_NUMBER(548);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[7].f);
	LINE_NUMBER(549);
	goto label_16;
	}
label_9:;
	{
	LINE_NUMBER(551);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[7].f);
	LINE_NUMBER(552);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[3].f);
	LINE_NUMBER(553);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[9].f);
	LINE_NUMBER(554);
	goto label_16;
	}
label_10:;
	{
	LINE_NUMBER(556);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[7].f);
	LINE_NUMBER(557);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[8].f);
	LINE_NUMBER(558);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[3].f);
	LINE_NUMBER(559);
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(561);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[9].f);
	LINE_NUMBER(562);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[7].f);
	LINE_NUMBER(563);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[3].f);
	LINE_NUMBER(564);
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(566);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[3].f);
	LINE_NUMBER(567);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[7].f);
	LINE_NUMBER(568);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[8].f);
	}
label_16:;
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_fromHsv_Array1_float_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:fromHsv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_fromHsv_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_fromHsv_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_toHsv_Array1_float_R_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:toHsv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(586);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b));
	frame[2].f = temp1;
	LINE_NUMBER(587);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp2, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b));
	frame[3].f = temp3;
	LINE_NUMBER(588);
	frame[4].f = ((frame[2].f) - (frame[3].f));
	LINE_NUMBER(589);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(590);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (jfloat(0));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(591);
	if ((floatCompare((frame[2].f), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), -1)) != 0) goto label_7;
	}
	{
	LINE_NUMBER(592);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (fmodf(((((jfloat(60.0f)) * (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b))) / (frame[4].f)) + (jfloat(360.0f))), (jfloat(360.0f))));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(593);
	if ((floatCompare((frame[2].f), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g), -1)) != 0) goto label_9;
	}
	{
	LINE_NUMBER(594);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = ((((jfloat(60.0f)) * (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r))) / (frame[4].f)) + (jfloat(120.0f)));
	goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(596);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = ((((jfloat(60.0f)) * (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) - ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g))) / (frame[4].f)) + (jfloat(240.0f)));
	}
label_6:;
	{
	LINE_NUMBER(599);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(600);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = ((jfloat(1)) - ((frame[3].f) / (frame[2].f)));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(602);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (jfloat(0));
	}
label_13:;
	{
	LINE_NUMBER(605);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (frame[2].f);
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Color_cpy_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(612);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_Color(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Color:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Color(ctx);
	{
	LINE_NUMBER(27);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_WHITE = sp[0].o;
	LINE_NUMBER(28);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-1077952513)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_LIGHT_GRAY = sp[0].o;
	LINE_NUMBER(29);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(2139062271)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_GRAY = sp[0].o;
	LINE_NUMBER(30);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(1061109759)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_DARK_GRAY = sp[0].o;
	LINE_NUMBER(31);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_BLACK = sp[0].o;
	LINE_NUMBER(34);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_WHITE_FLOAT_BITS = temp0;
	LINE_NUMBER(36);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_CLEAR = sp[0].o;
	LINE_NUMBER(37);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(0)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_CLEAR_WHITE = sp[0].o;
	LINE_NUMBER(39);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(1)), (jfloat(1)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_BLUE = sp[0].o;
	LINE_NUMBER(40);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0.5f)), (jfloat(1)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_NAVY = sp[0].o;
	LINE_NUMBER(41);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(1097458175)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_ROYAL = sp[0].o;
	LINE_NUMBER(42);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(1887473919)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_SLATE = sp[0].o;
	LINE_NUMBER(43);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-2016482305)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_SKY = sp[0].o;
	LINE_NUMBER(44);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_CYAN = sp[0].o;
	LINE_NUMBER(45);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0.5f)), (jfloat(0.5f)), (jfloat(1)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_TEAL = sp[0].o;
	LINE_NUMBER(47);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(16711935)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_GREEN = sp[0].o;
	LINE_NUMBER(48);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(2147418367)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_CHARTREUSE = sp[0].o;
	LINE_NUMBER(49);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(852308735)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_LIME = sp[0].o;
	LINE_NUMBER(50);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(579543807)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_FOREST = sp[0].o;
	LINE_NUMBER(51);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(1804477439)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_OLIVE = sp[0].o;
	LINE_NUMBER(53);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-65281)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_YELLOW = sp[0].o;
	LINE_NUMBER(54);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-2686721)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_GOLD = sp[0].o;
	LINE_NUMBER(55);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-626712321)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_GOLDENROD = sp[0].o;
	LINE_NUMBER(56);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-5963521)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_ORANGE = sp[0].o;
	LINE_NUMBER(58);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-1958407169)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_BROWN = sp[0].o;
	LINE_NUMBER(59);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-759919361)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_TAN = sp[0].o;
	LINE_NUMBER(60);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-1306385665)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_FIREBRICK = sp[0].o;
	LINE_NUMBER(62);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-16776961)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_RED = sp[0].o;
	LINE_NUMBER(63);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-13361921)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_SCARLET = sp[0].o;
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-8433409)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_CORAL = sp[0].o;
	LINE_NUMBER(65);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-92245249)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_SALMON = sp[0].o;
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-9849601)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_PINK = sp[0].o;
	LINE_NUMBER(67);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(0)), (jfloat(1)), (jfloat(1)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_MAGENTA = sp[0].o;
	LINE_NUMBER(69);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-1608453889)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_PURPLE = sp[0].o;
	LINE_NUMBER(70);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-293409025)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_VIOLET = sp[0].o;
	LINE_NUMBER(71);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, (jint(-1339006721)));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	SF_com_badlogic_gdx_graphics_Color_MAROON = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Color[] {
	(void *) M_com_badlogic_gdx_graphics_Color_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_Color_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_Color_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_mul_float_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_add_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_sub_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_set_int_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_add_float_float_float_float_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_sub_float_float_float_float_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_mul_float_float_float_float_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_lerp_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_lerp_float_float_float_float_float_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_premultiplyAlpha_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_toFloatBits_R_float,
	(void *) M_com_badlogic_gdx_graphics_Color_toIntBits_R_int,
	(void *) M_com_badlogic_gdx_graphics_Color_fromHsv_float_float_float_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_fromHsv_Array1_float_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Color_toHsv_Array1_float_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_Color_cpy_R_com_badlogic_gdx_graphics_Color,
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
	{ "set", "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/Color;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/Color;F)Lcom/badlogic/gdx/graphics/Color;" },
	{ "mul", "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/Color;" },
	{ "mul", "(F)Lcom/badlogic/gdx/graphics/Color;" },
	{ "add", "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/Color;" },
	{ "sub", "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/Color;" },
	{ "clamp", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "set", "(FFFF)Lcom/badlogic/gdx/graphics/Color;" },
	{ "set", "(I)Lcom/badlogic/gdx/graphics/Color;" },
	{ "add", "(FFFF)Lcom/badlogic/gdx/graphics/Color;" },
	{ "sub", "(FFFF)Lcom/badlogic/gdx/graphics/Color;" },
	{ "mul", "(FFFF)Lcom/badlogic/gdx/graphics/Color;" },
	{ "lerp", "(Lcom/badlogic/gdx/graphics/Color;F)Lcom/badlogic/gdx/graphics/Color;" },
	{ "lerp", "(FFFFF)Lcom/badlogic/gdx/graphics/Color;" },
	{ "premultiplyAlpha", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "toFloatBits", "()F" },
	{ "toIntBits", "()I" },
	{ "fromHsv", "(FFF)Lcom/badlogic/gdx/graphics/Color;" },
	{ "fromHsv", "([F)Lcom/badlogic/gdx/graphics/Color;" },
	{ "toHsv", "([F)[F" },
	{ "cpy", "()Lcom/badlogic/gdx/graphics/Color;" },
};

static FieldMetadata fields[] {
	{ "WHITE", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_WHITE, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "LIGHT_GRAY", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_LIGHT_GRAY, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "GRAY", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_GRAY, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "DARK_GRAY", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_DARK_GRAY, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "BLACK", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_BLACK, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "WHITE_FLOAT_BITS", &class_float, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_WHITE_FLOAT_BITS, "F", 25 },
	{ "CLEAR", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_CLEAR, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "CLEAR_WHITE", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_CLEAR_WHITE, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "BLUE", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_BLUE, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "NAVY", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_NAVY, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "ROYAL", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_ROYAL, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "SLATE", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_SLATE, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "SKY", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_SKY, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "CYAN", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_CYAN, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "TEAL", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_TEAL, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "GREEN", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_GREEN, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "CHARTREUSE", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_CHARTREUSE, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "LIME", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_LIME, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "FOREST", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_FOREST, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "OLIVE", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_OLIVE, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "YELLOW", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_YELLOW, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "GOLD", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_GOLD, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "GOLDENROD", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_GOLDENROD, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "ORANGE", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_ORANGE, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "BROWN", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_BROWN, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "TAN", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_TAN, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "FIREBRICK", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_FIREBRICK, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "RED", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_RED, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "SCARLET", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_SCARLET, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "CORAL", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_CORAL, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "SALMON", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_SALMON, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "PINK", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_PINK, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "MAGENTA", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_MAGENTA, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "PURPLE", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_PURPLE, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "VIOLET", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_VIOLET, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "MAROON", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_Color_MAROON, "Lcom/badlogic/gdx/graphics/Color;", 25 },
	{ "r", &class_float, offsetof(com_badlogic_gdx_graphics_Color, F_r), "F", 1 },
	{ "g", &class_float, offsetof(com_badlogic_gdx_graphics_Color, F_g), "F", 1 },
	{ "b", &class_float, offsetof(com_badlogic_gdx_graphics_Color, F_b), "F", 1 },
	{ "a", &class_float, offsetof(com_badlogic_gdx_graphics_Color, F_a), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Color, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Color_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Color_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, 0, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;F)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_graphics_Color_mul_float_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_mul_float_R_com_badlogic_gdx_graphics_Color, "(F)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_graphics_Color_add_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_add_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_graphics_Color_sub_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_sub_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "clamp", (intptr_t) M_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_clamp_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color, "(FFFF)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_Color_set_int_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_set_int_R_com_badlogic_gdx_graphics_Color, "(I)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_graphics_Color_add_float_float_float_float_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_add_float_float_float_float_R_com_badlogic_gdx_graphics_Color, "(FFFF)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_graphics_Color_sub_float_float_float_float_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_sub_float_float_float_float_R_com_badlogic_gdx_graphics_Color, "(FFFF)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_graphics_Color_mul_float_float_float_float_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_mul_float_float_float_float_R_com_badlogic_gdx_graphics_Color, "(FFFF)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "lerp", (intptr_t) M_com_badlogic_gdx_graphics_Color_lerp_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_lerp_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;F)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "lerp", (intptr_t) M_com_badlogic_gdx_graphics_Color_lerp_float_float_float_float_float_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_lerp_float_float_float_float_float_R_com_badlogic_gdx_graphics_Color, "(FFFFF)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "premultiplyAlpha", (intptr_t) M_com_badlogic_gdx_graphics_Color_premultiplyAlpha_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_premultiplyAlpha_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_Color_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_graphics_Color_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_Color_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_Color_hashCode_R_int, "()I", 1 },
	{ "toFloatBits", (intptr_t) M_com_badlogic_gdx_graphics_Color_toFloatBits_R_float, VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float, "()F", 1 },
	{ "toIntBits", (intptr_t) M_com_badlogic_gdx_graphics_Color_toIntBits_R_int, VTABLE_com_badlogic_gdx_graphics_Color_toIntBits_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_Color_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_Color_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_Color_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Color, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Color;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_Color_valueOf_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/Color;", 9 },
	{ "toFloatBits", (intptr_t) SM_com_badlogic_gdx_graphics_Color_toFloatBits_int_int_int_int_R_float, 0, "(IIII)F", 9 },
	{ "toFloatBits", (intptr_t) SM_com_badlogic_gdx_graphics_Color_toFloatBits_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "toIntBits", (intptr_t) SM_com_badlogic_gdx_graphics_Color_toIntBits_int_int_int_int_R_int, 0, "(IIII)I", 9 },
	{ "alpha", (intptr_t) SM_com_badlogic_gdx_graphics_Color_alpha_float_R_int, 0, "(F)I", 9 },
	{ "luminanceAlpha", (intptr_t) SM_com_badlogic_gdx_graphics_Color_luminanceAlpha_float_float_R_int, 0, "(FF)I", 9 },
	{ "rgb565", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgb565_float_float_float_R_int, 0, "(FFF)I", 9 },
	{ "rgba4444", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgba4444_float_float_float_float_R_int, 0, "(FFFF)I", 9 },
	{ "rgb888", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgb888_float_float_float_R_int, 0, "(FFF)I", 9 },
	{ "rgba8888", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgba8888_float_float_float_float_R_int, 0, "(FFFF)I", 9 },
	{ "argb8888", (intptr_t) SM_com_badlogic_gdx_graphics_Color_argb8888_float_float_float_float_R_int, 0, "(FFFF)I", 9 },
	{ "rgb565", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgb565_com_badlogic_gdx_graphics_Color_R_int, 0, "(Lcom/badlogic/gdx/graphics/Color;)I", 9 },
	{ "rgba4444", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgba4444_com_badlogic_gdx_graphics_Color_R_int, 0, "(Lcom/badlogic/gdx/graphics/Color;)I", 9 },
	{ "rgb888", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgb888_com_badlogic_gdx_graphics_Color_R_int, 0, "(Lcom/badlogic/gdx/graphics/Color;)I", 9 },
	{ "rgba8888", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgba8888_com_badlogic_gdx_graphics_Color_R_int, 0, "(Lcom/badlogic/gdx/graphics/Color;)I", 9 },
	{ "argb8888", (intptr_t) SM_com_badlogic_gdx_graphics_Color_argb8888_com_badlogic_gdx_graphics_Color_R_int, 0, "(Lcom/badlogic/gdx/graphics/Color;)I", 9 },
	{ "rgb565ToColor", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgb565ToColor_com_badlogic_gdx_graphics_Color_int, 0, "(Lcom/badlogic/gdx/graphics/Color;I)V", 9 },
	{ "rgba4444ToColor", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgba4444ToColor_com_badlogic_gdx_graphics_Color_int, 0, "(Lcom/badlogic/gdx/graphics/Color;I)V", 9 },
	{ "rgb888ToColor", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgb888ToColor_com_badlogic_gdx_graphics_Color_int, 0, "(Lcom/badlogic/gdx/graphics/Color;I)V", 9 },
	{ "rgba8888ToColor", (intptr_t) SM_com_badlogic_gdx_graphics_Color_rgba8888ToColor_com_badlogic_gdx_graphics_Color_int, 0, "(Lcom/badlogic/gdx/graphics/Color;I)V", 9 },
	{ "argb8888ToColor", (intptr_t) SM_com_badlogic_gdx_graphics_Color_argb8888ToColor_com_badlogic_gdx_graphics_Color_int, 0, "(Lcom/badlogic/gdx/graphics/Color;I)V", 9 },
	{ "abgr8888ToColor", (intptr_t) SM_com_badlogic_gdx_graphics_Color_abgr8888ToColor_com_badlogic_gdx_graphics_Color_int, 0, "(Lcom/badlogic/gdx/graphics/Color;I)V", 9 },
	{ "abgr8888ToColor", (intptr_t) SM_com_badlogic_gdx_graphics_Color_abgr8888ToColor_com_badlogic_gdx_graphics_Color_float, 0, "(Lcom/badlogic/gdx/graphics/Color;F)V", 9 },
	{ "fromHsv", (intptr_t) M_com_badlogic_gdx_graphics_Color_fromHsv_float_float_float_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_fromHsv_float_float_float_R_com_badlogic_gdx_graphics_Color, "(FFF)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "fromHsv", (intptr_t) M_com_badlogic_gdx_graphics_Color_fromHsv_Array1_float_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_fromHsv_Array1_float_R_com_badlogic_gdx_graphics_Color, "([F)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "toHsv", (intptr_t) M_com_badlogic_gdx_graphics_Color_toHsv_Array1_float_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_Color_toHsv_Array1_float_R_Array1_float, "([F)[F", 1 },
	{ "cpy", (intptr_t) M_com_badlogic_gdx_graphics_Color_cpy_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Color_cpy_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_Color, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_Color{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Color",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_Color),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Color,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Color,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Color,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 40,
		.nativeFields = (intptr_t) fields,
		.methodCount = 53,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Color = registerClass(&class_com_badlogic_gdx_graphics_Color);

}

