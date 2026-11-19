#include "com/badlogic/gdx/math/Matrix3.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/Affine2.h"
#include "com/badlogic/gdx/math/Matrix3.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "java/lang/System.h"

extern "C" {

jlong SF_com_badlogic_gdx_math_Matrix3_serialVersionUID;
jint SF_com_badlogic_gdx_math_Matrix3_M00;
jint SF_com_badlogic_gdx_math_Matrix3_M01;
jint SF_com_badlogic_gdx_math_Matrix3_M02;
jint SF_com_badlogic_gdx_math_Matrix3_M10;
jint SF_com_badlogic_gdx_math_Matrix3_M11;
jint SF_com_badlogic_gdx_math_Matrix3_M12;
jint SF_com_badlogic_gdx_math_Matrix3_M20;
jint SF_com_badlogic_gdx_math_Matrix3_M21;
jint SF_com_badlogic_gdx_math_Matrix3_M22;

void mark_com_badlogic_gdx_math_Matrix3(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_math_Matrix3 *) object;
	if (self->F_val)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val)->clazz)->markFunction)((jobject) self->F_val, mark, depth + 1);
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
}

void clinit_com_badlogic_gdx_math_Matrix3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_Matrix3_serialVersionUID = jlong(7907569533774959788ll);
	SF_com_badlogic_gdx_math_Matrix3_M00 = jint(0);
	SF_com_badlogic_gdx_math_Matrix3_M01 = jint(3);
	SF_com_badlogic_gdx_math_Matrix3_M02 = jint(6);
	SF_com_badlogic_gdx_math_Matrix3_M10 = jint(1);
	SF_com_badlogic_gdx_math_Matrix3_M11 = jint(4);
	SF_com_badlogic_gdx_math_Matrix3_M12 = jint(7);
	SF_com_badlogic_gdx_math_Matrix3_M20 = jint(2);
	SF_com_badlogic_gdx_math_Matrix3_M21 = jint(5);
	SF_com_badlogic_gdx_math_Matrix3_M22 = jint(8);
}

void init_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix3(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(44);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(1));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix3_idt_R_com_badlogic_gdx_math_Matrix3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix3_idt_R_com_badlogic_gdx_math_Matrix3])(ctx, (frame[0].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Matrix3_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(1));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Matrix3_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(1));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix3_set_Array1_float_R_com_badlogic_gdx_math_Matrix3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix3_set_Array1_float_R_com_badlogic_gdx_math_Matrix3])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_idt_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:idt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[1].o = sp[0].o;
	LINE_NUMBER(64);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (jfloat(1));
	LINE_NUMBER(65);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(66);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(67);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(68);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))) = (jfloat(1));
	LINE_NUMBER(69);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(70);
	ARRAY_ACCESS(jfloat, (frame[1].o), (6)) = (jfloat(0));
	LINE_NUMBER(71);
	ARRAY_ACCESS(jfloat, (frame[1].o), (7)) = (jfloat(0));
	LINE_NUMBER(72);
	ARRAY_ACCESS(jfloat, (frame[1].o), (8)) = (jfloat(1));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:mul", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(87);
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[3].f = (temp3 + (temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))))));
	LINE_NUMBER(88);
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp6 = temp5 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	jfloat temp7 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp8 = temp6 + (temp7 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	jfloat temp9 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[4].f = (temp8 + (temp9 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))))));
	LINE_NUMBER(89);
	jfloat temp10 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp11 = temp10 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	jfloat temp12 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp13 = temp11 + (temp12 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	jfloat temp14 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[5].f = (temp13 + (temp14 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)))));
	LINE_NUMBER(91);
	jfloat temp15 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp16 = temp15 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	jfloat temp17 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp18 = temp16 + (temp17 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	jfloat temp19 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[6].f = (temp18 + (temp19 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))))));
	LINE_NUMBER(92);
	jfloat temp20 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp21 = temp20 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	jfloat temp22 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp23 = temp21 + (temp22 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	jfloat temp24 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[7].f = (temp23 + (temp24 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))))));
	LINE_NUMBER(93);
	jfloat temp25 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp26 = temp25 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	jfloat temp27 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp28 = temp26 + (temp27 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	jfloat temp29 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[8].f = (temp28 + (temp29 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)))));
	LINE_NUMBER(95);
	jfloat temp30 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp31 = temp30 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	jfloat temp32 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp33 = temp31 + (temp32 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	jfloat temp34 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[9].f = (temp33 + (temp34 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))))));
	LINE_NUMBER(96);
	jfloat temp35 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp36 = temp35 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	jfloat temp37 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp38 = temp36 + (temp37 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	jfloat temp39 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[10].f = (temp38 + (temp39 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))))));
	LINE_NUMBER(97);
	jfloat temp40 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp41 = temp40 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	jfloat temp42 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp43 = temp41 + (temp42 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	jfloat temp44 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[11].f = (temp43 + (temp44 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)))));
	LINE_NUMBER(99);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = (frame[3].f);
	LINE_NUMBER(100);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (frame[6].f);
	LINE_NUMBER(101);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (frame[9].f);
	LINE_NUMBER(102);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (frame[4].f);
	LINE_NUMBER(103);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = (frame[7].f);
	LINE_NUMBER(104);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))) = (frame[10].f);
	LINE_NUMBER(105);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = (frame[5].f);
	LINE_NUMBER(106);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = (frame[8].f);
	LINE_NUMBER(107);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (frame[11].f);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_mulLeft_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:mulLeft", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp0 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp1 = temp0 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[3].f = (temp1 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp2 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp3 = temp2 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[4].f = (temp3 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))))));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp4 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp5 = temp4 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[5].f = (temp5 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)))));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp6 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp7 = temp6 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[6].f = (temp7 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp8 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp9 = temp8 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[7].f = (temp9 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))))));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp10 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp11 = temp10 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[8].f = (temp11 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)))));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp12 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp13 = temp12 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[9].f = (temp13 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp14 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp15 = temp14 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[10].f = (temp15 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))))));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp16 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp17 = temp16 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[11].f = (temp17 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)))));
	LINE_NUMBER(135);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = (frame[3].f);
	LINE_NUMBER(136);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (frame[6].f);
	LINE_NUMBER(137);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (frame[9].f);
	LINE_NUMBER(138);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (frame[4].f);
	LINE_NUMBER(139);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = (frame[7].f);
	LINE_NUMBER(140);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))) = (frame[10].f);
	LINE_NUMBER(141);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = (frame[5].f);
	LINE_NUMBER(142);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = (frame[8].f);
	LINE_NUMBER(143);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (frame[11].f);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_setToRotation_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:setToRotation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix3_setToRotationRad_float_R_com_badlogic_gdx_math_Matrix3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix3_setToRotationRad_float_R_com_badlogic_gdx_math_Matrix3])(ctx, (frame[0].o), ((jfloat(0.017453292f)) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_setToRotationRad_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:setToRotationRad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(159);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[2].f = (jfloat(temp0));
	LINE_NUMBER(160);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(161);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[4].o = sp[0].o;
	LINE_NUMBER(163);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(164);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1))) = (frame[3].f);
	LINE_NUMBER(165);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(167);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3))) = (-(frame[3].f));
	LINE_NUMBER(168);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4))) = (frame[2].f);
	LINE_NUMBER(169);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(171);
	ARRAY_ACCESS(jfloat, (frame[4].o), (6)) = (jfloat(0));
	LINE_NUMBER(172);
	ARRAY_ACCESS(jfloat, (frame[4].o), (7)) = (jfloat(0));
	LINE_NUMBER(173);
	ARRAY_ACCESS(jfloat, (frame[4].o), (8)) = (jfloat(1));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_setToRotation_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:setToRotation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[2].f));
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix3_setToRotation_com_badlogic_gdx_math_Vector3_float_float_R_com_badlogic_gdx_math_Matrix3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix3_setToRotation_com_badlogic_gdx_math_Vector3_float_float_R_com_badlogic_gdx_math_Matrix3])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_setToRotation_com_badlogic_gdx_math_Vector3_float_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:setToRotation", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[4].o = sp[0].o;
	LINE_NUMBER(184);
	frame[5].f = ((jfloat(1)) - (frame[2].f));
	LINE_NUMBER(185);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0))) = ((((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)) + (frame[2].f));
	LINE_NUMBER(186);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3))) = ((((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) * (frame[3].f)));
	LINE_NUMBER(187);
	ARRAY_ACCESS(jfloat, (frame[4].o), (6)) = ((((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[3].f)));
	LINE_NUMBER(188);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1))) = ((((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) * (frame[3].f)));
	LINE_NUMBER(189);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4))) = ((((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)) + (frame[2].f));
	LINE_NUMBER(190);
	ARRAY_ACCESS(jfloat, (frame[4].o), (7)) = ((((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[3].f)));
	LINE_NUMBER(191);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2))) = ((((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x)) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[3].f)));
	LINE_NUMBER(192);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5))) = ((((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[3].f)));
	LINE_NUMBER(193);
	ARRAY_ACCESS(jfloat, (frame[4].o), (8)) = ((((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)) + (frame[2].f));
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_setToTranslation_float_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:setToTranslation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[3].o = sp[0].o;
	LINE_NUMBER(204);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = (jfloat(1));
	LINE_NUMBER(205);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(206);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(208);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(209);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = (jfloat(1));
	LINE_NUMBER(210);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(212);
	ARRAY_ACCESS(jfloat, (frame[3].o), (6)) = (frame[1].f);
	LINE_NUMBER(213);
	ARRAY_ACCESS(jfloat, (frame[3].o), (7)) = (frame[2].f);
	LINE_NUMBER(214);
	ARRAY_ACCESS(jfloat, (frame[3].o), (8)) = (jfloat(1));
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_setToTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:setToTranslation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(225);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = (jfloat(1));
	LINE_NUMBER(226);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(227);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(229);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(230);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = (jfloat(1));
	LINE_NUMBER(231);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(233);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(234);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(235);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (jfloat(1));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_setToScaling_float_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:setToScaling", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[3].o = sp[0].o;
	LINE_NUMBER(247);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = (frame[1].f);
	LINE_NUMBER(248);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(249);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(250);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(251);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = (frame[2].f);
	LINE_NUMBER(252);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(253);
	ARRAY_ACCESS(jfloat, (frame[3].o), (6)) = (jfloat(0));
	LINE_NUMBER(254);
	ARRAY_ACCESS(jfloat, (frame[3].o), (7)) = (jfloat(0));
	LINE_NUMBER(255);
	ARRAY_ACCESS(jfloat, (frame[3].o), (8)) = (jfloat(1));
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_setToScaling_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:setToScaling", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(264);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(265);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(266);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(267);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(268);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(269);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(270);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = (jfloat(0));
	LINE_NUMBER(271);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = (jfloat(0));
	LINE_NUMBER(272);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (jfloat(1));
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[1].o = sp[0].o;
	LINE_NUMBER(278);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Matrix3_det_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:det", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[1].o = sp[0].o;
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))))));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_inv_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:inv", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(294);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Matrix3_det_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix3_det_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(295);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can't invert a singular matrix"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(297);
	frame[2].f = ((jfloat(1)) / (frame[1].f));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[3].o = sp[0].o;
	LINE_NUMBER(300);
	frame[4].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (8)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (7)))));
	LINE_NUMBER(301);
	frame[5].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (7)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (8)))));
	LINE_NUMBER(302);
	frame[6].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))))));
	LINE_NUMBER(303);
	frame[7].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (6)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (8)))));
	LINE_NUMBER(304);
	frame[8].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (8)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (6)))));
	LINE_NUMBER(305);
	frame[9].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))))));
	LINE_NUMBER(306);
	frame[10].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (7)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (6)))));
	LINE_NUMBER(307);
	frame[11].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (6)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (7)))));
	LINE_NUMBER(308);
	frame[12].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))))));
	LINE_NUMBER(310);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = ((frame[2].f) * (frame[4].f));
	LINE_NUMBER(311);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = ((frame[2].f) * (frame[5].f));
	LINE_NUMBER(312);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2))) = ((frame[2].f) * (frame[6].f));
	LINE_NUMBER(313);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = ((frame[2].f) * (frame[7].f));
	LINE_NUMBER(314);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = ((frame[2].f) * (frame[8].f));
	LINE_NUMBER(315);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))) = ((frame[2].f) * (frame[9].f));
	LINE_NUMBER(316);
	ARRAY_ACCESS(jfloat, (frame[3].o), (6)) = ((frame[2].f) * (frame[10].f));
	LINE_NUMBER(317);
	ARRAY_ACCESS(jfloat, (frame[3].o), (7)) = ((frame[2].f) * (frame[11].f));
	LINE_NUMBER(318);
	ARRAY_ACCESS(jfloat, (frame[3].o), (8)) = ((frame[2].f) * (frame[12].f));
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(337);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00);
	LINE_NUMBER(338);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10);
	LINE_NUMBER(339);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(340);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01);
	LINE_NUMBER(341);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11);
	LINE_NUMBER(342);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(343);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02);
	LINE_NUMBER(344);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12);
	LINE_NUMBER(345);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (jfloat(1));
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(355);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))));
	LINE_NUMBER(356);
	sp[0].o = frame[2].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	LINE_NUMBER(357);
	sp[0].o = frame[2].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	LINE_NUMBER(358);
	sp[0].o = frame[2].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))));
	LINE_NUMBER(359);
	sp[0].o = frame[2].o;
	jint temp4 = jint(4);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	LINE_NUMBER(360);
	sp[0].o = frame[2].o;
	jint temp5 = jint(5);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	LINE_NUMBER(361);
	sp[0].o = frame[2].o;
	jint temp6 = 6;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8)));
	LINE_NUMBER(362);
	sp[0].o = frame[2].o;
	jint temp7 = 7;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	LINE_NUMBER(363);
	sp[0].o = frame[2].o;
	jint temp8 = 8;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_set_Array1_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(374);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_trn_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:trn", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = 6;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(383);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = 7;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_trn_float_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:trn", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = 6;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = 7;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + (frame[2].f));
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_trn_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:trn", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = 6;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(402);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = 7;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_translate_float_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:translate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_tmp;
	frame[3].o = sp[0].o;
	LINE_NUMBER(413);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = (jfloat(1));
	LINE_NUMBER(414);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(417);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(418);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = (jfloat(1));
	LINE_NUMBER(421);
	ARRAY_ACCESS(jfloat, (frame[3].o), (6)) = (frame[1].f);
	LINE_NUMBER(422);
	ARRAY_ACCESS(jfloat, (frame[3].o), (7)) = (frame[2].f);
	LINE_NUMBER(424);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	SM_com_badlogic_gdx_math_Matrix3_mul_Array1_float_Array1_float(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_translate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:translate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_tmp;
	frame[2].o = sp[0].o;
	LINE_NUMBER(434);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = (jfloat(1));
	LINE_NUMBER(435);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(438);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(439);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = (jfloat(1));
	LINE_NUMBER(442);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(443);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(445);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	SM_com_badlogic_gdx_math_Matrix3_mul_Array1_float_Array1_float(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_rotate_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:rotate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix3_rotateRad_float_R_com_badlogic_gdx_math_Matrix3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Matrix3_rotateRad_float_R_com_badlogic_gdx_math_Matrix3])(ctx, (frame[0].o), ((jfloat(0.017453292f)) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_rotateRad_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:rotateRad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(462);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(463);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[2].f = (jfloat(temp0));
	LINE_NUMBER(464);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_tmp;
	frame[4].o = sp[0].o;
	LINE_NUMBER(467);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(468);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1))) = (frame[3].f);
	LINE_NUMBER(471);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3))) = (-(frame[3].f));
	LINE_NUMBER(472);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4))) = (frame[2].f);
	LINE_NUMBER(475);
	ARRAY_ACCESS(jfloat, (frame[4].o), (6)) = (jfloat(0));
	LINE_NUMBER(476);
	ARRAY_ACCESS(jfloat, (frame[4].o), (7)) = (jfloat(0));
	LINE_NUMBER(479);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	SM_com_badlogic_gdx_math_Matrix3_mul_Array1_float_Array1_float(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_scale_float_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:scale", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_tmp;
	frame[3].o = sp[0].o;
	LINE_NUMBER(490);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = (frame[1].f);
	LINE_NUMBER(491);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(494);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(495);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = (frame[2].f);
	LINE_NUMBER(498);
	ARRAY_ACCESS(jfloat, (frame[3].o), (6)) = (jfloat(0));
	LINE_NUMBER(499);
	ARRAY_ACCESS(jfloat, (frame[3].o), (7)) = (jfloat(0));
	LINE_NUMBER(502);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	SM_com_badlogic_gdx_math_Matrix3_mul_Array1_float_Array1_float(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(503);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_scale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:scale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_tmp;
	frame[2].o = sp[0].o;
	LINE_NUMBER(512);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(513);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(516);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(517);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(520);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = (jfloat(0));
	LINE_NUMBER(521);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = (jfloat(0));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	SM_com_badlogic_gdx_math_Matrix3_mul_Array1_float_Array1_float(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_getValues_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:getValues", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_getTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:getTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(535);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	LINE_NUMBER(536);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7)));
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_getScale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:getScale", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(544);
	sp[0].o = frame[1].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)))))))));
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (jfloat(temp0));
	LINE_NUMBER(545);
	sp[0].o = frame[1].o;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))))))));
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (jfloat(temp1));
	LINE_NUMBER(546);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Matrix3_getRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:getRotation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(550);
	jfloat temp0 = jfloat(57.295776f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jdouble temp1 = jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jdouble temp2 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, temp1, (jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))))));
	popStackFrame(ctx);
	return (temp0 * (jfloat(temp2)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Matrix3_getRotationRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:getRotationRad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jdouble temp0 = jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jdouble temp1 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, temp0, (jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))))));
	popStackFrame(ctx);
	return (jfloat(temp1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_scl_float_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[1].f));
	LINE_NUMBER(562);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(4);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (frame[1].f));
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_scl_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(571);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(4);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(580);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(4);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Matrix3_transpose_R_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:transpose", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(588);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[0].o)))->F_val;
	frame[1].o = sp[0].o;
	LINE_NUMBER(589);
	frame[2].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))));
	LINE_NUMBER(590);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))));
	LINE_NUMBER(591);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))));
	LINE_NUMBER(592);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))));
	LINE_NUMBER(593);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6)));
	LINE_NUMBER(594);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)));
	LINE_NUMBER(595);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))) = (frame[2].f);
	LINE_NUMBER(596);
	ARRAY_ACCESS(jfloat, (frame[1].o), (6)) = (frame[3].f);
	LINE_NUMBER(597);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (frame[4].f);
	LINE_NUMBER(598);
	ARRAY_ACCESS(jfloat, (frame[1].o), (7)) = (frame[5].f);
	LINE_NUMBER(599);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (frame[6].f);
	LINE_NUMBER(600);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))) = (frame[7].f);
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_Matrix3_mul_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Matrix3:mul", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Matrix3(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(613);
	frame[2].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))))));
	LINE_NUMBER(614);
	frame[3].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))))));
	LINE_NUMBER(615);
	frame[4].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))));
	LINE_NUMBER(617);
	frame[5].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))))));
	LINE_NUMBER(618);
	frame[6].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))))));
	LINE_NUMBER(619);
	frame[7].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))));
	LINE_NUMBER(621);
	frame[8].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))))));
	LINE_NUMBER(622);
	frame[9].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))))));
	LINE_NUMBER(623);
	frame[10].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))));
	LINE_NUMBER(625);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(626);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))) = (frame[5].f);
	LINE_NUMBER(627);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))) = (frame[8].f);
	LINE_NUMBER(628);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))) = (frame[3].f);
	LINE_NUMBER(629);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))) = (frame[6].f);
	LINE_NUMBER(630);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))) = (frame[9].f);
	LINE_NUMBER(631);
	ARRAY_ACCESS(jfloat, (frame[0].o), (6)) = (frame[4].f);
	LINE_NUMBER(632);
	ARRAY_ACCESS(jfloat, (frame[0].o), (7)) = (frame[7].f);
	LINE_NUMBER(633);
	ARRAY_ACCESS(jfloat, (frame[0].o), (8)) = (frame[10].f);
	LINE_NUMBER(634);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Matrix3[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_Matrix3_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_Matrix3_idt_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_mulLeft_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_setToRotation_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_setToRotationRad_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_setToRotation_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_setToRotation_com_badlogic_gdx_math_Vector3_float_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_setToTranslation_float_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_setToTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_setToScaling_float_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_setToScaling_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_det_R_float,
	(void *) M_com_badlogic_gdx_math_Matrix3_inv_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_set_Array1_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_trn_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_trn_float_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_trn_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_translate_float_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_translate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_rotate_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_rotateRad_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_scale_float_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_scale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_getValues_R_Array1_float,
	(void *) M_com_badlogic_gdx_math_Matrix3_getTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Matrix3_getScale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Matrix3_getRotation_R_float,
	(void *) M_com_badlogic_gdx_math_Matrix3_getRotationRad_R_float,
	(void *) M_com_badlogic_gdx_math_Matrix3_scl_float_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_scl_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_math_Matrix3_transpose_R_com_badlogic_gdx_math_Matrix3,
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
	{ "idt", "()Lcom/badlogic/gdx/math/Matrix3;" },
	{ "mul", "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "mulLeft", "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "setToRotation", "(F)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "setToRotationRad", "(F)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "setToRotation", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "setToRotation", "(Lcom/badlogic/gdx/math/Vector3;FF)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "setToTranslation", "(FF)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "setToTranslation", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "setToScaling", "(FF)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "setToScaling", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "det", "()F" },
	{ "inv", "()Lcom/badlogic/gdx/math/Matrix3;" },
	{ "set", "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "set", "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "set", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "set", "([F)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "trn", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "trn", "(FF)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "trn", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "translate", "(FF)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "translate", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "rotate", "(F)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "rotateRad", "(F)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "scale", "(FF)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "scale", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "getValues", "()[F" },
	{ "getTranslation", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "getScale", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "getRotation", "()F" },
	{ "getRotationRad", "()F" },
	{ "scl", "(F)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "scl", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "scl", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix3;" },
	{ "transpose", "()Lcom/badlogic/gdx/math/Matrix3;" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_Matrix3_serialVersionUID, "J", 26 },
	{ "M00", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix3_M00, "I", 25 },
	{ "M01", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix3_M01, "I", 25 },
	{ "M02", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix3_M02, "I", 25 },
	{ "M10", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix3_M10, "I", 25 },
	{ "M11", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix3_M11, "I", 25 },
	{ "M12", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix3_M12, "I", 25 },
	{ "M20", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix3_M20, "I", 25 },
	{ "M21", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix3_M21, "I", 25 },
	{ "M22", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_Matrix3_M22, "I", 25 },
	{ "val", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_math_Matrix3, F_val), "[F", 1 },
	{ "tmp", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_math_Matrix3, F_tmp), "[F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Matrix3, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Matrix3_com_badlogic_gdx_math_Matrix3, 0, "(Lcom/badlogic/gdx/math/Matrix3;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Matrix3_Array1_float, 0, "([F)V", 1 },
	{ "idt", (intptr_t) M_com_badlogic_gdx_math_Matrix3_idt_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_idt_R_com_badlogic_gdx_math_Matrix3, "()Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_Matrix3_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "mulLeft", (intptr_t) M_com_badlogic_gdx_math_Matrix3_mulLeft_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_mulLeft_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "setToRotation", (intptr_t) M_com_badlogic_gdx_math_Matrix3_setToRotation_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_setToRotation_float_R_com_badlogic_gdx_math_Matrix3, "(F)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "setToRotationRad", (intptr_t) M_com_badlogic_gdx_math_Matrix3_setToRotationRad_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_setToRotationRad_float_R_com_badlogic_gdx_math_Matrix3, "(F)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "setToRotation", (intptr_t) M_com_badlogic_gdx_math_Matrix3_setToRotation_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_setToRotation_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "setToRotation", (intptr_t) M_com_badlogic_gdx_math_Matrix3_setToRotation_com_badlogic_gdx_math_Vector3_float_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_setToRotation_com_badlogic_gdx_math_Vector3_float_float_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Vector3;FF)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "setToTranslation", (intptr_t) M_com_badlogic_gdx_math_Matrix3_setToTranslation_float_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_setToTranslation_float_float_R_com_badlogic_gdx_math_Matrix3, "(FF)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "setToTranslation", (intptr_t) M_com_badlogic_gdx_math_Matrix3_setToTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_setToTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "setToScaling", (intptr_t) M_com_badlogic_gdx_math_Matrix3_setToScaling_float_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_setToScaling_float_float_R_com_badlogic_gdx_math_Matrix3, "(FF)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "setToScaling", (intptr_t) M_com_badlogic_gdx_math_Matrix3_setToScaling_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_setToScaling_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_Matrix3_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_Matrix3_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "det", (intptr_t) M_com_badlogic_gdx_math_Matrix3_det_R_float, VTABLE_com_badlogic_gdx_math_Matrix3_det_R_float, "()F", 1 },
	{ "inv", (intptr_t) M_com_badlogic_gdx_math_Matrix3_inv_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_inv_R_com_badlogic_gdx_math_Matrix3, "()Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Matrix3_set_Array1_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_set_Array1_float_R_com_badlogic_gdx_math_Matrix3, "([F)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "trn", (intptr_t) M_com_badlogic_gdx_math_Matrix3_trn_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_trn_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "trn", (intptr_t) M_com_badlogic_gdx_math_Matrix3_trn_float_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_trn_float_float_R_com_badlogic_gdx_math_Matrix3, "(FF)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "trn", (intptr_t) M_com_badlogic_gdx_math_Matrix3_trn_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_trn_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_math_Matrix3_translate_float_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_translate_float_float_R_com_badlogic_gdx_math_Matrix3, "(FF)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_math_Matrix3_translate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_translate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_math_Matrix3_rotate_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_rotate_float_R_com_badlogic_gdx_math_Matrix3, "(F)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "rotateRad", (intptr_t) M_com_badlogic_gdx_math_Matrix3_rotateRad_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_rotateRad_float_R_com_badlogic_gdx_math_Matrix3, "(F)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_math_Matrix3_scale_float_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_scale_float_float_R_com_badlogic_gdx_math_Matrix3, "(FF)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_math_Matrix3_scale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_scale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "getValues", (intptr_t) M_com_badlogic_gdx_math_Matrix3_getValues_R_Array1_float, VTABLE_com_badlogic_gdx_math_Matrix3_getValues_R_Array1_float, "()[F", 1 },
	{ "getTranslation", (intptr_t) M_com_badlogic_gdx_math_Matrix3_getTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Matrix3_getTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "getScale", (intptr_t) M_com_badlogic_gdx_math_Matrix3_getScale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Matrix3_getScale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "getRotation", (intptr_t) M_com_badlogic_gdx_math_Matrix3_getRotation_R_float, VTABLE_com_badlogic_gdx_math_Matrix3_getRotation_R_float, "()F", 1 },
	{ "getRotationRad", (intptr_t) M_com_badlogic_gdx_math_Matrix3_getRotationRad_R_float, VTABLE_com_badlogic_gdx_math_Matrix3_getRotationRad_R_float, "()F", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Matrix3_scl_float_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_scl_float_R_com_badlogic_gdx_math_Matrix3, "(F)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Matrix3_scl_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_scl_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "scl", (intptr_t) M_com_badlogic_gdx_math_Matrix3_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_scl_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "transpose", (intptr_t) M_com_badlogic_gdx_math_Matrix3_transpose_R_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_math_Matrix3_transpose_R_com_badlogic_gdx_math_Matrix3, "()Lcom/badlogic/gdx/math/Matrix3;", 1 },
	{ "mul", (intptr_t) SM_com_badlogic_gdx_math_Matrix3_mul_Array1_float_Array1_float, 0, "([F[F)V", 10 },
};

Class class_com_badlogic_gdx_math_Matrix3{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Matrix3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Matrix3),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Matrix3,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Matrix3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Matrix3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 40,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 46,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Matrix3 = registerClass(&class_com_badlogic_gdx_math_Matrix3);

}

