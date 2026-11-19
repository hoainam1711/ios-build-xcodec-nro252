#include "com/badlogic/gdx/math/Vector4.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/math/Vector.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/math/Vector4.h"

extern "C" {

jlong SF_com_badlogic_gdx_math_Vector4_serialVersionUID;
jobject SF_com_badlogic_gdx_math_Vector4_X;
jobject SF_com_badlogic_gdx_math_Vector4_Y;
jobject SF_com_badlogic_gdx_math_Vector4_Z;
jobject SF_com_badlogic_gdx_math_Vector4_W;
jobject SF_com_badlogic_gdx_math_Vector4_Zero;
jobject SF_com_badlogic_gdx_math_Vector4_One;

void mark_com_badlogic_gdx_math_Vector4(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_Vector4_X)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector4_X)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector4_X, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector4_Y)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector4_Y)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector4_Y, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector4_Z)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector4_Z)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector4_Z, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector4_W)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector4_W)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector4_W, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector4_Zero)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector4_Zero)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector4_Zero, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector4_One)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector4_One)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector4_One, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_Vector4 *) object;
}

void init_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(48);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Vector4_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(56);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Vector4_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3)))));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector2_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(78);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f), (frame[3].f));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector3_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(86);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].f));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(98);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(99);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(100);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z = (frame[3].f);
	LINE_NUMBER(101);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w = (frame[4].f);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_set_Array1_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector2_float_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_setToRandomDirection_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:setToRandomDirection", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(146);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_R_float(ctx);
	frame[1].f = ((temp0 - (jfloat(0.5f))) * (jfloat(2)));
	LINE_NUMBER(147);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_R_float(ctx);
	frame[2].f = ((temp1 - (jfloat(0.5f))) * (jfloat(2)));
	LINE_NUMBER(148);
	frame[3].f = (((frame[1].f) * (frame[1].f)) + ((frame[2].f) * (frame[2].f)));
	LINE_NUMBER(149);
	if ((floatCompare((frame[3].f), (jfloat(1)), -1)) >= 0) goto label_0;
	}
	{
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) == 0) goto label_0;
	}
	{
	LINE_NUMBER(150);
	jdouble temp0 = jdouble(-2.0);
	jdouble temp1 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (jdouble((frame[3].f))));
	jdouble temp2 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, ((temp0 * temp1) / (jdouble((frame[3].f)))));
	frame[4].f = (jfloat(temp2));
	LINE_NUMBER(151);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x = ((frame[1].f) * (frame[4].f));
	LINE_NUMBER(152);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y = ((frame[2].f) * (frame[4].f));
	}
label_7:;
	{
	LINE_NUMBER(155);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_R_float(ctx);
	frame[1].f = ((temp0 - (jfloat(0.5f))) * (jfloat(2)));
	LINE_NUMBER(156);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_R_float(ctx);
	frame[2].f = ((temp1 - (jfloat(0.5f))) * (jfloat(2)));
	LINE_NUMBER(157);
	frame[3].f = (((frame[1].f) * (frame[1].f)) + ((frame[2].f) * (frame[2].f)));
	LINE_NUMBER(158);
	if ((floatCompare((frame[3].f), (jfloat(1)), -1)) >= 0) goto label_7;
	}
	{
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(159);
	jdouble temp0 = jdouble(-2.0);
	jdouble temp1 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (jdouble((frame[3].f))));
	jdouble temp2 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, ((temp0 * temp1) / (jdouble((frame[3].f)))));
	frame[4].f = (jfloat(temp2));
	LINE_NUMBER(160);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z = ((frame[1].f) * (frame[4].f));
	LINE_NUMBER(161);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w = ((frame[2].f) * (frame[4].f));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_cpy_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector4);
	init_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector4(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_add_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_add_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_add_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_add_float_float_float_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:add", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) + (frame[3].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) + (frame[4].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_add_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) + (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) + (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) + (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_sub_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:sub", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_sub_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_sub_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_sub_float_float_float_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:sub", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) - (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) - (frame[2].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) - (frame[3].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) - (frame[4].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_sub_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:sub", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) - (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) - (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) - (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) - (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:scl", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_scl_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:scl", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_scl_float_float_float_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:scl", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f)), (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) * (frame[4].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:mulAdd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[2].f)));
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[2].f)));
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_z) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z) * (frame[2].f)));
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_w = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_w) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w) * (frame[2].f)));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:mulAdd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_x)));
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_y)));
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_z) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_z)));
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_w = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_w) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_w)));
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector4_len_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:len", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(264);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))) + ((frame[2].f) * (frame[2].f))) + ((frame[3].f) * (frame[3].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector4_len_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:len", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y))) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z))) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector4_len2_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:len2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))) + ((frame[2].f) * (frame[2].f))) + ((frame[3].f) * (frame[3].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector4_len2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:len2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return ((((((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y))) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z))) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w)));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_idt_com_badlogic_gdx_math_Vector4_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:idt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(286);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w), -1)) != 0) goto label_1;
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

jfloat SM_com_badlogic_gdx_math_Vector4_dst_float_float_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dst", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(292);
	frame[8].f = ((frame[4].f) - (frame[0].f));
	LINE_NUMBER(293);
	frame[9].f = ((frame[5].f) - (frame[1].f));
	LINE_NUMBER(294);
	frame[10].f = ((frame[6].f) - (frame[2].f));
	LINE_NUMBER(295);
	frame[11].f = ((frame[7].f) - (frame[3].f));
	LINE_NUMBER(296);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((((frame[8].f) * (frame[8].f)) + ((frame[9].f) * (frame[9].f))) + ((frame[10].f) * (frame[10].f))) + ((frame[11].f) * (frame[11].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector4_dst_com_badlogic_gdx_math_Vector4_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dst", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(301);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(302);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(303);
	frame[4].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(304);
	frame[5].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w));
	LINE_NUMBER(305);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f))) + ((frame[4].f) * (frame[4].f))) + ((frame[5].f) * (frame[5].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector4_dst_float_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dst", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(310);
	frame[5].f = ((frame[1].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(311);
	frame[6].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(312);
	frame[7].f = ((frame[3].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(313);
	frame[8].f = ((frame[4].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w));
	LINE_NUMBER(314);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((((frame[5].f) * (frame[5].f)) + ((frame[6].f) * (frame[6].f))) + ((frame[7].f) * (frame[7].f))) + ((frame[8].f) * (frame[8].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector4_dst2_float_float_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dst2", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(320);
	frame[8].f = ((frame[4].f) - (frame[0].f));
	LINE_NUMBER(321);
	frame[9].f = ((frame[5].f) - (frame[1].f));
	LINE_NUMBER(322);
	frame[10].f = ((frame[6].f) - (frame[2].f));
	LINE_NUMBER(323);
	frame[11].f = ((frame[7].f) - (frame[3].f));
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (((((frame[8].f) * (frame[8].f)) + ((frame[9].f) * (frame[9].f))) + ((frame[10].f) * (frame[10].f))) + ((frame[11].f) * (frame[11].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector4_dst2_com_badlogic_gdx_math_Vector4_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dst2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(329);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(330);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(331);
	frame[4].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(332);
	frame[5].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w));
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return (((((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f))) + ((frame[4].f) * (frame[4].f))) + ((frame[5].f) * (frame[5].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector4_dst2_float_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dst2", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(343);
	frame[5].f = ((frame[1].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(344);
	frame[6].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(345);
	frame[7].f = ((frame[3].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(346);
	frame[8].f = ((frame[4].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w));
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return (((((frame[5].f) * (frame[5].f)) + ((frame[6].f) * (frame[6].f))) + ((frame[7].f) * (frame[7].f))) + ((frame[8].f) * (frame[8].f)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:nor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_len2_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(353);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[1].f))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4])(ctx, sp[0].o, (temp0 / (jfloat(temp1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector4_dot_float_float_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dot", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (((((frame[0].f) * (frame[4].f)) + ((frame[1].f) * (frame[5].f))) + ((frame[2].f) * (frame[6].f))) + ((frame[3].f) * (frame[7].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return ((((((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y))) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z))) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector4_dot_float_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dot", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return ((((((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f))) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f))) + (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) * (frame[4].f)));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isUnit_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isUnit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(379);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isUnit_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isUnit_float_R_boolean])(ctx, (frame[0].o), (jfloat(1.000000e-09f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isUnit_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isUnit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(384);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_len2_R_float])(ctx, (frame[0].o));
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

jbool M_com_badlogic_gdx_math_Vector4_isZero_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(389);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w), (jfloat(0)), -1)) != 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector4_isZero_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isZero", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(394);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_len2_R_float])(ctx, (frame[0].o));
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

jbool M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isOnLine", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(403);
	frame[3].i = (jint(0));
	LINE_NUMBER(404);
	frame[4].f = (jfloat(0));
	frame[5].f = (jfloat(0));
	frame[6].f = (jfloat(0));
	frame[7].f = (jfloat(0));
	LINE_NUMBER(406);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x), (frame[2].f));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(407);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x), (frame[2].f));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(411);
	frame[4].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x) / ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(412);
	frame[3].i = ((frame[3].i) | (jint(1)));
	}
label_8:;
	{
	LINE_NUMBER(414);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(415);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(419);
	frame[5].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y) / ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(420);
	frame[3].i = ((frame[3].i) | (jint(2)));
	}
label_13:;
	{
	LINE_NUMBER(422);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z), (frame[2].f));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(423);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].f));
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(427);
	frame[6].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z) / ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(428);
	frame[3].i = ((frame[3].i) | (jint(4)));
	}
label_18:;
	{
	LINE_NUMBER(430);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w), (frame[2].f));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(431);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w), (frame[2].f));
	if (temp0 != 0) goto label_23;
	}
	{
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(435);
	frame[7].f = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w) / ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w));
	LINE_NUMBER(436);
	frame[3].i = ((frame[3].i) | (8));
	}
label_23:;
	{
	LINE_NUMBER(439);
	switch((frame[3].i)) {
		case 0: goto label_26;
		case 1: goto label_26;
		case 2: goto label_26;
		case 3: goto label_27;
		case 4: goto label_26;
		case 5: goto label_28;
		case 6: goto label_29;
		case 7: goto label_30;
		case 8: goto label_26;
		case 9: goto label_31;
		case 10: goto label_32;
		case 11: goto label_33;
		case 12: goto label_34;
		case 13: goto label_35;
		case 14: goto label_36;
		default: goto label_37;
	}
	}
label_26:;
	{
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return (jint(1));
	}
label_27:;
	{
	LINE_NUMBER(447);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[5].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}
label_28:;
	{
	LINE_NUMBER(449);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[6].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}
label_31:;
	{
	LINE_NUMBER(451);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[7].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}
label_29:;
	{
	LINE_NUMBER(453);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[5].f), (frame[6].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}
label_32:;
	{
	LINE_NUMBER(455);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[5].f), (frame[7].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}
label_34:;
	{
	LINE_NUMBER(457);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[6].f), (frame[7].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}
label_30:;
	{
	LINE_NUMBER(459);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[5].f), (frame[2].f));
	if (temp0 == 0) goto label_38;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[6].f), (frame[2].f));
	if (temp0 == 0) goto label_38;
	}
	INST_ICONST(1);
	goto label_39;
label_38:;
	INST_ICONST(0);
label_39:;
	popStackFrame(ctx);
	INST_IRETURN();
label_33:;
	{
	LINE_NUMBER(461);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[5].f), (frame[2].f));
	if (temp0 == 0) goto label_40;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[7].f), (frame[2].f));
	if (temp0 == 0) goto label_40;
	}
	INST_ICONST(1);
	goto label_41;
label_40:;
	INST_ICONST(0);
label_41:;
	popStackFrame(ctx);
	INST_IRETURN();
label_35:;
	{
	LINE_NUMBER(463);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[6].f), (frame[2].f));
	if (temp0 == 0) goto label_42;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[7].f), (frame[2].f));
	if (temp0 == 0) goto label_42;
	}
	INST_ICONST(1);
	goto label_43;
label_42:;
	INST_ICONST(0);
label_43:;
	popStackFrame(ctx);
	INST_IRETURN();
label_36:;
	{
	LINE_NUMBER(465);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[5].f), (frame[6].f), (frame[2].f));
	if (temp0 == 0) goto label_44;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[5].f), (frame[7].f), (frame[2].f));
	if (temp0 == 0) goto label_44;
	}
	INST_ICONST(1);
	goto label_45;
label_44:;
	INST_ICONST(0);
label_45:;
	popStackFrame(ctx);
	INST_IRETURN();
label_37:;
	{
	LINE_NUMBER(467);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[5].f), (frame[2].f));
	if (temp0 == 0) goto label_46;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[6].f), (frame[2].f));
	if (temp0 == 0) goto label_46;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[4].f), (frame[7].f), (frame[2].f));
	if (temp0 == 0) goto label_46;
	}
	INST_ICONST(1);
	goto label_47;
label_46:;
	INST_ICONST(0);
label_47:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isOnLine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(474);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(1.000000e-06f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isCollinear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(481);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isCollinear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(488);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isCollinearOpposite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(495);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isCollinearOpposite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(502);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isPerpendicular", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(507);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float])(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isPerpendicular", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(512);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float])(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, temp0, (frame[2].f));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector4_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:hasSameDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(517);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float])(ctx, (frame[0].o), (frame[1].o));
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

jbool M_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector4_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:hasOppositeDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(522);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float])(ctx, (frame[0].o), (frame[1].o));
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

jobject M_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:lerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(527);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_x) + ((frame[2].f) * (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x))));
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_y) + ((frame[2].f) * (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y))));
	LINE_NUMBER(529);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_z) + ((frame[2].f) * (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z))));
	LINE_NUMBER(530);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_w = (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK(sp[0].o))->F_w) + ((frame[2].f) * (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w))));
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_interpolate_com_badlogic_gdx_math_Vector4_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:interpolate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(536);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Interpolation_apply_float_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_R_float])(ctx, (frame[3].o), (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(544);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:fromString", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(551);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(552);
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), ((frame[2].i) + (jint(1))));
	frame[3].i = temp1;
	LINE_NUMBER(553);
	jint temp2 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), ((frame[3].i) + (jint(1))));
	frame[4].i = temp2;
	LINE_NUMBER(554);
	if ((frame[2].i) == (jint(-1))) goto label_8;
	}
	{
	if ((frame[3].i) == (jint(-1))) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (40)) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (41)) goto label_8;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)), (frame[2].i));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[5].f = temp0;
	LINE_NUMBER(557);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))), (frame[3].i));
	jfloat temp1 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[6].f = temp1;
	LINE_NUMBER(558);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))), (frame[4].i));
	jfloat temp2 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[7].f = temp2;
	LINE_NUMBER(559);
	sp[0].o = frame[1].o;
	jint temp3 = (frame[4].i) + (jint(1));
	jint temp4 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp3, (temp4 - (jint(1))));
	jfloat temp5 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[8].f = temp5;
	LINE_NUMBER(560);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(561);
	INST_ASTORE(5);
label_8:;
	{
	LINE_NUMBER(565);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed Vector4: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_limit_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:limit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((frame[1].f) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:limit2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(575);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_len2_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(576);
	if ((floatCompare((frame[2].f), (frame[1].f), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(577);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[1].f) / (frame[2].f)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4])(ctx, sp[0].o, (jfloat(temp0)));
	}
label_2:;
	{
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_setLength_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:setLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), ((frame[1].f) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:setLength2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(589);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_len2_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(590);
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
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4])(ctx, sp[0].o, (jfloat(temp0)));
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_clamp_float_float_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:clamp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(595);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_len2_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(596);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(597);
	frame[4].f = ((frame[2].f) * (frame[2].f));
	LINE_NUMBER(598);
	if ((floatCompare((frame[3].f), (frame[4].f), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[4].f) / (frame[3].f)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(599);
	frame[5].f = ((frame[1].f) * (frame[1].f));
	LINE_NUMBER(600);
	if ((floatCompare((frame[3].f), (frame[5].f), 1)) >= 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[5].f) / (frame[3].f)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_Vector4_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(606);
	frame[1].i = (31);
	LINE_NUMBER(607);
	frame[2].i = (jint(1));
	LINE_NUMBER(608);
	jint temp0 = (31) * (frame[2].i);
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(609);
	jint temp2 = (31) * (frame[2].i);
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y));
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(610);
	jint temp4 = (31) * (frame[2].i);
	jint temp5 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z));
	frame[2].i = (temp4 + temp5);
	LINE_NUMBER(611);
	jint temp6 = (31) * (frame[2].i);
	jint temp7 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w));
	frame[2].i = (temp6 + temp7);
	LINE_NUMBER(612);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(617);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(618);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(620);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o)));
	LINE_NUMBER(621);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_x));
	if (temp0 == temp1) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(622);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp0 == temp1) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(623);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_z));
	if (temp0 == temp1) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(624);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_w));
	if (temp0 == temp1) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:epsilonEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(630);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(631);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(632);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(633);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(634);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[1].o)))->F_w) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(635);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_epsilonEquals_float_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:epsilonEquals", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(646);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x)));
	if ((floatCompare(temp0, (frame[5].f), -1)) <= 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(647);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y)));
	if ((floatCompare(temp0, (frame[5].f), -1)) <= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(648);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[3].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z)));
	if ((floatCompare(temp0, (frame[5].f), -1)) <= 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(649);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[4].f) - ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w)));
	if ((floatCompare(temp0, (frame[5].f), -1)) <= 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(650);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:epsilonEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(658);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(1.000000e-06f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_epsilonEquals_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:epsilonEquals", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(669);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_epsilonEquals_float_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_epsilonEquals_float_float_float_float_float_R_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (jfloat(1.000000e-06f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_setZero_R_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:setZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(674);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(675);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(676);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_z = (jfloat(0));
	LINE_NUMBER(677);
	((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[0].o)))->F_w = (jfloat(0));
	LINE_NUMBER(678);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_setZero_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:setZero", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_setZero_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_setZero_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:mulAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[2].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:mulAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:epsilonEquals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:hasOppositeDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:hasSameDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isPerpendicular", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isPerpendicular", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isCollinearOpposite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isCollinearOpposite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isCollinear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isCollinear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isOnLine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:isOnLine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_setToRandomDirection_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:setToRandomDirection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_setToRandomDirection_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_setToRandomDirection_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:interpolate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_interpolate_com_badlogic_gdx_math_Vector4_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_interpolate_com_badlogic_gdx_math_Vector4_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))), (frame[2].f), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:lerp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector4_dst2_com_badlogic_gdx_math_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dst2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_dst2_com_badlogic_gdx_math_Vector4_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_dst2_com_badlogic_gdx_math_Vector4_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector4_dst_com_badlogic_gdx_math_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_dst_com_badlogic_gdx_math_Vector4_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_dst_com_badlogic_gdx_math_Vector4_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:scl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_scl_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_scl_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:scl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:dot", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_add_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_add_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:nor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:sub", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_sub_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_sub_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector4, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_clamp_float_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:clamp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_clamp_float_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_clamp_float_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:setLength2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_setLength_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:setLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_setLength_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_setLength_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:limit2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_limit_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:limit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_limit_float_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_limit_float_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector4_cpy_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:cpy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector4_cpy_R_com_badlogic_gdx_math_Vector4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector4_cpy_R_com_badlogic_gdx_math_Vector4])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_Vector4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_Vector4_serialVersionUID = jlong(-5394070284130414492ll);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector4:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector4(ctx);
	{
	LINE_NUMBER(40);
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector4);
	init_com_badlogic_gdx_math_Vector4_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	SF_com_badlogic_gdx_math_Vector4_X = sp[0].o;
	LINE_NUMBER(41);
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector4);
	init_com_badlogic_gdx_math_Vector4_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(1)), (jfloat(0)), (jfloat(0)));
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	SF_com_badlogic_gdx_math_Vector4_Y = sp[0].o;
	LINE_NUMBER(42);
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector4);
	init_com_badlogic_gdx_math_Vector4_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(1)), (jfloat(0)));
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	SF_com_badlogic_gdx_math_Vector4_Z = sp[0].o;
	LINE_NUMBER(43);
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector4);
	init_com_badlogic_gdx_math_Vector4_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	SF_com_badlogic_gdx_math_Vector4_W = sp[0].o;
	LINE_NUMBER(44);
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector4);
	init_com_badlogic_gdx_math_Vector4_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	SF_com_badlogic_gdx_math_Vector4_Zero = sp[0].o;
	LINE_NUMBER(45);
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector4);
	init_com_badlogic_gdx_math_Vector4_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	clinit_com_badlogic_gdx_math_Vector4(ctx);
	SF_com_badlogic_gdx_math_Vector4_One = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Vector4[] {
	(void *) M_com_badlogic_gdx_math_Vector4_hashCode_R_int,
	(void *) M_com_badlogic_gdx_math_Vector4_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_Vector4_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_Vector4_cpy_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_len_R_float,
	(void *) M_com_badlogic_gdx_math_Vector4_len2_R_float,
	(void *) M_com_badlogic_gdx_math_Vector4_limit_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_setLength_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_clamp_float_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector_R_float,
	(void *) M_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_dst_com_badlogic_gdx_math_Vector_R_float,
	(void *) M_com_badlogic_gdx_math_Vector4_dst2_com_badlogic_gdx_math_Vector_R_float,
	(void *) M_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_setToRandomDirection_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_isUnit_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isUnit_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isZero_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isZero_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_setZero_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_set_Array1_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector2_float_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_setToRandomDirection_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_cpy_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_add_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_add_float_float_float_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_add_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_sub_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_sub_float_float_float_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_sub_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_scl_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_scl_float_float_float_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_idt_com_badlogic_gdx_math_Vector4_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_dst_com_badlogic_gdx_math_Vector4_R_float,
	(void *) M_com_badlogic_gdx_math_Vector4_dst_float_float_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Vector4_dst2_com_badlogic_gdx_math_Vector4_R_float,
	(void *) M_com_badlogic_gdx_math_Vector4_dst2_float_float_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float,
	(void *) M_com_badlogic_gdx_math_Vector4_dot_float_float_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector4_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector4_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_interpolate_com_badlogic_gdx_math_Vector4_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_limit_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_setLength_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_clamp_float_float_R_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_epsilonEquals_float_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_epsilonEquals_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector4_setZero_R_com_badlogic_gdx_math_Vector4,
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
	{ "set", "(FFFF)Lcom/badlogic/gdx/math/Vector4;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector4;)Lcom/badlogic/gdx/math/Vector4;" },
	{ "set", "([F)Lcom/badlogic/gdx/math/Vector4;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector2;FF)Lcom/badlogic/gdx/math/Vector4;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector4;" },
	{ "setToRandomDirection", "()Lcom/badlogic/gdx/math/Vector4;" },
	{ "cpy", "()Lcom/badlogic/gdx/math/Vector4;" },
	{ "add", "(Lcom/badlogic/gdx/math/Vector4;)Lcom/badlogic/gdx/math/Vector4;" },
	{ "add", "(FFFF)Lcom/badlogic/gdx/math/Vector4;" },
	{ "add", "(F)Lcom/badlogic/gdx/math/Vector4;" },
	{ "sub", "(Lcom/badlogic/gdx/math/Vector4;)Lcom/badlogic/gdx/math/Vector4;" },
	{ "sub", "(FFFF)Lcom/badlogic/gdx/math/Vector4;" },
	{ "sub", "(F)Lcom/badlogic/gdx/math/Vector4;" },
	{ "scl", "(F)Lcom/badlogic/gdx/math/Vector4;" },
	{ "scl", "(Lcom/badlogic/gdx/math/Vector4;)Lcom/badlogic/gdx/math/Vector4;" },
	{ "scl", "(FFFF)Lcom/badlogic/gdx/math/Vector4;" },
	{ "mulAdd", "(Lcom/badlogic/gdx/math/Vector4;F)Lcom/badlogic/gdx/math/Vector4;" },
	{ "mulAdd", "(Lcom/badlogic/gdx/math/Vector4;Lcom/badlogic/gdx/math/Vector4;)Lcom/badlogic/gdx/math/Vector4;" },
	{ "idt", "(Lcom/badlogic/gdx/math/Vector4;)Z" },
	{ "dst", "(Lcom/badlogic/gdx/math/Vector4;)F" },
	{ "dst", "(FFFF)F" },
	{ "dst2", "(Lcom/badlogic/gdx/math/Vector4;)F" },
	{ "dst2", "(FFFF)F" },
	{ "nor", "()Lcom/badlogic/gdx/math/Vector4;" },
	{ "dot", "(Lcom/badlogic/gdx/math/Vector4;)F" },
	{ "dot", "(FFFF)F" },
	{ "isOnLine", "(Lcom/badlogic/gdx/math/Vector4;F)Z" },
	{ "isOnLine", "(Lcom/badlogic/gdx/math/Vector4;)Z" },
	{ "isCollinear", "(Lcom/badlogic/gdx/math/Vector4;F)Z" },
	{ "isCollinear", "(Lcom/badlogic/gdx/math/Vector4;)Z" },
	{ "isCollinearOpposite", "(Lcom/badlogic/gdx/math/Vector4;F)Z" },
	{ "isCollinearOpposite", "(Lcom/badlogic/gdx/math/Vector4;)Z" },
	{ "isPerpendicular", "(Lcom/badlogic/gdx/math/Vector4;)Z" },
	{ "isPerpendicular", "(Lcom/badlogic/gdx/math/Vector4;F)Z" },
	{ "hasSameDirection", "(Lcom/badlogic/gdx/math/Vector4;)Z" },
	{ "hasOppositeDirection", "(Lcom/badlogic/gdx/math/Vector4;)Z" },
	{ "lerp", "(Lcom/badlogic/gdx/math/Vector4;F)Lcom/badlogic/gdx/math/Vector4;" },
	{ "interpolate", "(Lcom/badlogic/gdx/math/Vector4;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector4;" },
	{ "fromString", "(Ljava/lang/String;)Lcom/badlogic/gdx/math/Vector4;" },
	{ "limit", "(F)Lcom/badlogic/gdx/math/Vector4;" },
	{ "limit2", "(F)Lcom/badlogic/gdx/math/Vector4;" },
	{ "setLength", "(F)Lcom/badlogic/gdx/math/Vector4;" },
	{ "setLength2", "(F)Lcom/badlogic/gdx/math/Vector4;" },
	{ "clamp", "(FF)Lcom/badlogic/gdx/math/Vector4;" },
	{ "epsilonEquals", "(Lcom/badlogic/gdx/math/Vector4;F)Z" },
	{ "epsilonEquals", "(FFFFF)Z" },
	{ "epsilonEquals", "(Lcom/badlogic/gdx/math/Vector4;)Z" },
	{ "epsilonEquals", "(FFFF)Z" },
	{ "setZero", "()Lcom/badlogic/gdx/math/Vector4;" },
};

static jclass interfaces[] { &class_java_io_Serializable, &class_com_badlogic_gdx_math_Vector, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_Vector4_serialVersionUID, "J", 26 },
	{ "x", &class_float, offsetof(com_badlogic_gdx_math_Vector4, F_x), "F", 1 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_math_Vector4, F_y), "F", 1 },
	{ "z", &class_float, offsetof(com_badlogic_gdx_math_Vector4, F_z), "F", 1 },
	{ "w", &class_float, offsetof(com_badlogic_gdx_math_Vector4, F_w), "F", 1 },
	{ "X", &class_com_badlogic_gdx_math_Vector4, (intptr_t) &SF_com_badlogic_gdx_math_Vector4_X, "Lcom/badlogic/gdx/math/Vector4;", 25 },
	{ "Y", &class_com_badlogic_gdx_math_Vector4, (intptr_t) &SF_com_badlogic_gdx_math_Vector4_Y, "Lcom/badlogic/gdx/math/Vector4;", 25 },
	{ "Z", &class_com_badlogic_gdx_math_Vector4, (intptr_t) &SF_com_badlogic_gdx_math_Vector4_Z, "Lcom/badlogic/gdx/math/Vector4;", 25 },
	{ "W", &class_com_badlogic_gdx_math_Vector4, (intptr_t) &SF_com_badlogic_gdx_math_Vector4_W, "Lcom/badlogic/gdx/math/Vector4;", 25 },
	{ "Zero", &class_com_badlogic_gdx_math_Vector4, (intptr_t) &SF_com_badlogic_gdx_math_Vector4_Zero, "Lcom/badlogic/gdx/math/Vector4;", 25 },
	{ "One", &class_com_badlogic_gdx_math_Vector4, (intptr_t) &SF_com_badlogic_gdx_math_Vector4_One, "Lcom/badlogic/gdx/math/Vector4;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector4, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector4_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector4, 0, "(Lcom/badlogic/gdx/math/Vector4;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector4_Array1_float, 0, "([F)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector2_float_float, 0, "(Lcom/badlogic/gdx/math/Vector2;FF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector3_float, 0, "(Lcom/badlogic/gdx/math/Vector3;F)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_set_float_float_float_float_R_com_badlogic_gdx_math_Vector4, "(FFFF)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4, "(Lcom/badlogic/gdx/math/Vector4;)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector4_set_Array1_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_set_Array1_float_R_com_badlogic_gdx_math_Vector4, "([F)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector2_float_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector2_float_float_R_com_badlogic_gdx_math_Vector4, "(Lcom/badlogic/gdx/math/Vector2;FF)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector4, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "setToRandomDirection", (intptr_t) M_com_badlogic_gdx_math_Vector4_setToRandomDirection_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_setToRandomDirection_R_com_badlogic_gdx_math_Vector4, "()Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "cpy", (intptr_t) M_com_badlogic_gdx_math_Vector4_cpy_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_cpy_R_com_badlogic_gdx_math_Vector4, "()Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Vector4_add_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_add_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4, "(Lcom/badlogic/gdx/math/Vector4;)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Vector4_add_float_float_float_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_add_float_float_float_float_R_com_badlogic_gdx_math_Vector4, "(FFFF)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Vector4_add_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_add_float_R_com_badlogic_gdx_math_Vector4, "(F)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_math_Vector4_sub_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_sub_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4, "(Lcom/badlogic/gdx/math/Vector4;)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_math_Vector4_sub_float_float_float_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_sub_float_float_float_float_R_com_badlogic_gdx_math_Vector4, "(FFFF)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_math_Vector4_sub_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_sub_float_R_com_badlogic_gdx_math_Vector4, "(F)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector4, "(F)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector4_scl_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_scl_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4, "(Lcom/badlogic/gdx/math/Vector4;)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector4_scl_float_float_float_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_scl_float_float_float_float_R_com_badlogic_gdx_math_Vector4, "(FFFF)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4, "(Lcom/badlogic/gdx/math/Vector4;F)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector4_com_badlogic_gdx_math_Vector4_R_com_badlogic_gdx_math_Vector4, "(Lcom/badlogic/gdx/math/Vector4;Lcom/badlogic/gdx/math/Vector4;)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "len", (intptr_t) SM_com_badlogic_gdx_math_Vector4_len_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "len", (intptr_t) M_com_badlogic_gdx_math_Vector4_len_R_float, VTABLE_com_badlogic_gdx_math_Vector4_len_R_float, "()F", 1 },
	{ "len2", (intptr_t) SM_com_badlogic_gdx_math_Vector4_len2_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "len2", (intptr_t) M_com_badlogic_gdx_math_Vector4_len2_R_float, VTABLE_com_badlogic_gdx_math_Vector4_len2_R_float, "()F", 1 },
	{ "idt", (intptr_t) M_com_badlogic_gdx_math_Vector4_idt_com_badlogic_gdx_math_Vector4_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_idt_com_badlogic_gdx_math_Vector4_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;)Z", 1 },
	{ "dst", (intptr_t) SM_com_badlogic_gdx_math_Vector4_dst_float_float_float_float_float_float_float_float_R_float, 0, "(FFFFFFFF)F", 9 },
	{ "dst", (intptr_t) M_com_badlogic_gdx_math_Vector4_dst_com_badlogic_gdx_math_Vector4_R_float, VTABLE_com_badlogic_gdx_math_Vector4_dst_com_badlogic_gdx_math_Vector4_R_float, "(Lcom/badlogic/gdx/math/Vector4;)F", 1 },
	{ "dst", (intptr_t) M_com_badlogic_gdx_math_Vector4_dst_float_float_float_float_R_float, VTABLE_com_badlogic_gdx_math_Vector4_dst_float_float_float_float_R_float, "(FFFF)F", 1 },
	{ "dst2", (intptr_t) SM_com_badlogic_gdx_math_Vector4_dst2_float_float_float_float_float_float_float_float_R_float, 0, "(FFFFFFFF)F", 9 },
	{ "dst2", (intptr_t) M_com_badlogic_gdx_math_Vector4_dst2_com_badlogic_gdx_math_Vector4_R_float, VTABLE_com_badlogic_gdx_math_Vector4_dst2_com_badlogic_gdx_math_Vector4_R_float, "(Lcom/badlogic/gdx/math/Vector4;)F", 1 },
	{ "dst2", (intptr_t) M_com_badlogic_gdx_math_Vector4_dst2_float_float_float_float_R_float, VTABLE_com_badlogic_gdx_math_Vector4_dst2_float_float_float_float_R_float, "(FFFF)F", 1 },
	{ "nor", (intptr_t) M_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector4, "()Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "dot", (intptr_t) SM_com_badlogic_gdx_math_Vector4_dot_float_float_float_float_float_float_float_float_R_float, 0, "(FFFFFFFF)F", 9 },
	{ "dot", (intptr_t) M_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float, VTABLE_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector4_R_float, "(Lcom/badlogic/gdx/math/Vector4;)F", 1 },
	{ "dot", (intptr_t) M_com_badlogic_gdx_math_Vector4_dot_float_float_float_float_R_float, VTABLE_com_badlogic_gdx_math_Vector4_dot_float_float_float_float_R_float, "(FFFF)F", 1 },
	{ "isUnit", (intptr_t) M_com_badlogic_gdx_math_Vector4_isUnit_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isUnit_R_boolean, "()Z", 1 },
	{ "isUnit", (intptr_t) M_com_badlogic_gdx_math_Vector4_isUnit_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isUnit_float_R_boolean, "(F)Z", 1 },
	{ "isZero", (intptr_t) M_com_badlogic_gdx_math_Vector4_isZero_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isZero_R_boolean, "()Z", 1 },
	{ "isZero", (intptr_t) M_com_badlogic_gdx_math_Vector4_isZero_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isZero_float_R_boolean, "(F)Z", 1 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;F)Z", 1 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector4_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;)Z", 1 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;F)Z", 1 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector4_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;)Z", 1 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;F)Z", 1 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector4_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;)Z", 1 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;)Z", 1 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector4_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;F)Z", 1 },
	{ "hasSameDirection", (intptr_t) M_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector4_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector4_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;)Z", 1 },
	{ "hasOppositeDirection", (intptr_t) M_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector4_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector4_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;)Z", 1 },
	{ "lerp", (intptr_t) M_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector4_float_R_com_badlogic_gdx_math_Vector4, "(Lcom/badlogic/gdx/math/Vector4;F)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "interpolate", (intptr_t) M_com_badlogic_gdx_math_Vector4_interpolate_com_badlogic_gdx_math_Vector4_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_interpolate_com_badlogic_gdx_math_Vector4_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector4, "(Lcom/badlogic/gdx/math/Vector4;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_Vector4_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_Vector4_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "fromString", (intptr_t) M_com_badlogic_gdx_math_Vector4_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector4, "(Ljava/lang/String;)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "limit", (intptr_t) M_com_badlogic_gdx_math_Vector4_limit_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_limit_float_R_com_badlogic_gdx_math_Vector4, "(F)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "limit2", (intptr_t) M_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector4, "(F)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "setLength", (intptr_t) M_com_badlogic_gdx_math_Vector4_setLength_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_setLength_float_R_com_badlogic_gdx_math_Vector4, "(F)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "setLength2", (intptr_t) M_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector4, "(F)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "clamp", (intptr_t) M_com_badlogic_gdx_math_Vector4_clamp_float_float_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_clamp_float_float_R_com_badlogic_gdx_math_Vector4, "(FF)Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_math_Vector4_hashCode_R_int, VTABLE_com_badlogic_gdx_math_Vector4_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_math_Vector4_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;F)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector4_epsilonEquals_float_float_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_epsilonEquals_float_float_float_float_float_R_boolean, "(FFFFF)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector4_R_boolean, "(Lcom/badlogic/gdx/math/Vector4;)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector4_epsilonEquals_float_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_epsilonEquals_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "setZero", (intptr_t) M_com_badlogic_gdx_math_Vector4_setZero_R_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_math_Vector4_setZero_R_com_badlogic_gdx_math_Vector4, "()Lcom/badlogic/gdx/math/Vector4;", 1 },
	{ "setZero", (intptr_t) M_com_badlogic_gdx_math_Vector4_setZero_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_setZero_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "hasOppositeDirection", (intptr_t) M_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "hasSameDirection", (intptr_t) M_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector4_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "setToRandomDirection", (intptr_t) M_com_badlogic_gdx_math_Vector4_setToRandomDirection_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_setToRandomDirection_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "interpolate", (intptr_t) M_com_badlogic_gdx_math_Vector4_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "lerp", (intptr_t) M_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "dst2", (intptr_t) M_com_badlogic_gdx_math_Vector4_dst2_com_badlogic_gdx_math_Vector_R_float, VTABLE_com_badlogic_gdx_math_Vector4_dst2_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 4161 },
	{ "dst", (intptr_t) M_com_badlogic_gdx_math_Vector4_dst_com_badlogic_gdx_math_Vector_R_float, VTABLE_com_badlogic_gdx_math_Vector4_dst_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 4161 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector4_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_scl_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "dot", (intptr_t) M_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector_R_float, VTABLE_com_badlogic_gdx_math_Vector4_dot_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 4161 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Vector4_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "nor", (intptr_t) M_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_nor_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_math_Vector4_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "clamp", (intptr_t) M_com_badlogic_gdx_math_Vector4_clamp_float_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_clamp_float_float_R_com_badlogic_gdx_math_Vector, "(FF)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "setLength2", (intptr_t) M_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_setLength2_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "setLength", (intptr_t) M_com_badlogic_gdx_math_Vector4_setLength_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_setLength_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "limit2", (intptr_t) M_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_limit2_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "limit", (intptr_t) M_com_badlogic_gdx_math_Vector4_limit_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_limit_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "cpy", (intptr_t) M_com_badlogic_gdx_math_Vector4_cpy_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector4_cpy_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_Vector4, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_Vector4{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Vector4",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Vector4),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Vector4,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Vector4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Vector4,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 102,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 98,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Vector4 = registerClass(&class_com_badlogic_gdx_math_Vector4);

}

