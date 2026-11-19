#include "com/badlogic/gdx/math/Vector2.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Field.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/math/Vector.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/math/Matrix3.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "java/lang/Deprecated.h"

extern "C" {

jlong SF_com_badlogic_gdx_math_Vector2_serialVersionUID;
jobject SF_com_badlogic_gdx_math_Vector2_X;
jobject SF_com_badlogic_gdx_math_Vector2_Y;
jobject SF_com_badlogic_gdx_math_Vector2_Zero;
jobject SF_com_badlogic_gdx_math_Vector2_One;

void mark_com_badlogic_gdx_math_Vector2(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_Vector2_X)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector2_X)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector2_X, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector2_Y)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector2_Y)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector2_Y, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector2_Zero)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector2_Zero)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector2_Zero, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector2_One)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector2_One)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector2_One, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_Vector2 *) object;
}

void init_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Vector2_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector2(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(48);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_cpy_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector2_len_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:len", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector2(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(63);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_len_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:len", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector2_len2_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:len2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector2(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_len2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:len2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(83);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(92);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(93);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:sub", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_sub_float_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:sub", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) - (frame[1].f));
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) - (frame[2].f));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:nor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_len_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_len_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(117);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) / (frame[1].f));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) / (frame[1].f));
	}
label_2:;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_add_float_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector2_dot_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dot", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector2(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (((frame[0].f) * (frame[2].f)) + ((frame[1].f) * (frame[3].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_dot_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:scl", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) * (frame[1].f));
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) * (frame[1].f));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_scl_float_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) * (frame[1].f));
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) * (frame[2].f));
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_scl_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:scl", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:mulAdd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[2].f)));
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[2].f)));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:mulAdd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x)));
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y)));
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_idt_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:idt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), -1)) != 0) goto label_1;
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

jfloat SM_com_badlogic_gdx_math_Vector2_dst_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dst", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector2(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(198);
	frame[4].f = ((frame[2].f) - (frame[0].f));
	LINE_NUMBER(199);
	frame[5].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(200);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dst", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(205);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(206);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(207);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_dst_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(214);
	frame[3].f = ((frame[1].f) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(215);
	frame[4].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(216);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[3].f) * (frame[3].f)) + ((frame[4].f) * (frame[4].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector2_dst2_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dst2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector2(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(220);
	frame[4].f = ((frame[2].f) - (frame[0].f));
	LINE_NUMBER(221);
	frame[5].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dst2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(227);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(228);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_dst2_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dst2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(236);
	frame[3].f = ((frame[1].f) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(237);
	frame[4].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return (((frame[3].f) * (frame[3].f)) + ((frame[4].f) * (frame[4].f)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_limit_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:limit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), ((frame[1].f) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:limit2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(248);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_len2_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(249);
	if ((floatCompare((frame[2].f), (frame[1].f), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[1].f) / (frame[2].f)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_clamp_float_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:clamp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(257);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_len2_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(258);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(259);
	frame[4].f = ((frame[2].f) * (frame[2].f));
	LINE_NUMBER(260);
	if ((floatCompare((frame[3].f), (frame[4].f), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[4].f) / (frame[3].f)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(261);
	frame[5].f = ((frame[1].f) * (frame[1].f));
	LINE_NUMBER(262);
	if ((floatCompare((frame[3].f), (frame[5].f), 1)) >= 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[5].f) / (frame[3].f)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_setLength_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:setLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), ((frame[1].f) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:setLength2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(273);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_len2_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(274);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (frame[1].f), -1)) != 0) goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	goto label_4;
label_3:;
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[1].f) / (frame[2].f)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (jfloat(temp0)));
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:fromString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(288);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(289);
	if ((frame[2].i) == (jint(-1))) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (40)) goto label_6;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (41)) goto label_6;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)), (frame[2].i));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(292);
	sp[0].o = frame[1].o;
	jint temp1 = (frame[2].i) + (jint(1));
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp1, (temp2 - (jint(1))));
	jfloat temp3 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[4].f = temp3;
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[3].f), (frame[4].f));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(294);
	INST_ASTORE(3);
label_6:;
	{
	LINE_NUMBER(298);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed Vector2: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:mul", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(305);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].f = (temp3 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	LINE_NUMBER(306);
	jfloat temp4 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp5 = temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	jfloat temp6 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp7 = temp5 + (temp6 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[3].f = (temp7 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	LINE_NUMBER(307);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(308);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].f);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_crs_com_badlogic_gdx_math_Vector2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:crs", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_crs_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:crs", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[2].f)) - (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[1].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_angle_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:angle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	jdouble temp0 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y))), (jdouble(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x))));
	frame[1].f = ((jfloat(temp0)) * (jfloat(57.295776f)));
	LINE_NUMBER(333);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	frame[1].f = ((frame[1].f) + (jfloat(360.0f)));
	}
label_2:;
	{
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_angle_com_badlogic_gdx_math_Vector2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:angle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(343);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_crs_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_crs_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (frame[1].o));
	jdouble temp1 = jdouble(temp0);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (frame[1].o));
	jdouble temp3 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, temp1, (jdouble(temp2)));
	popStackFrame(ctx);
	return ((jfloat(temp3)) * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_angleDeg_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:angleDeg", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(349);
	jdouble temp0 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y))), (jdouble(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x))));
	frame[1].f = ((jfloat(temp0)) * (jfloat(57.295776f)));
	LINE_NUMBER(350);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	frame[1].f = ((frame[1].f) + (jfloat(360.0f)));
	}
label_2:;
	{
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_angleDeg_com_badlogic_gdx_math_Vector2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:angleDeg", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(357);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_crs_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_crs_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[1].o), (frame[0].o));
	jdouble temp1 = jdouble(temp0);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[1].o), (frame[0].o));
	jdouble temp3 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, temp1, (jdouble(temp2)));
	frame[2].f = ((jfloat(temp3)) * (jfloat(57.295776f)));
	LINE_NUMBER(358);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	frame[2].f = ((frame[2].f) + (jfloat(360.0f)));
	}
label_2:;
	{
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector2_angleDeg_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:angleDeg", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector2(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(365);
	jdouble temp0 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, (jdouble((frame[1].f))), (jdouble((frame[0].f))));
	frame[2].f = ((jfloat(temp0)) * (jfloat(57.295776f)));
	LINE_NUMBER(366);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	frame[2].f = ((frame[2].f) + (jfloat(360.0f)));
	}
label_2:;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_angleRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:angleRad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(373);
	jdouble temp0 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y))), (jdouble(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_angleRad_com_badlogic_gdx_math_Vector2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:angleRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(379);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_crs_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_crs_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[1].o), (frame[0].o));
	jdouble temp1 = jdouble(temp0);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[1].o), (frame[0].o));
	jdouble temp3 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, temp1, (jdouble(temp2)));
	popStackFrame(ctx);
	return (jfloat(temp3));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector2_angleRad_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:angleRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector2(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(385);
	jdouble temp0 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, (jdouble((frame[1].f))), (jdouble((frame[0].f))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_setAngle_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:setAngle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_setAngleRad_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_setAngleRad_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), ((frame[1].f) * (jfloat(0.017453292f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_setAngleDeg_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:setAngleDeg", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_setAngleRad_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_setAngleRad_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), ((frame[1].f) * (jfloat(0.017453292f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_setAngleRad_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:setAngleRad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(405);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_len_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_len_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp0, (jfloat(0)));
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_rotate_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:rotate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), ((frame[1].f) * (jfloat(0.017453292f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_rotateAround_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:rotateAround", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_rotateDeg_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_rotateDeg_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_rotateDeg_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:rotateDeg", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), ((frame[1].f) * (jfloat(0.017453292f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:rotateRad", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(437);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[2].f = (jfloat(temp0));
	LINE_NUMBER(438);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(440);
	frame[4].f = ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[2].f)) - (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f)));
	LINE_NUMBER(441);
	frame[5].f = ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f)) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f)));
	LINE_NUMBER(443);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x = (frame[4].f);
	LINE_NUMBER(444);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[5].f);
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_rotateAroundDeg_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:rotateAroundDeg", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_rotateDeg_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_rotateDeg_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_rotateAroundRad_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:rotateAroundRad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_rotate90_int_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:rotate90", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(465);
	frame[2].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(466);
	if ((frame[1].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(467);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x = (-((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(468);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(470);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(471);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y = (-(frame[2].f));
	}
label_5:;
	{
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:lerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(478);
	frame[3].f = ((jfloat(1)) - (frame[2].f));
	LINE_NUMBER(479);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x = ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f)) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[2].f)));
	LINE_NUMBER(480);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y = ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f)) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[2].f)));
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_interpolate_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:interpolate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(486);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Interpolation_apply_float_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_R_float])(ctx, (frame[3].o), (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_setToRandomDirection_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:setToRandomDirection", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(491);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_float_float_R_float(ctx, (jfloat(0)), (jfloat(6.2831855f)));
	frame[1].f = temp0;
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, (frame[1].f));
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp1, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_Vector2_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(497);
	frame[1].i = (31);
	LINE_NUMBER(498);
	frame[2].i = (jint(1));
	LINE_NUMBER(499);
	jint temp0 = (31) * (frame[2].i);
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(500);
	jint temp2 = (31) * (frame[2].i);
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y));
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(506);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(507);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(509);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o)));
	LINE_NUMBER(510);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x));
	if (temp0 == temp1) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(511);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp0 == temp1) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:epsilonEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(517);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(518);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(519);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(520);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_epsilonEquals_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:epsilonEquals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(526);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)));
	if ((floatCompare(temp0, (frame[3].f), -1)) <= 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(527);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)));
	if ((floatCompare(temp0, (frame[3].f), -1)) <= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(528);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:epsilonEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(535);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(1.000000e-06f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_epsilonEquals_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:epsilonEquals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(543);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_epsilonEquals_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_epsilonEquals_float_float_float_R_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jfloat(1.000000e-06f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isUnit_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isUnit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(548);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isUnit_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isUnit_float_R_boolean])(ctx, (frame[0].o), (jfloat(1.000000e-09f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isUnit_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isUnit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(553);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_len2_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - (jfloat(1))));
	if ((floatCompare(temp1, (frame[1].f), 1)) >= 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector2_isZero_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(558);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)), -1)) != 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector2_isZero_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isZero", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(563);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_len2_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, (frame[1].f), 1)) >= 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isOnLine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(568);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isOnLine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(573);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isCollinear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(578);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isCollinear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(583);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isCollinearOpposite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(588);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isCollinearOpposite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(593);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isPerpendicular", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(598);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isPerpendicular", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(603);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, temp0, (frame[2].f));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_hasSameDirection_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:hasSameDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(608);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector2_hasOppositeDirection_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:hasOppositeDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(613);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_1;
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

jobject M_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:setZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(618);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(619);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(620);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:setZero", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:mulAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[2].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:mulAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:epsilonEquals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:hasOppositeDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_hasOppositeDirection_com_badlogic_gdx_math_Vector2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_hasOppositeDirection_com_badlogic_gdx_math_Vector2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:hasSameDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_hasSameDirection_com_badlogic_gdx_math_Vector2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_hasSameDirection_com_badlogic_gdx_math_Vector2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isPerpendicular", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isPerpendicular", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isCollinearOpposite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isCollinearOpposite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isCollinear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isCollinear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isOnLine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:isOnLine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_setToRandomDirection_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:setToRandomDirection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_setToRandomDirection_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_setToRandomDirection_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:interpolate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_interpolate_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_interpolate_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))), (frame[2].f), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:lerp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dst2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:scl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_scl_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_scl_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:scl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:dot", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:nor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:sub", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_clamp_float_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:clamp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_clamp_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_clamp_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:setLength2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_setLength_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:setLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_setLength_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_setLength_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:limit2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_limit_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:limit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_limit_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_limit_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector2_cpy_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:cpy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_cpy_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_cpy_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_Vector2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_Vector2_serialVersionUID = jlong(913902788239530931ll);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector2:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector2(ctx);
	{
	LINE_NUMBER(29);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(0)));
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	SF_com_badlogic_gdx_math_Vector2_X = sp[0].o;
	LINE_NUMBER(30);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(1)));
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	SF_com_badlogic_gdx_math_Vector2_Y = sp[0].o;
	LINE_NUMBER(31);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)));
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	SF_com_badlogic_gdx_math_Vector2_Zero = sp[0].o;
	LINE_NUMBER(32);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(1)));
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	SF_com_badlogic_gdx_math_Vector2_One = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_math_Vector2;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method angle
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[37]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method angle
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[38]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method setAngle
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[45]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method rotate
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[48]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method rotateAround
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[49]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_math_Vector2[] {
	(void *) M_com_badlogic_gdx_math_Vector2_hashCode_R_int,
	(void *) M_com_badlogic_gdx_math_Vector2_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_Vector2_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_Vector2_cpy_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_len_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_len2_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_limit_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_setLength_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_clamp_float_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_setToRandomDirection_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_isUnit_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isUnit_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isZero_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isZero_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector2_cpy_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_sub_float_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_add_float_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_dot_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_scl_float_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_scl_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_idt_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_dst_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector2_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_dst2_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_limit_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_clamp_float_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_setLength_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_crs_com_badlogic_gdx_math_Vector2_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_crs_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_angle_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_angle_com_badlogic_gdx_math_Vector2_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_angleDeg_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_angleDeg_com_badlogic_gdx_math_Vector2_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_angleRad_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_angleRad_com_badlogic_gdx_math_Vector2_R_float,
	(void *) M_com_badlogic_gdx_math_Vector2_setAngle_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_setAngleDeg_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_setAngleRad_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_rotate_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_rotateAround_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_rotateDeg_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_rotateAroundDeg_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_rotateAroundRad_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_rotate90_int_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_interpolate_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_setToRandomDirection_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_epsilonEquals_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_epsilonEquals_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_hasSameDirection_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_hasOppositeDirection_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector2,
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
	{ "cpy", "()Lcom/badlogic/gdx/math/Vector;" },
	{ "len", "()F" },
	{ "len2", "()F" },
	{ "limit", "(F)Lcom/badlogic/gdx/math/Vector;" },
	{ "limit2", "(F)Lcom/badlogic/gdx/math/Vector;" },
	{ "setLength", "(F)Lcom/badlogic/gdx/math/Vector;" },
	{ "setLength2", "(F)Lcom/badlogic/gdx/math/Vector;" },
	{ "clamp", "(FF)Lcom/badlogic/gdx/math/Vector;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;" },
	{ "sub", "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;" },
	{ "nor", "()Lcom/badlogic/gdx/math/Vector;" },
	{ "add", "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;" },
	{ "dot", "(Lcom/badlogic/gdx/math/Vector;)F" },
	{ "scl", "(F)Lcom/badlogic/gdx/math/Vector;" },
	{ "scl", "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;" },
	{ "dst", "(Lcom/badlogic/gdx/math/Vector;)F" },
	{ "dst2", "(Lcom/badlogic/gdx/math/Vector;)F" },
	{ "lerp", "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;" },
	{ "interpolate", "(Lcom/badlogic/gdx/math/Vector;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector;" },
	{ "setToRandomDirection", "()Lcom/badlogic/gdx/math/Vector;" },
	{ "isUnit", "()Z" },
	{ "isUnit", "(F)Z" },
	{ "isZero", "()Z" },
	{ "isZero", "(F)Z" },
	{ "isOnLine", "(Lcom/badlogic/gdx/math/Vector;F)Z" },
	{ "isOnLine", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "isCollinear", "(Lcom/badlogic/gdx/math/Vector;F)Z" },
	{ "isCollinear", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "isCollinearOpposite", "(Lcom/badlogic/gdx/math/Vector;F)Z" },
	{ "isCollinearOpposite", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "isPerpendicular", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "isPerpendicular", "(Lcom/badlogic/gdx/math/Vector;F)Z" },
	{ "hasSameDirection", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "hasOppositeDirection", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "epsilonEquals", "(Lcom/badlogic/gdx/math/Vector;F)Z" },
	{ "mulAdd", "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;" },
	{ "mulAdd", "(Lcom/badlogic/gdx/math/Vector;Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;" },
	{ "setZero", "()Lcom/badlogic/gdx/math/Vector;" },
	{ "cpy", "()Lcom/badlogic/gdx/math/Vector2;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "set", "(FF)Lcom/badlogic/gdx/math/Vector2;" },
	{ "sub", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "sub", "(FF)Lcom/badlogic/gdx/math/Vector2;" },
	{ "nor", "()Lcom/badlogic/gdx/math/Vector2;" },
	{ "add", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "add", "(FF)Lcom/badlogic/gdx/math/Vector2;" },
	{ "dot", "(Lcom/badlogic/gdx/math/Vector2;)F" },
	{ "dot", "(FF)F" },
	{ "scl", "(F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "scl", "(FF)Lcom/badlogic/gdx/math/Vector2;" },
	{ "scl", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "mulAdd", "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "mulAdd", "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "idt", "(Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "dst", "(Lcom/badlogic/gdx/math/Vector2;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(Lcom/badlogic/gdx/math/Vector2;)F" },
	{ "dst2", "(FF)F" },
	{ "limit", "(F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "limit2", "(F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "clamp", "(FF)Lcom/badlogic/gdx/math/Vector2;" },
	{ "setLength", "(F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "setLength2", "(F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "fromString", "(Ljava/lang/String;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "mul", "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "crs", "(Lcom/badlogic/gdx/math/Vector2;)F" },
	{ "crs", "(FF)F" },
	{ "angle", "()F" },
	{ "angle", "(Lcom/badlogic/gdx/math/Vector2;)F" },
	{ "angleDeg", "()F" },
	{ "angleDeg", "(Lcom/badlogic/gdx/math/Vector2;)F" },
	{ "angleRad", "()F" },
	{ "angleRad", "(Lcom/badlogic/gdx/math/Vector2;)F" },
	{ "setAngle", "(F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "setAngleDeg", "(F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "setAngleRad", "(F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "rotate", "(F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "rotateAround", "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "rotateDeg", "(F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "rotateRad", "(F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "rotateAroundDeg", "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "rotateAroundRad", "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "rotate90", "(I)Lcom/badlogic/gdx/math/Vector2;" },
	{ "lerp", "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector2;" },
	{ "interpolate", "(Lcom/badlogic/gdx/math/Vector2;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "setToRandomDirection", "()Lcom/badlogic/gdx/math/Vector2;" },
	{ "epsilonEquals", "(Lcom/badlogic/gdx/math/Vector2;F)Z" },
	{ "epsilonEquals", "(FFF)Z" },
	{ "epsilonEquals", "(Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "epsilonEquals", "(FF)Z" },
	{ "isOnLine", "(Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "isOnLine", "(Lcom/badlogic/gdx/math/Vector2;F)Z" },
	{ "isCollinear", "(Lcom/badlogic/gdx/math/Vector2;F)Z" },
	{ "isCollinear", "(Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "isCollinearOpposite", "(Lcom/badlogic/gdx/math/Vector2;F)Z" },
	{ "isCollinearOpposite", "(Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "isPerpendicular", "(Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "isPerpendicular", "(Lcom/badlogic/gdx/math/Vector2;F)Z" },
	{ "hasSameDirection", "(Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "hasOppositeDirection", "(Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "setZero", "()Lcom/badlogic/gdx/math/Vector2;" },
};

static jclass interfaces[] { &class_java_io_Serializable, &class_com_badlogic_gdx_math_Vector, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_Vector2_serialVersionUID, "J", 26 },
	{ "X", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Vector2_X, "Lcom/badlogic/gdx/math/Vector2;", 25 },
	{ "Y", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Vector2_Y, "Lcom/badlogic/gdx/math/Vector2;", 25 },
	{ "Zero", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Vector2_Zero, "Lcom/badlogic/gdx/math/Vector2;", 25 },
	{ "One", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Vector2_One, "Lcom/badlogic/gdx/math/Vector2;", 25 },
	{ "x", &class_float, offsetof(com_badlogic_gdx_math_Vector2, F_x), "F", 1 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_math_Vector2, F_y), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector2, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector2_float_float, 0, "(FF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2, 0, "(Lcom/badlogic/gdx/math/Vector2;)V", 1 },
	{ "cpy", (intptr_t) M_com_badlogic_gdx_math_Vector2_cpy_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_cpy_R_com_badlogic_gdx_math_Vector2, "()Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "len", (intptr_t) SM_com_badlogic_gdx_math_Vector2_len_float_float_R_float, 0, "(FF)F", 9 },
	{ "len", (intptr_t) M_com_badlogic_gdx_math_Vector2_len_R_float, VTABLE_com_badlogic_gdx_math_Vector2_len_R_float, "()F", 1 },
	{ "len2", (intptr_t) SM_com_badlogic_gdx_math_Vector2_len2_float_float_R_float, 0, "(FF)F", 9 },
	{ "len2", (intptr_t) M_com_badlogic_gdx_math_Vector2_len2_R_float, VTABLE_com_badlogic_gdx_math_Vector2_len2_R_float, "()F", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2, "(FF)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_math_Vector2_sub_float_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_sub_float_float_R_com_badlogic_gdx_math_Vector2, "(FF)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "nor", (intptr_t) M_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2, "()Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Vector2_add_float_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_add_float_float_R_com_badlogic_gdx_math_Vector2, "(FF)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "dot", (intptr_t) SM_com_badlogic_gdx_math_Vector2_dot_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "dot", (intptr_t) M_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float, VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float, "(Lcom/badlogic/gdx/math/Vector2;)F", 1 },
	{ "dot", (intptr_t) M_com_badlogic_gdx_math_Vector2_dot_float_float_R_float, VTABLE_com_badlogic_gdx_math_Vector2_dot_float_float_R_float, "(FF)F", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2, "(F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector2_scl_float_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_scl_float_float_R_com_badlogic_gdx_math_Vector2, "(FF)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector2_scl_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_scl_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "idt", (intptr_t) M_com_badlogic_gdx_math_Vector2_idt_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_idt_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "dst", (intptr_t) SM_com_badlogic_gdx_math_Vector2_dst_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "dst", (intptr_t) M_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float, VTABLE_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float, "(Lcom/badlogic/gdx/math/Vector2;)F", 1 },
	{ "dst", (intptr_t) M_com_badlogic_gdx_math_Vector2_dst_float_float_R_float, VTABLE_com_badlogic_gdx_math_Vector2_dst_float_float_R_float, "(FF)F", 1 },
	{ "dst2", (intptr_t) SM_com_badlogic_gdx_math_Vector2_dst2_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "dst2", (intptr_t) M_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector2_R_float, VTABLE_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector2_R_float, "(Lcom/badlogic/gdx/math/Vector2;)F", 1 },
	{ "dst2", (intptr_t) M_com_badlogic_gdx_math_Vector2_dst2_float_float_R_float, VTABLE_com_badlogic_gdx_math_Vector2_dst2_float_float_R_float, "(FF)F", 1 },
	{ "limit", (intptr_t) M_com_badlogic_gdx_math_Vector2_limit_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_limit_float_R_com_badlogic_gdx_math_Vector2, "(F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "limit2", (intptr_t) M_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector2, "(F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "clamp", (intptr_t) M_com_badlogic_gdx_math_Vector2_clamp_float_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_clamp_float_float_R_com_badlogic_gdx_math_Vector2, "(FF)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "setLength", (intptr_t) M_com_badlogic_gdx_math_Vector2_setLength_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_setLength_float_R_com_badlogic_gdx_math_Vector2, "(F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "setLength2", (intptr_t) M_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector2, "(F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_Vector2_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_Vector2_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "fromString", (intptr_t) M_com_badlogic_gdx_math_Vector2_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector2, "(Ljava/lang/String;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_Vector2_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "crs", (intptr_t) M_com_badlogic_gdx_math_Vector2_crs_com_badlogic_gdx_math_Vector2_R_float, VTABLE_com_badlogic_gdx_math_Vector2_crs_com_badlogic_gdx_math_Vector2_R_float, "(Lcom/badlogic/gdx/math/Vector2;)F", 1 },
	{ "crs", (intptr_t) M_com_badlogic_gdx_math_Vector2_crs_float_float_R_float, VTABLE_com_badlogic_gdx_math_Vector2_crs_float_float_R_float, "(FF)F", 1 },
	{ "angle", (intptr_t) M_com_badlogic_gdx_math_Vector2_angle_R_float, VTABLE_com_badlogic_gdx_math_Vector2_angle_R_float, "()F", 131073 },
	{ "angle", (intptr_t) M_com_badlogic_gdx_math_Vector2_angle_com_badlogic_gdx_math_Vector2_R_float, VTABLE_com_badlogic_gdx_math_Vector2_angle_com_badlogic_gdx_math_Vector2_R_float, "(Lcom/badlogic/gdx/math/Vector2;)F", 131073 },
	{ "angleDeg", (intptr_t) M_com_badlogic_gdx_math_Vector2_angleDeg_R_float, VTABLE_com_badlogic_gdx_math_Vector2_angleDeg_R_float, "()F", 1 },
	{ "angleDeg", (intptr_t) M_com_badlogic_gdx_math_Vector2_angleDeg_com_badlogic_gdx_math_Vector2_R_float, VTABLE_com_badlogic_gdx_math_Vector2_angleDeg_com_badlogic_gdx_math_Vector2_R_float, "(Lcom/badlogic/gdx/math/Vector2;)F", 1 },
	{ "angleDeg", (intptr_t) SM_com_badlogic_gdx_math_Vector2_angleDeg_float_float_R_float, 0, "(FF)F", 9 },
	{ "angleRad", (intptr_t) M_com_badlogic_gdx_math_Vector2_angleRad_R_float, VTABLE_com_badlogic_gdx_math_Vector2_angleRad_R_float, "()F", 1 },
	{ "angleRad", (intptr_t) M_com_badlogic_gdx_math_Vector2_angleRad_com_badlogic_gdx_math_Vector2_R_float, VTABLE_com_badlogic_gdx_math_Vector2_angleRad_com_badlogic_gdx_math_Vector2_R_float, "(Lcom/badlogic/gdx/math/Vector2;)F", 1 },
	{ "angleRad", (intptr_t) SM_com_badlogic_gdx_math_Vector2_angleRad_float_float_R_float, 0, "(FF)F", 9 },
	{ "setAngle", (intptr_t) M_com_badlogic_gdx_math_Vector2_setAngle_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_setAngle_float_R_com_badlogic_gdx_math_Vector2, "(F)Lcom/badlogic/gdx/math/Vector2;", 131073 },
	{ "setAngleDeg", (intptr_t) M_com_badlogic_gdx_math_Vector2_setAngleDeg_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_setAngleDeg_float_R_com_badlogic_gdx_math_Vector2, "(F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "setAngleRad", (intptr_t) M_com_badlogic_gdx_math_Vector2_setAngleRad_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_setAngleRad_float_R_com_badlogic_gdx_math_Vector2, "(F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_math_Vector2_rotate_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_rotate_float_R_com_badlogic_gdx_math_Vector2, "(F)Lcom/badlogic/gdx/math/Vector2;", 131073 },
	{ "rotateAround", (intptr_t) M_com_badlogic_gdx_math_Vector2_rotateAround_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_rotateAround_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector2;", 131073 },
	{ "rotateDeg", (intptr_t) M_com_badlogic_gdx_math_Vector2_rotateDeg_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_rotateDeg_float_R_com_badlogic_gdx_math_Vector2, "(F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "rotateRad", (intptr_t) M_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_rotateRad_float_R_com_badlogic_gdx_math_Vector2, "(F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "rotateAroundDeg", (intptr_t) M_com_badlogic_gdx_math_Vector2_rotateAroundDeg_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_rotateAroundDeg_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "rotateAroundRad", (intptr_t) M_com_badlogic_gdx_math_Vector2_rotateAroundRad_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_rotateAroundRad_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "rotate90", (intptr_t) M_com_badlogic_gdx_math_Vector2_rotate90_int_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_rotate90_int_R_com_badlogic_gdx_math_Vector2, "(I)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "lerp", (intptr_t) M_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "interpolate", (intptr_t) M_com_badlogic_gdx_math_Vector2_interpolate_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_interpolate_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "setToRandomDirection", (intptr_t) M_com_badlogic_gdx_math_Vector2_setToRandomDirection_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_setToRandomDirection_R_com_badlogic_gdx_math_Vector2, "()Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_math_Vector2_hashCode_R_int, VTABLE_com_badlogic_gdx_math_Vector2_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_math_Vector2_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;F)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector2_epsilonEquals_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_epsilonEquals_float_float_float_R_boolean, "(FFF)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector2_epsilonEquals_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_epsilonEquals_float_float_R_boolean, "(FF)Z", 1 },
	{ "isUnit", (intptr_t) M_com_badlogic_gdx_math_Vector2_isUnit_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isUnit_R_boolean, "()Z", 1 },
	{ "isUnit", (intptr_t) M_com_badlogic_gdx_math_Vector2_isUnit_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isUnit_float_R_boolean, "(F)Z", 1 },
	{ "isZero", (intptr_t) M_com_badlogic_gdx_math_Vector2_isZero_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isZero_R_boolean, "()Z", 1 },
	{ "isZero", (intptr_t) M_com_badlogic_gdx_math_Vector2_isZero_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isZero_float_R_boolean, "(F)Z", 1 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector2_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;F)Z", 1 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;F)Z", 1 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;F)Z", 1 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector2_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;F)Z", 1 },
	{ "hasSameDirection", (intptr_t) M_com_badlogic_gdx_math_Vector2_hasSameDirection_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_hasSameDirection_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "hasOppositeDirection", (intptr_t) M_com_badlogic_gdx_math_Vector2_hasOppositeDirection_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_hasOppositeDirection_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "setZero", (intptr_t) M_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector2, "()Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "setZero", (intptr_t) M_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "hasOppositeDirection", (intptr_t) M_com_badlogic_gdx_math_Vector2_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "hasSameDirection", (intptr_t) M_com_badlogic_gdx_math_Vector2_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector2_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "setToRandomDirection", (intptr_t) M_com_badlogic_gdx_math_Vector2_setToRandomDirection_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_setToRandomDirection_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "interpolate", (intptr_t) M_com_badlogic_gdx_math_Vector2_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "lerp", (intptr_t) M_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "dst2", (intptr_t) M_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector_R_float, VTABLE_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 4161 },
	{ "dst", (intptr_t) M_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector_R_float, VTABLE_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 4161 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector2_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "dot", (intptr_t) M_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector_R_float, VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 4161 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "nor", (intptr_t) M_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "clamp", (intptr_t) M_com_badlogic_gdx_math_Vector2_clamp_float_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_clamp_float_float_R_com_badlogic_gdx_math_Vector, "(FF)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "setLength2", (intptr_t) M_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_setLength2_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "setLength", (intptr_t) M_com_badlogic_gdx_math_Vector2_setLength_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_setLength_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "limit2", (intptr_t) M_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_limit2_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "limit", (intptr_t) M_com_badlogic_gdx_math_Vector2_limit_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_limit_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "cpy", (intptr_t) M_com_badlogic_gdx_math_Vector2_cpy_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector2_cpy_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_Vector2, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_Vector2{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Vector2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Vector2),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Vector2,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Vector2,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Vector2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 115,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 112,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Vector2 = registerClass(&class_com_badlogic_gdx_math_Vector2);

}

