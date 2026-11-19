#include "com/badlogic/gdx/math/Matrix4.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/Affine2.h"
#include "java/lang/RuntimeException.h"
#include "com/badlogic/gdx/math/Matrix3.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "java/lang/System.h"

extern "C" {

jlong SF_com_badlogic_gdx_math_Matrix4_serialVersionUID;
jint SF_com_badlogic_gdx_math_Matrix4_M00;
jint SF_com_badlogic_gdx_math_Matrix4_M01;
jint SF_com_badlogic_gdx_math_Matrix4_M02;
jint SF_com_badlogic_gdx_math_Matrix4_M03;
jint SF_com_badlogic_gdx_math_Matrix4_M10;
jint SF_com_badlogic_gdx_math_Matrix4_M11;
jint SF_com_badlogic_gdx_math_Matrix4_M12;
jint SF_com_badlogic_gdx_math_Matrix4_M13;
jint SF_com_badlogic_gdx_math_Matrix4_M20;
jint SF_com_badlogic_gdx_math_Matrix4_M21;
jint SF_com_badlogic_gdx_math_Matrix4_M22;
jint SF_com_badlogic_gdx_math_Matrix4_M23;
jint SF_com_badlogic_gdx_math_Matrix4_M30;
jint SF_com_badlogic_gdx_math_Matrix4_M31;
jint SF_com_badlogic_gdx_math_Matrix4_M32;
jint SF_com_badlogic_gdx_math_Matrix4_M33;
jobject SF_com_badlogic_gdx_math_Matrix4_quat;
jobject SF_com_badlogic_gdx_math_Matrix4_quat2;
jobject SF_com_badlogic_gdx_math_Matrix4_l_vez;
jobject SF_com_badlogic_gdx_math_Matrix4_l_vex;
jobject SF_com_badlogic_gdx_math_Matrix4_l_vey;
jobject SF_com_badlogic_gdx_math_Matrix4_tmpVec;
jobject SF_com_badlogic_gdx_math_Matrix4_tmpMat;
jobject SF_com_badlogic_gdx_math_Matrix4_right;
jobject SF_com_badlogic_gdx_math_Matrix4_tmpForward;
jobject SF_com_badlogic_gdx_math_Matrix4_tmpUp;

void mark_com_badlogic_gdx_math_Matrix4(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_Matrix4_quat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Matrix4_quat)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Matrix4_quat, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Matrix4_quat2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Matrix4_quat2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Matrix4_quat2, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Matrix4_l_vez)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Matrix4_l_vez)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Matrix4_l_vez, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Matrix4_l_vex)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Matrix4_l_vex)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Matrix4_l_vex, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Matrix4_l_vey)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Matrix4_l_vey)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Matrix4_l_vey, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Matrix4_tmpVec)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Matrix4_tmpVec)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Matrix4_tmpVec, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Matrix4_tmpMat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Matrix4_tmpMat)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Matrix4_tmpMat, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Matrix4_right)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Matrix4_right)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Matrix4_right, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Matrix4_tmpForward)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Matrix4_tmpForward)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Matrix4_tmpForward, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Matrix4_tmpUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Matrix4_tmpUp)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Matrix4_tmpUp, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_Matrix4 *) object;
	if (self->F_val)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val)->clazz)->markFunction)((jobject) self->F_val, mark, depth + 1);
}

void init_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(90);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (16));
	((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(1));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(1));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (16));
	((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Matrix4_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (16));
	((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_Array1_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_Array1_float_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (16));
	((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(121);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (16));
	((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_Array1_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_Array1_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_set_Array1_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:set", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_w));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:set", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(180);
	frame[8].f = ((frame[4].f) * (jfloat(2)));
	frame[9].f = ((frame[5].f) * (jfloat(2)));
	frame[10].f = ((frame[6].f) * (jfloat(2)));
	LINE_NUMBER(181);
	frame[11].f = ((frame[7].f) * (frame[8].f));
	frame[12].f = ((frame[7].f) * (frame[9].f));
	frame[13].f = ((frame[7].f) * (frame[10].f));
	LINE_NUMBER(182);
	frame[14].f = ((frame[4].f) * (frame[8].f));
	frame[15].f = ((frame[4].f) * (frame[9].f));
	frame[16].f = ((frame[4].f) * (frame[10].f));
	LINE_NUMBER(183);
	frame[17].f = ((frame[5].f) * (frame[9].f));
	frame[18].f = ((frame[5].f) * (frame[10].f));
	frame[19].f = ((frame[6].f) * (frame[10].f));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat(1)) - ((frame[17].f) + (frame[19].f)));
	LINE_NUMBER(186);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((frame[15].f) - (frame[13].f));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = ((frame[16].f) + (frame[12].f));
	LINE_NUMBER(188);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[1].f);
	LINE_NUMBER(190);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((frame[15].f) + (frame[13].f));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat(1)) - ((frame[14].f) + (frame[19].f)));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = ((frame[18].f) - (frame[11].f));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[2].f);
	LINE_NUMBER(195);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = ((frame[16].f) - (frame[12].f));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = ((frame[18].f) + (frame[11].f));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((jfloat(1)) - ((frame[14].f) + (frame[17].f)));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[3].f);
	LINE_NUMBER(200);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(202);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:set", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[2].o)))->F_w), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[3].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[3].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[29];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:set", 29 };
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
	frame[10].f = param9;
	{
	LINE_NUMBER(231);
	frame[11].f = ((frame[4].f) * (jfloat(2)));
	frame[12].f = ((frame[5].f) * (jfloat(2)));
	frame[13].f = ((frame[6].f) * (jfloat(2)));
	LINE_NUMBER(232);
	frame[14].f = ((frame[7].f) * (frame[11].f));
	frame[15].f = ((frame[7].f) * (frame[12].f));
	frame[16].f = ((frame[7].f) * (frame[13].f));
	LINE_NUMBER(233);
	frame[17].f = ((frame[4].f) * (frame[11].f));
	frame[18].f = ((frame[4].f) * (frame[12].f));
	frame[19].f = ((frame[4].f) * (frame[13].f));
	LINE_NUMBER(234);
	frame[20].f = ((frame[5].f) * (frame[12].f));
	frame[21].f = ((frame[5].f) * (frame[13].f));
	frame[22].f = ((frame[6].f) * (frame[13].f));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((frame[8].f) * ((jfloat(1)) - ((frame[20].f) + (frame[22].f))));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((frame[9].f) * ((frame[18].f) - (frame[16].f)));
	LINE_NUMBER(238);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = ((frame[10].f) * ((frame[19].f) + (frame[15].f)));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[1].f);
	LINE_NUMBER(241);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((frame[8].f) * ((frame[18].f) + (frame[16].f)));
	LINE_NUMBER(242);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((frame[9].f) * ((jfloat(1)) - ((frame[17].f) + (frame[22].f))));
	LINE_NUMBER(243);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = ((frame[10].f) * ((frame[21].f) - (frame[14].f)));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[2].f);
	LINE_NUMBER(246);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = ((frame[8].f) * ((frame[19].f) - (frame[15].f)));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = ((frame[9].f) * ((frame[21].f) + (frame[14].f)));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((frame[10].f) * ((jfloat(1)) - ((frame[17].f) + (frame[20].f))));
	LINE_NUMBER(249);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[3].f);
	LINE_NUMBER(251);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(252);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(253);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(254);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(266);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(267);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z);
	LINE_NUMBER(268);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x);
	LINE_NUMBER(269);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y);
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z);
	LINE_NUMBER(271);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[3].o)))->F_x);
	LINE_NUMBER(272);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[3].o)))->F_y);
	LINE_NUMBER(273);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[3].o)))->F_z);
	LINE_NUMBER(274);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[4].o)))->F_x);
	LINE_NUMBER(275);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[4].o)))->F_y);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[4].o)))->F_z);
	LINE_NUMBER(277);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(278);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(279);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(280);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_cpy_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Matrix4(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_trn_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:trn", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = 12;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(294);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = 13;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(295);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 14;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_trn_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:trn", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = 12;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(306);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = 13;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + (frame[2].f));
	LINE_NUMBER(307);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 14;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) + (frame[3].f));
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_getValues_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:getValues", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:mul", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	SM_com_badlogic_gdx_math_Matrix4_mul_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_mulLeft_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:mulLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(338);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpMat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(339);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpMat;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[0].o))->F_val;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	SM_com_badlogic_gdx_math_Matrix4_mul_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpMat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_tra_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:tra", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[1].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	LINE_NUMBER(348);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12)));
	LINE_NUMBER(349);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	LINE_NUMBER(350);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	LINE_NUMBER(351);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	LINE_NUMBER(352);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(4);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	LINE_NUMBER(353);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = 8;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	LINE_NUMBER(354);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp2 = 12;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	LINE_NUMBER(355);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[1].f);
	LINE_NUMBER(356);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = 9;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	LINE_NUMBER(357);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp4 = 13;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7)));
	LINE_NUMBER(358);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[2].f);
	LINE_NUMBER(359);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[4].f);
	LINE_NUMBER(360);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp5 = 14;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11)));
	LINE_NUMBER(361);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[3].f);
	LINE_NUMBER(362);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[5].f);
	LINE_NUMBER(363);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (frame[6].f);
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:idt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	LINE_NUMBER(371);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0));
	LINE_NUMBER(372);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(373);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (jfloat(0));
	LINE_NUMBER(374);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(375);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(1));
	LINE_NUMBER(376);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(377);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (jfloat(0));
	LINE_NUMBER(378);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(379);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(380);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(1));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (jfloat(0));
	LINE_NUMBER(382);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(383);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(384);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(385);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_inv_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:inv", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = temp1 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp5 = temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp6 = temp5 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp7 = temp3 - (temp6 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp8 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp9 = temp8 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp10 = temp9 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp11 = temp7 - (temp10 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp12 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp13 = temp12 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp14 = temp13 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp15 = temp11 + (temp14 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp16 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp17 = temp16 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp18 = temp17 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp19 = temp15 + (temp18 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp20 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp21 = temp20 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp22 = temp21 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp23 = temp19 - (temp22 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp24 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp25 = temp24 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp26 = temp25 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp27 = temp23 - (temp26 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp28 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp29 = temp28 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp30 = temp29 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp31 = temp27 + (temp30 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp32 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp33 = temp32 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp34 = temp33 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp35 = temp31 + (temp34 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp36 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp37 = temp36 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp38 = temp37 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp39 = temp35 - (temp38 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp40 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp41 = temp40 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp42 = temp41 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp43 = temp39 - (temp42 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp44 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp45 = temp44 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp46 = temp45 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp47 = temp43 + (temp46 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp48 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp49 = temp48 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp50 = temp49 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp51 = temp47 + (temp50 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp52 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp53 = temp52 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp54 = temp53 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp55 = temp51 - (temp54 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp56 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp57 = temp56 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp58 = temp57 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp59 = temp55 - (temp58 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp60 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp61 = temp60 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp62 = temp61 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp63 = temp59 + (temp62 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp64 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp65 = temp64 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp66 = temp65 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp67 = temp63 + (temp66 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp68 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp69 = temp68 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp70 = temp69 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp71 = temp67 - (temp70 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp72 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp73 = temp72 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp74 = temp73 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp75 = temp71 - (temp74 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp76 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp77 = temp76 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp78 = temp77 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp79 = temp75 + (temp78 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp80 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp81 = temp80 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp82 = temp81 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp83 = temp79 + (temp82 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp84 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp85 = temp84 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp86 = temp85 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp87 = temp83 - (temp86 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp88 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp89 = temp88 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp90 = temp89 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp91 = temp87 - (temp90 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp92 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp93 = temp92 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp94 = temp93 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[1].f = (temp91 + (temp94 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	LINE_NUMBER(405);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"non-invertible matrix"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = temp1 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = temp3 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp5 = temp2 - (temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp6 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp7 = temp6 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp8 = temp5 + (temp7 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp9 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp10 = temp9 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp11 = temp8 - (temp10 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp12 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp13 = temp12 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp14 = temp11 - (temp13 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp15 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp16 = temp15 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].f = (temp14 + (temp16 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	LINE_NUMBER(408);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp17 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp18 = temp17 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp19 = temp18 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp20 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp21 = temp20 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp22 = temp19 - (temp21 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp23 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp24 = temp23 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp25 = temp22 - (temp24 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp26 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp27 = temp26 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp28 = temp25 + (temp27 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp29 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp30 = temp29 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp31 = temp28 + (temp30 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp32 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp33 = temp32 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[3].f = (temp31 - (temp33 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	LINE_NUMBER(410);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp34 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp35 = temp34 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp36 = temp35 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp37 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp38 = temp37 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp39 = temp36 - (temp38 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp40 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp41 = temp40 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp42 = temp39 + (temp41 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp43 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp44 = temp43 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp45 = temp42 - (temp44 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp46 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp47 = temp46 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp48 = temp45 - (temp47 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp49 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp50 = temp49 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[4].f = (temp48 + (temp50 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	LINE_NUMBER(412);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp51 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp52 = temp51 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp53 = temp52 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp54 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp55 = temp54 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp56 = temp53 - (temp55 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp57 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp58 = temp57 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp59 = temp56 - (temp58 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp60 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp61 = temp60 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp62 = temp59 + (temp61 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp63 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp64 = temp63 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp65 = temp62 + (temp64 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp66 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp67 = temp66 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[5].f = (temp65 - (temp67 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)))));
	LINE_NUMBER(414);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp68 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp69 = temp68 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp70 = temp69 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp71 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp72 = temp71 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp73 = temp70 - (temp72 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp74 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp75 = temp74 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp76 = temp73 - (temp75 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp77 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp78 = temp77 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp79 = temp76 + (temp78 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp80 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp81 = temp80 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp82 = temp79 + (temp81 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp83 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp84 = temp83 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[6].f = (temp82 - (temp84 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	LINE_NUMBER(416);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp85 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp86 = temp85 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp87 = temp86 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp88 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp89 = temp88 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp90 = temp87 - (temp89 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp91 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp92 = temp91 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp93 = temp90 + (temp92 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp94 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp95 = temp94 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp96 = temp93 - (temp95 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp97 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp98 = temp97 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp99 = temp96 - (temp98 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp100 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp101 = temp100 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[7].f = (temp99 + (temp101 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	LINE_NUMBER(418);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp102 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp103 = temp102 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp104 = temp103 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp105 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp106 = temp105 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp107 = temp104 - (temp106 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp108 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp109 = temp108 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp110 = temp107 - (temp109 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp111 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp112 = temp111 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp113 = temp110 + (temp112 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp114 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp115 = temp114 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp116 = temp113 + (temp115 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp117 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp118 = temp117 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[8].f = (temp116 - (temp118 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	LINE_NUMBER(420);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp119 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp120 = temp119 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp121 = temp120 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp122 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp123 = temp122 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp124 = temp121 - (temp123 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp125 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp126 = temp125 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp127 = temp124 + (temp126 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp128 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp129 = temp128 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp130 = temp127 - (temp129 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp131 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp132 = temp131 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp133 = temp130 - (temp132 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp134 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp135 = temp134 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[9].f = (temp133 + (temp135 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)))));
	LINE_NUMBER(422);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp136 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp137 = temp136 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp138 = temp137 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp139 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp140 = temp139 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp141 = temp138 - (temp140 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp142 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp143 = temp142 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp144 = temp141 + (temp143 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp145 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp146 = temp145 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp147 = temp144 - (temp146 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp148 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp149 = temp148 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp150 = temp147 - (temp149 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp151 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp152 = temp151 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[10].f = (temp150 + (temp152 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	LINE_NUMBER(424);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp153 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp154 = temp153 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp155 = temp154 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp156 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp157 = temp156 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp158 = temp155 - (temp157 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp159 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp160 = temp159 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp161 = temp158 - (temp160 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp162 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp163 = temp162 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp164 = temp161 + (temp163 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp165 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp166 = temp165 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp167 = temp164 + (temp166 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp168 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp169 = temp168 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[11].f = (temp167 - (temp169 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	LINE_NUMBER(426);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp170 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp171 = temp170 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp172 = temp171 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp173 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp174 = temp173 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp175 = temp172 - (temp174 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp176 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp177 = temp176 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp178 = temp175 + (temp177 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp179 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp180 = temp179 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp181 = temp178 - (temp180 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp182 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp183 = temp182 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp184 = temp181 - (temp183 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp185 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp186 = temp185 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[12].f = (temp184 + (temp186 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	LINE_NUMBER(428);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp187 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp188 = temp187 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp189 = temp188 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp190 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp191 = temp190 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp192 = temp189 - (temp191 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp193 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp194 = temp193 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp195 = temp192 - (temp194 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp196 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp197 = temp196 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp198 = temp195 + (temp197 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp199 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp200 = temp199 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp201 = temp198 + (temp200 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp202 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp203 = temp202 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[13].f = (temp201 - (temp203 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14)))));
	LINE_NUMBER(430);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp204 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp205 = temp204 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp206 = temp205 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp207 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp208 = temp207 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp209 = temp206 - (temp208 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp210 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp211 = temp210 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp212 = temp209 - (temp211 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp213 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp214 = temp213 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp215 = temp212 + (temp214 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp216 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp217 = temp216 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp218 = temp215 + (temp217 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp219 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp220 = temp219 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[14].f = (temp218 - (temp220 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)))));
	LINE_NUMBER(432);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp221 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp222 = temp221 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp223 = temp222 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp224 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp225 = temp224 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp226 = temp223 - (temp225 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp227 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp228 = temp227 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp229 = temp226 + (temp228 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp230 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp231 = temp230 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp232 = temp229 - (temp231 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp233 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp234 = temp233 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp235 = temp232 - (temp234 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp236 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp237 = temp236 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[15].f = (temp235 + (temp237 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)))));
	LINE_NUMBER(434);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp238 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp239 = temp238 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp240 = temp239 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp241 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp242 = temp241 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp243 = temp240 - (temp242 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp244 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp245 = temp244 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp246 = temp243 - (temp245 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp247 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp248 = temp247 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp249 = temp246 + (temp248 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp250 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp251 = temp250 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp252 = temp249 + (temp251 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp253 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp254 = temp253 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[16].f = (temp252 - (temp254 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)))));
	LINE_NUMBER(436);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp255 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp256 = temp255 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp257 = temp256 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp258 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp259 = temp258 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp260 = temp257 - (temp259 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp261 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp262 = temp261 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp263 = temp260 + (temp262 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp264 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp265 = temp264 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp266 = temp263 - (temp265 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp267 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp268 = temp267 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp269 = temp266 - (temp268 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp270 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp271 = temp270 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[17].f = (temp269 + (temp271 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)))));
	LINE_NUMBER(438);
	frame[18].f = ((jfloat(1)) / (frame[1].f));
	LINE_NUMBER(439);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((frame[2].f) * (frame[18].f));
	LINE_NUMBER(440);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((frame[6].f) * (frame[18].f));
	LINE_NUMBER(441);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = ((frame[10].f) * (frame[18].f));
	LINE_NUMBER(442);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = ((frame[14].f) * (frame[18].f));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((frame[3].f) * (frame[18].f));
	LINE_NUMBER(444);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((frame[7].f) * (frame[18].f));
	LINE_NUMBER(445);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = ((frame[11].f) * (frame[18].f));
	LINE_NUMBER(446);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = ((frame[15].f) * (frame[18].f));
	LINE_NUMBER(447);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = ((frame[4].f) * (frame[18].f));
	LINE_NUMBER(448);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = ((frame[8].f) * (frame[18].f));
	LINE_NUMBER(449);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((frame[12].f) * (frame[18].f));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = ((frame[16].f) * (frame[18].f));
	LINE_NUMBER(451);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((frame[5].f) * (frame[18].f));
	LINE_NUMBER(452);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((frame[9].f) * (frame[18].f));
	LINE_NUMBER(453);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = ((frame[13].f) * (frame[18].f));
	LINE_NUMBER(454);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = ((frame[17].f) * (frame[18].f));
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Matrix4_det_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:det", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = temp1 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp5 = temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp6 = temp5 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp7 = temp3 - (temp6 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp8 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp9 = temp8 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp10 = temp9 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp11 = temp7 - (temp10 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp12 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp13 = temp12 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp14 = temp13 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp15 = temp11 + (temp14 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp16 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp17 = temp16 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp18 = temp17 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp19 = temp15 + (temp18 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp20 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp21 = temp20 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp22 = temp21 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp23 = temp19 - (temp22 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp24 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp25 = temp24 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp26 = temp25 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp27 = temp23 - (temp26 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp28 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp29 = temp28 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp30 = temp29 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp31 = temp27 + (temp30 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp32 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp33 = temp32 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp34 = temp33 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp35 = temp31 + (temp34 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp36 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp37 = temp36 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp38 = temp37 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp39 = temp35 - (temp38 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp40 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp41 = temp40 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp42 = temp41 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp43 = temp39 - (temp42 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp44 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp45 = temp44 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp46 = temp45 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp47 = temp43 + (temp46 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp48 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp49 = temp48 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp50 = temp49 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp51 = temp47 + (temp50 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp52 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp53 = temp52 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp54 = temp53 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp55 = temp51 - (temp54 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp56 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp57 = temp56 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp58 = temp57 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp59 = temp55 - (temp58 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp60 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp61 = temp60 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp62 = temp61 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp63 = temp59 + (temp62 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp64 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp65 = temp64 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp66 = temp65 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp67 = temp63 + (temp66 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp68 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp69 = temp68 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp70 = temp69 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp71 = temp67 - (temp70 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp72 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp73 = temp72 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp74 = temp73 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp75 = temp71 - (temp74 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp76 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp77 = temp76 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp78 = temp77 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp79 = temp75 + (temp78 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp80 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp81 = temp80 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp82 = temp81 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp83 = temp79 + (temp82 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp84 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp85 = temp84 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp86 = temp85 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp87 = temp83 - (temp86 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp88 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp89 = temp88 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp90 = temp89 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp91 = temp87 - (temp90 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp92 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp93 = temp92 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp94 = temp93 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return (temp91 + (temp94 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Matrix4_det3x3_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:det3x3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = temp1 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = temp3 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp5 = temp2 + (temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp6 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp7 = temp6 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp8 = temp5 + (temp7 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp9 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp10 = temp9 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp11 = temp8 - (temp10 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp12 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp13 = temp12 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp14 = temp11 - (temp13 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp15 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp16 = temp15 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return (temp14 - (temp16 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))))));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToProjection_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToProjection", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(490);
	jdouble temp0 = jdouble(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_tan_double_R_double(ctx, (((jdouble((frame[3].f))) * (jdouble(0.017453292519943295))) / (jdouble(2.0))));
	frame[5].f = (jfloat((temp0 / temp1)));
	LINE_NUMBER(491);
	frame[6].f = (((frame[2].f) + (frame[1].f)) / ((frame[1].f) - (frame[2].f)));
	LINE_NUMBER(492);
	frame[7].f = ((((jfloat(2)) * (frame[2].f)) * (frame[1].f)) / ((frame[1].f) - (frame[2].f)));
	LINE_NUMBER(493);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((frame[5].f) / (frame[4].f));
	LINE_NUMBER(494);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(495);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(496);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(497);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0));
	LINE_NUMBER(498);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[5].f);
	LINE_NUMBER(499);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(500);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(501);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(502);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(503);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[6].f);
	LINE_NUMBER(504);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(-1.0f));
	LINE_NUMBER(505);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (jfloat(0));
	LINE_NUMBER(506);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (jfloat(0));
	LINE_NUMBER(507);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[7].f);
	LINE_NUMBER(508);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(0));
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToProjection_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToProjection", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(523);
	frame[7].f = (((jfloat(2)) * (frame[5].f)) / ((frame[2].f) - (frame[1].f)));
	LINE_NUMBER(524);
	frame[8].f = (((jfloat(2)) * (frame[5].f)) / ((frame[4].f) - (frame[3].f)));
	LINE_NUMBER(525);
	frame[9].f = (((frame[2].f) + (frame[1].f)) / ((frame[2].f) - (frame[1].f)));
	LINE_NUMBER(526);
	frame[10].f = (((frame[4].f) + (frame[3].f)) / ((frame[4].f) - (frame[3].f)));
	LINE_NUMBER(527);
	frame[11].f = (((frame[6].f) + (frame[5].f)) / ((frame[5].f) - (frame[6].f)));
	LINE_NUMBER(528);
	frame[12].f = ((((jfloat(2)) * (frame[6].f)) * (frame[5].f)) / ((frame[5].f) - (frame[6].f)));
	LINE_NUMBER(529);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[7].f);
	LINE_NUMBER(530);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(531);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(532);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(533);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0));
	LINE_NUMBER(534);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[8].f);
	LINE_NUMBER(535);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(536);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(537);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[9].f);
	LINE_NUMBER(538);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[10].f);
	LINE_NUMBER(539);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[11].f);
	LINE_NUMBER(540);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(-1.0f));
	LINE_NUMBER(541);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (jfloat(0));
	LINE_NUMBER(542);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (jfloat(0));
	LINE_NUMBER(543);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[12].f);
	LINE_NUMBER(544);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(0));
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToOrtho2D", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToOrtho_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToOrtho_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), (frame[1].f), ((frame[1].f) + (frame[3].f)), (frame[2].f), ((frame[2].f) + (frame[4].f)), (jfloat(0)), (jfloat(1)));
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToOrtho2D", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToOrtho_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToOrtho_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), (frame[1].f), ((frame[1].f) + (frame[3].f)), (frame[2].f), ((frame[2].f) + (frame[4].f)), (frame[5].f), (frame[6].f));
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToOrtho_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToOrtho", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(584);
	frame[7].f = ((jfloat(2)) / ((frame[2].f) - (frame[1].f)));
	LINE_NUMBER(585);
	frame[8].f = ((jfloat(2)) / ((frame[4].f) - (frame[3].f)));
	LINE_NUMBER(586);
	frame[9].f = ((jfloat(-2.0f)) / ((frame[6].f) - (frame[5].f)));
	LINE_NUMBER(588);
	frame[10].f = ((-((frame[2].f) + (frame[1].f))) / ((frame[2].f) - (frame[1].f)));
	LINE_NUMBER(589);
	frame[11].f = ((-((frame[4].f) + (frame[3].f))) / ((frame[4].f) - (frame[3].f)));
	LINE_NUMBER(590);
	frame[12].f = ((-((frame[6].f) + (frame[5].f))) / ((frame[6].f) - (frame[5].f)));
	LINE_NUMBER(592);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[7].f);
	LINE_NUMBER(593);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(594);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(595);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(596);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0));
	LINE_NUMBER(597);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[8].f);
	LINE_NUMBER(598);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(599);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(600);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(601);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(602);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[9].f);
	LINE_NUMBER(603);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(604);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[10].f);
	LINE_NUMBER(605);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[11].f);
	LINE_NUMBER(606);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[12].f);
	LINE_NUMBER(607);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(608);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(616);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(617);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z);
	LINE_NUMBER(618);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setTranslation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[1].f);
	LINE_NUMBER(628);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[2].f);
	LINE_NUMBER(629);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[3].f);
	LINE_NUMBER(630);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(639);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(640);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(641);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z);
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToTranslation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(652);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(653);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[1].f);
	LINE_NUMBER(654);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[2].f);
	LINE_NUMBER(655);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[3].f);
	LINE_NUMBER(656);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToTranslationAndScaling_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToTranslationAndScaling", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(666);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(667);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(668);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z);
	LINE_NUMBER(669);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x);
	LINE_NUMBER(670);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y);
	LINE_NUMBER(671);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z);
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToTranslationAndScaling_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToTranslationAndScaling", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(686);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(687);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[1].f);
	LINE_NUMBER(688);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[2].f);
	LINE_NUMBER(689);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[3].f);
	LINE_NUMBER(690);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[4].f);
	LINE_NUMBER(691);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[5].f);
	LINE_NUMBER(692);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[6].f);
	LINE_NUMBER(693);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToRotation_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToRotation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(701);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(703);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(705);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, (frame[1].o), (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToRotationRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToRotationRad", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(713);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(715);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(717);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxisRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxisRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, (frame[1].o), (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToRotation_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToRotation", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(727);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(728);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(729);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(731);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToRotationRad_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToRotationRad", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(741);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(743);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(745);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToRotation_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToRotation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(753);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromCross_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromCross_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToRotation_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToRotation", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(765);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromCross_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromCross_float_float_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setFromEulerAngles_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setFromEulerAngles", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(774);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setEulerAngles_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setEulerAngles_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(775);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setFromEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setFromEulerAnglesRad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(784);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(785);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToScaling_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToScaling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(792);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(793);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(794);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(795);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z);
	LINE_NUMBER(796);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToScaling_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToScaling", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(806);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[1].f);
	LINE_NUMBER(807);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[2].f);
	LINE_NUMBER(808);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[3].f);
	LINE_NUMBER(809);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToLookAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(818);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(819);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(820);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(821);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(822);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(823);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(4);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(824);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp2 = 8;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z);
	LINE_NUMBER(825);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(1);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(826);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp4 = jint(5);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(827);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp5 = 9;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z);
	LINE_NUMBER(828);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = jint(2);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(829);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp7 = 6;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(830);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp8 = 10;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z));
	LINE_NUMBER(831);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToLookAt", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(840);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(841);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(842);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpMat;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[1].o, (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)), (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)), (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(843);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setToWorld_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setToWorld", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(847);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(848);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_right;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(849);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_right;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(850);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_right;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[3].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[3].o, (jfloat(-1.0f)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[1].o));
	LINE_NUMBER(851);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_lerp_com_badlogic_gdx_math_Matrix4_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:lerp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(859);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (16)) goto label_2;
	}
	{
	LINE_NUMBER(860);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i))) * ((jfloat(1)) - (frame[2].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (temp1 + (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i))) * (frame[2].f)));
	LINE_NUMBER(859);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(861);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_avg_com_badlogic_gdx_math_Matrix4_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:avg", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(870);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(871);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(873);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(874);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(876);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(877);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_right;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(879);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].f));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[2].o, ((jfloat(1)) - (frame[2].f)));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToScaling_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToScaling_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(880);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat2;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_slerp_com_badlogic_gdx_math_Quaternion_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_slerp_com_badlogic_gdx_math_Quaternion_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, sp[2].o, ((jfloat(1)) - (frame[2].f)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(881);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].f));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_right;
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[2].o, ((jfloat(1)) - (frame[2].f)));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(882);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_avg_Array1_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:avg", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(890);
	frame[2].f = ((jfloat(1)) / (jfloat((((jarray) nullCheck(ctx, (frame[1].o)))->length))));
	LINE_NUMBER(892);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(893);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat2;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(894);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(896);
	frame[3].i = (jint(1));
	}
label_5:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(897);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(898);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat2;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(899);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(896);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(901);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o);
	LINE_NUMBER(903);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToScaling_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToScaling_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(904);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(905);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(906);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_avg_Array1_com_badlogic_gdx_math_Matrix4_Array1_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:avg", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(916);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(917);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat2;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(918);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(920);
	frame[3].i = (jint(1));
	}
label_4:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(921);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(922);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat2;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_exp_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_mul_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(923);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpUp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(920);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(925);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_nor_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o);
	LINE_NUMBER(927);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToScaling_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToScaling_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(928);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(929);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpForward;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(930);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(936);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))));
	LINE_NUMBER(937);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	LINE_NUMBER(938);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	LINE_NUMBER(939);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(940);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(4);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	LINE_NUMBER(941);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp4 = jint(5);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))));
	LINE_NUMBER(942);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp5 = 6;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	LINE_NUMBER(943);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(944);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(945);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(946);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(1));
	LINE_NUMBER(947);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(948);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 12;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	LINE_NUMBER(949);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp7 = 13;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7)));
	LINE_NUMBER(950);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (jfloat(0));
	LINE_NUMBER(951);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp8 = 15;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8)));
	LINE_NUMBER(952);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(967);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00);
	LINE_NUMBER(968);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10);
	LINE_NUMBER(969);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(970);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(971);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01);
	LINE_NUMBER(972);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11);
	LINE_NUMBER(973);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(974);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(975);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(976);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(977);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(1));
	LINE_NUMBER(978);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(979);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02);
	LINE_NUMBER(980);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12);
	LINE_NUMBER(981);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (jfloat(0));
	LINE_NUMBER(982);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(983);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setAsAffine_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setAsAffine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(999);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00);
	LINE_NUMBER(1000);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10);
	LINE_NUMBER(1001);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01);
	LINE_NUMBER(1002);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11);
	LINE_NUMBER(1003);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02);
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12);
	LINE_NUMBER(1005);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_setAsAffine_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:setAsAffine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))));
	LINE_NUMBER(1021);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	LINE_NUMBER(1022);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp2 = jint(4);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))));
	LINE_NUMBER(1023);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(5);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	LINE_NUMBER(1024);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp4 = 12;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12)));
	LINE_NUMBER(1025);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp5 = 13;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	LINE_NUMBER(1026);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1030);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(1031);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(5);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(1032);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 10;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(1033);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_scl_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:scl", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1037);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[1].f));
	LINE_NUMBER(1038);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(5);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (frame[2].f));
	LINE_NUMBER(1039);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 10;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) * (frame[3].f));
	LINE_NUMBER(1040);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_scl_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1044);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[1].f));
	LINE_NUMBER(1045);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(5);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (frame[1].f));
	LINE_NUMBER(1046);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 10;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) * (frame[1].f));
	LINE_NUMBER(1047);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:getTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1051);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12)));
	LINE_NUMBER(1052);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	LINE_NUMBER(1053);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	LINE_NUMBER(1054);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_boolean_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:getRotation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1062);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromMatrix_boolean_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[1].o), (frame[2].i), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:getRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromMatrix_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromMatrix_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Quaternion])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Matrix4_getScaleXSquared_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:getScaleXSquared", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return (temp3 + (temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)))));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Matrix4_getScaleYSquared_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:getScaleYSquared", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return (temp3 + (temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)))));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Matrix4_getScaleZSquared_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:getScaleZSquared", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1084);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return (temp3 + (temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)))));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Matrix4_getScaleX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:getScaleX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1089);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1090);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Matrix4_getScaleXSquared_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScaleXSquared_R_float])(ctx, (frame[0].o));
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(temp0)));
	jfloat temp2 = jfloat(temp1);
	sp[0].f = temp2;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(1089);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Matrix4_getScaleY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:getScaleY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1095);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1096);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Matrix4_getScaleYSquared_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScaleYSquared_R_float])(ctx, (frame[0].o));
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(temp0)));
	jfloat temp2 = jfloat(temp1);
	sp[0].f = temp2;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(1095);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Matrix4_getScaleZ_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:getScaleZ", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1101);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1102);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Matrix4_getScaleZSquared_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScaleZSquared_R_float])(ctx, (frame[0].o));
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(temp0)));
	jfloat temp2 = jfloat(temp1);
	sp[0].f = temp2;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(1101);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:getScale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1108);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Matrix4_getScaleX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScaleX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Matrix4_getScaleY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScaleY_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Matrix4_getScaleZ_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScaleZ_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_toNormalMatrix_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:toNormalMatrix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (jfloat(0));
	LINE_NUMBER(1114);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (jfloat(0));
	LINE_NUMBER(1115);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (jfloat(0));
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_inv_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_inv_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_tra_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_tra_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1120);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_Matrix4_mul_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[22];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:mul", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1260);
	frame[2].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))));
	LINE_NUMBER(1261);
	frame[3].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))));
	LINE_NUMBER(1262);
	frame[4].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (9))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11)))));
	LINE_NUMBER(1263);
	frame[5].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (12)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (13))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (14))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15)))));
	LINE_NUMBER(1264);
	frame[6].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))));
	LINE_NUMBER(1265);
	frame[7].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))));
	LINE_NUMBER(1266);
	frame[8].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (9))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11)))));
	LINE_NUMBER(1267);
	frame[9].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (12)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (13))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (14))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15)))));
	LINE_NUMBER(1268);
	frame[10].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))));
	LINE_NUMBER(1269);
	frame[11].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))));
	LINE_NUMBER(1270);
	frame[12].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (9))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11)))));
	LINE_NUMBER(1271);
	frame[13].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (12)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (13))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (14))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15)))));
	LINE_NUMBER(1272);
	frame[14].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))));
	LINE_NUMBER(1273);
	frame[15].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))));
	LINE_NUMBER(1274);
	frame[16].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (9))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11)))));
	LINE_NUMBER(1275);
	frame[17].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (12)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (13))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (14))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15)))));
	LINE_NUMBER(1276);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(1277);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))) = (frame[6].f);
	LINE_NUMBER(1278);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))) = (frame[10].f);
	LINE_NUMBER(1279);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))) = (frame[14].f);
	LINE_NUMBER(1280);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))) = (frame[3].f);
	LINE_NUMBER(1281);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))) = (frame[7].f);
	LINE_NUMBER(1282);
	ARRAY_ACCESS(jfloat, (frame[0].o), (6)) = (frame[11].f);
	LINE_NUMBER(1283);
	ARRAY_ACCESS(jfloat, (frame[0].o), (7)) = (frame[15].f);
	LINE_NUMBER(1284);
	ARRAY_ACCESS(jfloat, (frame[0].o), (8)) = (frame[4].f);
	LINE_NUMBER(1285);
	ARRAY_ACCESS(jfloat, (frame[0].o), (9)) = (frame[8].f);
	LINE_NUMBER(1286);
	ARRAY_ACCESS(jfloat, (frame[0].o), (10)) = (frame[12].f);
	LINE_NUMBER(1287);
	ARRAY_ACCESS(jfloat, (frame[0].o), (11)) = (frame[16].f);
	LINE_NUMBER(1288);
	ARRAY_ACCESS(jfloat, (frame[0].o), (12)) = (frame[5].f);
	LINE_NUMBER(1289);
	ARRAY_ACCESS(jfloat, (frame[0].o), (13)) = (frame[9].f);
	LINE_NUMBER(1290);
	ARRAY_ACCESS(jfloat, (frame[0].o), (14)) = (frame[13].f);
	LINE_NUMBER(1291);
	ARRAY_ACCESS(jfloat, (frame[0].o), (15)) = (frame[17].f);
	LINE_NUMBER(1292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_Matrix4_mulVec_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:mulVec", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1301);
	frame[2].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))));
	LINE_NUMBER(1302);
	frame[3].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))));
	LINE_NUMBER(1303);
	frame[4].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))));
	LINE_NUMBER(1304);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(1305);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (frame[3].f);
	LINE_NUMBER(1306);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (frame[4].f);
	LINE_NUMBER(1307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_Matrix4_prj_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:prj", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1316);
	frame[2].f = ((jfloat(1)) / ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1317);
	frame[3].f = (((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12)))) * (frame[2].f));
	LINE_NUMBER(1318);
	frame[4].f = (((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * (frame[2].f));
	LINE_NUMBER(1319);
	frame[5].f = (((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * (frame[2].f));
	LINE_NUMBER(1320);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (frame[3].f);
	LINE_NUMBER(1321);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (frame[4].f);
	LINE_NUMBER(1322);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (frame[5].f);
	LINE_NUMBER(1323);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_Matrix4_rot_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:rot", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1332);
	frame[2].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))));
	LINE_NUMBER(1333);
	frame[3].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))));
	LINE_NUMBER(1334);
	frame[4].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))));
	LINE_NUMBER(1335);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(1336);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (frame[3].f);
	LINE_NUMBER(1337);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (frame[4].f);
	LINE_NUMBER(1338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Matrix4_inv_Array1_float_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[23];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:inv", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1345);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_Matrix4_det_Array1_float_R_float(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(1346);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1347);
	frame[2].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1350);
	frame[3].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1353);
	frame[4].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1356);
	frame[5].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))));
	LINE_NUMBER(1359);
	frame[6].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1362);
	frame[7].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1365);
	frame[8].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1368);
	frame[9].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))));
	LINE_NUMBER(1371);
	frame[10].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1374);
	frame[11].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1377);
	frame[12].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1380);
	frame[13].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))));
	LINE_NUMBER(1383);
	frame[14].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))));
	LINE_NUMBER(1386);
	frame[15].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))));
	LINE_NUMBER(1389);
	frame[16].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))));
	LINE_NUMBER(1392);
	frame[17].f = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))));
	LINE_NUMBER(1395);
	frame[18].f = ((jfloat(1)) / (frame[1].f));
	LINE_NUMBER(1396);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))) = ((frame[2].f) * (frame[18].f));
	LINE_NUMBER(1397);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))) = ((frame[6].f) * (frame[18].f));
	LINE_NUMBER(1398);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))) = ((frame[10].f) * (frame[18].f));
	LINE_NUMBER(1399);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))) = ((frame[14].f) * (frame[18].f));
	LINE_NUMBER(1400);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))) = ((frame[3].f) * (frame[18].f));
	LINE_NUMBER(1401);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))) = ((frame[7].f) * (frame[18].f));
	LINE_NUMBER(1402);
	ARRAY_ACCESS(jfloat, (frame[0].o), (6)) = ((frame[11].f) * (frame[18].f));
	LINE_NUMBER(1403);
	ARRAY_ACCESS(jfloat, (frame[0].o), (7)) = ((frame[15].f) * (frame[18].f));
	LINE_NUMBER(1404);
	ARRAY_ACCESS(jfloat, (frame[0].o), (8)) = ((frame[4].f) * (frame[18].f));
	LINE_NUMBER(1405);
	ARRAY_ACCESS(jfloat, (frame[0].o), (9)) = ((frame[8].f) * (frame[18].f));
	LINE_NUMBER(1406);
	ARRAY_ACCESS(jfloat, (frame[0].o), (10)) = ((frame[12].f) * (frame[18].f));
	LINE_NUMBER(1407);
	ARRAY_ACCESS(jfloat, (frame[0].o), (11)) = ((frame[16].f) * (frame[18].f));
	LINE_NUMBER(1408);
	ARRAY_ACCESS(jfloat, (frame[0].o), (12)) = ((frame[5].f) * (frame[18].f));
	LINE_NUMBER(1409);
	ARRAY_ACCESS(jfloat, (frame[0].o), (13)) = ((frame[9].f) * (frame[18].f));
	LINE_NUMBER(1410);
	ARRAY_ACCESS(jfloat, (frame[0].o), (14)) = ((frame[13].f) * (frame[18].f));
	LINE_NUMBER(1411);
	ARRAY_ACCESS(jfloat, (frame[0].o), (15)) = ((frame[17].f) * (frame[18].f));
	LINE_NUMBER(1412);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Matrix4_det_Array1_float_R_float(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:det", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1420);
	popStackFrame(ctx);
	return ((((((((((((((((((((((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12)))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_translate_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:translate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1440);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:translate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1450);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = 12;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)))) * (frame[1].f);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp5 = temp4 + (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)))) * (frame[2].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (temp3 + (temp5 + (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8))) * (frame[3].f))));
	LINE_NUMBER(1451);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 13;
	jfloat temp9 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp10 = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)))) * (frame[1].f);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp11 = temp10 + (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)))) * (frame[2].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (temp9 + (temp11 + (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9))) * (frame[3].f))));
	LINE_NUMBER(1452);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp12 = 14;
	jfloat temp15 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp12);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp16 = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)))) * (frame[1].f);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp17 = temp16 + (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))) * (frame[2].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp12) = (temp15 + (temp17 + (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))) * (frame[3].f))));
	LINE_NUMBER(1453);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp18 = 15;
	jfloat temp21 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp18);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp22 = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))) * (frame[1].f);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp23 = temp22 + (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))) * (frame[2].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp18) = (temp21 + (temp23 + (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))) * (frame[3].f))));
	LINE_NUMBER(1454);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:rotate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1463);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1464);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(1465);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_rotateRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:rotateRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1474);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1475);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxisRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxisRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(1476);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_rotate_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:rotate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(1487);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1488);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxis_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(1489);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_rotateRad_float_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:rotateRad", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(1500);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1501);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromAxisRad_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(1502);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[40];
	auto stack = &frame[36];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:rotate", 40 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1510);
	frame[2].f = ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_x);
	frame[3].f = ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_y);
	frame[4].f = ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_z);
	frame[5].f = ((jfloat)((com_badlogic_gdx_math_Quaternion *) NULL_CHECK((frame[1].o)))->F_w);
	LINE_NUMBER(1511);
	frame[6].f = ((frame[2].f) * (frame[2].f));
	LINE_NUMBER(1512);
	frame[7].f = ((frame[2].f) * (frame[3].f));
	LINE_NUMBER(1513);
	frame[8].f = ((frame[2].f) * (frame[4].f));
	LINE_NUMBER(1514);
	frame[9].f = ((frame[2].f) * (frame[5].f));
	LINE_NUMBER(1515);
	frame[10].f = ((frame[3].f) * (frame[3].f));
	LINE_NUMBER(1516);
	frame[11].f = ((frame[3].f) * (frame[4].f));
	LINE_NUMBER(1517);
	frame[12].f = ((frame[3].f) * (frame[5].f));
	LINE_NUMBER(1518);
	frame[13].f = ((frame[4].f) * (frame[4].f));
	LINE_NUMBER(1519);
	frame[14].f = ((frame[4].f) * (frame[5].f));
	LINE_NUMBER(1521);
	frame[15].f = ((jfloat(1)) - ((jfloat(2)) * ((frame[10].f) + (frame[13].f))));
	LINE_NUMBER(1522);
	frame[16].f = ((jfloat(2)) * ((frame[7].f) - (frame[14].f)));
	LINE_NUMBER(1523);
	frame[17].f = ((jfloat(2)) * ((frame[8].f) + (frame[12].f)));
	LINE_NUMBER(1524);
	frame[18].f = ((jfloat(2)) * ((frame[7].f) + (frame[14].f)));
	LINE_NUMBER(1525);
	frame[19].f = ((jfloat(1)) - ((jfloat(2)) * ((frame[6].f) + (frame[13].f))));
	LINE_NUMBER(1526);
	frame[20].f = ((jfloat(2)) * ((frame[11].f) - (frame[9].f)));
	LINE_NUMBER(1527);
	frame[21].f = ((jfloat(2)) * ((frame[8].f) - (frame[12].f)));
	LINE_NUMBER(1528);
	frame[22].f = ((jfloat(2)) * ((frame[11].f) + (frame[9].f)));
	LINE_NUMBER(1529);
	frame[23].f = ((jfloat(1)) - ((jfloat(2)) * ((frame[6].f) + (frame[10].f))));
	LINE_NUMBER(1530);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) * (frame[15].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))) * (frame[18].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[24].f = (temp1 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))) * (frame[21].f)));
	LINE_NUMBER(1531);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) * (frame[16].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp2 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))) * (frame[19].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[25].f = (temp3 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))) * (frame[22].f)));
	LINE_NUMBER(1532);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) * (frame[17].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp5 = temp4 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))) * (frame[20].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[26].f = (temp5 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))) * (frame[23].f)));
	LINE_NUMBER(1533);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp6 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))) * (frame[15].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp7 = temp6 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))) * (frame[18].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[27].f = (temp7 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9))) * (frame[21].f)));
	LINE_NUMBER(1534);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp8 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))) * (frame[16].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp9 = temp8 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))) * (frame[19].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[28].f = (temp9 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9))) * (frame[22].f)));
	LINE_NUMBER(1535);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp10 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))) * (frame[17].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp11 = temp10 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))) * (frame[20].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[29].f = (temp11 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9))) * (frame[23].f)));
	LINE_NUMBER(1536);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp12 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))) * (frame[15].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp13 = temp12 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))) * (frame[18].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[30].f = (temp13 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))) * (frame[21].f)));
	LINE_NUMBER(1537);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp14 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))) * (frame[16].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp15 = temp14 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))) * (frame[19].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[31].f = (temp15 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))) * (frame[22].f)));
	LINE_NUMBER(1538);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp16 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))) * (frame[17].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp17 = temp16 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))) * (frame[20].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[32].f = (temp17 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))) * (frame[23].f)));
	LINE_NUMBER(1539);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp18 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))) * (frame[15].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp19 = temp18 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))) * (frame[18].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[33].f = (temp19 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))) * (frame[21].f)));
	LINE_NUMBER(1540);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp20 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))) * (frame[16].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp21 = temp20 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))) * (frame[19].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[34].f = (temp21 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))) * (frame[22].f)));
	LINE_NUMBER(1541);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp22 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))) * (frame[17].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp23 = temp22 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))) * (frame[20].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[35].f = (temp23 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11))) * (frame[23].f)));
	LINE_NUMBER(1542);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[24].f);
	LINE_NUMBER(1543);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[27].f);
	LINE_NUMBER(1544);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[30].f);
	LINE_NUMBER(1545);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[33].f);
	LINE_NUMBER(1546);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[25].f);
	LINE_NUMBER(1547);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[28].f);
	LINE_NUMBER(1548);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[31].f);
	LINE_NUMBER(1549);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[34].f);
	LINE_NUMBER(1550);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[26].f);
	LINE_NUMBER(1551);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[29].f);
	LINE_NUMBER(1552);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[32].f);
	LINE_NUMBER(1553);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (frame[35].f);
	LINE_NUMBER(1554);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:rotate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1562);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_quat;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_setFromCross_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_setFromCross_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_rotateTowardDirection_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:rotateTowardDirection", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1570);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(1571);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(1572);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(1573);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	jfloat temp1 = temp0 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	frame[3].f = (temp3 + (temp4 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)));
	LINE_NUMBER(1574);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	jfloat temp6 = temp5 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp7 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	jfloat temp8 = temp6 + (temp7 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp9 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	frame[4].f = (temp8 + (temp9 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)));
	LINE_NUMBER(1575);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp10 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	jfloat temp11 = temp10 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp12 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	jfloat temp13 = temp11 + (temp12 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp14 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	frame[5].f = (temp13 + (temp14 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z))));
	LINE_NUMBER(1576);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp15 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	jfloat temp16 = temp15 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp17 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	jfloat temp18 = temp16 + (temp17 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp19 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	frame[6].f = (temp18 + (temp19 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)));
	LINE_NUMBER(1577);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp20 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	jfloat temp21 = temp20 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp22 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	jfloat temp23 = temp21 + (temp22 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp24 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	frame[7].f = (temp23 + (temp24 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)));
	LINE_NUMBER(1578);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp25 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	jfloat temp26 = temp25 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp27 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	jfloat temp28 = temp26 + (temp27 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp29 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	frame[8].f = (temp28 + (temp29 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z))));
	LINE_NUMBER(1579);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp30 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	jfloat temp31 = temp30 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp32 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	jfloat temp33 = temp31 + (temp32 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp34 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	frame[9].f = (temp33 + (temp34 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)));
	LINE_NUMBER(1580);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp35 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	jfloat temp36 = temp35 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp37 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	jfloat temp38 = temp36 + (temp37 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp39 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	frame[10].f = (temp38 + (temp39 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)));
	LINE_NUMBER(1581);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp40 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	jfloat temp41 = temp40 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp42 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	jfloat temp43 = temp41 + (temp42 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp44 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	frame[11].f = (temp43 + (temp44 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z))));
	LINE_NUMBER(1582);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp45 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	jfloat temp46 = temp45 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp47 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	jfloat temp48 = temp46 + (temp47 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp49 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vex;
	frame[12].f = (temp48 + (temp49 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)));
	LINE_NUMBER(1583);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp50 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	jfloat temp51 = temp50 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp52 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	jfloat temp53 = temp51 + (temp52 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp54 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vey;
	frame[13].f = (temp53 + (temp54 * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)));
	LINE_NUMBER(1584);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp55 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	jfloat temp56 = temp55 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp57 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	jfloat temp58 = temp56 + (temp57 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp59 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_l_vez;
	frame[14].f = (temp58 + (temp59 * (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z))));
	LINE_NUMBER(1585);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[3].f);
	LINE_NUMBER(1586);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[6].f);
	LINE_NUMBER(1587);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[9].f);
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[12].f);
	LINE_NUMBER(1589);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[4].f);
	LINE_NUMBER(1590);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[7].f);
	LINE_NUMBER(1591);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[10].f);
	LINE_NUMBER(1592);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[13].f);
	LINE_NUMBER(1593);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[5].f);
	LINE_NUMBER(1594);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[8].f);
	LINE_NUMBER(1595);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[11].f);
	LINE_NUMBER(1596);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (frame[14].f);
	LINE_NUMBER(1597);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_rotateTowardTarget_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:rotateTowardTarget", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1605);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 - ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12)));
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp2 - ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	jfloat temp4 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp1, temp3, (temp4 - ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)))));
	LINE_NUMBER(1606);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Matrix4_tmpVec;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotateTowardDirection_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotateTowardDirection_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix4_scale_float_float_float_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:scale", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1616);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[1].f));
	LINE_NUMBER(1617);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(4);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (frame[2].f));
	LINE_NUMBER(1618);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 8;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) * (frame[3].f));
	LINE_NUMBER(1619);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp9 = jint(1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp9)) * (frame[1].f));
	LINE_NUMBER(1620);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp12 = jint(5);
	ARRAY_ACCESS(jfloat, sp[0].o, temp12) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp12)) * (frame[2].f));
	LINE_NUMBER(1621);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp15 = 9;
	ARRAY_ACCESS(jfloat, sp[0].o, temp15) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp15)) * (frame[3].f));
	LINE_NUMBER(1622);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp18 = jint(2);
	ARRAY_ACCESS(jfloat, sp[0].o, temp18) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp18)) * (frame[1].f));
	LINE_NUMBER(1623);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp21 = 6;
	ARRAY_ACCESS(jfloat, sp[0].o, temp21) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp21)) * (frame[2].f));
	LINE_NUMBER(1624);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp24 = 10;
	ARRAY_ACCESS(jfloat, sp[0].o, temp24) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp24)) * (frame[3].f));
	LINE_NUMBER(1625);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp27 = jint(3);
	ARRAY_ACCESS(jfloat, sp[0].o, temp27) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp27)) * (frame[1].f));
	LINE_NUMBER(1626);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp30 = 7;
	ARRAY_ACCESS(jfloat, sp[0].o, temp30) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp30)) * (frame[2].f));
	LINE_NUMBER(1627);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp33 = 11;
	ARRAY_ACCESS(jfloat, sp[0].o, temp33) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp33)) * (frame[3].f));
	LINE_NUMBER(1628);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Matrix4_extract4x3Matrix_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:extract4x3Matrix", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1634);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))));
	LINE_NUMBER(1635);
	sp[0].o = frame[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	LINE_NUMBER(1636);
	sp[0].o = frame[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	LINE_NUMBER(1637);
	sp[0].o = frame[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))));
	LINE_NUMBER(1638);
	sp[0].o = frame[1].o;
	jint temp4 = jint(4);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	LINE_NUMBER(1639);
	sp[0].o = frame[1].o;
	jint temp5 = jint(5);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	LINE_NUMBER(1640);
	sp[0].o = frame[1].o;
	jint temp6 = 6;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8)));
	LINE_NUMBER(1641);
	sp[0].o = frame[1].o;
	jint temp7 = 7;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	LINE_NUMBER(1642);
	sp[0].o = frame[1].o;
	jint temp8 = 8;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	LINE_NUMBER(1643);
	sp[0].o = frame[1].o;
	jint temp9 = 9;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12)));
	LINE_NUMBER(1644);
	sp[0].o = frame[1].o;
	jint temp10 = 10;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp10) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	LINE_NUMBER(1645);
	sp[0].o = frame[1].o;
	jint temp11 = 11;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp11) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	LINE_NUMBER(1646);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Matrix4_hasRotationOrScaling_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:hasRotationOrScaling", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1650);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))), (jfloat(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))), (jfloat(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))), (jfloat(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	LINE_NUMBER(1651);
	jint temp1 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	LINE_NUMBER(1652);
	jint temp1 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	if (temp0 != 0) goto label_4;
	}
label_1:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(1650);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_Matrix4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_Matrix4_serialVersionUID = jlong(-2717655254359579617ll);
	SF_com_badlogic_gdx_math_Matrix4_M00 = jint(0);
	SF_com_badlogic_gdx_math_Matrix4_M01 = jint(4);
	SF_com_badlogic_gdx_math_Matrix4_M02 = jint(8);
	SF_com_badlogic_gdx_math_Matrix4_M03 = jint(12);
	SF_com_badlogic_gdx_math_Matrix4_M10 = jint(1);
	SF_com_badlogic_gdx_math_Matrix4_M11 = jint(5);
	SF_com_badlogic_gdx_math_Matrix4_M12 = jint(9);
	SF_com_badlogic_gdx_math_Matrix4_M13 = jint(13);
	SF_com_badlogic_gdx_math_Matrix4_M20 = jint(2);
	SF_com_badlogic_gdx_math_Matrix4_M21 = jint(6);
	SF_com_badlogic_gdx_math_Matrix4_M22 = jint(10);
	SF_com_badlogic_gdx_math_Matrix4_M23 = jint(14);
	SF_com_badlogic_gdx_math_Matrix4_M30 = jint(3);
	SF_com_badlogic_gdx_math_Matrix4_M31 = jint(7);
	SF_com_badlogic_gdx_math_Matrix4_M32 = jint(11);
	SF_com_badlogic_gdx_math_Matrix4_M33 = jint(15);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix4:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	{
	LINE_NUMBER(76);
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	init_com_badlogic_gdx_math_Quaternion(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	SF_com_badlogic_gdx_math_Matrix4_quat = sp[0].o;
	LINE_NUMBER(77);
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	init_com_badlogic_gdx_math_Quaternion(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	SF_com_badlogic_gdx_math_Matrix4_quat2 = sp[0].o;
	LINE_NUMBER(78);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	SF_com_badlogic_gdx_math_Matrix4_l_vez = sp[0].o;
	LINE_NUMBER(79);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	SF_com_badlogic_gdx_math_Matrix4_l_vex = sp[0].o;
	LINE_NUMBER(80);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	SF_com_badlogic_gdx_math_Matrix4_l_vey = sp[0].o;
	LINE_NUMBER(81);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	SF_com_badlogic_gdx_math_Matrix4_tmpVec = sp[0].o;
	LINE_NUMBER(82);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	SF_com_badlogic_gdx_math_Matrix4_tmpMat = sp[0].o;
	LINE_NUMBER(83);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	SF_com_badlogic_gdx_math_Matrix4_right = sp[0].o;
	LINE_NUMBER(84);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	SF_com_badlogic_gdx_math_Matrix4_tmpForward = sp[0].o;
	LINE_NUMBER(85);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	SF_com_badlogic_gdx_math_Matrix4_tmpUp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Matrix4[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_Matrix4_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_set_Array1_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_cpy_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_trn_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_trn_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_getValues_R_Array1_float,
	(void *) M_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_mulLeft_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_tra_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_inv_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_det_R_float,
	(void *) M_com_badlogic_gdx_math_Matrix4_det3x3_R_float,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToProjection_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToProjection_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToOrtho_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToTranslationAndScaling_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToTranslationAndScaling_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToRotation_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToRotationRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToRotation_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToRotationRad_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToRotation_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToRotation_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setFromEulerAngles_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setFromEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToScaling_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToScaling_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setToWorld_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_lerp_com_badlogic_gdx_math_Matrix4_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_avg_com_badlogic_gdx_math_Matrix4_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_avg_Array1_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_avg_Array1_com_badlogic_gdx_math_Matrix4_Array1_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setAsAffine_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_setAsAffine_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_scl_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_scl_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_boolean_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_math_Matrix4_getScaleXSquared_R_float,
	(void *) M_com_badlogic_gdx_math_Matrix4_getScaleYSquared_R_float,
	(void *) M_com_badlogic_gdx_math_Matrix4_getScaleZSquared_R_float,
	(void *) M_com_badlogic_gdx_math_Matrix4_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_math_Matrix4_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_math_Matrix4_getScaleZ_R_float,
	(void *) M_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Matrix4_toNormalMatrix_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_translate_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_rotateRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_rotate_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_rotateRad_float_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_rotateTowardDirection_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_rotateTowardTarget_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_scale_float_float_float_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Matrix4_extract4x3Matrix_Array1_float,
	(void *) M_com_badlogic_gdx_math_Matrix4_hasRotationOrScaling_R_boolean,
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
	{ "set", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "set", "([F)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "set", "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "set", "(FFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "set", "(FFFFFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Quaternion;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "set", "(FFFFFFFFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "cpy", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "trn", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "trn", "(FFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "getValues", "()[F" },
	{ "mul", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "mulLeft", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "tra", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "idt", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "inv", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "det", "()F" },
	{ "det3x3", "()F" },
	{ "setToProjection", "(FFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToProjection", "(FFFFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToOrtho2D", "(FFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToOrtho2D", "(FFFFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToOrtho", "(FFFFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setTranslation", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setTranslation", "(FFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToTranslation", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToTranslation", "(FFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToTranslationAndScaling", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToTranslationAndScaling", "(FFFFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToRotation", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToRotationRad", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToRotation", "(FFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToRotationRad", "(FFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToRotation", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToRotation", "(FFFFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setFromEulerAngles", "(FFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setFromEulerAnglesRad", "(FFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToScaling", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToScaling", "(FFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToLookAt", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToLookAt", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setToWorld", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "lerp", "(Lcom/badlogic/gdx/math/Matrix4;F)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "avg", "(Lcom/badlogic/gdx/math/Matrix4;F)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "avg", "([Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "avg", "([Lcom/badlogic/gdx/math/Matrix4;[F)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "set", "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "set", "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setAsAffine", "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setAsAffine", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "scl", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "scl", "(FFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "scl", "(F)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "getTranslation", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getRotation", "(Lcom/badlogic/gdx/math/Quaternion;Z)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "getRotation", "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;" },
	{ "getScaleXSquared", "()F" },
	{ "getScaleYSquared", "()F" },
	{ "getScaleZSquared", "()F" },
	{ "getScaleX", "()F" },
	{ "getScaleY", "()F" },
	{ "getScaleZ", "()F" },
	{ "getScale", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "toNormalMatrix", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "translate", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "translate", "(FFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "rotate", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "rotateRad", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "rotate", "(FFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "rotateRad", "(FFFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "rotate", "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "rotate", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "rotateTowardDirection", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "rotateTowardTarget", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "scale", "(FFF)Lcom/badlogic/gdx/math/Matrix4;" },
	{ "extract4x3Matrix", "([F)V" },
	{ "hasRotationOrScaling", "()Z" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_serialVersionUID, "J", 26 },
	{ "M00", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M00, "I", 25 },
	{ "M01", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M01, "I", 25 },
	{ "M02", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M02, "I", 25 },
	{ "M03", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M03, "I", 25 },
	{ "M10", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M10, "I", 25 },
	{ "M11", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M11, "I", 25 },
	{ "M12", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M12, "I", 25 },
	{ "M13", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M13, "I", 25 },
	{ "M20", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M20, "I", 25 },
	{ "M21", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M21, "I", 25 },
	{ "M22", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M22, "I", 25 },
	{ "M23", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M23, "I", 25 },
	{ "M30", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M30, "I", 25 },
	{ "M31", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M31, "I", 25 },
	{ "M32", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M32, "I", 25 },
	{ "M33", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_M33, "I", 25 },
	{ "quat", &class_com_badlogic_gdx_math_Quaternion, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_quat, "Lcom/badlogic/gdx/math/Quaternion;", 24 },
	{ "quat2", &class_com_badlogic_gdx_math_Quaternion, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_quat2, "Lcom/badlogic/gdx/math/Quaternion;", 24 },
	{ "l_vez", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_l_vez, "Lcom/badlogic/gdx/math/Vector3;", 24 },
	{ "l_vex", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_l_vex, "Lcom/badlogic/gdx/math/Vector3;", 24 },
	{ "l_vey", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_l_vey, "Lcom/badlogic/gdx/math/Vector3;", 24 },
	{ "tmpVec", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_tmpVec, "Lcom/badlogic/gdx/math/Vector3;", 24 },
	{ "tmpMat", &class_com_badlogic_gdx_math_Matrix4, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_tmpMat, "Lcom/badlogic/gdx/math/Matrix4;", 24 },
	{ "right", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_right, "Lcom/badlogic/gdx/math/Vector3;", 24 },
	{ "tmpForward", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_tmpForward, "Lcom/badlogic/gdx/math/Vector3;", 24 },
	{ "tmpUp", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Matrix4_tmpUp, "Lcom/badlogic/gdx/math/Vector3;", 24 },
	{ "val", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_math_Matrix4, F_val), "[F", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Matrix4, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Matrix4, 0, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Matrix4_Array1_float, 0, "([F)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Quaternion, 0, "(Lcom/badlogic/gdx/math/Quaternion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3, 0, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Quaternion;Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix4_set_Array1_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_set_Array1_float_R_com_badlogic_gdx_math_Matrix4, "([F)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFFFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Quaternion;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFFFFFFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "cpy", (intptr_t) M_com_badlogic_gdx_math_Matrix4_cpy_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_cpy_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "trn", (intptr_t) M_com_badlogic_gdx_math_Matrix4_trn_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_trn_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "trn", (intptr_t) M_com_badlogic_gdx_math_Matrix4_trn_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_trn_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "getValues", (intptr_t) M_com_badlogic_gdx_math_Matrix4_getValues_R_Array1_float, VTABLE_com_badlogic_gdx_math_Matrix4_getValues_R_Array1_float, "()[F", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "mulLeft", (intptr_t) M_com_badlogic_gdx_math_Matrix4_mulLeft_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_mulLeft_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "tra", (intptr_t) M_com_badlogic_gdx_math_Matrix4_tra_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_tra_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "idt", (intptr_t) M_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "inv", (intptr_t) M_com_badlogic_gdx_math_Matrix4_inv_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_inv_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "det", (intptr_t) M_com_badlogic_gdx_math_Matrix4_det_R_float, VTABLE_com_badlogic_gdx_math_Matrix4_det_R_float, "()F", 1 },
	{ "det3x3", (intptr_t) M_com_badlogic_gdx_math_Matrix4_det3x3_R_float, VTABLE_com_badlogic_gdx_math_Matrix4_det3x3_R_float, "()F", 1 },
	{ "setToProjection", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToProjection_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToProjection_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToProjection", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToProjection_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToProjection_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToOrtho2D", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToOrtho2D", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToOrtho", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToOrtho_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToOrtho_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setTranslation", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setTranslation", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToTranslation", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToTranslation", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToTranslationAndScaling", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToTranslationAndScaling_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToTranslationAndScaling_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToTranslationAndScaling", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToTranslationAndScaling_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToTranslationAndScaling_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToRotation", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToRotation_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToRotation_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToRotationRad", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToRotationRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToRotationRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToRotation", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToRotation_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToRotation_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToRotationRad", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToRotationRad_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToRotationRad_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToRotation", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToRotation_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToRotation_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToRotation", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToRotation_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToRotation_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setFromEulerAngles", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setFromEulerAngles_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setFromEulerAngles_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setFromEulerAnglesRad", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setFromEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setFromEulerAnglesRad_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToScaling", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToScaling_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToScaling_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToScaling", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToScaling_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToScaling_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToLookAt", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToLookAt", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setToWorld", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setToWorld_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setToWorld_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "lerp", (intptr_t) M_com_badlogic_gdx_math_Matrix4_lerp_com_badlogic_gdx_math_Matrix4_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_lerp_com_badlogic_gdx_math_Matrix4_float_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;F)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "avg", (intptr_t) M_com_badlogic_gdx_math_Matrix4_avg_com_badlogic_gdx_math_Matrix4_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_avg_com_badlogic_gdx_math_Matrix4_float_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;F)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "avg", (intptr_t) M_com_badlogic_gdx_math_Matrix4_avg_Array1_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_avg_Array1_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4, "([Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "avg", (intptr_t) M_com_badlogic_gdx_math_Matrix4_avg_Array1_com_badlogic_gdx_math_Matrix4_Array1_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_avg_Array1_com_badlogic_gdx_math_Matrix4_Array1_float_R_com_badlogic_gdx_math_Matrix4, "([Lcom/badlogic/gdx/math/Matrix4;[F)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setAsAffine", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setAsAffine_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setAsAffine_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setAsAffine", (intptr_t) M_com_badlogic_gdx_math_Matrix4_setAsAffine_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_setAsAffine_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Matrix4_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Matrix4_scl_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_scl_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Matrix4_scl_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_scl_float_R_com_badlogic_gdx_math_Matrix4, "(F)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "getTranslation", (intptr_t) M_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getRotation", (intptr_t) M_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_boolean_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_boolean_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Quaternion;Z)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "getRotation", (intptr_t) M_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_math_Matrix4_getRotation_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "getScaleXSquared", (intptr_t) M_com_badlogic_gdx_math_Matrix4_getScaleXSquared_R_float, VTABLE_com_badlogic_gdx_math_Matrix4_getScaleXSquared_R_float, "()F", 1 },
	{ "getScaleYSquared", (intptr_t) M_com_badlogic_gdx_math_Matrix4_getScaleYSquared_R_float, VTABLE_com_badlogic_gdx_math_Matrix4_getScaleYSquared_R_float, "()F", 1 },
	{ "getScaleZSquared", (intptr_t) M_com_badlogic_gdx_math_Matrix4_getScaleZSquared_R_float, VTABLE_com_badlogic_gdx_math_Matrix4_getScaleZSquared_R_float, "()F", 1 },
	{ "getScaleX", (intptr_t) M_com_badlogic_gdx_math_Matrix4_getScaleX_R_float, VTABLE_com_badlogic_gdx_math_Matrix4_getScaleX_R_float, "()F", 1 },
	{ "getScaleY", (intptr_t) M_com_badlogic_gdx_math_Matrix4_getScaleY_R_float, VTABLE_com_badlogic_gdx_math_Matrix4_getScaleY_R_float, "()F", 1 },
	{ "getScaleZ", (intptr_t) M_com_badlogic_gdx_math_Matrix4_getScaleZ_R_float, VTABLE_com_badlogic_gdx_math_Matrix4_getScaleZ_R_float, "()F", 1 },
	{ "getScale", (intptr_t) M_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "toNormalMatrix", (intptr_t) M_com_badlogic_gdx_math_Matrix4_toNormalMatrix_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_toNormalMatrix_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_Matrix4_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_Matrix4_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "mulVec", (intptr_t) SM_com_badlogic_gdx_math_Matrix4_mulVec_Array1_float_Array1_float_int_int_int, 0, "([F[FIII)V", 265 },
	{ "prj", (intptr_t) SM_com_badlogic_gdx_math_Matrix4_prj_Array1_float_Array1_float_int_int_int, 0, "([F[FIII)V", 265 },
	{ "rot", (intptr_t) SM_com_badlogic_gdx_math_Matrix4_rot_Array1_float_Array1_float_int_int_int, 0, "([F[FIII)V", 265 },
	{ "mul", (intptr_t) SM_com_badlogic_gdx_math_Matrix4_mul_Array1_float_Array1_float, 0, "([F[F)V", 9 },
	{ "mulVec", (intptr_t) SM_com_badlogic_gdx_math_Matrix4_mulVec_Array1_float_Array1_float, 0, "([F[F)V", 9 },
	{ "prj", (intptr_t) SM_com_badlogic_gdx_math_Matrix4_prj_Array1_float_Array1_float, 0, "([F[F)V", 9 },
	{ "rot", (intptr_t) SM_com_badlogic_gdx_math_Matrix4_rot_Array1_float_Array1_float, 0, "([F[F)V", 9 },
	{ "inv", (intptr_t) SM_com_badlogic_gdx_math_Matrix4_inv_Array1_float_R_boolean, 0, "([F)Z", 9 },
	{ "det", (intptr_t) SM_com_badlogic_gdx_math_Matrix4_det_Array1_float_R_float, 0, "([F)F", 9 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_math_Matrix4_translate_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_translate_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "rotateRad", (intptr_t) M_com_badlogic_gdx_math_Matrix4_rotateRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_rotateRad_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_math_Matrix4_rotate_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_rotate_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "rotateRad", (intptr_t) M_com_badlogic_gdx_math_Matrix4_rotateRad_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_rotateRad_float_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Quaternion;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "rotateTowardDirection", (intptr_t) M_com_badlogic_gdx_math_Matrix4_rotateTowardDirection_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_rotateTowardDirection_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "rotateTowardTarget", (intptr_t) M_com_badlogic_gdx_math_Matrix4_rotateTowardTarget_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_rotateTowardTarget_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_math_Matrix4_scale_float_float_float_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Matrix4_scale_float_float_float_R_com_badlogic_gdx_math_Matrix4, "(FFF)Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "extract4x3Matrix", (intptr_t) M_com_badlogic_gdx_math_Matrix4_extract4x3Matrix_Array1_float, VTABLE_com_badlogic_gdx_math_Matrix4_extract4x3Matrix_Array1_float, "([F)V", 1 },
	{ "hasRotationOrScaling", (intptr_t) M_com_badlogic_gdx_math_Matrix4_hasRotationOrScaling_R_boolean, VTABLE_com_badlogic_gdx_math_Matrix4_hasRotationOrScaling_R_boolean, "()Z", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_Matrix4, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_Matrix4{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Matrix4",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Matrix4),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Matrix4,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Matrix4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Matrix4,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 95,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 90,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Matrix4 = registerClass(&class_com_badlogic_gdx_math_Matrix4);

}

