#include "com/badlogic/gdx/math/GeometryUtils.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/GeometryUtils.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {

jobject SF_com_badlogic_gdx_math_GeometryUtils_tmp1;
jobject SF_com_badlogic_gdx_math_GeometryUtils_tmp2;
jobject SF_com_badlogic_gdx_math_GeometryUtils_tmp3;

void mark_com_badlogic_gdx_math_GeometryUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_GeometryUtils_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_GeometryUtils_tmp1)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_GeometryUtils_tmp1, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_GeometryUtils_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_GeometryUtils_tmp2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_GeometryUtils_tmp2, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_GeometryUtils_tmp3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_GeometryUtils_tmp3)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_GeometryUtils_tmp3, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_GeometryUtils *) object;
}

void init_com_badlogic_gdx_math_GeometryUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_math_GeometryUtils_toBarycoord_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:toBarycoord", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(44);
	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_GeometryUtils_tmp1;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(45);
	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_GeometryUtils_tmp2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(46);
	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_GeometryUtils_tmp3;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(47);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[5].o), (frame[5].o));
	frame[8].f = temp0;
	LINE_NUMBER(48);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[5].o), (frame[6].o));
	frame[9].f = temp1;
	LINE_NUMBER(49);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[6].o), (frame[6].o));
	frame[10].f = temp2;
	LINE_NUMBER(50);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[7].o), (frame[5].o));
	frame[11].f = temp3;
	LINE_NUMBER(51);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[7].o), (frame[6].o));
	frame[12].f = temp4;
	LINE_NUMBER(52);
	frame[13].f = (((frame[8].f) * (frame[10].f)) - ((frame[9].f) * (frame[9].f)));
	LINE_NUMBER(53);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_x = ((((frame[10].f) * (frame[11].f)) - ((frame[9].f) * (frame[12].f))) / (frame[13].f));
	LINE_NUMBER(54);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_y = ((((frame[8].f) * (frame[12].f)) - ((frame[9].f) * (frame[11].f))) / (frame[13].f));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_GeometryUtils_barycoordInsideTriangle_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:barycoordInsideTriangle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(60);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x), (jfloat(0)), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)), (jfloat(1)), 1)) > 0) goto label_1;
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

jobject SM_com_badlogic_gdx_math_GeometryUtils_fromBarycoord_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:fromBarycoord", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(66);
	frame[5].f = (((jfloat(1)) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(67);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_x = ((((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x))) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x)));
	LINE_NUMBER(68);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_y = ((((frame[5].f) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y)) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y))) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y)));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_GeometryUtils_fromBarycoord_com_badlogic_gdx_math_Vector2_float_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:fromBarycoord", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(75);
	frame[4].f = (((jfloat(1)) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return ((((frame[4].f) * (frame[1].f)) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[2].f))) + (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_GeometryUtils_lowestPositiveRoot_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:lowestPositiveRoot", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(86);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(87);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	(sp++)->f = jfloat(std::numeric_limits<float>::quiet_NaN());
	popStackFrame(ctx);
	INST_FRETURN();
label_3:;
	{
	LINE_NUMBER(88);
	frame[3].f = ((-(frame[2].f)) / (frame[1].f));
	LINE_NUMBER(89);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	INST_FLOAD(3);
	goto label_6;
label_5:;
	(sp++)->f = jfloat(std::numeric_limits<float>::quiet_NaN());
label_6:;
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(92);
	frame[3].f = (((frame[1].f) * (frame[1].f)) - (((jfloat(4.0f)) * (frame[0].f)) * (frame[2].f)));
	LINE_NUMBER(93);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) >= 0) goto label_8;
	}
	(sp++)->f = jfloat(std::numeric_limits<float>::quiet_NaN());
	popStackFrame(ctx);
	INST_FRETURN();
label_8:;
	{
	LINE_NUMBER(95);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[3].f))));
	frame[4].f = (jfloat(temp0));
	LINE_NUMBER(96);
	frame[5].f = ((jfloat(1)) / ((jfloat(2)) * (frame[0].f)));
	LINE_NUMBER(97);
	frame[6].f = (((-(frame[1].f)) - (frame[4].f)) * (frame[5].f));
	LINE_NUMBER(98);
	frame[7].f = (((-(frame[1].f)) + (frame[4].f)) * (frame[5].f));
	LINE_NUMBER(100);
	if ((floatCompare((frame[6].f), (frame[7].f), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(101);
	frame[8].f = (frame[7].f);
	LINE_NUMBER(102);
	frame[7].f = (frame[6].f);
	LINE_NUMBER(103);
	frame[6].f = (frame[8].f);
	}
label_13:;
	{
	LINE_NUMBER(106);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) <= 0) goto label_17;
	}
	INST_FLOAD(6);
	popStackFrame(ctx);
	INST_FRETURN();
label_17:;
	{
	LINE_NUMBER(107);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) <= 0) goto label_18;
	}
	INST_FLOAD(7);
	popStackFrame(ctx);
	INST_FRETURN();
label_18:;
	{
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (jfloat(std::numeric_limits<float>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_GeometryUtils_colinear_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:colinear", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(112);
	frame[6].f = ((frame[2].f) - (frame[0].f));
	frame[7].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(113);
	frame[8].f = ((frame[4].f) - (frame[2].f));
	frame[9].f = ((frame[5].f) - (frame[3].f));
	LINE_NUMBER(114);
	frame[10].f = (((frame[8].f) * (frame[7].f)) - ((frame[6].f) * (frame[9].f)));
	LINE_NUMBER(115);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[10].f));
	if ((floatCompare(temp0, (jfloat(1.000000e-06f)), 1)) >= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_math_GeometryUtils_triangleCentroid_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:triangleCentroid", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(119);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[6].o)))->F_x = ((((frame[0].f) + (frame[2].f)) + (frame[4].f)) / (jfloat(3.0f)));
	LINE_NUMBER(120);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[6].o)))->F_y = ((((frame[1].f) + (frame[3].f)) + (frame[5].f)) / (jfloat(3.0f)));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_math_GeometryUtils_triangleCircumcenter_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[22];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:triangleCircumcenter", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(126);
	frame[7].f = ((frame[2].f) - (frame[0].f));
	frame[8].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(127);
	frame[9].f = ((frame[4].f) - (frame[2].f));
	frame[10].f = ((frame[5].f) - (frame[3].f));
	LINE_NUMBER(128);
	frame[11].f = ((frame[0].f) - (frame[4].f));
	frame[12].f = ((frame[1].f) - (frame[5].f));
	LINE_NUMBER(129);
	frame[13].f = (((frame[9].f) * (frame[8].f)) - ((frame[7].f) * (frame[10].f)));
	LINE_NUMBER(130);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[13].f));
	if ((floatCompare(temp0, (jfloat(1.000000e-06f)), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(131);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Triangle points must not be colinear."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(132);
	frame[13].f = ((frame[13].f) * (jfloat(2)));
	LINE_NUMBER(133);
	frame[14].f = (((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f)));
	frame[15].f = (((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f)));
	frame[16].f = (((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f)));
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[6].o), (((((frame[14].f) * (frame[10].f)) + ((frame[15].f) * (frame[12].f))) + ((frame[16].f) * (frame[8].f))) / (frame[13].f)), ((-((((frame[14].f) * (frame[9].f)) + ((frame[15].f) * (frame[11].f))) + ((frame[16].f) * (frame[7].f)))) / (frame[13].f)));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_GeometryUtils_triangleCircumradius_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[19];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:triangleCircumradius", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(141);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[3].f) - (frame[1].f)));
	if ((floatCompare(temp0, (jfloat(1.000000e-06f)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(142);
	frame[7].f = ((-((frame[4].f) - (frame[2].f))) / ((frame[5].f) - (frame[3].f)));
	LINE_NUMBER(143);
	frame[9].f = (((frame[2].f) + (frame[4].f)) / (jfloat(2)));
	LINE_NUMBER(144);
	frame[11].f = (((frame[3].f) + (frame[5].f)) / (jfloat(2)));
	LINE_NUMBER(145);
	frame[12].f = (((frame[2].f) + (frame[0].f)) / (jfloat(2)));
	LINE_NUMBER(146);
	frame[13].f = (((frame[7].f) * ((frame[12].f) - (frame[9].f))) + (frame[11].f));
	goto label_8;
	}
label_1:;
	{
	LINE_NUMBER(147);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[5].f) - (frame[3].f)));
	if ((floatCompare(temp0, (jfloat(1.000000e-06f)), 1)) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(148);
	frame[6].f = ((-((frame[2].f) - (frame[0].f))) / ((frame[3].f) - (frame[1].f)));
	LINE_NUMBER(149);
	frame[8].f = (((frame[0].f) + (frame[2].f)) / (jfloat(2)));
	LINE_NUMBER(150);
	frame[10].f = (((frame[1].f) + (frame[3].f)) / (jfloat(2)));
	LINE_NUMBER(151);
	frame[12].f = (((frame[4].f) + (frame[2].f)) / (jfloat(2)));
	LINE_NUMBER(152);
	frame[13].f = (((frame[6].f) * ((frame[12].f) - (frame[8].f))) + (frame[10].f));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(154);
	frame[6].f = ((-((frame[2].f) - (frame[0].f))) / ((frame[3].f) - (frame[1].f)));
	LINE_NUMBER(155);
	frame[7].f = ((-((frame[4].f) - (frame[2].f))) / ((frame[5].f) - (frame[3].f)));
	LINE_NUMBER(156);
	frame[8].f = (((frame[0].f) + (frame[2].f)) / (jfloat(2)));
	LINE_NUMBER(157);
	frame[9].f = (((frame[2].f) + (frame[4].f)) / (jfloat(2)));
	LINE_NUMBER(158);
	frame[10].f = (((frame[1].f) + (frame[3].f)) / (jfloat(2)));
	LINE_NUMBER(159);
	frame[11].f = (((frame[3].f) + (frame[5].f)) / (jfloat(2)));
	LINE_NUMBER(160);
	frame[12].f = ((((((frame[6].f) * (frame[8].f)) - ((frame[7].f) * (frame[9].f))) + (frame[11].f)) - (frame[10].f)) / ((frame[6].f) - (frame[7].f)));
	LINE_NUMBER(161);
	frame[13].f = (((frame[6].f) * ((frame[12].f) - (frame[8].f))) + (frame[10].f));
	}
label_8:;
	{
	LINE_NUMBER(163);
	frame[14].f = ((frame[0].f) - (frame[12].f));
	frame[15].f = ((frame[1].f) - (frame[13].f));
	LINE_NUMBER(164);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[14].f) * (frame[14].f)) + ((frame[15].f) * (frame[15].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_GeometryUtils_triangleQuality_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[22];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:triangleQuality", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(172);
	frame[6].f = ((frame[0].f) - (frame[2].f));
	frame[7].f = ((frame[1].f) - (frame[3].f));
	LINE_NUMBER(173);
	frame[8].f = ((frame[2].f) - (frame[4].f));
	frame[9].f = ((frame[3].f) - (frame[5].f));
	LINE_NUMBER(174);
	frame[10].f = ((frame[4].f) - (frame[0].f));
	frame[11].f = ((frame[5].f) - (frame[1].f));
	LINE_NUMBER(175);
	frame[12].f = (((frame[6].f) * (frame[6].f)) + ((frame[7].f) * (frame[7].f)));
	LINE_NUMBER(176);
	frame[13].f = (((frame[8].f) * (frame[8].f)) + ((frame[9].f) * (frame[9].f)));
	LINE_NUMBER(177);
	frame[14].f = (((frame[10].f) * (frame[10].f)) + ((frame[11].f) * (frame[11].f)));
	LINE_NUMBER(178);
	jfloat temp0 = frame[12].f;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[13].f), (frame[14].f));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	jdouble temp3 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(temp2)));
	jfloat temp4 = jfloat(temp3);
	jfloat temp5 = (jfloat)SM_com_badlogic_gdx_math_GeometryUtils_triangleCircumradius_float_float_float_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	popStackFrame(ctx);
	return (temp4 / temp5);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_GeometryUtils_triangleArea_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:triangleArea", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(182);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((((frame[0].f) - (frame[4].f)) * ((frame[3].f) - (frame[1].f))) - (((frame[0].f) - (frame[2].f)) * ((frame[5].f) - (frame[1].f)))));
	popStackFrame(ctx);
	return (temp0 * (jfloat(0.5f)));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_math_GeometryUtils_quadrilateralCentroid_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8) {
	jtype frame[20];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:quadrilateralCentroid", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(187);
	frame[9].f = ((((frame[0].f) + (frame[2].f)) + (frame[4].f)) / (jfloat(3.0f)));
	frame[10].f = ((((frame[1].f) + (frame[3].f)) + (frame[5].f)) / (jfloat(3.0f)));
	LINE_NUMBER(188);
	frame[11].f = ((((frame[0].f) + (frame[4].f)) + (frame[6].f)) / (jfloat(3.0f)));
	frame[12].f = ((((frame[1].f) + (frame[5].f)) + (frame[7].f)) / (jfloat(3.0f)));
	LINE_NUMBER(189);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((((frame[0].f) - (frame[4].f)) * ((frame[3].f) - (frame[1].f))) - (((frame[0].f) - (frame[2].f)) * ((frame[5].f) - (frame[1].f)))));
	frame[13].f = (temp0 * (jfloat(0.5f)));
	LINE_NUMBER(190);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((((frame[0].f) - (frame[4].f)) * ((frame[7].f) - (frame[1].f))) - (((frame[0].f) - (frame[6].f)) * ((frame[5].f) - (frame[1].f)))));
	frame[14].f = (temp1 * (jfloat(0.5f)));
	LINE_NUMBER(191);
	frame[15].f = ((frame[13].f) + (frame[14].f));
	LINE_NUMBER(192);
	if ((floatCompare((frame[15].f), (jfloat(0)), -1)) != 0) goto label_8;
	}
	{
	LINE_NUMBER(193);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_x = (frame[9].f);
	LINE_NUMBER(194);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_y = (frame[10].f);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(196);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_x = ((((frame[9].f) * (frame[13].f)) + ((frame[11].f) * (frame[14].f))) / (frame[15].f));
	LINE_NUMBER(197);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_y = ((((frame[10].f) * (frame[13].f)) + ((frame[12].f) * (frame[14].f))) / (frame[15].f));
	}
label_11:;
	{
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_math_GeometryUtils_polygonCentroid_Array1_float_int_int_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:polygonCentroid", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(204);
	if ((frame[2].i) >= (6)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"A polygon must have 3 or more coordinate pairs."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(206);
	frame[4].f = (jfloat(0));
	frame[5].f = (jfloat(0));
	frame[6].f = (jfloat(0));
	LINE_NUMBER(207);
	frame[7].i = (((frame[1].i) + (frame[2].i)) - (jint(2)));
	LINE_NUMBER(208);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[7].i)));
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(209);
	frame[10].i = (frame[1].i);
	}
label_8:;
	{
	if ((frame[10].i) > (frame[7].i)) goto label_9;
	}
	{
	LINE_NUMBER(210);
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[10].i)));
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[10].i) + (jint(1)))));
	LINE_NUMBER(211);
	frame[13].f = (((frame[8].f) * (frame[12].f)) - ((frame[11].f) * (frame[9].f)));
	LINE_NUMBER(212);
	frame[4].f = ((frame[4].f) + (frame[13].f));
	LINE_NUMBER(213);
	frame[5].f = ((frame[5].f) + (((frame[8].f) + (frame[11].f)) * (frame[13].f)));
	LINE_NUMBER(214);
	frame[6].f = ((frame[6].f) + (((frame[9].f) + (frame[12].f)) * (frame[13].f)));
	LINE_NUMBER(215);
	frame[8].f = (frame[11].f);
	LINE_NUMBER(216);
	frame[9].f = (frame[12].f);
	LINE_NUMBER(209);
	INST_IINC(10, 2);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(218);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_19;
	}
	{
	LINE_NUMBER(219);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x = (jfloat(0));
	LINE_NUMBER(220);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y = (jfloat(0));
	goto label_22;
	}
label_19:;
	{
	LINE_NUMBER(222);
	frame[4].f = ((frame[4].f) * (jfloat(0.5f)));
	LINE_NUMBER(223);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x = ((frame[5].f) / ((jfloat(6.0f)) * (frame[4].f)));
	LINE_NUMBER(224);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y = ((frame[6].f) / ((jfloat(6.0f)) * (frame[4].f)));
	}
label_22:;
	{
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_GeometryUtils_polygonArea_Array1_float_int_int_R_float(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:polygonArea", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(231);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(232);
	frame[4].i = (((frame[1].i) + (frame[2].i)) - (jint(2)));
	LINE_NUMBER(233);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[4].i)));
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(234);
	frame[7].i = (frame[1].i);
	}
label_5:;
	{
	if ((frame[7].i) > (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(235);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[7].i)));
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(236);
	frame[3].f = ((frame[3].f) + (((frame[5].f) * (frame[9].f)) - ((frame[8].f) * (frame[6].f))));
	LINE_NUMBER(237);
	frame[5].f = (frame[8].f);
	LINE_NUMBER(238);
	frame[6].f = (frame[9].f);
	LINE_NUMBER(234);
	INST_IINC(7, 2);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(240);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[3].f) * (jfloat(0.5f))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_GeometryUtils_ensureCCW_Array1_float(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:ensureCCW", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(244);
	SM_com_badlogic_gdx_math_GeometryUtils_ensureCCW_Array1_float_int_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_GeometryUtils_ensureCCW_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:ensureCCW", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_GeometryUtils_isClockwise_Array1_float_int_int_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(249);
	SM_com_badlogic_gdx_math_GeometryUtils_reverseVertices_Array1_float_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_GeometryUtils_ensureClockwise_Array1_float(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:ensureClockwise", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(253);
	SM_com_badlogic_gdx_math_GeometryUtils_ensureClockwise_Array1_float_int_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_GeometryUtils_ensureClockwise_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:ensureClockwise", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(257);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_GeometryUtils_isClockwise_Array1_float_int_int_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(258);
	SM_com_badlogic_gdx_math_GeometryUtils_reverseVertices_Array1_float_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_GeometryUtils_reverseVertices_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:reverseVertices", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(262);
	frame[3].i = (((frame[1].i) + (frame[2].i)) - (jint(2)));
	LINE_NUMBER(263);
	frame[4].i = (frame[1].i);
	frame[5].i = ((frame[1].i) + ((frame[2].i) / (jint(2))));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(264);
	frame[6].i = ((frame[3].i) - (frame[4].i));
	LINE_NUMBER(265);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[4].i)));
	LINE_NUMBER(266);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(267);
	ARRAY_ACCESS(jfloat, (frame[0].o), (frame[4].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[6].i)));
	LINE_NUMBER(268);
	ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[4].i) + (jint(1)))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[6].i) + (jint(1)))));
	LINE_NUMBER(269);
	ARRAY_ACCESS(jfloat, (frame[0].o), (frame[6].i)) = (frame[7].f);
	LINE_NUMBER(270);
	ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[6].i) + (jint(1)))) = (frame[8].f);
	LINE_NUMBER(263);
	INST_IINC(4, 2);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(272);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_GeometryUtils_isClockwise_Array1_float_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:isClockwise", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(275);
	if ((frame[2].i) >= (6)) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(276);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(277);
	frame[4].i = (((frame[1].i) + (frame[2].i)) - (jint(2)));
	LINE_NUMBER(278);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[4].i)));
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(279);
	frame[7].i = (frame[1].i);
	}
label_6:;
	{
	if ((frame[7].i) > (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(280);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[7].i)));
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(281);
	frame[3].f = ((frame[3].f) + (((frame[5].f) * (frame[9].f)) - ((frame[8].f) * (frame[6].f))));
	LINE_NUMBER(282);
	frame[5].f = (frame[8].f);
	LINE_NUMBER(283);
	frame[6].f = (frame[9].f);
	LINE_NUMBER(279);
	INST_IINC(7, 2);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(285);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) >= 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_GeometryUtils_isCCW_Array1_float_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:isCCW", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(289);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_GeometryUtils_isClockwise_Array1_float_int_int_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_1;
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

void clinit_com_badlogic_gdx_math_GeometryUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/GeometryUtils:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	{
	LINE_NUMBER(24);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	SF_com_badlogic_gdx_math_GeometryUtils_tmp1 = sp[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	SF_com_badlogic_gdx_math_GeometryUtils_tmp2 = sp[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_GeometryUtils(ctx);
	SF_com_badlogic_gdx_math_GeometryUtils_tmp3 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_GeometryUtils[] {
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
};

static FieldMetadata fields[] {
	{ "tmp1", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_GeometryUtils_tmp1, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "tmp2", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_GeometryUtils_tmp2, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "tmp3", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_GeometryUtils_tmp3, "Lcom/badlogic/gdx/math/Vector2;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_GeometryUtils, 0, "()V", 2 },
	{ "toBarycoord", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_toBarycoord_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 9 },
	{ "barycoordInsideTriangle", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_barycoordInsideTriangle_com_badlogic_gdx_math_Vector2_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector2;)Z", 9 },
	{ "fromBarycoord", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_fromBarycoord_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 9 },
	{ "fromBarycoord", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_fromBarycoord_com_badlogic_gdx_math_Vector2_float_float_float_R_float, 0, "(Lcom/badlogic/gdx/math/Vector2;FFF)F", 9 },
	{ "lowestPositiveRoot", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_lowestPositiveRoot_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "colinear", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_colinear_float_float_float_float_float_float_R_boolean, 0, "(FFFFFF)Z", 9 },
	{ "triangleCentroid", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_triangleCentroid_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, 0, "(FFFFFFLcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 9 },
	{ "triangleCircumcenter", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_triangleCircumcenter_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, 0, "(FFFFFFLcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 9 },
	{ "triangleCircumradius", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_triangleCircumradius_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "triangleQuality", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_triangleQuality_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "triangleArea", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_triangleArea_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "quadrilateralCentroid", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_quadrilateralCentroid_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, 0, "(FFFFFFFFLcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 9 },
	{ "polygonCentroid", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_polygonCentroid_Array1_float_int_int_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, 0, "([FIILcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 9 },
	{ "polygonArea", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_polygonArea_Array1_float_int_int_R_float, 0, "([FII)F", 9 },
	{ "ensureCCW", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_ensureCCW_Array1_float, 0, "([F)V", 9 },
	{ "ensureCCW", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_ensureCCW_Array1_float_int_int, 0, "([FII)V", 9 },
	{ "ensureClockwise", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_ensureClockwise_Array1_float, 0, "([F)V", 9 },
	{ "ensureClockwise", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_ensureClockwise_Array1_float_int_int, 0, "([FII)V", 9 },
	{ "reverseVertices", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_reverseVertices_Array1_float_int_int, 0, "([FII)V", 9 },
	{ "isClockwise", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_isClockwise_Array1_float_int_int_R_boolean, 0, "([FII)Z", 9 },
	{ "isCCW", (intptr_t) SM_com_badlogic_gdx_math_GeometryUtils_isCCW_Array1_float_int_int_R_boolean, 0, "([FII)Z", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_GeometryUtils, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_GeometryUtils{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/GeometryUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_GeometryUtils),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_GeometryUtils,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_GeometryUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_GeometryUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_GeometryUtils = registerClass(&class_com_badlogic_gdx_math_GeometryUtils);

}

