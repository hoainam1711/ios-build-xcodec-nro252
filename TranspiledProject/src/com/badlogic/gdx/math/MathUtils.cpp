#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/util/Random.h"
#include "com/badlogic/gdx/math/RandomXS128.h"
#include "com/badlogic/gdx/math/MathUtils_Sin.h"

extern "C" {

jfloat SF_com_badlogic_gdx_math_MathUtils_nanoToSec;
jfloat SF_com_badlogic_gdx_math_MathUtils_FLOAT_ROUNDING_ERROR;
jfloat SF_com_badlogic_gdx_math_MathUtils_PI;
jfloat SF_com_badlogic_gdx_math_MathUtils_PI2;
jfloat SF_com_badlogic_gdx_math_MathUtils_HALF_PI;
jfloat SF_com_badlogic_gdx_math_MathUtils_E;
jint SF_com_badlogic_gdx_math_MathUtils_SIN_BITS;
jint SF_com_badlogic_gdx_math_MathUtils_SIN_MASK;
jint SF_com_badlogic_gdx_math_MathUtils_SIN_COUNT;
jfloat SF_com_badlogic_gdx_math_MathUtils_radFull;
jfloat SF_com_badlogic_gdx_math_MathUtils_degFull;
jfloat SF_com_badlogic_gdx_math_MathUtils_radToIndex;
jfloat SF_com_badlogic_gdx_math_MathUtils_degToIndex;
jfloat SF_com_badlogic_gdx_math_MathUtils_radiansToDegrees;
jfloat SF_com_badlogic_gdx_math_MathUtils_radDeg;
jfloat SF_com_badlogic_gdx_math_MathUtils_degreesToRadians;
jfloat SF_com_badlogic_gdx_math_MathUtils_degRad;
jobject SF_com_badlogic_gdx_math_MathUtils_random;
jint SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_INT;
jdouble SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_FLOOR;
jdouble SF_com_badlogic_gdx_math_MathUtils_CEIL;
jdouble SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_CEIL;
jdouble SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_ROUND;

void mark_com_badlogic_gdx_math_MathUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_MathUtils_random)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_MathUtils_random)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_MathUtils_random, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_MathUtils *) object;
}

void init_com_badlogic_gdx_math_MathUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:sin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(74);
	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils$Sin_table;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint(((frame[0].f) * (jfloat(2607.5945f))))) & (16383))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:cos", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(80);
	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils$Sin_table;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint((((frame[0].f) + (jfloat(1.5707964f))) * (jfloat(2607.5945f))))) & (16383))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:sinDeg", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(86);
	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils$Sin_table;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint(((frame[0].f) * (jfloat(45.511112f))))) & (16383))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:cosDeg", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(92);
	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils$Sin_table;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint((((frame[0].f) + (jfloat(90.0f))) * (jfloat(45.511112f))))) & (16383))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_tan_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:tan", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(117);
	frame[0].f = ((frame[0].f) / (jfloat(3.1415927f)));
	LINE_NUMBER(118);
	frame[0].f = ((frame[0].f) + (jfloat(0.5f)));
	LINE_NUMBER(119);
	jdouble temp0 = jdouble((frame[0].f));
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble((frame[0].f))));
	frame[0].f = (jfloat((temp0 - temp1)));
	LINE_NUMBER(120);
	frame[0].f = ((frame[0].f) - (jfloat(0.5f)));
	LINE_NUMBER(121);
	frame[0].f = ((frame[0].f) * (jfloat(3.1415927f)));
	LINE_NUMBER(122);
	frame[1].f = ((frame[0].f) * (frame[0].f));
	frame[2].f = ((frame[1].f) * (frame[1].f));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (((frame[0].f) * ((((jfloat(1.058201e-03f)) * (frame[2].f)) - ((jfloat(0.11111111f)) * (frame[1].f))) + (jfloat(1)))) / ((((jfloat(0.015873017f)) * (frame[2].f)) - ((jfloat(0.44444445f)) * (frame[1].f))) + (jfloat(1))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_tanDeg_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:tanDeg", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(137);
	frame[0].f = ((frame[0].f) * (jfloat(5.555556e-03f)));
	LINE_NUMBER(138);
	frame[0].f = ((frame[0].f) + (jfloat(0.5f)));
	LINE_NUMBER(139);
	jdouble temp0 = jdouble((frame[0].f));
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble((frame[0].f))));
	frame[0].f = (jfloat((temp0 - temp1)));
	LINE_NUMBER(140);
	frame[0].f = ((frame[0].f) - (jfloat(0.5f)));
	LINE_NUMBER(141);
	frame[0].f = ((frame[0].f) * (jfloat(3.1415927f)));
	LINE_NUMBER(142);
	frame[1].f = ((frame[0].f) * (frame[0].f));
	frame[2].f = ((frame[1].f) * (frame[1].f));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (((frame[0].f) * ((((jfloat(1.058201e-03f)) * (frame[2].f)) - ((jfloat(0.11111111f)) * (frame[1].f))) + (jfloat(1)))) / ((((jfloat(0.015873017f)) * (frame[2].f)) - ((jfloat(0.44444445f)) * (frame[1].f))) + (jfloat(1))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_atanUnchecked_double_R_float(jcontext ctx, jdouble param0) {
	jtype frame[28];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:atanUnchecked", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(157);
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[0].d));
	frame[2].d = temp0;
	LINE_NUMBER(159);
	frame[4].d = (((frame[2].d) - (jdouble(1))) / ((frame[2].d) + (jdouble(1))));
	LINE_NUMBER(161);
	frame[6].d = ((frame[4].d) * (frame[4].d));
	LINE_NUMBER(162);
	frame[8].d = ((frame[4].d) * (frame[6].d));
	LINE_NUMBER(163);
	frame[10].d = ((frame[8].d) * (frame[6].d));
	LINE_NUMBER(164);
	frame[12].d = ((frame[10].d) * (frame[6].d));
	LINE_NUMBER(165);
	frame[14].d = ((frame[12].d) * (frame[6].d));
	LINE_NUMBER(166);
	frame[16].d = ((frame[14].d) * (frame[6].d));
	LINE_NUMBER(167);
	jdouble temp1 = (jdouble)SM_java_lang_Math_signum_double_R_double(ctx, (frame[0].d));
	popStackFrame(ctx);
	return (jfloat((temp1 * ((jdouble(0.7853981633974483)) + (((((((jdouble(0.99997726)) * (frame[4].d)) - ((jdouble(0.33262347)) * (frame[8].d))) + ((jdouble(0.19354346)) * (frame[10].d))) - ((jdouble(0.11643287)) * (frame[12].d))) + ((jdouble(0.05265332)) * (frame[14].d))) - ((jdouble(0.0117212)) * (frame[16].d)))))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_atan2_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:atan2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(183);
	frame[2].f = ((frame[0].f) / (frame[1].f));
	LINE_NUMBER(184);
	if ((floatCompare((frame[2].f), (frame[2].f), -1)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(185);
	if ((floatCompare((frame[0].f), (frame[1].f), -1)) != 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	(sp++)->f = jfloat(-1.0f);
label_5:;
	INST_FSTORE(2);
	goto label_6;
label_2:;
	{
	LINE_NUMBER(186);
	if ((floatCompare(((frame[2].f) - (frame[2].f)), ((frame[2].f) - (frame[2].f)), -1)) == 0) goto label_6;
	}
	INST_FCONST(0);
	INST_FSTORE(1);
label_6:;
	{
	LINE_NUMBER(187);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(188);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_atanUnchecked_double_R_float(ctx, (jdouble((frame[2].f))));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(189);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(190);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) < 0) goto label_11;
	}
	{
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_atanUnchecked_double_R_float(ctx, (jdouble((frame[2].f))));
	popStackFrame(ctx);
	return (temp0 + (jfloat(3.1415927f)));
	}
label_11:;
	{
	LINE_NUMBER(191);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_atanUnchecked_double_R_float(ctx, (jdouble((frame[2].f))));
	popStackFrame(ctx);
	return (temp0 - (jfloat(3.1415927f)));
	}
label_9:;
	{
	LINE_NUMBER(192);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return ((frame[1].f) + (jfloat(1.5707964f)));
	}
label_12:;
	{
	LINE_NUMBER(194);
	if ((floatCompare((frame[0].f), (jfloat(0)), 1)) >= 0) goto label_14;
	}
	{
	popStackFrame(ctx);
	return ((frame[1].f) - (jfloat(1.5707964f)));
	}
label_14:;
	{
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return ((frame[1].f) + (frame[0].f));
	}

	popStackFrame(ctx);
}

jdouble SM_com_badlogic_gdx_math_MathUtils_atanUncheckedDeg_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[28];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:atanUncheckedDeg", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(206);
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[0].d));
	frame[2].d = temp0;
	LINE_NUMBER(208);
	frame[4].d = (((frame[2].d) - (jdouble(1))) / ((frame[2].d) + (jdouble(1))));
	LINE_NUMBER(210);
	frame[6].d = ((frame[4].d) * (frame[4].d));
	LINE_NUMBER(211);
	frame[8].d = ((frame[4].d) * (frame[6].d));
	LINE_NUMBER(212);
	frame[10].d = ((frame[8].d) * (frame[6].d));
	LINE_NUMBER(213);
	frame[12].d = ((frame[10].d) * (frame[6].d));
	LINE_NUMBER(214);
	frame[14].d = ((frame[12].d) * (frame[6].d));
	LINE_NUMBER(215);
	frame[16].d = ((frame[14].d) * (frame[6].d));
	LINE_NUMBER(216);
	jdouble temp1 = (jdouble)SM_java_lang_Math_signum_double_R_double(ctx, (frame[0].d));
	popStackFrame(ctx);
	return (temp1 * ((jdouble(45.0)) + (((((((jdouble(57.2944766070562)) * (frame[4].d)) - ((jdouble(19.05792099799635)) * (frame[8].d))) + ((jdouble(11.089223410359068)) * (frame[10].d))) - ((jdouble(6.6711120475953765)) * (frame[12].d))) + ((jdouble(3.016813013351768)) * (frame[14].d))) - ((jdouble(0.6715752908287405)) * (frame[16].d)))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_atan2Deg_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:atan2Deg", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(231);
	frame[2].f = ((frame[0].f) / (frame[1].f));
	LINE_NUMBER(232);
	if ((floatCompare((frame[2].f), (frame[2].f), -1)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(233);
	if ((floatCompare((frame[0].f), (frame[1].f), -1)) != 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	(sp++)->f = jfloat(-1.0f);
label_5:;
	INST_FSTORE(2);
	goto label_6;
label_2:;
	{
	LINE_NUMBER(234);
	if ((floatCompare(((frame[2].f) - (frame[2].f)), ((frame[2].f) - (frame[2].f)), -1)) == 0) goto label_6;
	}
	INST_FCONST(0);
	INST_FSTORE(1);
label_6:;
	{
	LINE_NUMBER(235);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(236);
	jdouble temp0 = (jdouble)SM_com_badlogic_gdx_math_MathUtils_atanUncheckedDeg_double_R_double(ctx, (jdouble((frame[2].f))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}
label_7:;
	{
	LINE_NUMBER(237);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(238);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) < 0) goto label_11;
	}
	{
	jdouble temp0 = (jdouble)SM_com_badlogic_gdx_math_MathUtils_atanUncheckedDeg_double_R_double(ctx, (jdouble((frame[2].f))));
	popStackFrame(ctx);
	return (jfloat((temp0 + (jdouble(180.0)))));
	}
label_11:;
	{
	LINE_NUMBER(239);
	jdouble temp0 = (jdouble)SM_com_badlogic_gdx_math_MathUtils_atanUncheckedDeg_double_R_double(ctx, (jdouble((frame[2].f))));
	popStackFrame(ctx);
	return (jfloat((temp0 - (jdouble(180.0)))));
	}
label_9:;
	{
	LINE_NUMBER(240);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return ((frame[1].f) + (jfloat(90.0f)));
	}
label_12:;
	{
	LINE_NUMBER(242);
	if ((floatCompare((frame[0].f), (jfloat(0)), 1)) >= 0) goto label_14;
	}
	{
	popStackFrame(ctx);
	return ((frame[1].f) - (jfloat(90.0f)));
	}
label_14:;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return ((frame[1].f) + (frame[0].f));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_atan2Deg360_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:atan2Deg360", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(258);
	frame[2].f = ((frame[0].f) / (frame[1].f));
	LINE_NUMBER(259);
	if ((floatCompare((frame[2].f), (frame[2].f), -1)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(260);
	if ((floatCompare((frame[0].f), (frame[1].f), -1)) != 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	(sp++)->f = jfloat(-1.0f);
label_5:;
	INST_FSTORE(2);
	goto label_6;
label_2:;
	{
	LINE_NUMBER(261);
	if ((floatCompare(((frame[2].f) - (frame[2].f)), ((frame[2].f) - (frame[2].f)), -1)) == 0) goto label_6;
	}
	INST_FCONST(0);
	INST_FSTORE(1);
label_6:;
	{
	LINE_NUMBER(262);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(263);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) < 0) goto label_9;
	}
	{
	LINE_NUMBER(264);
	jdouble temp0 = (jdouble)SM_com_badlogic_gdx_math_MathUtils_atanUncheckedDeg_double_R_double(ctx, (jdouble((frame[2].f))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}
label_9:;
	{
	LINE_NUMBER(266);
	jdouble temp0 = (jdouble)SM_com_badlogic_gdx_math_MathUtils_atanUncheckedDeg_double_R_double(ctx, (jdouble((frame[2].f))));
	popStackFrame(ctx);
	return (jfloat((temp0 + (jdouble(360.0)))));
	}
label_7:;
	{
	LINE_NUMBER(267);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(268);
	jdouble temp0 = (jdouble)SM_com_badlogic_gdx_math_MathUtils_atanUncheckedDeg_double_R_double(ctx, (jdouble((frame[2].f))));
	popStackFrame(ctx);
	return (jfloat((temp0 + (jdouble(180.0)))));
	}
label_11:;
	{
	LINE_NUMBER(269);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return ((frame[1].f) + (jfloat(90.0f)));
	}
label_13:;
	{
	LINE_NUMBER(271);
	if ((floatCompare((frame[0].f), (jfloat(0)), 1)) >= 0) goto label_15;
	}
	{
	popStackFrame(ctx);
	return ((frame[1].f) + (jfloat(270.0f)));
	}
label_15:;
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return ((frame[1].f) + (frame[0].f));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_acos_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:acos", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(281);
	frame[1].f = ((frame[0].f) * (frame[0].f));
	LINE_NUMBER(282);
	frame[2].f = ((frame[0].f) * (frame[1].f));
	LINE_NUMBER(283);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) < 0) goto label_3;
	}
	{
	LINE_NUMBER(284);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) - (frame[0].f)))));
	popStackFrame(ctx);
	return ((jfloat(temp0)) * ((((jfloat(1.5707288f)) - ((jfloat(0.2121144f)) * (frame[0].f))) + ((jfloat(0.074261f)) * (frame[1].f))) - ((jfloat(0.0187293f)) * (frame[2].f))));
	}
label_3:;
	{
	LINE_NUMBER(286);
	jfloat temp0 = jfloat(3.1415927f);
	jdouble temp1 = jdouble(((jfloat(1)) + (frame[0].f)));
	LINE_NUMBER(287);
	jdouble temp2 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, temp1);
	jfloat temp3 = temp0 - ((jfloat(temp2)) * ((((jfloat(1.5707288f)) + ((jfloat(0.2121144f)) * (frame[0].f))) + ((jfloat(0.074261f)) * (frame[1].f))) + ((jfloat(0.0187293f)) * (frame[2].f))));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_asin_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:asin", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(296);
	frame[1].f = ((frame[0].f) * (frame[0].f));
	LINE_NUMBER(297);
	frame[2].f = ((frame[0].f) * (frame[1].f));
	LINE_NUMBER(298);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) < 0) goto label_3;
	}
	{
	LINE_NUMBER(299);
	jfloat temp0 = jfloat(1.5707964f);
	jdouble temp1 = jdouble(((jfloat(1)) - (frame[0].f)));
	LINE_NUMBER(300);
	jdouble temp2 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, temp1);
	jfloat temp3 = temp0 - ((jfloat(temp2)) * ((((jfloat(1.5707288f)) - ((jfloat(0.2121144f)) * (frame[0].f))) + ((jfloat(0.074261f)) * (frame[1].f))) - ((jfloat(0.0187293f)) * (frame[2].f))));
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return temp3;
	}
label_3:;
	{
	LINE_NUMBER(302);
	jfloat temp0 = jfloat(-1.5707964f);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) + (frame[0].f)))));
	popStackFrame(ctx);
	return (temp0 + ((jfloat(temp1)) * ((((jfloat(1.5707288f)) + ((jfloat(0.2121144f)) * (frame[0].f))) + ((jfloat(0.074261f)) * (frame[1].f))) + ((jfloat(0.0187293f)) * (frame[2].f)))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_atan_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[26];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:atan", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(317);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[0].f));
	jdouble temp1 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, (jdouble(temp0)), (jdouble(1.797693e+308)));
	frame[1].d = temp1;
	LINE_NUMBER(319);
	frame[3].d = (((frame[1].d) - (jdouble(1))) / ((frame[1].d) + (jdouble(1))));
	LINE_NUMBER(321);
	frame[5].d = ((frame[3].d) * (frame[3].d));
	LINE_NUMBER(322);
	frame[7].d = ((frame[3].d) * (frame[5].d));
	LINE_NUMBER(323);
	frame[9].d = ((frame[7].d) * (frame[5].d));
	LINE_NUMBER(324);
	frame[11].d = ((frame[9].d) * (frame[5].d));
	LINE_NUMBER(325);
	frame[13].d = ((frame[11].d) * (frame[5].d));
	LINE_NUMBER(326);
	frame[15].d = ((frame[13].d) * (frame[5].d));
	LINE_NUMBER(327);
	jfloat temp2 = (jfloat)SM_java_lang_Math_signum_float_R_float(ctx, (frame[0].f));
	popStackFrame(ctx);
	return (temp2 * (jfloat(((jdouble(0.7853981633974483)) + (((((((jdouble(0.99997726)) * (frame[3].d)) - ((jdouble(0.33262347)) * (frame[7].d))) + ((jdouble(0.19354346)) * (frame[9].d))) - ((jdouble(0.11643287)) * (frame[11].d))) + ((jdouble(0.05265332)) * (frame[13].d))) - ((jdouble(0.0117212)) * (frame[15].d)))))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_asinDeg_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:asinDeg", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(336);
	frame[1].f = ((frame[0].f) * (frame[0].f));
	LINE_NUMBER(337);
	frame[2].f = ((frame[0].f) * (frame[1].f));
	LINE_NUMBER(338);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) < 0) goto label_3;
	}
	{
	LINE_NUMBER(339);
	jfloat temp0 = jfloat(90.0f);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) - (frame[0].f)))));
	popStackFrame(ctx);
	return (temp0 - ((jfloat(temp1)) * ((((jfloat(89.99613f)) - ((jfloat(12.15326f)) * (frame[0].f))) + ((jfloat(4.254842f)) * (frame[1].f))) - ((jfloat(1.0731099f)) * (frame[2].f)))));
	}
label_3:;
	{
	LINE_NUMBER(342);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) + (frame[0].f)))));
	popStackFrame(ctx);
	return (((jfloat(temp0)) * ((((jfloat(89.99613f)) + ((jfloat(12.15326f)) * (frame[0].f))) + ((jfloat(4.254842f)) * (frame[1].f))) + ((jfloat(1.0731099f)) * (frame[2].f)))) - (jfloat(90.0f)));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_acosDeg_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:acosDeg", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(351);
	frame[1].f = ((frame[0].f) * (frame[0].f));
	LINE_NUMBER(352);
	frame[2].f = ((frame[0].f) * (frame[1].f));
	LINE_NUMBER(353);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) < 0) goto label_3;
	}
	{
	LINE_NUMBER(354);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) - (frame[0].f)))));
	popStackFrame(ctx);
	return ((jfloat(temp0)) * ((((jfloat(89.99613f)) - ((jfloat(12.153259f)) * (frame[0].f))) + ((jfloat(4.254842f)) * (frame[1].f))) - ((jfloat(1.0731097f)) * (frame[2].f))));
	}
label_3:;
	{
	LINE_NUMBER(357);
	jfloat temp0 = jfloat(180.0f);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) + (frame[0].f)))));
	popStackFrame(ctx);
	return (temp0 - ((jfloat(temp1)) * ((((jfloat(89.99613f)) + ((jfloat(12.153259f)) * (frame[0].f))) + ((jfloat(4.254842f)) * (frame[1].f))) + ((jfloat(1.0731097f)) * (frame[2].f)))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_atanDeg_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[27];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:atanDeg", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(373);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[0].f));
	jdouble temp1 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, (jdouble(temp0)), (jdouble(1.797693e+308)));
	frame[1].d = temp1;
	LINE_NUMBER(375);
	frame[3].d = (((frame[1].d) - (jdouble(1))) / ((frame[1].d) + (jdouble(1))));
	LINE_NUMBER(377);
	frame[5].d = ((frame[3].d) * (frame[3].d));
	LINE_NUMBER(378);
	frame[7].d = ((frame[3].d) * (frame[5].d));
	LINE_NUMBER(379);
	frame[9].d = ((frame[7].d) * (frame[5].d));
	LINE_NUMBER(380);
	frame[11].d = ((frame[9].d) * (frame[5].d));
	LINE_NUMBER(381);
	frame[13].d = ((frame[11].d) * (frame[5].d));
	LINE_NUMBER(382);
	frame[15].d = ((frame[13].d) * (frame[5].d));
	LINE_NUMBER(383);
	jfloat temp2 = (jfloat)SM_java_lang_Math_signum_float_R_float(ctx, (frame[0].f));
	popStackFrame(ctx);
	return (jfloat(((jdouble(temp2)) * ((jdouble(45.0)) + (((((((jdouble(57.2944766070562)) * (frame[3].d)) - ((jdouble(19.05792099799635)) * (frame[7].d))) + ((jdouble(11.089223410359068)) * (frame[9].d))) - ((jdouble(6.6711120475953765)) * (frame[11].d))) + ((jdouble(3.016813013351768)) * (frame[13].d))) - ((jdouble(0.6715752908287405)) * (frame[15].d)))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_MathUtils_random_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:random", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(393);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jint temp0 = (jint)((func_java_util_Random_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_int_R_int])(ctx, sp[0].o, ((frame[0].i) + (jint(1))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_MathUtils_random_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:random", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(398);
	jint temp0 = frame[0].i;
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jint temp1 = (jint)((func_java_util_Random_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_int_R_int])(ctx, sp[0].o, (((frame[1].i) - (frame[0].i)) + (jint(1))));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_math_MathUtils_random_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:random", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(404);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_math_MathUtils_random_long_long_R_long(ctx, (jlong(0)), (frame[0].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_math_MathUtils_random_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[22];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:random", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(409);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jlong temp0 = (jlong)((func_java_util_Random_nextLong_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextLong_R_long])(ctx, sp[0].o);
	frame[4].l = temp0;
	LINE_NUMBER(412);
	if ((longCompare((frame[2].l), (frame[0].l))) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(413);
	frame[6].l = (frame[2].l);
	LINE_NUMBER(414);
	frame[2].l = (frame[0].l);
	LINE_NUMBER(415);
	frame[0].l = (frame[6].l);
	}
label_2:;
	{
	LINE_NUMBER(417);
	frame[6].l = (((frame[2].l) - (frame[0].l)) + (jlong(1)));
	LINE_NUMBER(420);
	frame[8].l = ((frame[4].l) & (jlong(4294967295ll)));
	LINE_NUMBER(421);
	frame[10].l = ((frame[6].l) & (jlong(4294967295ll)));
	LINE_NUMBER(422);
	frame[12].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[4].l)) >> (32)));
	LINE_NUMBER(423);
	frame[14].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[6].l)) >> (32)));
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return ((((frame[0].l) + (bit_cast<jlong>(bit_cast<uint64_t>(((frame[12].l) * (frame[10].l))) >> (32)))) + (bit_cast<jlong>(bit_cast<uint64_t>(((frame[8].l) * (frame[14].l))) >> (32)))) + ((frame[12].l) * (frame[14].l)));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_MathUtils_randomBoolean_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:randomBoolean", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	{
	LINE_NUMBER(429);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jint temp0 = (jint)((func_java_util_Random_nextBoolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextBoolean_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_MathUtils_randomBoolean_float_R_boolean(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:randomBoolean", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(434);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_R_float(ctx);
	if ((floatCompare(temp0, (frame[0].f), 1)) >= 0) goto label_1;
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

jfloat SM_com_badlogic_gdx_math_MathUtils_random_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:random", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	{
	LINE_NUMBER(439);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jfloat temp0 = (jfloat)((func_java_util_Random_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_random_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:random", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(444);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jfloat temp0 = (jfloat)((func_java_util_Random_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 * (frame[0].f));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_random_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:random", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(449);
	jfloat temp0 = frame[0].f;
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jfloat temp1 = (jfloat)((func_java_util_Random_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 + (temp1 * ((frame[1].f) - (frame[0].f))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_MathUtils_randomSign_R_int(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:randomSign", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	{
	LINE_NUMBER(454);
	jint temp0 = jint(1);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jint temp1 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 | (temp1 >> (31)));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_randomTriangular_R_float(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:randomTriangular", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	{
	LINE_NUMBER(462);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jfloat temp0 = (jfloat)((func_java_util_Random_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextFloat_R_float])(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jfloat temp1 = (jfloat)((func_java_util_Random_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_randomTriangular_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:randomTriangular", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(471);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jfloat temp0 = (jfloat)((func_java_util_Random_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextFloat_R_float])(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jfloat temp1 = (jfloat)((func_java_util_Random_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((temp0 - temp1) * (frame[0].f));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_randomTriangular_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:randomTriangular", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(481);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_randomTriangular_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (((frame[0].f) + (frame[1].f)) * (jfloat(0.5f))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_randomTriangular_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:randomTriangular", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(490);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jfloat temp0 = (jfloat)((func_java_util_Random_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextFloat_R_float])(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(491);
	frame[4].f = ((frame[1].f) - (frame[0].f));
	LINE_NUMBER(492);
	if ((floatCompare((frame[3].f), (((frame[2].f) - (frame[0].f)) / (frame[4].f)), 1)) > 0) goto label_3;
	}
	{
	jfloat temp0 = frame[0].f;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[3].f) * (frame[4].f)) * ((frame[2].f) - (frame[0].f))))));
	popStackFrame(ctx);
	return (temp0 + (jfloat(temp1)));
	}
label_3:;
	{
	LINE_NUMBER(493);
	jfloat temp0 = frame[1].f;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((jfloat(1)) - (frame[3].f)) * (frame[4].f)) * ((frame[1].f) - (frame[2].f))))));
	popStackFrame(ctx);
	return (temp0 - (jfloat(temp1)));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_MathUtils_nextPowerOfTwo_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:nextPowerOfTwo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(500);
	if ((frame[0].i) != 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(501);
	INST_IINC(0, -1);
	LINE_NUMBER(502);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (jint(1))));
	LINE_NUMBER(503);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (jint(2))));
	LINE_NUMBER(504);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (jint(4))));
	LINE_NUMBER(505);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (8)));
	LINE_NUMBER(506);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (16)));
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return ((frame[0].i) + (jint(1)));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_MathUtils_isPowerOfTwo_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:isPowerOfTwo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(511);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	if (((frame[0].i) & ((frame[0].i) - (jint(1)))) != 0) goto label_1;
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

jshort SM_com_badlogic_gdx_math_MathUtils_clamp_short_short_short_R_short(jcontext ctx, jshort param0, jshort param1, jshort param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:clamp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(517);
	if ((frame[0].i) >= (frame[1].i)) goto label_1;
	}
	INST_ILOAD(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(518);
	if ((frame[0].i) <= (frame[2].i)) goto label_2;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_MathUtils_clamp_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:clamp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(523);
	if ((frame[0].i) >= (frame[1].i)) goto label_1;
	}
	INST_ILOAD(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(524);
	if ((frame[0].i) <= (frame[2].i)) goto label_2;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_math_MathUtils_clamp_long_long_long_R_long(jcontext ctx, jlong param0, jlong param1, jlong param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:clamp", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].l = param2;
	{
	LINE_NUMBER(529);
	if ((longCompare((frame[0].l), (frame[2].l))) >= 0) goto label_1;
	}
	INST_LLOAD(2);
	popStackFrame(ctx);
	INST_LRETURN();
label_1:;
	{
	LINE_NUMBER(530);
	if ((longCompare((frame[0].l), (frame[4].l))) <= 0) goto label_2;
	}
	INST_LLOAD(4);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
	{
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return (frame[0].l);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:clamp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(535);
	if ((floatCompare((frame[0].f), (frame[1].f), 1)) >= 0) goto label_1;
	}
	INST_FLOAD(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(536);
	if ((floatCompare((frame[0].f), (frame[2].f), -1)) <= 0) goto label_2;
	}
	INST_FLOAD(2);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return (frame[0].f);
	}

	popStackFrame(ctx);
}

jdouble SM_com_badlogic_gdx_math_MathUtils_clamp_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:clamp", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	{
	LINE_NUMBER(541);
	if ((doubleCompare((frame[0].d), (frame[2].d), 1)) >= 0) goto label_1;
	}
	INST_DLOAD(2);
	popStackFrame(ctx);
	INST_DRETURN();
label_1:;
	{
	LINE_NUMBER(542);
	if ((doubleCompare((frame[0].d), (frame[4].d), -1)) <= 0) goto label_2;
	}
	INST_DLOAD(4);
	popStackFrame(ctx);
	INST_DRETURN();
label_2:;
	{
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return (frame[0].d);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_lerp_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:lerp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return ((frame[0].f) + (((frame[1].f) - (frame[0].f)) * (frame[2].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_norm_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:norm", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return (((frame[2].f) - (frame[0].f)) / ((frame[1].f) - (frame[0].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_map_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:map", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return ((frame[2].f) + ((((frame[4].f) - (frame[0].f)) * ((frame[3].f) - (frame[2].f))) / ((frame[1].f) - (frame[0].f))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_lerpAngle_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:lerpAngle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(582);
	frame[3].f = ((fmodf((((fmodf(((frame[1].f) - (frame[0].f)), (jfloat(6.2831855f)))) + (jfloat(6.2831855f))) + (jfloat(3.1415927f))), (jfloat(6.2831855f)))) - (jfloat(3.1415927f)));
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return (fmodf(((fmodf(((frame[0].f) + ((frame[3].f) * (frame[2].f))), (jfloat(6.2831855f)))) + (jfloat(6.2831855f))), (jfloat(6.2831855f))));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_lerpAngleDeg_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:lerpAngleDeg", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(594);
	frame[3].f = ((fmodf((((fmodf(((frame[1].f) - (frame[0].f)), (jfloat(360.0f)))) + (jfloat(360.0f))) + (jfloat(180.0f))), (jfloat(360.0f)))) - (jfloat(180.0f)));
	LINE_NUMBER(595);
	popStackFrame(ctx);
	return (fmodf(((fmodf(((frame[0].f) + ((frame[3].f) * (frame[2].f))), (jfloat(360.0f)))) + (jfloat(360.0f))), (jfloat(360.0f))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_MathUtils_floor_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:floor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return ((jint(((jdouble((frame[0].f))) + (jdouble(16384.0))))) - (16384));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_MathUtils_floorPositive_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:floorPositive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return (jint((frame[0].f)));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_MathUtils_ceil_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:ceil", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return ((16384) - (jint(((jdouble(16384.0)) - (jdouble((frame[0].f)))))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_MathUtils_ceilPositive_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:ceilPositive", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return (jint(((jdouble((frame[0].f))) + (jdouble(0.9999999)))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_MathUtils_round_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:round", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return ((jint(((jdouble((frame[0].f))) + (jdouble(16384.5))))) - (16384));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_MathUtils_roundPositive_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:roundPositive", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return (jint(((frame[0].f) + (jfloat(0.5f)))));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:isZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(643);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[0].f));
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

jbool SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:isZero", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(649);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[0].f));
	if ((floatCompare(temp0, (frame[1].f), 1)) > 0) goto label_1;
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

jbool SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:isEqual", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(656);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[0].f) - (frame[1].f)));
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

jbool SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:isEqual", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(664);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[0].f) - (frame[1].f)));
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

jfloat SM_com_badlogic_gdx_math_MathUtils_log_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:log", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(669);
	jdouble temp0 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (jdouble((frame[1].f))));
	jdouble temp1 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (jdouble((frame[0].f))));
	popStackFrame(ctx);
	return (jfloat((temp0 / temp1)));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_MathUtils_log2_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:log2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(674);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_log_float_float_R_float(ctx, (jfloat(2)), (frame[0].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_MathUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_MathUtils_nanoToSec = jfloat(1.000000e-09f);
	SF_com_badlogic_gdx_math_MathUtils_FLOAT_ROUNDING_ERROR = jfloat(1.000000e-06f);
	SF_com_badlogic_gdx_math_MathUtils_PI = jfloat(3.1415927f);
	SF_com_badlogic_gdx_math_MathUtils_PI2 = jfloat(6.2831855f);
	SF_com_badlogic_gdx_math_MathUtils_HALF_PI = jfloat(1.5707964f);
	SF_com_badlogic_gdx_math_MathUtils_E = jfloat(2.7182817f);
	SF_com_badlogic_gdx_math_MathUtils_SIN_BITS = jint(14);
	SF_com_badlogic_gdx_math_MathUtils_SIN_MASK = jint(16383);
	SF_com_badlogic_gdx_math_MathUtils_SIN_COUNT = jint(16384);
	SF_com_badlogic_gdx_math_MathUtils_radFull = jfloat(6.2831855f);
	SF_com_badlogic_gdx_math_MathUtils_degFull = jfloat(360.0f);
	SF_com_badlogic_gdx_math_MathUtils_radToIndex = jfloat(2607.5945f);
	SF_com_badlogic_gdx_math_MathUtils_degToIndex = jfloat(45.511112f);
	SF_com_badlogic_gdx_math_MathUtils_radiansToDegrees = jfloat(57.295776f);
	SF_com_badlogic_gdx_math_MathUtils_radDeg = jfloat(57.295776f);
	SF_com_badlogic_gdx_math_MathUtils_degreesToRadians = jfloat(0.017453292f);
	SF_com_badlogic_gdx_math_MathUtils_degRad = jfloat(0.017453292f);
	SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_INT = jint(16384);
	SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_FLOOR = jdouble(16384.0);
	SF_com_badlogic_gdx_math_MathUtils_CEIL = jdouble(0.9999999);
	SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_CEIL = jdouble(16384.999999999996);
	SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_ROUND = jdouble(16384.5);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	{
	LINE_NUMBER(389);
	clinit_com_badlogic_gdx_math_RandomXS128(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_RandomXS128);
	init_com_badlogic_gdx_math_RandomXS128(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	SF_com_badlogic_gdx_math_MathUtils_random = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_MathUtils[] {
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

static jclass innerClasses[] {
	&class_com_badlogic_gdx_math_MathUtils$Sin,
};

static FieldMetadata fields[] {
	{ "nanoToSec", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_nanoToSec, "F", 25 },
	{ "FLOAT_ROUNDING_ERROR", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_FLOAT_ROUNDING_ERROR, "F", 25 },
	{ "PI", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_PI, "F", 25 },
	{ "PI2", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_PI2, "F", 25 },
	{ "HALF_PI", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_HALF_PI, "F", 25 },
	{ "E", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_E, "F", 25 },
	{ "SIN_BITS", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_SIN_BITS, "I", 26 },
	{ "SIN_MASK", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_SIN_MASK, "I", 26 },
	{ "SIN_COUNT", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_SIN_COUNT, "I", 26 },
	{ "radFull", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_radFull, "F", 26 },
	{ "degFull", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_degFull, "F", 26 },
	{ "radToIndex", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_radToIndex, "F", 26 },
	{ "degToIndex", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_degToIndex, "F", 26 },
	{ "radiansToDegrees", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_radiansToDegrees, "F", 25 },
	{ "radDeg", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_radDeg, "F", 25 },
	{ "degreesToRadians", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_degreesToRadians, "F", 25 },
	{ "degRad", &class_float, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_degRad, "F", 25 },
	{ "random", &class_java_util_Random, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_random, "Ljava/util/Random;", 9 },
	{ "BIG_ENOUGH_INT", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_INT, "I", 26 },
	{ "BIG_ENOUGH_FLOOR", &class_double, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_FLOOR, "D", 26 },
	{ "CEIL", &class_double, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_CEIL, "D", 26 },
	{ "BIG_ENOUGH_CEIL", &class_double, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_CEIL, "D", 26 },
	{ "BIG_ENOUGH_ROUND", &class_double, (intptr_t) &SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_ROUND, "D", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_MathUtils, 0, "()V", 2 },
	{ "sin", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float, 0, "(F)F", 9 },
	{ "cos", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float, 0, "(F)F", 9 },
	{ "sinDeg", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float, 0, "(F)F", 9 },
	{ "cosDeg", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float, 0, "(F)F", 9 },
	{ "tan", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_tan_float_R_float, 0, "(F)F", 9 },
	{ "tanDeg", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_tanDeg_float_R_float, 0, "(F)F", 9 },
	{ "atanUnchecked", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_atanUnchecked_double_R_float, 0, "(D)F", 9 },
	{ "atan2", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_atan2_float_float_R_float, 0, "(FF)F", 9 },
	{ "atanUncheckedDeg", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_atanUncheckedDeg_double_R_double, 0, "(D)D", 9 },
	{ "atan2Deg", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_atan2Deg_float_float_R_float, 0, "(FF)F", 9 },
	{ "atan2Deg360", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_atan2Deg360_float_float_R_float, 0, "(FF)F", 9 },
	{ "acos", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_acos_float_R_float, 0, "(F)F", 9 },
	{ "asin", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_asin_float_R_float, 0, "(F)F", 9 },
	{ "atan", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_atan_float_R_float, 0, "(F)F", 9 },
	{ "asinDeg", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_asinDeg_float_R_float, 0, "(F)F", 9 },
	{ "acosDeg", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_acosDeg_float_R_float, 0, "(F)F", 9 },
	{ "atanDeg", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_atanDeg_float_R_float, 0, "(F)F", 9 },
	{ "random", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_random_int_R_int, 0, "(I)I", 9 },
	{ "random", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_random_int_int_R_int, 0, "(II)I", 9 },
	{ "random", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_random_long_R_long, 0, "(J)J", 9 },
	{ "random", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_random_long_long_R_long, 0, "(JJ)J", 9 },
	{ "randomBoolean", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_randomBoolean_R_boolean, 0, "()Z", 9 },
	{ "randomBoolean", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_randomBoolean_float_R_boolean, 0, "(F)Z", 9 },
	{ "random", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_random_R_float, 0, "()F", 9 },
	{ "random", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_random_float_R_float, 0, "(F)F", 9 },
	{ "random", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_random_float_float_R_float, 0, "(FF)F", 9 },
	{ "randomSign", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_randomSign_R_int, 0, "()I", 9 },
	{ "randomTriangular", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_randomTriangular_R_float, 0, "()F", 9 },
	{ "randomTriangular", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_randomTriangular_float_R_float, 0, "(F)F", 9 },
	{ "randomTriangular", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_randomTriangular_float_float_R_float, 0, "(FF)F", 9 },
	{ "randomTriangular", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_randomTriangular_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "nextPowerOfTwo", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_nextPowerOfTwo_int_R_int, 0, "(I)I", 9 },
	{ "isPowerOfTwo", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_isPowerOfTwo_int_R_boolean, 0, "(I)Z", 9 },
	{ "clamp", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_clamp_short_short_short_R_short, 0, "(SSS)S", 9 },
	{ "clamp", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_clamp_int_int_int_R_int, 0, "(III)I", 9 },
	{ "clamp", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_clamp_long_long_long_R_long, 0, "(JJJ)J", 9 },
	{ "clamp", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "clamp", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_clamp_double_double_double_R_double, 0, "(DDD)D", 9 },
	{ "lerp", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_lerp_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "norm", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_norm_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "map", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_map_float_float_float_float_float_R_float, 0, "(FFFFF)F", 9 },
	{ "lerpAngle", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_lerpAngle_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "lerpAngleDeg", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_lerpAngleDeg_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "floor", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_floor_float_R_int, 0, "(F)I", 9 },
	{ "floorPositive", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_floorPositive_float_R_int, 0, "(F)I", 9 },
	{ "ceil", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_ceil_float_R_int, 0, "(F)I", 9 },
	{ "ceilPositive", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_ceilPositive_float_R_int, 0, "(F)I", 9 },
	{ "round", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_round_float_R_int, 0, "(F)I", 9 },
	{ "roundPositive", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_roundPositive_float_R_int, 0, "(F)I", 9 },
	{ "isZero", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean, 0, "(F)Z", 9 },
	{ "isZero", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean, 0, "(FF)Z", 9 },
	{ "isEqual", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean, 0, "(FF)Z", 9 },
	{ "isEqual", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean, 0, "(FFF)Z", 9 },
	{ "log", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_log_float_float_R_float, 0, "(FF)F", 9 },
	{ "log2", (intptr_t) SM_com_badlogic_gdx_math_MathUtils_log2_float_R_float, 0, "(F)F", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_MathUtils, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_MathUtils{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/MathUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_MathUtils),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_MathUtils,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_MathUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_MathUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 23,
		.nativeFields = (intptr_t) fields,
		.methodCount = 57,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_MathUtils = registerClass(&class_com_badlogic_gdx_math_MathUtils);

}

