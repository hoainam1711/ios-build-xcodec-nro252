#include "com/badlogic/gdx/math/Vector3.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/math/Vector.h"
#include "com/badlogic/gdx/math/Matrix3.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {

jlong SF_com_badlogic_gdx_math_Vector3_serialVersionUID;
jobject SF_com_badlogic_gdx_math_Vector3_X;
jobject SF_com_badlogic_gdx_math_Vector3_Y;
jobject SF_com_badlogic_gdx_math_Vector3_Z;
jobject SF_com_badlogic_gdx_math_Vector3_Zero;
jobject SF_com_badlogic_gdx_math_Vector3_One;
jobject SF_com_badlogic_gdx_math_Vector3_tmpMat;

void mark_com_badlogic_gdx_math_Vector3(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_Vector3_X)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector3_X)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector3_X, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector3_Y)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector3_Y)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector3_Y, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector3_Z)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector3_Z)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector3_Z, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector3_Zero)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector3_Zero)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector3_Zero, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector3_One)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector3_One)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector3_One, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Vector3_tmpMat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Vector3_tmpMat)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Vector3_tmpMat, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_Vector3 *) object;
}

void init_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector3(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Vector3_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector3(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(52);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Vector3_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector2_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(73);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(84);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(85);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(86);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z = (frame[3].f);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_set_Array1_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_setFromSpherical_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:setFromSpherical", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(117);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, (frame[2].f));
	frame[3].f = temp0;
	LINE_NUMBER(118);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, (frame[2].f));
	frame[4].f = temp1;
	LINE_NUMBER(120);
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, (frame[1].f));
	frame[5].f = temp2;
	LINE_NUMBER(121);
	jfloat temp3 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, (frame[1].f));
	frame[6].f = temp3;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((frame[5].f) * (frame[4].f)), ((frame[6].f) * (frame[4].f)), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_setToRandomDirection_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:setToRandomDirection", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_R_float(ctx);
	frame[1].f = temp0;
	LINE_NUMBER(129);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_R_float(ctx);
	frame[2].f = temp1;
	LINE_NUMBER(131);
	frame[3].f = ((jfloat(6.2831855f)) * (frame[1].f));
	LINE_NUMBER(132);
	jdouble temp2 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((((jfloat(2)) * (frame[2].f)) - (jfloat(1))))));
	frame[4].f = (jfloat(temp2));
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_setFromSpherical_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_setFromSpherical_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_cpy_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_add_float_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) + (frame[3].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_add_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) + (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) + (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:sub", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:sub", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) - (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) - (frame[2].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) - (frame[3].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_sub_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:sub", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) - (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) - (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) - (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:scl", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:scl", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_scl_float_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:scl", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:mulAdd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[2].f)));
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[2].f)));
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) * (frame[2].f)));
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:mulAdd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x)));
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y)));
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z)));
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector3_len_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:len", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector3(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(224);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))) + ((frame[2].f) * (frame[2].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector3_len_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:len", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector3_len2_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:len2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector3(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return ((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))) + ((frame[2].f) * (frame[2].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector3_len2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:len2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z)));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_idt_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:idt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), -1)) != 0) goto label_1;
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

jfloat SM_com_badlogic_gdx_math_Vector3_dst_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dst", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector3(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(251);
	frame[6].f = ((frame[3].f) - (frame[0].f));
	LINE_NUMBER(252);
	frame[7].f = ((frame[4].f) - (frame[1].f));
	LINE_NUMBER(253);
	frame[8].f = ((frame[5].f) - (frame[2].f));
	LINE_NUMBER(254);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((frame[6].f) * (frame[6].f)) + ((frame[7].f) * (frame[7].f))) + ((frame[8].f) * (frame[8].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector3_dst_com_badlogic_gdx_math_Vector3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(259);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(260);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(261);
	frame[4].f = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(262);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f))) + ((frame[4].f) * (frame[4].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector3_dst_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dst", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(267);
	frame[4].f = ((frame[1].f) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(268);
	frame[5].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(269);
	frame[6].f = ((frame[3].f) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(270);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f))) + ((frame[6].f) * (frame[6].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector3_dst2_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dst2", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector3(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(275);
	frame[6].f = ((frame[3].f) - (frame[0].f));
	LINE_NUMBER(276);
	frame[7].f = ((frame[4].f) - (frame[1].f));
	LINE_NUMBER(277);
	frame[8].f = ((frame[5].f) - (frame[2].f));
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return ((((frame[6].f) * (frame[6].f)) + ((frame[7].f) * (frame[7].f))) + ((frame[8].f) * (frame[8].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dst2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(283);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(284);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(285);
	frame[4].f = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return ((((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f))) + ((frame[4].f) * (frame[4].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector3_dst2_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dst2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(295);
	frame[4].f = ((frame[1].f) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(296);
	frame[5].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(297);
	frame[6].f = ((frame[3].f) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return ((((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f))) + ((frame[6].f) * (frame[6].f)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:nor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_len2_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(304);
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
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[1].f))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (temp0 / (jfloat(temp1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Vector3_dot_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dot", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector3(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return ((((frame[0].f) * (frame[3].f)) + ((frame[1].f) * (frame[4].f))) + ((frame[2].f) * (frame[5].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector3_dot_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dot", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:crs", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y))), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z))), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_crs_float_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:crs", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[2].f))), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[1].f)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f))), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[2].f)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[1].f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_mul4x3_Array1_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:mul4x3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (9)))), ((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10)))), ((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:mul", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(357);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (12)))), ((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (13)))), ((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (10))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (14)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_traMul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:traMul", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))))), ((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7)))), ((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (10))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (11)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:mul", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(377);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))))), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_traMul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:traMul", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(387);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)))))), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6)))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:mul", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_transform_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_transform_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_prj_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:prj", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(405);
	frame[3].f = ((jfloat(1)) / ((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (11))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (15)))));
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (12)))) * (frame[3].f)), (((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (13)))) * (frame[3].f)), (((((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (10))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (14)))) * (frame[3].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_rot_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:rot", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8))))), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9))))), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (10))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_unrotate_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:unrotate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)))))), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (10))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_untransform_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:untransform", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (12))));
	LINE_NUMBER(441);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (12))));
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (12))));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)))))), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))), (((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9))))) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (10))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_rotate_float_float_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:rotate", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Vector3_tmpMat;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToRotation_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToRotation_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[1].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_rotateRad_float_float_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:rotateRad", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Vector3_tmpMat;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToRotationRad_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToRotationRad_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[1].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:rotate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(476);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Vector3_tmpMat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToRotation_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToRotation_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(477);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Vector3_tmpMat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_rotateRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:rotateRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(486);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Vector3_tmpMat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToRotationRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToRotationRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(487);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Vector3_tmpMat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_isUnit_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isUnit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(492);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isUnit_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isUnit_float_R_boolean])(ctx, (frame[0].o), (jfloat(1.000000e-09f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_isUnit_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isUnit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(497);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_len2_R_float])(ctx, (frame[0].o));
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

jbool M_com_badlogic_gdx_math_Vector3_isZero_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(502);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z), (jfloat(0)), -1)) != 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector3_isZero_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isZero", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(507);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_len2_R_float])(ctx, (frame[0].o));
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

jbool M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isOnLine", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(512);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_Vector3_len2_float_float_float_R_float(ctx, ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y))), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z))), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x))));
	if ((floatCompare(temp0, (frame[2].f), 1)) > 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isOnLine", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(517);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_Vector3_len2_float_float_float_R_float(ctx, ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y))), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z))), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x))));
	if ((floatCompare(temp0, (jfloat(1.000000e-06f)), 1)) > 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isCollinear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(523);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
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

jbool M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isCollinear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(528);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
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

jbool M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isCollinearOpposite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(533);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
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

jbool M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isCollinearOpposite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(538);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
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

jbool M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isPerpendicular", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(543);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isPerpendicular", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(548);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, temp0, (frame[2].f));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:hasSameDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(553);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[0].o), (frame[1].o));
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

jbool M_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:hasOppositeDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(558);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[0].o), (frame[1].o));
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

jobject M_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:lerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(563);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x) + ((frame[2].f) * (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x))));
	LINE_NUMBER(564);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y) + ((frame[2].f) * (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y))));
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z) + ((frame[2].f) * (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z))));
	LINE_NUMBER(566);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_interpolate_com_badlogic_gdx_math_Vector3_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:interpolate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(571);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Interpolation_apply_float_float_float_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_float_float_R_float])(ctx, (frame[3].o), (jfloat(0)), (jfloat(1)), (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_slerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:slerp", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(581);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[3].f = temp0;
	LINE_NUMBER(583);
	if ((doubleCompare((jdouble((frame[3].f))), (jdouble(0.9995)), -1)) > 0) goto label_2;
	}
	{
	if ((doubleCompare((jdouble((frame[3].f))), (jdouble(-0.9995)), 1)) >= 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(586);
	jdouble temp0 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((frame[3].f))));
	frame[4].f = (jfloat(temp0));
	LINE_NUMBER(588);
	frame[5].f = ((frame[4].f) * (frame[2].f));
	LINE_NUMBER(590);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[5].f))));
	frame[6].f = (jfloat(temp1));
	LINE_NUMBER(591);
	frame[7].f = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f)));
	LINE_NUMBER(592);
	frame[8].f = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f)));
	LINE_NUMBER(593);
	frame[9].f = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f)));
	LINE_NUMBER(594);
	frame[10].f = ((((frame[7].f) * (frame[7].f)) + ((frame[8].f) * (frame[8].f))) + ((frame[9].f) * (frame[9].f)));
	LINE_NUMBER(595);
	jfloat temp2 = frame[6].f;
	sp[0].f = temp2;
	sp += 1;
	if ((floatCompare((frame[10].f), (jfloat(1.000000e-04f)), 1)) >= 0) goto label_11;
	}
	INST_FCONST(1);
	goto label_12;
label_11:;
	{
	jfloat temp0 = jfloat(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[10].f))));
	jfloat temp2 = temp0 / (jfloat(temp1));
	sp[0].f = temp2;
	sp += 1;
	}
label_12:;
	{
	sp -= 2;
	frame[11].f = (sp[0].f * sp[1].f);
	LINE_NUMBER(597);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[5].f))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(temp0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((frame[7].f) * (frame[11].f)), ((frame[8].f) * (frame[11].f)), ((frame[9].f) * (frame[11].f)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(604);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:fromString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(611);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(612);
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), ((frame[2].i) + (jint(1))));
	frame[3].i = temp1;
	LINE_NUMBER(613);
	if ((frame[2].i) == (jint(-1))) goto label_7;
	}
	{
	if ((frame[3].i) == (jint(-1))) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (40)) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (41)) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)), (frame[2].i));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[4].f = temp0;
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))), (frame[3].i));
	jfloat temp1 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[5].f = temp1;
	LINE_NUMBER(617);
	sp[0].o = frame[1].o;
	jint temp2 = (frame[3].i) + (jint(1));
	jint temp3 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp2, (temp3 - (jint(1))));
	jfloat temp4 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[6].f = temp4;
	LINE_NUMBER(618);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[4].f), (frame[5].f), (frame[6].f));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(619);
	INST_ASTORE(4);
label_7:;
	{
	LINE_NUMBER(623);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed Vector3: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_limit_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:limit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((frame[1].f) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:limit2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(633);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_len2_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(634);
	if ((floatCompare((frame[2].f), (frame[1].f), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(635);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[1].f) / (frame[2].f)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(temp0)));
	}
label_2:;
	{
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_setLength_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:setLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), ((frame[1].f) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:setLength2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(647);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_len2_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(648);
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
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(temp0)));
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_clamp_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:clamp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(653);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_len2_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(654);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(655);
	frame[4].f = ((frame[2].f) * (frame[2].f));
	LINE_NUMBER(656);
	if ((floatCompare((frame[3].f), (frame[4].f), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[4].f) / (frame[3].f)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(657);
	frame[5].f = ((frame[1].f) * (frame[1].f));
	LINE_NUMBER(658);
	if ((floatCompare((frame[3].f), (frame[5].f), 1)) >= 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[5].f) / (frame[3].f)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_Vector3_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(664);
	frame[1].i = (31);
	LINE_NUMBER(665);
	frame[2].i = (jint(1));
	LINE_NUMBER(666);
	jint temp0 = (31) * (frame[2].i);
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(667);
	jint temp2 = (31) * (frame[2].i);
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y));
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(668);
	jint temp4 = (31) * (frame[2].i);
	jint temp5 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z));
	frame[2].i = (temp4 + temp5);
	LINE_NUMBER(669);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(674);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(675);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(677);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o)));
	LINE_NUMBER(678);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x));
	if (temp0 == temp1) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(679);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp0 == temp1) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(680);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z));
	if (temp0 == temp1) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:epsilonEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(686);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(687);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(688);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(689);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_epsilonEquals_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:epsilonEquals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(696);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x)));
	if ((floatCompare(temp0, (frame[4].f), -1)) <= 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(697);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y)));
	if ((floatCompare(temp0, (frame[4].f), -1)) <= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(698);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[3].f) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z)));
	if ((floatCompare(temp0, (frame[4].f), -1)) <= 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(699);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:epsilonEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(707);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(1.000000e-06f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_epsilonEquals_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:epsilonEquals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(717);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_epsilonEquals_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_epsilonEquals_float_float_float_float_R_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(1.000000e-06f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_setZero_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:setZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(722);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(723);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(724);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[0].o)))->F_z = (jfloat(0));
	LINE_NUMBER(725);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_setZero_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:setZero", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_setZero_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_setZero_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:mulAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[2].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:mulAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:epsilonEquals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:hasOppositeDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:hasSameDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isPerpendicular", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isPerpendicular", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isCollinearOpposite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isCollinearOpposite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isCollinear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isCollinear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isOnLine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:isOnLine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_setToRandomDirection_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:setToRandomDirection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_setToRandomDirection_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_setToRandomDirection_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:interpolate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_interpolate_com_badlogic_gdx_math_Vector3_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_interpolate_com_badlogic_gdx_math_Vector3_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))), (frame[2].f), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:lerp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dst2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector3_dst_com_badlogic_gdx_math_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dst_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dst_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:scl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:scl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:dot", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:nor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:sub", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_clamp_float_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:clamp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_clamp_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_clamp_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:setLength2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_setLength_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:setLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_setLength_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_setLength_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:limit2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_limit_float_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:limit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_limit_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_limit_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Vector3_cpy_R_com_badlogic_gdx_math_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:cpy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_cpy_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_cpy_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_Vector3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_Vector3_serialVersionUID = jlong(3840054589595372522ll);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Vector3:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Vector3(ctx);
	{
	LINE_NUMBER(36);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(0)), (jfloat(0)));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	SF_com_badlogic_gdx_math_Vector3_X = sp[0].o;
	LINE_NUMBER(37);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(1)), (jfloat(0)));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	SF_com_badlogic_gdx_math_Vector3_Y = sp[0].o;
	LINE_NUMBER(38);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(1)));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	SF_com_badlogic_gdx_math_Vector3_Z = sp[0].o;
	LINE_NUMBER(39);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	SF_com_badlogic_gdx_math_Vector3_Zero = sp[0].o;
	LINE_NUMBER(40);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	SF_com_badlogic_gdx_math_Vector3_One = sp[0].o;
	LINE_NUMBER(42);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	SF_com_badlogic_gdx_math_Vector3_tmpMat = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Vector3[] {
	(void *) M_com_badlogic_gdx_math_Vector3_hashCode_R_int,
	(void *) M_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_Vector3_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_Vector3_cpy_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_len_R_float,
	(void *) M_com_badlogic_gdx_math_Vector3_len2_R_float,
	(void *) M_com_badlogic_gdx_math_Vector3_limit_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_setLength_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_clamp_float_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector_R_float,
	(void *) M_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_dst_com_badlogic_gdx_math_Vector_R_float,
	(void *) M_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector_R_float,
	(void *) M_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_setToRandomDirection_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_isUnit_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isUnit_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isZero_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isZero_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_setZero_R_com_badlogic_gdx_math_Vector,
	(void *) M_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_set_Array1_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_setFromSpherical_float_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_setToRandomDirection_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_cpy_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_add_float_float_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_add_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_sub_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_scl_float_float_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_idt_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_dst_com_badlogic_gdx_math_Vector3_R_float,
	(void *) M_com_badlogic_gdx_math_Vector3_dst_float_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float,
	(void *) M_com_badlogic_gdx_math_Vector3_dst2_float_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float,
	(void *) M_com_badlogic_gdx_math_Vector3_dot_float_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_crs_float_float_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_mul4x3_Array1_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_traMul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_traMul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_prj_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_rot_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_unrotate_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_untransform_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_rotate_float_float_float_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_rotateRad_float_float_float_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_rotateRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_interpolate_com_badlogic_gdx_math_Vector3_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_slerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_limit_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_setLength_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_clamp_float_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_epsilonEquals_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_epsilonEquals_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Vector3_setZero_R_com_badlogic_gdx_math_Vector3,
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
	{ "set", "(FFF)Lcom/badlogic/gdx/math/Vector3;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "set", "([F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "setFromSpherical", "(FF)Lcom/badlogic/gdx/math/Vector3;" },
	{ "setToRandomDirection", "()Lcom/badlogic/gdx/math/Vector3;" },
	{ "cpy", "()Lcom/badlogic/gdx/math/Vector3;" },
	{ "add", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "add", "(FFF)Lcom/badlogic/gdx/math/Vector3;" },
	{ "add", "(F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "sub", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "sub", "(FFF)Lcom/badlogic/gdx/math/Vector3;" },
	{ "sub", "(F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "scl", "(F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "scl", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "scl", "(FFF)Lcom/badlogic/gdx/math/Vector3;" },
	{ "mulAdd", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "mulAdd", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "idt", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "dst", "(Lcom/badlogic/gdx/math/Vector3;)F" },
	{ "dst", "(FFF)F" },
	{ "dst2", "(Lcom/badlogic/gdx/math/Vector3;)F" },
	{ "dst2", "(FFF)F" },
	{ "nor", "()Lcom/badlogic/gdx/math/Vector3;" },
	{ "dot", "(Lcom/badlogic/gdx/math/Vector3;)F" },
	{ "dot", "(FFF)F" },
	{ "crs", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "crs", "(FFF)Lcom/badlogic/gdx/math/Vector3;" },
	{ "mul4x3", "([F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "mul", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "traMul", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "mul", "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "traMul", "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "mul", "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "prj", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "rot", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "unrotate", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "untransform", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "rotate", "(FFFF)Lcom/badlogic/gdx/math/Vector3;" },
	{ "rotateRad", "(FFFF)Lcom/badlogic/gdx/math/Vector3;" },
	{ "rotate", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "rotateRad", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "isOnLine", "(Lcom/badlogic/gdx/math/Vector3;F)Z" },
	{ "isOnLine", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "isCollinear", "(Lcom/badlogic/gdx/math/Vector3;F)Z" },
	{ "isCollinear", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "isCollinearOpposite", "(Lcom/badlogic/gdx/math/Vector3;F)Z" },
	{ "isCollinearOpposite", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "isPerpendicular", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "isPerpendicular", "(Lcom/badlogic/gdx/math/Vector3;F)Z" },
	{ "hasSameDirection", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "hasOppositeDirection", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "lerp", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "interpolate", "(Lcom/badlogic/gdx/math/Vector3;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "slerp", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "fromString", "(Ljava/lang/String;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "limit", "(F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "limit2", "(F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "setLength", "(F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "setLength2", "(F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "clamp", "(FF)Lcom/badlogic/gdx/math/Vector3;" },
	{ "epsilonEquals", "(Lcom/badlogic/gdx/math/Vector3;F)Z" },
	{ "epsilonEquals", "(FFFF)Z" },
	{ "epsilonEquals", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "epsilonEquals", "(FFF)Z" },
	{ "setZero", "()Lcom/badlogic/gdx/math/Vector3;" },
};

static jclass interfaces[] { &class_java_io_Serializable, &class_com_badlogic_gdx_math_Vector, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_Vector3_serialVersionUID, "J", 26 },
	{ "x", &class_float, offsetof(com_badlogic_gdx_math_Vector3, F_x), "F", 1 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_math_Vector3, F_y), "F", 1 },
	{ "z", &class_float, offsetof(com_badlogic_gdx_math_Vector3, F_z), "F", 1 },
	{ "X", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Vector3_X, "Lcom/badlogic/gdx/math/Vector3;", 25 },
	{ "Y", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Vector3_Y, "Lcom/badlogic/gdx/math/Vector3;", 25 },
	{ "Z", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Vector3_Z, "Lcom/badlogic/gdx/math/Vector3;", 25 },
	{ "Zero", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Vector3_Zero, "Lcom/badlogic/gdx/math/Vector3;", 25 },
	{ "One", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Vector3_One, "Lcom/badlogic/gdx/math/Vector3;", 25 },
	{ "tmpMat", &class_com_badlogic_gdx_math_Matrix4, (intptr_t) &SF_com_badlogic_gdx_math_Vector3_tmpMat, "Lcom/badlogic/gdx/math/Matrix4;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector3, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector3_float_float_float, 0, "(FFF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3, 0, "(Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector3_Array1_float, 0, "([F)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector2_float, 0, "(Lcom/badlogic/gdx/math/Vector2;F)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3, "(FFF)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector3_set_Array1_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_set_Array1_float_R_com_badlogic_gdx_math_Vector3, "([F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector2_float_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector2;F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "setFromSpherical", (intptr_t) M_com_badlogic_gdx_math_Vector3_setFromSpherical_float_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_setFromSpherical_float_float_R_com_badlogic_gdx_math_Vector3, "(FF)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "setToRandomDirection", (intptr_t) M_com_badlogic_gdx_math_Vector3_setToRandomDirection_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_setToRandomDirection_R_com_badlogic_gdx_math_Vector3, "()Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "cpy", (intptr_t) M_com_badlogic_gdx_math_Vector3_cpy_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_cpy_R_com_badlogic_gdx_math_Vector3, "()Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Vector3_add_float_float_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_add_float_float_float_R_com_badlogic_gdx_math_Vector3, "(FFF)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Vector3_add_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_add_float_R_com_badlogic_gdx_math_Vector3, "(F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3, "(FFF)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_math_Vector3_sub_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_sub_float_R_com_badlogic_gdx_math_Vector3, "(F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3, "(F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector3_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector3_scl_float_float_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_scl_float_float_float_R_com_badlogic_gdx_math_Vector3, "(FFF)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "len", (intptr_t) SM_com_badlogic_gdx_math_Vector3_len_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "len", (intptr_t) M_com_badlogic_gdx_math_Vector3_len_R_float, VTABLE_com_badlogic_gdx_math_Vector3_len_R_float, "()F", 1 },
	{ "len2", (intptr_t) SM_com_badlogic_gdx_math_Vector3_len2_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "len2", (intptr_t) M_com_badlogic_gdx_math_Vector3_len2_R_float, VTABLE_com_badlogic_gdx_math_Vector3_len2_R_float, "()F", 1 },
	{ "idt", (intptr_t) M_com_badlogic_gdx_math_Vector3_idt_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_idt_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "dst", (intptr_t) SM_com_badlogic_gdx_math_Vector3_dst_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "dst", (intptr_t) M_com_badlogic_gdx_math_Vector3_dst_com_badlogic_gdx_math_Vector3_R_float, VTABLE_com_badlogic_gdx_math_Vector3_dst_com_badlogic_gdx_math_Vector3_R_float, "(Lcom/badlogic/gdx/math/Vector3;)F", 1 },
	{ "dst", (intptr_t) M_com_badlogic_gdx_math_Vector3_dst_float_float_float_R_float, VTABLE_com_badlogic_gdx_math_Vector3_dst_float_float_float_R_float, "(FFF)F", 1 },
	{ "dst2", (intptr_t) SM_com_badlogic_gdx_math_Vector3_dst2_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "dst2", (intptr_t) M_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float, VTABLE_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float, "(Lcom/badlogic/gdx/math/Vector3;)F", 1 },
	{ "dst2", (intptr_t) M_com_badlogic_gdx_math_Vector3_dst2_float_float_float_R_float, VTABLE_com_badlogic_gdx_math_Vector3_dst2_float_float_float_R_float, "(FFF)F", 1 },
	{ "nor", (intptr_t) M_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3, "()Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "dot", (intptr_t) SM_com_badlogic_gdx_math_Vector3_dot_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "dot", (intptr_t) M_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float, VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float, "(Lcom/badlogic/gdx/math/Vector3;)F", 1 },
	{ "dot", (intptr_t) M_com_badlogic_gdx_math_Vector3_dot_float_float_float_R_float, VTABLE_com_badlogic_gdx_math_Vector3_dot_float_float_float_R_float, "(FFF)F", 1 },
	{ "crs", (intptr_t) M_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "crs", (intptr_t) M_com_badlogic_gdx_math_Vector3_crs_float_float_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_crs_float_float_float_R_com_badlogic_gdx_math_Vector3, "(FFF)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "mul4x3", (intptr_t) M_com_badlogic_gdx_math_Vector3_mul4x3_Array1_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_mul4x3_Array1_float_R_com_badlogic_gdx_math_Vector3, "([F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "traMul", (intptr_t) M_com_badlogic_gdx_math_Vector3_traMul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_traMul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "traMul", (intptr_t) M_com_badlogic_gdx_math_Vector3_traMul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_traMul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "prj", (intptr_t) M_com_badlogic_gdx_math_Vector3_prj_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_prj_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "rot", (intptr_t) M_com_badlogic_gdx_math_Vector3_rot_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_rot_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "unrotate", (intptr_t) M_com_badlogic_gdx_math_Vector3_unrotate_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_unrotate_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "untransform", (intptr_t) M_com_badlogic_gdx_math_Vector3_untransform_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_untransform_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_math_Vector3_rotate_float_float_float_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_rotate_float_float_float_float_R_com_badlogic_gdx_math_Vector3, "(FFFF)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "rotateRad", (intptr_t) M_com_badlogic_gdx_math_Vector3_rotateRad_float_float_float_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_rotateRad_float_float_float_float_R_com_badlogic_gdx_math_Vector3, "(FFFF)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_math_Vector3_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "rotateRad", (intptr_t) M_com_badlogic_gdx_math_Vector3_rotateRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_rotateRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "isUnit", (intptr_t) M_com_badlogic_gdx_math_Vector3_isUnit_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isUnit_R_boolean, "()Z", 1 },
	{ "isUnit", (intptr_t) M_com_badlogic_gdx_math_Vector3_isUnit_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isUnit_float_R_boolean, "(F)Z", 1 },
	{ "isZero", (intptr_t) M_com_badlogic_gdx_math_Vector3_isZero_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isZero_R_boolean, "()Z", 1 },
	{ "isZero", (intptr_t) M_com_badlogic_gdx_math_Vector3_isZero_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isZero_float_R_boolean, "(F)Z", 1 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;F)Z", 1 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;F)Z", 1 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;F)Z", 1 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector3_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;F)Z", 1 },
	{ "hasSameDirection", (intptr_t) M_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "hasOppositeDirection", (intptr_t) M_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "lerp", (intptr_t) M_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "interpolate", (intptr_t) M_com_badlogic_gdx_math_Vector3_interpolate_com_badlogic_gdx_math_Vector3_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_interpolate_com_badlogic_gdx_math_Vector3_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "slerp", (intptr_t) M_com_badlogic_gdx_math_Vector3_slerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_slerp_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_Vector3_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_Vector3_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "fromString", (intptr_t) M_com_badlogic_gdx_math_Vector3_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_fromString_java_lang_String_R_com_badlogic_gdx_math_Vector3, "(Ljava/lang/String;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "limit", (intptr_t) M_com_badlogic_gdx_math_Vector3_limit_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_limit_float_R_com_badlogic_gdx_math_Vector3, "(F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "limit2", (intptr_t) M_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector3, "(F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "setLength", (intptr_t) M_com_badlogic_gdx_math_Vector3_setLength_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_setLength_float_R_com_badlogic_gdx_math_Vector3, "(F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "setLength2", (intptr_t) M_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector3, "(F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "clamp", (intptr_t) M_com_badlogic_gdx_math_Vector3_clamp_float_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_clamp_float_float_R_com_badlogic_gdx_math_Vector3, "(FF)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_math_Vector3_hashCode_R_int, VTABLE_com_badlogic_gdx_math_Vector3_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;F)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector3_epsilonEquals_float_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_epsilonEquals_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector3_epsilonEquals_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_epsilonEquals_float_float_float_R_boolean, "(FFF)Z", 1 },
	{ "setZero", (intptr_t) M_com_badlogic_gdx_math_Vector3_setZero_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Vector3_setZero_R_com_badlogic_gdx_math_Vector3, "()Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "setZero", (intptr_t) M_com_badlogic_gdx_math_Vector3_setZero_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_setZero_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "mulAdd", (intptr_t) M_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "epsilonEquals", (intptr_t) M_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "hasOppositeDirection", (intptr_t) M_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "hasSameDirection", (intptr_t) M_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "isPerpendicular", (intptr_t) M_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isCollinearOpposite", (intptr_t) M_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isCollinear", (intptr_t) M_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 4161 },
	{ "isOnLine", (intptr_t) M_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean, VTABLE_com_badlogic_gdx_math_Vector3_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 4161 },
	{ "setToRandomDirection", (intptr_t) M_com_badlogic_gdx_math_Vector3_setToRandomDirection_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_setToRandomDirection_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "interpolate", (intptr_t) M_com_badlogic_gdx_math_Vector3_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "lerp", (intptr_t) M_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "dst2", (intptr_t) M_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector_R_float, VTABLE_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 4161 },
	{ "dst", (intptr_t) M_com_badlogic_gdx_math_Vector3_dst_com_badlogic_gdx_math_Vector_R_float, VTABLE_com_badlogic_gdx_math_Vector3_dst_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 4161 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector3_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "dot", (intptr_t) M_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector_R_float, VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 4161 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "nor", (intptr_t) M_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "sub", (intptr_t) M_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "clamp", (intptr_t) M_com_badlogic_gdx_math_Vector3_clamp_float_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_clamp_float_float_R_com_badlogic_gdx_math_Vector, "(FF)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "setLength2", (intptr_t) M_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_setLength2_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "setLength", (intptr_t) M_com_badlogic_gdx_math_Vector3_setLength_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_setLength_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "limit2", (intptr_t) M_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_limit2_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "limit", (intptr_t) M_com_badlogic_gdx_math_Vector3_limit_float_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_limit_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "cpy", (intptr_t) M_com_badlogic_gdx_math_Vector3_cpy_R_com_badlogic_gdx_math_Vector, VTABLE_com_badlogic_gdx_math_Vector3_cpy_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_Vector3, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_Vector3{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Vector3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Vector3),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Vector3,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Vector3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Vector3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 118,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 115,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Vector3 = registerClass(&class_com_badlogic_gdx_math_Vector3);

}

