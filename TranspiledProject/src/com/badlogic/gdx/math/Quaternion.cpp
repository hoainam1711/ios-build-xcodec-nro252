#include "com/badlogic/gdx/math/Quaternion.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/Matrix3.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"

extern "C" {

jlong SF_com_badlogic_gdx_math_Quaternion_serialVersionUID;
jobject SF_com_badlogic_gdx_math_Quaternion_tmp1;
jobject SF_com_badlogic_gdx_math_Quaternion_tmp2;

void mark_com_badlogic_gdx_math_Quaternion(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_Quaternion_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Quaternion_tmp1)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Quaternion_tmp1, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Quaternion_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Quaternion_tmp2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Quaternion_tmp2, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_Quaternion *) object;
}

void init_com_badlogic_gdx_math_Quaternion_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_idt_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_idt_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(62);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(73);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(74);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(75);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = (frame[3].f);
	LINE_NUMBER(76);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w = (frame[4].f);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_cpy_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	init_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Quaternion_len_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:len", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(103);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))) + ((frame[2].f) * (frame[2].f))) + ((frame[3].f) * (frame[3].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_len_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:len", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setEulerAngles_float_float_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setEulerAngles", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), ((frame[1].f) * (jfloat(0.017453292f))), ((frame[2].f) * (jfloat(0.017453292f))), ((frame[3].f) * (jfloat(0.017453292f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setEulerAnglesRad", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(132);
	frame[4].f = ((frame[3].f) * (jfloat(0.5f)));
	LINE_NUMBER(133);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[5].f = (jfloat(temp0));
	LINE_NUMBER(134);
	jdouble temp1 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[6].f = (jfloat(temp1));
	LINE_NUMBER(135);
	frame[7].f = ((frame[2].f) * (jfloat(0.5f)));
	LINE_NUMBER(136);
	jdouble temp2 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[7].f))));
	frame[8].f = (jfloat(temp2));
	LINE_NUMBER(137);
	jdouble temp3 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[7].f))));
	frame[9].f = (jfloat(temp3));
	LINE_NUMBER(138);
	frame[10].f = ((frame[1].f) * (jfloat(0.5f)));
	LINE_NUMBER(139);
	jdouble temp4 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[10].f))));
	frame[11].f = (jfloat(temp4));
	LINE_NUMBER(140);
	jdouble temp5 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[10].f))));
	frame[12].f = (jfloat(temp5));
	LINE_NUMBER(141);
	frame[13].f = ((frame[12].f) * (frame[8].f));
	LINE_NUMBER(142);
	frame[14].f = ((frame[11].f) * (frame[9].f));
	LINE_NUMBER(143);
	frame[15].f = ((frame[12].f) * (frame[9].f));
	LINE_NUMBER(144);
	frame[16].f = ((frame[11].f) * (frame[8].f));
	LINE_NUMBER(146);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = (((frame[13].f) * (frame[6].f)) + ((frame[14].f) * (frame[5].f)));
	LINE_NUMBER(147);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = (((frame[14].f) * (frame[6].f)) - ((frame[13].f) * (frame[5].f)));
	LINE_NUMBER(148);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = (((frame[15].f) * (frame[5].f)) - ((frame[16].f) * (frame[6].f)));
	LINE_NUMBER(149);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w = (((frame[15].f) * (frame[6].f)) + ((frame[16].f) * (frame[5].f)));
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_Quaternion_getGimbalPole_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getGimbalPole", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	frame[1].f = ((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w)));
	LINE_NUMBER(157);
	if ((floatCompare((frame[1].f), (jfloat(0.499f)), -1)) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	{
	if ((floatCompare((frame[1].f), (jfloat(-0.499f)), 1)) >= 0) goto label_4;
	}
	INST_ICONST(-1);
	goto label_3;
label_4:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getRollRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getRollRad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Quaternion_getGimbalPole_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getGimbalPole_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(164);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_atan2_float_float_R_float(ctx, ((jfloat(2)) * ((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x)))), ((jfloat(1)) - ((jfloat(2)) * ((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z))))));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(165);
	jfloat temp0 = (jfloat((frame[1].i))) * (jfloat(2));
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_atan2_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w));
	jfloat temp2 = temp0 * temp1;
	sp[0].f = temp2;
	sp += 1;
	}
label_3:;
	LINE_NUMBER(164);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getRoll_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getRoll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Quaternion_getRollRad_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getRollRad_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getPitchRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getPitchRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Quaternion_getGimbalPole_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getGimbalPole_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(178);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, ((jfloat(2)) * ((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x)) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y)))), (jfloat(-1.0f)), (jfloat(1)));
	jdouble temp1 = (jdouble)SM_java_lang_Math_asin_double_R_double(ctx, (jdouble(temp0)));
	jfloat temp2 = jfloat(temp1);
	sp[0].f = temp2;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jfloat temp0 = ((jfloat((frame[1].i))) * (jfloat(3.1415927f))) * (jfloat(0.5f));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getPitch_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getPitch", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Quaternion_getPitchRad_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getPitchRad_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getYawRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getYawRad", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Quaternion_getGimbalPole_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getGimbalPole_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_atan2_float_float_R_float(ctx, ((jfloat(2)) * ((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z)))), ((jfloat(1)) - ((jfloat(2)) * ((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x))))));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getYaw_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getYaw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Quaternion_getYawRad_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getYawRad_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Quaternion_len2_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:len2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))) + ((frame[2].f) * (frame[2].f))) + ((frame[3].f) * (frame[3].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_len2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:len2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:nor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Quaternion_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_len2_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(212);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, (frame[1].f), (jfloat(1)));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(213);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_w = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_w) / (frame[1].f));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_x) / (frame[1].f));
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_y) / (frame[1].f));
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_z) / (frame[1].f));
	}
label_2:;
	{
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_conjugate_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:conjugate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = (-((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(227);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = (-((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(228);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = (-((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_transform_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:transform", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(237);
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Quaternion_tmp2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(238);
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Quaternion_tmp2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_conjugate_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_conjugate_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o);
	LINE_NUMBER(239);
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Quaternion_tmp2;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Quaternion_tmp1;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_mulLeft_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_mulLeft_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_mulLeft_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_mulLeft_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(241);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Quaternion_tmp2;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(242);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Quaternion_tmp2;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(243);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Quaternion_tmp2;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z = ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[1].o))->F_z);
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:mul", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	frame[2].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y)));
	LINE_NUMBER(253);
	frame[3].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z)));
	LINE_NUMBER(254);
	frame[4].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x)));
	LINE_NUMBER(255);
	frame[5].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w)) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z)));
	LINE_NUMBER(256);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(257);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].f);
	LINE_NUMBER(258);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = (frame[4].f);
	LINE_NUMBER(259);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w = (frame[5].f);
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_mul_float_float_float_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:mul", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(271);
	frame[5].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * (frame[1].f)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * (frame[4].f))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * (frame[2].f)));
	LINE_NUMBER(272);
	frame[6].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * (frame[2].f)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * (frame[4].f))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * (frame[1].f))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f)));
	LINE_NUMBER(273);
	frame[7].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * (frame[3].f)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * (frame[4].f))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * (frame[2].f))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * (frame[1].f)));
	LINE_NUMBER(274);
	frame[8].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * (frame[4].f)) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f)));
	LINE_NUMBER(275);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = (frame[5].f);
	LINE_NUMBER(276);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = (frame[6].f);
	LINE_NUMBER(277);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = (frame[7].f);
	LINE_NUMBER(278);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w = (frame[8].f);
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_mulLeft_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:mulLeft", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(287);
	frame[2].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y)));
	LINE_NUMBER(288);
	frame[3].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z)));
	LINE_NUMBER(289);
	frame[4].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x)));
	LINE_NUMBER(290);
	frame[5].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w)) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y))) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z)));
	LINE_NUMBER(291);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(292);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].f);
	LINE_NUMBER(293);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = (frame[4].f);
	LINE_NUMBER(294);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w = (frame[5].f);
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_mulLeft_float_float_float_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:mulLeft", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(306);
	frame[5].f = (((((frame[4].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x)) + ((frame[1].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w))) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z))) - ((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y)));
	LINE_NUMBER(307);
	frame[6].f = (((((frame[4].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y)) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w))) + ((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x))) - ((frame[1].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z)));
	LINE_NUMBER(308);
	frame[7].f = (((((frame[4].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z)) + ((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w))) + ((frame[1].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y))) - ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x)));
	LINE_NUMBER(309);
	frame[8].f = (((((frame[4].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w)) - ((frame[1].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x))) - ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y))) - ((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z)));
	LINE_NUMBER(310);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = (frame[5].f);
	LINE_NUMBER(311);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = (frame[6].f);
	LINE_NUMBER(312);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = (frame[7].f);
	LINE_NUMBER(313);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w = (frame[8].f);
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_add_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_z) + ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_w = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_w) + ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w));
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_add_float_float_float_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_z) + (frame[3].f));
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_w = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_w) + (frame[4].f));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Quaternion_toMatrix_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:toMatrix", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(341);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(342);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(343);
	frame[4].f = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(344);
	frame[5].f = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w));
	LINE_NUMBER(345);
	frame[6].f = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(346);
	frame[7].f = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(347);
	frame[8].f = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w));
	LINE_NUMBER(348);
	frame[9].f = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(349);
	frame[10].f = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w));
	LINE_NUMBER(351);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = ((jfloat(1)) - ((jfloat(2)) * ((frame[6].f) + (frame[9].f))));
	LINE_NUMBER(352);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))) = ((jfloat(2)) * ((frame[3].f) - (frame[10].f)));
	LINE_NUMBER(353);
	ARRAY_ACCESS(jfloat, (frame[1].o), (8)) = ((jfloat(2)) * ((frame[4].f) + (frame[8].f)));
	LINE_NUMBER(354);
	ARRAY_ACCESS(jfloat, (frame[1].o), (12)) = (jfloat(0));
	LINE_NUMBER(355);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = ((jfloat(2)) * ((frame[3].f) + (frame[10].f)));
	LINE_NUMBER(356);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))) = ((jfloat(1)) - ((jfloat(2)) * ((frame[2].f) + (frame[9].f))));
	LINE_NUMBER(357);
	ARRAY_ACCESS(jfloat, (frame[1].o), (9)) = ((jfloat(2)) * ((frame[7].f) - (frame[5].f)));
	LINE_NUMBER(358);
	ARRAY_ACCESS(jfloat, (frame[1].o), (13)) = (jfloat(0));
	LINE_NUMBER(359);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = ((jfloat(2)) * ((frame[4].f) - (frame[8].f)));
	LINE_NUMBER(360);
	ARRAY_ACCESS(jfloat, (frame[1].o), (6)) = ((jfloat(2)) * ((frame[7].f) + (frame[5].f)));
	LINE_NUMBER(361);
	ARRAY_ACCESS(jfloat, (frame[1].o), (10)) = ((jfloat(1)) - ((jfloat(2)) * ((frame[2].f) + (frame[6].f))));
	LINE_NUMBER(362);
	ARRAY_ACCESS(jfloat, (frame[1].o), (14)) = (jfloat(0));
	LINE_NUMBER(363);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(364);
	ARRAY_ACCESS(jfloat, (frame[1].o), (7)) = (jfloat(0));
	LINE_NUMBER(365);
	ARRAY_ACCESS(jfloat, (frame[1].o), (11)) = (jfloat(0));
	LINE_NUMBER(366);
	ARRAY_ACCESS(jfloat, (frame[1].o), (15)) = (jfloat(1));
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_idt_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:idt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Quaternion_isIdentity_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:isIdentity", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w), (jfloat(1)));
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

jbool M_com_badlogic_gdx_math_Quaternion_isIdentity_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:isIdentity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(382);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z), (frame[1].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w;
	jfloat temp1 = jfloat(1);
	jfloat temp2 = frame[1].f;
	LINE_NUMBER(383);
	jint temp3 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, temp0, temp1, temp2);
	if (temp3 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(382);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromAxis_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromAxis", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromAxisRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromAxisRad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromAxis", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), ((frame[4].f) * (jfloat(0.017453292f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromAxisRad", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(422);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_Vector3_len_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f));
	frame[5].f = temp0;
	LINE_NUMBER(423);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_idt_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_idt_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(424);
	frame[5].f = ((jfloat(1)) / (frame[5].f));
	LINE_NUMBER(425);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat(6.2831855f)) - (fmodf((-(frame[4].f)), (jfloat(6.2831855f))));
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jfloat temp0 = fmodf((frame[4].f), (jfloat(6.2831855f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(426);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((frame[6].f) / (jfloat(2))))));
	frame[7].f = (jfloat(temp0));
	LINE_NUMBER(427);
	jdouble temp1 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble(((frame[6].f) / (jfloat(2))))));
	frame[8].f = (jfloat(temp1));
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), (((frame[5].f) * (frame[1].f)) * (frame[7].f)), (((frame[5].f) * (frame[2].f)) * (frame[7].f)), (((frame[5].f) * (frame[3].f)) * (frame[7].f)), (frame[8].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromMatrix", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp6 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp7 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp8 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromMatrix_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromMatrix", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), (jint(0)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromMatrix", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(445);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp6 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp7 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp8 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[2].o)))->F_val;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromMatrix_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromMatrix", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), (jint(0)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromAxes_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromAxes", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), (jint(0)), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f), (frame[9].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jbool param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromAxes", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
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
	LINE_NUMBER(500);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(501);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_Vector3_len_float_float_float_R_float(ctx, (frame[2].f), (frame[3].f), (frame[4].f));
	frame[11].f = (temp0 / temp1);
	LINE_NUMBER(502);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (jfloat)SM_com_badlogic_gdx_math_Vector3_len_float_float_float_R_float(ctx, (frame[5].f), (frame[6].f), (frame[7].f));
	frame[12].f = (temp2 / temp3);
	LINE_NUMBER(503);
	jfloat temp4 = jfloat(1);
	jfloat temp5 = (jfloat)SM_com_badlogic_gdx_math_Vector3_len_float_float_float_R_float(ctx, (frame[8].f), (frame[9].f), (frame[10].f));
	frame[13].f = (temp4 / temp5);
	LINE_NUMBER(504);
	frame[2].f = ((frame[2].f) * (frame[11].f));
	LINE_NUMBER(505);
	frame[3].f = ((frame[3].f) * (frame[11].f));
	LINE_NUMBER(506);
	frame[4].f = ((frame[4].f) * (frame[11].f));
	LINE_NUMBER(507);
	frame[5].f = ((frame[5].f) * (frame[12].f));
	LINE_NUMBER(508);
	frame[6].f = ((frame[6].f) * (frame[12].f));
	LINE_NUMBER(509);
	frame[7].f = ((frame[7].f) * (frame[12].f));
	LINE_NUMBER(510);
	frame[8].f = ((frame[8].f) * (frame[13].f));
	LINE_NUMBER(511);
	frame[9].f = ((frame[9].f) * (frame[13].f));
	LINE_NUMBER(512);
	frame[10].f = ((frame[10].f) * (frame[13].f));
	}
label_1:;
	{
	LINE_NUMBER(516);
	frame[11].f = (((frame[2].f) + (frame[6].f)) + (frame[10].f));
	LINE_NUMBER(519);
	if ((floatCompare((frame[11].f), (jfloat(0)), -1)) < 0) goto label_15;
	}
	{
	LINE_NUMBER(520);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[11].f) + (jfloat(1))))));
	frame[12].f = (jfloat(temp0));
	LINE_NUMBER(521);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w = ((jfloat(0.5f)) * (frame[12].f));
	LINE_NUMBER(522);
	frame[12].f = ((jfloat(0.5f)) / (frame[12].f));
	LINE_NUMBER(523);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = (((frame[9].f) - (frame[7].f)) * (frame[12].f));
	LINE_NUMBER(524);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = (((frame[4].f) - (frame[8].f)) * (frame[12].f));
	LINE_NUMBER(525);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = (((frame[5].f) - (frame[3].f)) * (frame[12].f));
	LINE_NUMBER(526);
	goto label_23;
	}
label_15:;
	{
	if ((floatCompare((frame[2].f), (frame[6].f), -1)) <= 0) goto label_24;
	}
	{
	if ((floatCompare((frame[2].f), (frame[10].f), -1)) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(527);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, ((((jdouble(1)) + (jdouble((frame[2].f)))) - (jdouble((frame[6].f)))) - (jdouble((frame[10].f)))));
	frame[12].f = (jfloat(temp0));
	LINE_NUMBER(528);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = ((frame[12].f) * (jfloat(0.5f)));
	LINE_NUMBER(529);
	frame[12].f = ((jfloat(0.5f)) / (frame[12].f));
	LINE_NUMBER(530);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = (((frame[5].f) + (frame[3].f)) * (frame[12].f));
	LINE_NUMBER(531);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = (((frame[4].f) + (frame[8].f)) * (frame[12].f));
	LINE_NUMBER(532);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w = (((frame[9].f) - (frame[7].f)) * (frame[12].f));
	LINE_NUMBER(533);
	goto label_23;
	}
label_24:;
	{
	if ((floatCompare((frame[6].f), (frame[10].f), -1)) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(534);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, ((((jdouble(1)) + (jdouble((frame[6].f)))) - (jdouble((frame[2].f)))) - (jdouble((frame[10].f)))));
	frame[12].f = (jfloat(temp0));
	LINE_NUMBER(535);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = ((frame[12].f) * (jfloat(0.5f)));
	LINE_NUMBER(536);
	frame[12].f = ((jfloat(0.5f)) / (frame[12].f));
	LINE_NUMBER(537);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = (((frame[5].f) + (frame[3].f)) * (frame[12].f));
	LINE_NUMBER(538);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = (((frame[9].f) + (frame[7].f)) * (frame[12].f));
	LINE_NUMBER(539);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w = (((frame[4].f) - (frame[8].f)) * (frame[12].f));
	LINE_NUMBER(540);
	goto label_23;
	}
label_32:;
	{
	LINE_NUMBER(541);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, ((((jdouble(1)) + (jdouble((frame[10].f)))) - (jdouble((frame[2].f)))) - (jdouble((frame[6].f)))));
	frame[12].f = (jfloat(temp0));
	LINE_NUMBER(542);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = ((frame[12].f) * (jfloat(0.5f)));
	LINE_NUMBER(543);
	frame[12].f = ((jfloat(0.5f)) / (frame[12].f));
	LINE_NUMBER(544);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = (((frame[4].f) + (frame[8].f)) * (frame[12].f));
	LINE_NUMBER(545);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = (((frame[9].f) + (frame[7].f)) * (frame[12].f));
	LINE_NUMBER(546);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w = (((frame[5].f) - (frame[3].f)) * (frame[12].f));
	}
label_23:;
	{
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromCross_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromCross", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(557);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[1].o), (frame[2].o));
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, temp0, (jfloat(-1.0f)), (jfloat(1)));
	frame[3].f = temp1;
	LINE_NUMBER(558);
	jdouble temp2 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((frame[3].f))));
	frame[4].f = (jfloat(temp2));
	LINE_NUMBER(559);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y))), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z))), ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x))), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_setFromCross_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:setFromCross", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(572);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_Vector3_dot_float_float_float_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, temp0, (jfloat(-1.0f)), (jfloat(1)));
	frame[7].f = temp1;
	LINE_NUMBER(573);
	jdouble temp2 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((frame[7].f))));
	frame[8].f = (jfloat(temp2));
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), (((frame[2].f) * (frame[6].f)) - ((frame[3].f) * (frame[5].f))), (((frame[3].f) * (frame[4].f)) - ((frame[1].f) * (frame[6].f))), (((frame[1].f) * (frame[5].f)) - ((frame[2].f) * (frame[4].f))), (frame[8].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_slerp_com_badlogic_gdx_math_Quaternion_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:slerp", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(583);
	frame[3].f = ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w)));
	LINE_NUMBER(584);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	jfloat temp0 = -(frame[3].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FLOAD(3);
label_3:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(587);
	frame[5].f = ((jfloat(1)) - (frame[2].f));
	LINE_NUMBER(588);
	frame[6].f = (frame[2].f);
	LINE_NUMBER(592);
	if ((doubleCompare((jdouble(((jfloat(1)) - (frame[4].f)))), (jdouble(0.1)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(594);
	jdouble temp0 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[7].f = (jfloat(temp0));
	LINE_NUMBER(595);
	jfloat temp1 = jfloat(1);
	jdouble temp2 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[7].f))));
	frame[8].f = (temp1 / (jfloat(temp2)));
	LINE_NUMBER(599);
	jdouble temp3 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((((jfloat(1)) - (frame[2].f)) * (frame[7].f)))));
	frame[5].f = ((jfloat(temp3)) * (frame[8].f));
	LINE_NUMBER(600);
	jdouble temp4 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((frame[2].f) * (frame[7].f)))));
	frame[6].f = ((jfloat(temp4)) * (frame[8].f));
	}
label_7:;
	{
	LINE_NUMBER(603);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) >= 0) goto label_12;
	}
	{
	frame[6].f = (-(frame[6].f));
	}
label_12:;
	{
	LINE_NUMBER(607);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x = (((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x)) + ((frame[6].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x)));
	LINE_NUMBER(608);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y = (((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y)) + ((frame[6].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y)));
	LINE_NUMBER(609);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z = (((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z)) + ((frame[6].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z)));
	LINE_NUMBER(610);
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w = (((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w)) + ((frame[6].f) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w)));
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_slerp_Array1_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:slerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(623);
	frame[2].f = ((jfloat(1)) / (jfloat((((jarray) nullCheck(ctx, (frame[1].o)))->length))));
	LINE_NUMBER(624);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, (frame[2].f));
	LINE_NUMBER(625);
	frame[3].i = (jint(1));
	}
label_3:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(626);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Quaternion_tmp1;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(625);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o));
	LINE_NUMBER(628);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_slerp_Array1_com_badlogic_gdx_math_Quaternion_Array1_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:slerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)))));
	LINE_NUMBER(641);
	frame[3].i = (jint(1));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(642);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Quaternion_tmp1;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(641);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o));
	LINE_NUMBER(644);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:exp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(654);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Quaternion_len_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_len_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(655);
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble((frame[2].f))), (jdouble((frame[1].f))));
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(658);
	jdouble temp2 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) / (frame[2].f)))));
	frame[4].f = (jfloat(temp2));
	LINE_NUMBER(661);
	frame[5].f = (jfloat(0));
	LINE_NUMBER(662);
	jfloat temp3 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[4].f));
	if ((doubleCompare((jdouble(temp3)), (jdouble(1.000000e-03)), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(664);
	frame[5].f = (((frame[3].f) * (frame[1].f)) / (frame[2].f));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(666);
	jdouble temp0 = jdouble((frame[3].f));
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((frame[1].f) * (frame[4].f)))));
	jdouble temp2 = temp0 * temp1;
	jdouble temp3 = jdouble((frame[2].f));
	jdouble temp4 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[5].f = (jfloat((temp2 / (temp3 * temp4))));
	}
label_7:;
	{
	LINE_NUMBER(669);
	sp[0].o = frame[0].o;
	jdouble temp0 = jdouble((frame[3].f));
	jdouble temp1 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble(((frame[1].f) * (frame[4].f)))));
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_w = (jfloat((temp0 * temp1)));
	LINE_NUMBER(670);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_x) * (frame[5].f));
	LINE_NUMBER(671);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_y) * (frame[5].f));
	LINE_NUMBER(672);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_z) * (frame[5].f));
	LINE_NUMBER(675);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o));
	LINE_NUMBER(677);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_Quaternion_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(682);
	frame[1].i = (31);
	LINE_NUMBER(683);
	frame[2].i = (jint(1));
	LINE_NUMBER(684);
	jint temp0 = (31) * (frame[2].i);
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(685);
	jint temp2 = (31) * (frame[2].i);
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(686);
	jint temp4 = (31) * (frame[2].i);
	jint temp5 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y));
	frame[2].i = (temp4 + temp5);
	LINE_NUMBER(687);
	jint temp6 = (31) * (frame[2].i);
	jint temp7 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z));
	frame[2].i = (temp6 + temp7);
	LINE_NUMBER(688);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Quaternion_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(693);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(696);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(697);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(699);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_math_Quaternion)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(702);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Quaternion, (frame[1].o)));
	LINE_NUMBER(703);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_w));
	if (temp0 != temp1) goto label_8;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x;
	LINE_NUMBER(704);
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, temp0);
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_x));
	if (temp1 != temp2) goto label_8;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y;
	LINE_NUMBER(705);
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, temp0);
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp1 != temp2) goto label_8;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z;
	LINE_NUMBER(706);
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, temp0);
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_z));
	if (temp1 != temp2) goto label_8;
	}
	INST_ICONST(1);
	goto label_12;
label_8:;
	INST_ICONST(0);
label_12:;
	LINE_NUMBER(703);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Quaternion_dot_float_float_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:dot", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(721);
	popStackFrame(ctx);
	return (((((frame[0].f) * (frame[4].f)) + ((frame[1].f) * (frame[5].f))) + ((frame[2].f) * (frame[6].f))) + ((frame[3].f) * (frame[7].f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_dot_com_badlogic_gdx_math_Quaternion_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:dot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(728);
	popStackFrame(ctx);
	return ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_dot_float_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:dot", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return ((((((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f))) + (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * (frame[4].f)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Quaternion_mul_float_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:mul", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(745);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_x) * (frame[1].f));
	LINE_NUMBER(746);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_y) * (frame[1].f));
	LINE_NUMBER(747);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_z) * (frame[1].f));
	LINE_NUMBER(748);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_w = (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[0].o))->F_w) * (frame[1].f));
	LINE_NUMBER(749);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getAxisAngle_com_badlogic_gdx_math_Vector3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getAxisAngle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(764);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Quaternion_getAxisAngleRad_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getAxisAngleRad_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getAxisAngleRad_com_badlogic_gdx_math_Vector3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getAxisAngleRad", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(779);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w), (jfloat(1)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(780);
	jdouble temp0 = jdouble(2.0);
	jdouble temp1 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w))));
	frame[2].f = (jfloat((temp0 * temp1)));
	LINE_NUMBER(781);
	jdouble temp2 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) - (((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w))))));
	frame[3].d = temp2;
	LINE_NUMBER(782);
	if ((doubleCompare((frame[3].d), (jdouble(1.000000e-06)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(784);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(785);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(786);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z = ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(788);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x = (jfloat(((jdouble(((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x))) / (frame[3].d))));
	LINE_NUMBER(789);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y = (jfloat(((jdouble(((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y))) / (frame[3].d))));
	LINE_NUMBER(790);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z = (jfloat(((jdouble(((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z))) / (frame[3].d))));
	}
label_8:;
	{
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getAngleRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getAngleRad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(801);
	jdouble temp0 = jdouble(2.0);
	sp[0].d = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w), (jfloat(1)), -1)) <= 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Quaternion_len_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_len_R_float])(ctx, (frame[0].o));
	jdouble temp2 = jdouble((temp0 / temp1));
	sp[0].d = temp2;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jdouble temp0 = jdouble(((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w));
	sp[0].d = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	jdouble temp0 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, sp[1].d);
	popStackFrame(ctx);
	return (jfloat((sp[0].d * temp0)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getAngle_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getAngle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(808);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Quaternion_getAngleRad_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getAngleRad_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Quaternion_getSwingTwist_float_float_float_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getSwingTwist", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(825);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_Vector3_dot_float_float_float_float_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z), (frame[1].f), (frame[2].f), (frame[3].f));
	frame[6].f = temp0;
	LINE_NUMBER(826);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[5].o), ((frame[1].f) * (frame[6].f)), ((frame[2].f) * (frame[6].f)), ((frame[3].f) * (frame[6].f)), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o);
	LINE_NUMBER(827);
	if ((floatCompare((frame[6].f), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_mul_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_mul_float_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[5].o), (jfloat(-1.0f)));
	}
label_3:;
	{
	LINE_NUMBER(828);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[4].o), (frame[5].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_conjugate_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_conjugate_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_mulLeft_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_mulLeft_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(829);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Quaternion_getSwingTwist_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getSwingTwist", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(842);
	((func_com_badlogic_gdx_math_Quaternion_getSwingTwist_float_float_float_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getSwingTwist_float_float_float_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].o), (frame[3].o));
	LINE_NUMBER(843);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getAngleAroundRad", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(851);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_Vector3_dot_float_float_float_float_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_z), (frame[1].f), (frame[2].f), (frame[3].f));
	frame[4].f = temp0;
	LINE_NUMBER(852);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_Quaternion_len2_float_float_float_float_R_float(ctx, ((frame[1].f) * (frame[4].f)), ((frame[2].f) * (frame[4].f)), ((frame[3].f) * (frame[4].f)), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w));
	frame[5].f = temp1;
	LINE_NUMBER(853);
	jint temp2 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, (frame[5].f));
	if (temp2 == 0) goto label_3;
	}
	INST_FCONST(0);
	goto label_4;
label_3:;
	{
	LINE_NUMBER(854);
	jdouble temp0 = jdouble(2.0);
	sp[0].d = temp0;
	sp += 1;
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_5;
	}
	{
	jfloat temp0 = -((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[0].o)))->F_w);
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(0);
	sp[-1].f = ((com_badlogic_gdx_math_Quaternion *) NULL_CHECK(sp[-1].o))->F_w;
label_6:;
	{
	sp -= 2;
	jdouble temp0 = jdouble(sp[1].f);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[5].f))));
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (jfloat((temp0 / temp1))), (jfloat(-1.0f)), (jfloat(1)));
	jdouble temp3 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble(temp2)));
	jfloat temp4 = jfloat((sp[0].d * temp3));
	sp[0].f = temp4;
	sp += 1;
	}
label_4:;
	LINE_NUMBER(853);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_com_badlogic_gdx_math_Vector3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getAngleAroundRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(861);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_float_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_float_float_float_R_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getAngleAround_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getAngleAround", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(870);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_float_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_float_float_float_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Quaternion_getAngleAround_com_badlogic_gdx_math_Vector3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:getAngleAround", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(877);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Quaternion_getAngleAround_float_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_getAngleAround_float_float_float_R_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_Quaternion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_Quaternion_serialVersionUID = jlong(-7661875440774897168ll);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Quaternion:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	{
	LINE_NUMBER(30);
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	init_com_badlogic_gdx_math_Quaternion_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	SF_com_badlogic_gdx_math_Quaternion_tmp1 = sp[0].o;
	LINE_NUMBER(31);
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	init_com_badlogic_gdx_math_Quaternion_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	SF_com_badlogic_gdx_math_Quaternion_tmp2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Quaternion[] {
	(void *) M_com_badlogic_gdx_math_Quaternion_hashCode_R_int,
	(void *) M_com_badlogic_gdx_math_Quaternion_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_Quaternion_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_cpy_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_len_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_setEulerAngles_float_float_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_getGimbalPole_R_int,
	(void *) M_com_badlogic_gdx_math_Quaternion_getRollRad_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getRoll_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getPitchRad_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getPitch_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getYawRad_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getYaw_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_len2_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_conjugate_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_transform_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_mul_float_float_float_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_mulLeft_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_mulLeft_float_float_float_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_add_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_add_float_float_float_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_toMatrix_Array1_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_idt_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_isIdentity_R_boolean,
	(void *) M_com_badlogic_gdx_math_Quaternion_isIdentity_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromAxis_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromAxisRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromMatrix_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromMatrix_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromAxes_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromCross_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_setFromCross_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_slerp_com_badlogic_gdx_math_Quaternion_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_slerp_Array1_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_slerp_Array1_com_badlogic_gdx_math_Quaternion_Array1_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_dot_com_badlogic_gdx_math_Quaternion_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_dot_float_float_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_mul_float_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_getAxisAngle_com_badlogic_gdx_math_Vector3_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getAxisAngleRad_com_badlogic_gdx_math_Vector3_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getAngleRad_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getAngle_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getSwingTwist_float_float_float_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_getSwingTwist_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_float_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_com_badlogic_gdx_math_Vector3_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getAngleAround_float_float_float_R_float,
	(void *) M_com_badlogic_gdx_math_Quaternion_getAngleAround_com_badlogic_gdx_math_Vector3_R_float,
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
	{ "set", "(FFFF)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "set", "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "cpy", "()Lcom/badlogic/gdx/math/Quaternion;" },
	{ "len", "()F" },
	{ "setEulerAngles", "(FFF)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setEulerAnglesRad", "(FFF)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "getGimbalPole", "()I" },
	{ "getRollRad", "()F" },
	{ "getRoll", "()F" },
	{ "getPitchRad", "()F" },
	{ "getPitch", "()F" },
	{ "getYawRad", "()F" },
	{ "getYaw", "()F" },
	{ "len2", "()F" },
	{ "nor", "()Lcom/badlogic/gdx/math/Quaternion;" },
	{ "conjugate", "()Lcom/badlogic/gdx/math/Quaternion;" },
	{ "transform", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "mul", "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "mul", "(FFFF)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "mulLeft", "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "mulLeft", "(FFFF)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "add", "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "add", "(FFFF)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "toMatrix", "([F)V" },
	{ "idt", "()Lcom/badlogic/gdx/math/Quaternion;" },
	{ "isIdentity", "()Z" },
	{ "isIdentity", "(F)Z" },
	{ "setFromAxis", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setFromAxisRad", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setFromAxis", "(FFFF)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setFromAxisRad", "(FFFF)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setFromMatrix", "(ZLcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setFromMatrix", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setFromMatrix", "(ZLcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setFromMatrix", "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setFromAxes", "(FFFFFFFFF)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setFromAxes", "(ZFFFFFFFFF)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setFromCross", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "setFromCross", "(FFFFFF)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "slerp", "(Lcom/badlogic/gdx/math/Quaternion;F)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "slerp", "([Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "slerp", "([Lcom/badlogic/gdx/math/Quaternion;[F)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "exp", "(F)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "dot", "(Lcom/badlogic/gdx/math/Quaternion;)F" },
	{ "dot", "(FFFF)F" },
	{ "mul", "(F)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "getAxisAngle", "(Lcom/badlogic/gdx/math/Vector3;)F" },
	{ "getAxisAngleRad", "(Lcom/badlogic/gdx/math/Vector3;)F" },
	{ "getAngleRad", "()F" },
	{ "getAngle", "()F" },
	{ "getSwingTwist", "(FFFLcom/badlogic/gdx/math/Quaternion;Lcom/badlogic/gdx/math/Quaternion;)V" },
	{ "getSwingTwist", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Quaternion;Lcom/badlogic/gdx/math/Quaternion;)V" },
	{ "getAngleAroundRad", "(FFF)F" },
	{ "getAngleAroundRad", "(Lcom/badlogic/gdx/math/Vector3;)F" },
	{ "getAngleAround", "(FFF)F" },
	{ "getAngleAround", "(Lcom/badlogic/gdx/math/Vector3;)F" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_Quaternion_serialVersionUID, "J", 26 },
	{ "tmp1", &class_com_badlogic_gdx_math_Quaternion, (intptr_t) &SF_com_badlogic_gdx_math_Quaternion_tmp1, "Lcom/badlogic/gdx/math/Quaternion;", 10 },
	{ "tmp2", &class_com_badlogic_gdx_math_Quaternion, (intptr_t) &SF_com_badlogic_gdx_math_Quaternion_tmp2, "Lcom/badlogic/gdx/math/Quaternion;", 10 },
	{ "x", &class_float, offsetof(com_badlogic_gdx_math_Quaternion, F_x), "F", 1 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_math_Quaternion, F_y), "F", 1 },
	{ "z", &class_float, offsetof(com_badlogic_gdx_math_Quaternion, F_z), "F", 1 },
	{ "w", &class_float, offsetof(com_badlogic_gdx_math_Quaternion, F_w), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Quaternion_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Quaternion, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion, 0, "(Lcom/badlogic/gdx/math/Quaternion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3_float, 0, "(Lcom/badlogic/gdx/math/Vector3;F)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, "(FFFF)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "cpy", (intptr_t) M_com_badlogic_gdx_math_Quaternion_cpy_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_cpy_R_com_badlogic_gdx_math_Quaternion, "()Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "len", (intptr_t) SM_com_badlogic_gdx_math_Quaternion_len_float_float_float_float_R_float, 0, "(FFFF)F", 25 },
	{ "len", (intptr_t) M_com_badlogic_gdx_math_Quaternion_len_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_len_R_float, "()F", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_Quaternion_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_Quaternion_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setEulerAngles", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setEulerAngles_float_float_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setEulerAngles_float_float_float_R_com_badlogic_gdx_math_Quaternion, "(FFF)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setEulerAnglesRad", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Quaternion, "(FFF)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "getGimbalPole", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getGimbalPole_R_int, VTABLE_com_badlogic_gdx_math_Quaternion_getGimbalPole_R_int, "()I", 1 },
	{ "getRollRad", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getRollRad_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getRollRad_R_float, "()F", 1 },
	{ "getRoll", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getRoll_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getRoll_R_float, "()F", 1 },
	{ "getPitchRad", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getPitchRad_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getPitchRad_R_float, "()F", 1 },
	{ "getPitch", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getPitch_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getPitch_R_float, "()F", 1 },
	{ "getYawRad", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getYawRad_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getYawRad_R_float, "()F", 1 },
	{ "getYaw", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getYaw_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getYaw_R_float, "()F", 1 },
	{ "len2", (intptr_t) SM_com_badlogic_gdx_math_Quaternion_len2_float_float_float_float_R_float, 0, "(FFFF)F", 25 },
	{ "len2", (intptr_t) M_com_badlogic_gdx_math_Quaternion_len2_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_len2_R_float, "()F", 1 },
	{ "nor", (intptr_t) M_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion, "()Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "conjugate", (intptr_t) M_com_badlogic_gdx_math_Quaternion_conjugate_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_conjugate_R_com_badlogic_gdx_math_Quaternion, "()Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "transform", (intptr_t) M_com_badlogic_gdx_math_Quaternion_transform_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Quaternion_transform_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_Quaternion_mul_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_mul_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, "(FFFF)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "mulLeft", (intptr_t) M_com_badlogic_gdx_math_Quaternion_mulLeft_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_mulLeft_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "mulLeft", (intptr_t) M_com_badlogic_gdx_math_Quaternion_mulLeft_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_mulLeft_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, "(FFFF)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Quaternion_add_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_add_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_math_Quaternion_add_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_add_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, "(FFFF)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "toMatrix", (intptr_t) M_com_badlogic_gdx_math_Quaternion_toMatrix_Array1_float, VTABLE_com_badlogic_gdx_math_Quaternion_toMatrix_Array1_float, "([F)V", 1 },
	{ "idt", (intptr_t) M_com_badlogic_gdx_math_Quaternion_idt_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_idt_R_com_badlogic_gdx_math_Quaternion, "()Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "isIdentity", (intptr_t) M_com_badlogic_gdx_math_Quaternion_isIdentity_R_boolean, VTABLE_com_badlogic_gdx_math_Quaternion_isIdentity_R_boolean, "()Z", 1 },
	{ "isIdentity", (intptr_t) M_com_badlogic_gdx_math_Quaternion_isIdentity_float_R_boolean, VTABLE_com_badlogic_gdx_math_Quaternion_isIdentity_float_R_boolean, "(F)Z", 1 },
	{ "setFromAxis", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromAxis_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxis_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setFromAxisRad", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromAxisRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxisRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setFromAxis", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, "(FFFF)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setFromAxisRad", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, "(FFFF)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setFromMatrix", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion, "(ZLcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setFromMatrix", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromMatrix_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromMatrix_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setFromMatrix", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Quaternion, "(ZLcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setFromMatrix", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromMatrix_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromMatrix_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setFromAxes", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromAxes_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxes_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, "(FFFFFFFFF)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setFromAxes", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, "(ZFFFFFFFFF)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setFromCross", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromCross_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromCross_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "setFromCross", (intptr_t) M_com_badlogic_gdx_math_Quaternion_setFromCross_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_setFromCross_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion, "(FFFFFF)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "slerp", (intptr_t) M_com_badlogic_gdx_math_Quaternion_slerp_com_badlogic_gdx_math_Quaternion_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_slerp_com_badlogic_gdx_math_Quaternion_float_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Quaternion;F)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "slerp", (intptr_t) M_com_badlogic_gdx_math_Quaternion_slerp_Array1_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_slerp_Array1_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, "([Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "slerp", (intptr_t) M_com_badlogic_gdx_math_Quaternion_slerp_Array1_com_badlogic_gdx_math_Quaternion_Array1_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_slerp_Array1_com_badlogic_gdx_math_Quaternion_Array1_float_R_com_badlogic_gdx_math_Quaternion, "([Lcom/badlogic/gdx/math/Quaternion;[F)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "exp", (intptr_t) M_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion, "(F)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_math_Quaternion_hashCode_R_int, VTABLE_com_badlogic_gdx_math_Quaternion_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_math_Quaternion_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_math_Quaternion_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "dot", (intptr_t) SM_com_badlogic_gdx_math_Quaternion_dot_float_float_float_float_float_float_float_float_R_float, 0, "(FFFFFFFF)F", 25 },
	{ "dot", (intptr_t) M_com_badlogic_gdx_math_Quaternion_dot_com_badlogic_gdx_math_Quaternion_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_dot_com_badlogic_gdx_math_Quaternion_R_float, "(Lcom/badlogic/gdx/math/Quaternion;)F", 1 },
	{ "dot", (intptr_t) M_com_badlogic_gdx_math_Quaternion_dot_float_float_float_float_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_dot_float_float_float_float_R_float, "(FFFF)F", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_Quaternion_mul_float_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_mul_float_R_com_badlogic_gdx_math_Quaternion, "(F)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "getAxisAngle", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getAxisAngle_com_badlogic_gdx_math_Vector3_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getAxisAngle_com_badlogic_gdx_math_Vector3_R_float, "(Lcom/badlogic/gdx/math/Vector3;)F", 1 },
	{ "getAxisAngleRad", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getAxisAngleRad_com_badlogic_gdx_math_Vector3_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getAxisAngleRad_com_badlogic_gdx_math_Vector3_R_float, "(Lcom/badlogic/gdx/math/Vector3;)F", 1 },
	{ "getAngleRad", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getAngleRad_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getAngleRad_R_float, "()F", 1 },
	{ "getAngle", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getAngle_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getAngle_R_float, "()F", 1 },
	{ "getSwingTwist", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getSwingTwist_float_float_float_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_getSwingTwist_float_float_float_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion, "(FFFLcom/badlogic/gdx/math/Quaternion;Lcom/badlogic/gdx/math/Quaternion;)V", 1 },
	{ "getSwingTwist", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getSwingTwist_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Quaternion_getSwingTwist_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Quaternion;Lcom/badlogic/gdx/math/Quaternion;)V", 1 },
	{ "getAngleAroundRad", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_float_float_float_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_float_float_float_R_float, "(FFF)F", 1 },
	{ "getAngleAroundRad", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_com_badlogic_gdx_math_Vector3_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getAngleAroundRad_com_badlogic_gdx_math_Vector3_R_float, "(Lcom/badlogic/gdx/math/Vector3;)F", 1 },
	{ "getAngleAround", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getAngleAround_float_float_float_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getAngleAround_float_float_float_R_float, "(FFF)F", 1 },
	{ "getAngleAround", (intptr_t) M_com_badlogic_gdx_math_Quaternion_getAngleAround_com_badlogic_gdx_math_Vector3_R_float, VTABLE_com_badlogic_gdx_math_Quaternion_getAngleAround_com_badlogic_gdx_math_Vector3_R_float, "(Lcom/badlogic/gdx/math/Vector3;)F", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_Quaternion, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_Quaternion{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Quaternion",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Quaternion),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Quaternion,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Quaternion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Quaternion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 68,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 68,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Quaternion = registerClass(&class_com_badlogic_gdx_math_Quaternion);

}

