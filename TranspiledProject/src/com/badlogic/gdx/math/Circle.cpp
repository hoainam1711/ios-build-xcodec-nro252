#include "com/badlogic/gdx/math/Circle.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Circle.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/math/Shape2D.h"

extern "C" {


void mark_com_badlogic_gdx_math_Circle(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_math_Circle *) object;
}

void clinit_com_badlogic_gdx_math_Circle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_math_Circle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Circle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Circle_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Circle(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(38);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(39);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius = (frame[3].f);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Vector2_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Circle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(48);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(49);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius = (frame[2].f);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Circle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Circle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(56);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(57);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(58);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius = ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_radius);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Circle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(65);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(66);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(67);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_Vector2_len_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x)), (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y)));
	((com_badlogic_gdx_math_Circle *) NULL_CHECK(sp[0].o))->F_radius = temp0;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Circle_set_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(77);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(78);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(79);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius = (frame[3].f);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(87);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(88);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(89);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius = (frame[2].f);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Circle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(97);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(98);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius = ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_radius);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(106);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(107);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_Vector2_len_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x)), (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y)));
	((com_badlogic_gdx_math_Circle *) NULL_CHECK(sp[0].o))->F_radius = temp0;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Circle_setPosition_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:setPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(115);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Circle_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:setPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(122);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(123);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Circle_setX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:setX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(129);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Circle_setY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:setY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(135);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Circle_setRadius_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:setRadius", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(141);
	((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius = (frame[1].f);
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(151);
	frame[1].f = (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x) - (frame[1].f));
	LINE_NUMBER(152);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y) - (frame[2].f));
	LINE_NUMBER(153);
	if ((floatCompare((((frame[1].f) * (frame[1].f)) + ((frame[2].f) * (frame[2].f))), (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius) * ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius)), 1)) > 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:contains", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(163);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(164);
	if ((floatCompare((((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f))), (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius) * ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius)), 1)) > 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Circle_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:contains", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(170);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius) - ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_radius));
	LINE_NUMBER(171);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(172);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(173);
	frame[4].f = (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(174);
	frame[5].f = (((frame[3].f) * (frame[3].f)) + ((frame[4].f) * (frame[4].f)));
	LINE_NUMBER(175);
	frame[6].f = (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius) + ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_radius));
	LINE_NUMBER(176);
	if ((floatCompare(((frame[2].f) * (frame[2].f)), (frame[5].f), 1)) < 0) goto label_7;
	}
	{
	if ((floatCompare((frame[5].f), ((frame[6].f) * (frame[6].f)), 1)) >= 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Circle_overlaps_com_badlogic_gdx_math_Circle_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:overlaps", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(183);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(184);
	frame[4].f = (((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f)));
	LINE_NUMBER(185);
	frame[5].f = (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius) + ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_radius));
	LINE_NUMBER(186);
	if ((floatCompare((frame[4].f), ((frame[5].f) * (frame[5].f)), 1)) >= 0) goto label_5;
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

jobject M_com_badlogic_gdx_math_Circle_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Circle_circumference_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:circumference", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius) * (jfloat(6.2831855f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Circle_area_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:area", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return ((((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius) * ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius)) * (jfloat(3.1415927f)));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Circle_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(207);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(208);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(209);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Circle, (frame[1].o)));
	LINE_NUMBER(210);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[2].o)))->F_x), -1)) != 0) goto label_5;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[2].o)))->F_y), -1)) != 0) goto label_5;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius), ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[2].o)))->F_radius), -1)) != 0) goto label_5;
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

jint M_com_badlogic_gdx_math_Circle_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Circle:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	frame[1].i = (41);
	LINE_NUMBER(216);
	frame[2].i = (jint(1));
	LINE_NUMBER(217);
	jint temp0 = (41) * (frame[2].i);
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(218);
	jint temp2 = (41) * (frame[2].i);
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(219);
	jint temp4 = (41) * (frame[2].i);
	jint temp5 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y));
	frame[2].i = (temp4 + temp5);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Circle[] {
	(void *) M_com_badlogic_gdx_math_Circle_hashCode_R_int,
	(void *) M_com_badlogic_gdx_math_Circle_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_Circle_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Circle_set_float_float_float,
	(void *) M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_float,
	(void *) M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Circle,
	(void *) M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Circle_setPosition_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Circle_setPosition_float_float,
	(void *) M_com_badlogic_gdx_math_Circle_setX_float,
	(void *) M_com_badlogic_gdx_math_Circle_setY_float,
	(void *) M_com_badlogic_gdx_math_Circle_setRadius_float,
	(void *) M_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Circle_R_boolean,
	(void *) M_com_badlogic_gdx_math_Circle_overlaps_com_badlogic_gdx_math_Circle_R_boolean,
	(void *) M_com_badlogic_gdx_math_Circle_circumference_R_float,
	(void *) M_com_badlogic_gdx_math_Circle_area_R_float,
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
	{ "contains", "(Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "contains", "(FF)Z" },
	{ "set", "(FFF)V" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector2;F)V" },
	{ "set", "(Lcom/badlogic/gdx/math/Circle;)V" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)V" },
	{ "setPosition", "(Lcom/badlogic/gdx/math/Vector2;)V" },
	{ "setPosition", "(FF)V" },
	{ "setX", "(F)V" },
	{ "setY", "(F)V" },
	{ "setRadius", "(F)V" },
	{ "contains", "(Lcom/badlogic/gdx/math/Circle;)Z" },
	{ "overlaps", "(Lcom/badlogic/gdx/math/Circle;)Z" },
	{ "circumference", "()F" },
	{ "area", "()F" },
};

static jclass interfaces[] { &class_java_io_Serializable, &class_com_badlogic_gdx_math_Shape2D, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(com_badlogic_gdx_math_Circle, F_x), "F", 1 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_math_Circle, F_y), "F", 1 },
	{ "radius", &class_float, offsetof(com_badlogic_gdx_math_Circle, F_radius), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Circle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Circle_float_float_float, 0, "(FFF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Vector2_float, 0, "(Lcom/badlogic/gdx/math/Vector2;F)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Circle, 0, "(Lcom/badlogic/gdx/math/Circle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Circle_set_float_float_float, VTABLE_com_badlogic_gdx_math_Circle_set_float_float_float, "(FFF)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_float, VTABLE_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_float, "(Lcom/badlogic/gdx/math/Vector2;F)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Circle, VTABLE_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Circle, "(Lcom/badlogic/gdx/math/Circle;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_math_Circle_setPosition_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Circle_setPosition_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_math_Circle_setPosition_float_float, VTABLE_com_badlogic_gdx_math_Circle_setPosition_float_float, "(FF)V", 1 },
	{ "setX", (intptr_t) M_com_badlogic_gdx_math_Circle_setX_float, VTABLE_com_badlogic_gdx_math_Circle_setX_float, "(F)V", 1 },
	{ "setY", (intptr_t) M_com_badlogic_gdx_math_Circle_setY_float, VTABLE_com_badlogic_gdx_math_Circle_setY_float, "(F)V", 1 },
	{ "setRadius", (intptr_t) M_com_badlogic_gdx_math_Circle_setRadius_float, VTABLE_com_badlogic_gdx_math_Circle_setRadius_float, "(F)V", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean, "(FF)Z", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Circle_R_boolean, VTABLE_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Circle_R_boolean, "(Lcom/badlogic/gdx/math/Circle;)Z", 1 },
	{ "overlaps", (intptr_t) M_com_badlogic_gdx_math_Circle_overlaps_com_badlogic_gdx_math_Circle_R_boolean, VTABLE_com_badlogic_gdx_math_Circle_overlaps_com_badlogic_gdx_math_Circle_R_boolean, "(Lcom/badlogic/gdx/math/Circle;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_Circle_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_Circle_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "circumference", (intptr_t) M_com_badlogic_gdx_math_Circle_circumference_R_float, VTABLE_com_badlogic_gdx_math_Circle_circumference_R_float, "()F", 1 },
	{ "area", (intptr_t) M_com_badlogic_gdx_math_Circle_area_R_float, VTABLE_com_badlogic_gdx_math_Circle_area_R_float, "()F", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_math_Circle_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_math_Circle_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_math_Circle_hashCode_R_int, VTABLE_com_badlogic_gdx_math_Circle_hashCode_R_int, "()I", 1 },
};

Class class_com_badlogic_gdx_math_Circle{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Circle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Circle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Circle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Circle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Circle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Circle = registerClass(&class_com_badlogic_gdx_math_Circle);

}

