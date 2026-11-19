#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/math/Interpolation_PowIn.h"
#include "com/badlogic/gdx/math/Interpolation_ExpOut.h"
#include "com/badlogic/gdx/math/Interpolation_Swing.h"
#include "com/badlogic/gdx/math/Interpolation_Bounce.h"
#include "com/badlogic/gdx/math/Interpolation_SwingIn.h"
#include "com/badlogic/gdx/math/Interpolation_8.h"
#include "com/badlogic/gdx/math/Interpolation_7.h"
#include "com/badlogic/gdx/math/Interpolation_9.h"
#include "com/badlogic/gdx/math/Interpolation_4.h"
#include "com/badlogic/gdx/math/Interpolation_3.h"
#include "com/badlogic/gdx/math/Interpolation_6.h"
#include "com/badlogic/gdx/math/Interpolation_5.h"
#include "com/badlogic/gdx/math/Interpolation_2.h"
#include "com/badlogic/gdx/math/Interpolation_1.h"
#include "com/badlogic/gdx/math/Interpolation_ElasticIn.h"
#include "com/badlogic/gdx/math/Interpolation_PowOut.h"
#include "com/badlogic/gdx/math/Interpolation_ElasticOut.h"
#include "com/badlogic/gdx/math/Interpolation_Elastic.h"
#include "com/badlogic/gdx/math/Interpolation_SwingOut.h"
#include "com/badlogic/gdx/math/Interpolation_13.h"
#include "com/badlogic/gdx/math/Interpolation_12.h"
#include "com/badlogic/gdx/math/Interpolation_Exp.h"
#include "com/badlogic/gdx/math/Interpolation_14.h"
#include "com/badlogic/gdx/math/Interpolation_ExpIn.h"
#include "com/badlogic/gdx/math/Interpolation_11.h"
#include "com/badlogic/gdx/math/Interpolation_10.h"
#include "com/badlogic/gdx/math/Interpolation_BounceOut.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Interpolation_Pow.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/math/Interpolation_BounceIn.h"

extern "C" {

jobject SF_com_badlogic_gdx_math_Interpolation_linear;
jobject SF_com_badlogic_gdx_math_Interpolation_smooth;
jobject SF_com_badlogic_gdx_math_Interpolation_smooth2;
jobject SF_com_badlogic_gdx_math_Interpolation_smoother;
jobject SF_com_badlogic_gdx_math_Interpolation_fade;
jobject SF_com_badlogic_gdx_math_Interpolation_pow2;
jobject SF_com_badlogic_gdx_math_Interpolation_pow2In;
jobject SF_com_badlogic_gdx_math_Interpolation_slowFast;
jobject SF_com_badlogic_gdx_math_Interpolation_pow2Out;
jobject SF_com_badlogic_gdx_math_Interpolation_fastSlow;
jobject SF_com_badlogic_gdx_math_Interpolation_pow2InInverse;
jobject SF_com_badlogic_gdx_math_Interpolation_pow2OutInverse;
jobject SF_com_badlogic_gdx_math_Interpolation_pow3;
jobject SF_com_badlogic_gdx_math_Interpolation_pow3In;
jobject SF_com_badlogic_gdx_math_Interpolation_pow3Out;
jobject SF_com_badlogic_gdx_math_Interpolation_pow3InInverse;
jobject SF_com_badlogic_gdx_math_Interpolation_pow3OutInverse;
jobject SF_com_badlogic_gdx_math_Interpolation_pow4;
jobject SF_com_badlogic_gdx_math_Interpolation_pow4In;
jobject SF_com_badlogic_gdx_math_Interpolation_pow4Out;
jobject SF_com_badlogic_gdx_math_Interpolation_pow5;
jobject SF_com_badlogic_gdx_math_Interpolation_pow5In;
jobject SF_com_badlogic_gdx_math_Interpolation_pow5Out;
jobject SF_com_badlogic_gdx_math_Interpolation_sine;
jobject SF_com_badlogic_gdx_math_Interpolation_sineIn;
jobject SF_com_badlogic_gdx_math_Interpolation_sineOut;
jobject SF_com_badlogic_gdx_math_Interpolation_exp10;
jobject SF_com_badlogic_gdx_math_Interpolation_exp10In;
jobject SF_com_badlogic_gdx_math_Interpolation_exp10Out;
jobject SF_com_badlogic_gdx_math_Interpolation_exp5;
jobject SF_com_badlogic_gdx_math_Interpolation_exp5In;
jobject SF_com_badlogic_gdx_math_Interpolation_exp5Out;
jobject SF_com_badlogic_gdx_math_Interpolation_circle;
jobject SF_com_badlogic_gdx_math_Interpolation_circleIn;
jobject SF_com_badlogic_gdx_math_Interpolation_circleOut;
jobject SF_com_badlogic_gdx_math_Interpolation_elastic;
jobject SF_com_badlogic_gdx_math_Interpolation_elasticIn;
jobject SF_com_badlogic_gdx_math_Interpolation_elasticOut;
jobject SF_com_badlogic_gdx_math_Interpolation_swing;
jobject SF_com_badlogic_gdx_math_Interpolation_swingIn;
jobject SF_com_badlogic_gdx_math_Interpolation_swingOut;
jobject SF_com_badlogic_gdx_math_Interpolation_bounce;
jobject SF_com_badlogic_gdx_math_Interpolation_bounceIn;
jobject SF_com_badlogic_gdx_math_Interpolation_bounceOut;

void mark_com_badlogic_gdx_math_Interpolation(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_Interpolation_linear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_linear)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_linear, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_smooth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_smooth)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_smooth, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_smooth2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_smooth2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_smooth2, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_smoother)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_smoother)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_smoother, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_fade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_fade)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_fade, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow2, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow2In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow2In)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow2In, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_slowFast)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_slowFast)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_slowFast, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow2Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow2Out)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow2Out, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_fastSlow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_fastSlow)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_fastSlow, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow2InInverse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow2InInverse)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow2InInverse, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow2OutInverse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow2OutInverse)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow2OutInverse, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow3)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow3, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow3In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow3In)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow3In, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow3Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow3Out)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow3Out, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow3InInverse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow3InInverse)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow3InInverse, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow3OutInverse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow3OutInverse)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow3OutInverse, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow4)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow4, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow4In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow4In)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow4In, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow4Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow4Out)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow4Out, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow5)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow5, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow5In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow5In)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow5In, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_pow5Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_pow5Out)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_pow5Out, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_sine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_sine)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_sine, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_sineIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_sineIn)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_sineIn, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_sineOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_sineOut)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_sineOut, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_exp10)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_exp10)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_exp10, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_exp10In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_exp10In)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_exp10In, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_exp10Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_exp10Out)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_exp10Out, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_exp5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_exp5)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_exp5, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_exp5In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_exp5In)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_exp5In, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_exp5Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_exp5Out)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_exp5Out, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_circle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_circle)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_circle, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_circleIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_circleIn)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_circleIn, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_circleOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_circleOut)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_circleOut, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_elastic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_elastic)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_elastic, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_elasticIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_elasticIn)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_elasticIn, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_elasticOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_elasticOut)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_elasticOut, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_swing)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_swing)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_swing, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_swingIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_swingIn)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_swingIn, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_swingOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_swingOut)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_swingOut, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_bounce)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_bounce)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_bounce, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_bounceIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_bounceIn)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_bounceIn, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Interpolation_bounceOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Interpolation_bounceOut)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Interpolation_bounceOut, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_Interpolation *) object;
}

void init_com_badlogic_gdx_math_Interpolation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Interpolation_apply_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation:apply", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(27);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (frame[2].f) - (frame[1].f);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Interpolation_apply_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_R_float])(ctx, (frame[0].o), (frame[3].f));
	popStackFrame(ctx);
	return (temp0 + (temp1 * temp2));
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_Interpolation(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	{
	LINE_NUMBER(32);
	clinit_com_badlogic_gdx_math_Interpolation$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$1);
	init_com_badlogic_gdx_math_Interpolation$1(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_linear = sp[0].o;
	LINE_NUMBER(41);
	clinit_com_badlogic_gdx_math_Interpolation$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$2);
	init_com_badlogic_gdx_math_Interpolation$2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_smooth = sp[0].o;
	LINE_NUMBER(46);
	clinit_com_badlogic_gdx_math_Interpolation$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$3);
	init_com_badlogic_gdx_math_Interpolation$3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_smooth2 = sp[0].o;
	LINE_NUMBER(54);
	clinit_com_badlogic_gdx_math_Interpolation$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$4);
	init_com_badlogic_gdx_math_Interpolation$4(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_smoother = sp[0].o;
	LINE_NUMBER(59);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_smoother;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_fade = sp[0].o;
	LINE_NUMBER(63);
	clinit_com_badlogic_gdx_math_Interpolation$Pow(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$Pow);
	init_com_badlogic_gdx_math_Interpolation$Pow_int(ctx, sp[0].o, (jint(2)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow2 = sp[0].o;
	LINE_NUMBER(65);
	clinit_com_badlogic_gdx_math_Interpolation$PowIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$PowIn);
	init_com_badlogic_gdx_math_Interpolation$PowIn_int(ctx, sp[0].o, (jint(2)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow2In = sp[0].o;
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_pow2In;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_slowFast = sp[0].o;
	LINE_NUMBER(68);
	clinit_com_badlogic_gdx_math_Interpolation$PowOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$PowOut);
	init_com_badlogic_gdx_math_Interpolation$PowOut_int(ctx, sp[0].o, (jint(2)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow2Out = sp[0].o;
	LINE_NUMBER(69);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_pow2Out;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_fastSlow = sp[0].o;
	LINE_NUMBER(70);
	clinit_com_badlogic_gdx_math_Interpolation$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$5);
	init_com_badlogic_gdx_math_Interpolation$5(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow2InInverse = sp[0].o;
	LINE_NUMBER(76);
	clinit_com_badlogic_gdx_math_Interpolation$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$6);
	init_com_badlogic_gdx_math_Interpolation$6(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow2OutInverse = sp[0].o;
	LINE_NUMBER(84);
	clinit_com_badlogic_gdx_math_Interpolation$Pow(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$Pow);
	init_com_badlogic_gdx_math_Interpolation$Pow_int(ctx, sp[0].o, (jint(3)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow3 = sp[0].o;
	LINE_NUMBER(85);
	clinit_com_badlogic_gdx_math_Interpolation$PowIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$PowIn);
	init_com_badlogic_gdx_math_Interpolation$PowIn_int(ctx, sp[0].o, (jint(3)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow3In = sp[0].o;
	LINE_NUMBER(86);
	clinit_com_badlogic_gdx_math_Interpolation$PowOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$PowOut);
	init_com_badlogic_gdx_math_Interpolation$PowOut_int(ctx, sp[0].o, (jint(3)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow3Out = sp[0].o;
	LINE_NUMBER(87);
	clinit_com_badlogic_gdx_math_Interpolation$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$7);
	init_com_badlogic_gdx_math_Interpolation$7(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow3InInverse = sp[0].o;
	LINE_NUMBER(92);
	clinit_com_badlogic_gdx_math_Interpolation$8(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$8);
	init_com_badlogic_gdx_math_Interpolation$8(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow3OutInverse = sp[0].o;
	LINE_NUMBER(98);
	clinit_com_badlogic_gdx_math_Interpolation$Pow(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$Pow);
	init_com_badlogic_gdx_math_Interpolation$Pow_int(ctx, sp[0].o, (jint(4)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow4 = sp[0].o;
	LINE_NUMBER(99);
	clinit_com_badlogic_gdx_math_Interpolation$PowIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$PowIn);
	init_com_badlogic_gdx_math_Interpolation$PowIn_int(ctx, sp[0].o, (jint(4)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow4In = sp[0].o;
	LINE_NUMBER(100);
	clinit_com_badlogic_gdx_math_Interpolation$PowOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$PowOut);
	init_com_badlogic_gdx_math_Interpolation$PowOut_int(ctx, sp[0].o, (jint(4)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow4Out = sp[0].o;
	LINE_NUMBER(102);
	clinit_com_badlogic_gdx_math_Interpolation$Pow(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$Pow);
	init_com_badlogic_gdx_math_Interpolation$Pow_int(ctx, sp[0].o, (jint(5)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow5 = sp[0].o;
	LINE_NUMBER(103);
	clinit_com_badlogic_gdx_math_Interpolation$PowIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$PowIn);
	init_com_badlogic_gdx_math_Interpolation$PowIn_int(ctx, sp[0].o, (jint(5)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow5In = sp[0].o;
	LINE_NUMBER(104);
	clinit_com_badlogic_gdx_math_Interpolation$PowOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$PowOut);
	init_com_badlogic_gdx_math_Interpolation$PowOut_int(ctx, sp[0].o, (jint(5)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_pow5Out = sp[0].o;
	LINE_NUMBER(106);
	clinit_com_badlogic_gdx_math_Interpolation$9(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$9);
	init_com_badlogic_gdx_math_Interpolation$9(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_sine = sp[0].o;
	LINE_NUMBER(112);
	clinit_com_badlogic_gdx_math_Interpolation$10(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$10);
	init_com_badlogic_gdx_math_Interpolation$10(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_sineIn = sp[0].o;
	LINE_NUMBER(118);
	clinit_com_badlogic_gdx_math_Interpolation$11(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$11);
	init_com_badlogic_gdx_math_Interpolation$11(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_sineOut = sp[0].o;
	LINE_NUMBER(124);
	clinit_com_badlogic_gdx_math_Interpolation$Exp(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$Exp);
	init_com_badlogic_gdx_math_Interpolation$Exp_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_exp10 = sp[0].o;
	LINE_NUMBER(125);
	clinit_com_badlogic_gdx_math_Interpolation$ExpIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$ExpIn);
	init_com_badlogic_gdx_math_Interpolation$ExpIn_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_exp10In = sp[0].o;
	LINE_NUMBER(126);
	clinit_com_badlogic_gdx_math_Interpolation$ExpOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$ExpOut);
	init_com_badlogic_gdx_math_Interpolation$ExpOut_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_exp10Out = sp[0].o;
	LINE_NUMBER(128);
	clinit_com_badlogic_gdx_math_Interpolation$Exp(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$Exp);
	init_com_badlogic_gdx_math_Interpolation$Exp_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(5.0f)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_exp5 = sp[0].o;
	LINE_NUMBER(129);
	clinit_com_badlogic_gdx_math_Interpolation$ExpIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$ExpIn);
	init_com_badlogic_gdx_math_Interpolation$ExpIn_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(5.0f)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_exp5In = sp[0].o;
	LINE_NUMBER(130);
	clinit_com_badlogic_gdx_math_Interpolation$ExpOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$ExpOut);
	init_com_badlogic_gdx_math_Interpolation$ExpOut_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(5.0f)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_exp5Out = sp[0].o;
	LINE_NUMBER(132);
	clinit_com_badlogic_gdx_math_Interpolation$12(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$12);
	init_com_badlogic_gdx_math_Interpolation$12(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_circle = sp[0].o;
	LINE_NUMBER(144);
	clinit_com_badlogic_gdx_math_Interpolation$13(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$13);
	init_com_badlogic_gdx_math_Interpolation$13(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_circleIn = sp[0].o;
	LINE_NUMBER(150);
	clinit_com_badlogic_gdx_math_Interpolation$14(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$14);
	init_com_badlogic_gdx_math_Interpolation$14(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_circleOut = sp[0].o;
	LINE_NUMBER(157);
	clinit_com_badlogic_gdx_math_Interpolation$Elastic(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$Elastic);
	init_com_badlogic_gdx_math_Interpolation$Elastic_float_float_int_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)), (7), (jfloat(1)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_elastic = sp[0].o;
	LINE_NUMBER(158);
	clinit_com_badlogic_gdx_math_Interpolation$ElasticIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$ElasticIn);
	init_com_badlogic_gdx_math_Interpolation$ElasticIn_float_float_int_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)), (6), (jfloat(1)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_elasticIn = sp[0].o;
	LINE_NUMBER(159);
	clinit_com_badlogic_gdx_math_Interpolation$ElasticOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$ElasticOut);
	init_com_badlogic_gdx_math_Interpolation$ElasticOut_float_float_int_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)), (7), (jfloat(1)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_elasticOut = sp[0].o;
	LINE_NUMBER(161);
	clinit_com_badlogic_gdx_math_Interpolation$Swing(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$Swing);
	init_com_badlogic_gdx_math_Interpolation$Swing_float(ctx, sp[0].o, (jfloat(1.5f)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_swing = sp[0].o;
	LINE_NUMBER(162);
	clinit_com_badlogic_gdx_math_Interpolation$SwingIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$SwingIn);
	init_com_badlogic_gdx_math_Interpolation$SwingIn_float(ctx, sp[0].o, (jfloat(2)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_swingIn = sp[0].o;
	LINE_NUMBER(163);
	clinit_com_badlogic_gdx_math_Interpolation$SwingOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$SwingOut);
	init_com_badlogic_gdx_math_Interpolation$SwingOut_float(ctx, sp[0].o, (jfloat(2)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_swingOut = sp[0].o;
	LINE_NUMBER(165);
	clinit_com_badlogic_gdx_math_Interpolation$Bounce(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$Bounce);
	init_com_badlogic_gdx_math_Interpolation$Bounce_int(ctx, sp[0].o, (jint(4)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_bounce = sp[0].o;
	LINE_NUMBER(166);
	clinit_com_badlogic_gdx_math_Interpolation$BounceIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$BounceIn);
	init_com_badlogic_gdx_math_Interpolation$BounceIn_int(ctx, sp[0].o, (jint(4)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_bounceIn = sp[0].o;
	LINE_NUMBER(167);
	clinit_com_badlogic_gdx_math_Interpolation$BounceOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Interpolation$BounceOut);
	init_com_badlogic_gdx_math_Interpolation$BounceOut_int(ctx, sp[0].o, (jint(4)));
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	SF_com_badlogic_gdx_math_Interpolation_bounceOut = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Interpolation[] {
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
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_math_Interpolation_apply_float_float_float_R_float,
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
	{ "apply", "(F)F" },
	{ "apply", "(FFF)F" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_math_Interpolation$Pow,
	&class_com_badlogic_gdx_math_Interpolation$PowIn,
	&class_com_badlogic_gdx_math_Interpolation$PowOut,
	&class_com_badlogic_gdx_math_Interpolation$Exp,
	&class_com_badlogic_gdx_math_Interpolation$ExpIn,
	&class_com_badlogic_gdx_math_Interpolation$ExpOut,
	&class_com_badlogic_gdx_math_Interpolation$Elastic,
	&class_com_badlogic_gdx_math_Interpolation$ElasticIn,
	&class_com_badlogic_gdx_math_Interpolation$ElasticOut,
	&class_com_badlogic_gdx_math_Interpolation$Swing,
	&class_com_badlogic_gdx_math_Interpolation$SwingIn,
	&class_com_badlogic_gdx_math_Interpolation$SwingOut,
	&class_com_badlogic_gdx_math_Interpolation$Bounce,
	&class_com_badlogic_gdx_math_Interpolation$BounceIn,
	&class_com_badlogic_gdx_math_Interpolation$BounceOut,
};

static FieldMetadata fields[] {
	{ "linear", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_linear, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "smooth", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_smooth, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "smooth2", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_smooth2, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "smoother", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_smoother, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "fade", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_fade, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "pow2", &class_com_badlogic_gdx_math_Interpolation$Pow, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow2, "Lcom/badlogic/gdx/math/Interpolation$Pow;", 25 },
	{ "pow2In", &class_com_badlogic_gdx_math_Interpolation$PowIn, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow2In, "Lcom/badlogic/gdx/math/Interpolation$PowIn;", 25 },
	{ "slowFast", &class_com_badlogic_gdx_math_Interpolation$PowIn, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_slowFast, "Lcom/badlogic/gdx/math/Interpolation$PowIn;", 25 },
	{ "pow2Out", &class_com_badlogic_gdx_math_Interpolation$PowOut, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow2Out, "Lcom/badlogic/gdx/math/Interpolation$PowOut;", 25 },
	{ "fastSlow", &class_com_badlogic_gdx_math_Interpolation$PowOut, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_fastSlow, "Lcom/badlogic/gdx/math/Interpolation$PowOut;", 25 },
	{ "pow2InInverse", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow2InInverse, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "pow2OutInverse", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow2OutInverse, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "pow3", &class_com_badlogic_gdx_math_Interpolation$Pow, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow3, "Lcom/badlogic/gdx/math/Interpolation$Pow;", 25 },
	{ "pow3In", &class_com_badlogic_gdx_math_Interpolation$PowIn, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow3In, "Lcom/badlogic/gdx/math/Interpolation$PowIn;", 25 },
	{ "pow3Out", &class_com_badlogic_gdx_math_Interpolation$PowOut, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow3Out, "Lcom/badlogic/gdx/math/Interpolation$PowOut;", 25 },
	{ "pow3InInverse", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow3InInverse, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "pow3OutInverse", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow3OutInverse, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "pow4", &class_com_badlogic_gdx_math_Interpolation$Pow, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow4, "Lcom/badlogic/gdx/math/Interpolation$Pow;", 25 },
	{ "pow4In", &class_com_badlogic_gdx_math_Interpolation$PowIn, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow4In, "Lcom/badlogic/gdx/math/Interpolation$PowIn;", 25 },
	{ "pow4Out", &class_com_badlogic_gdx_math_Interpolation$PowOut, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow4Out, "Lcom/badlogic/gdx/math/Interpolation$PowOut;", 25 },
	{ "pow5", &class_com_badlogic_gdx_math_Interpolation$Pow, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow5, "Lcom/badlogic/gdx/math/Interpolation$Pow;", 25 },
	{ "pow5In", &class_com_badlogic_gdx_math_Interpolation$PowIn, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow5In, "Lcom/badlogic/gdx/math/Interpolation$PowIn;", 25 },
	{ "pow5Out", &class_com_badlogic_gdx_math_Interpolation$PowOut, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_pow5Out, "Lcom/badlogic/gdx/math/Interpolation$PowOut;", 25 },
	{ "sine", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_sine, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "sineIn", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_sineIn, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "sineOut", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_sineOut, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "exp10", &class_com_badlogic_gdx_math_Interpolation$Exp, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_exp10, "Lcom/badlogic/gdx/math/Interpolation$Exp;", 25 },
	{ "exp10In", &class_com_badlogic_gdx_math_Interpolation$ExpIn, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_exp10In, "Lcom/badlogic/gdx/math/Interpolation$ExpIn;", 25 },
	{ "exp10Out", &class_com_badlogic_gdx_math_Interpolation$ExpOut, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_exp10Out, "Lcom/badlogic/gdx/math/Interpolation$ExpOut;", 25 },
	{ "exp5", &class_com_badlogic_gdx_math_Interpolation$Exp, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_exp5, "Lcom/badlogic/gdx/math/Interpolation$Exp;", 25 },
	{ "exp5In", &class_com_badlogic_gdx_math_Interpolation$ExpIn, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_exp5In, "Lcom/badlogic/gdx/math/Interpolation$ExpIn;", 25 },
	{ "exp5Out", &class_com_badlogic_gdx_math_Interpolation$ExpOut, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_exp5Out, "Lcom/badlogic/gdx/math/Interpolation$ExpOut;", 25 },
	{ "circle", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_circle, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "circleIn", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_circleIn, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "circleOut", &class_com_badlogic_gdx_math_Interpolation, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_circleOut, "Lcom/badlogic/gdx/math/Interpolation;", 25 },
	{ "elastic", &class_com_badlogic_gdx_math_Interpolation$Elastic, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_elastic, "Lcom/badlogic/gdx/math/Interpolation$Elastic;", 25 },
	{ "elasticIn", &class_com_badlogic_gdx_math_Interpolation$ElasticIn, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_elasticIn, "Lcom/badlogic/gdx/math/Interpolation$ElasticIn;", 25 },
	{ "elasticOut", &class_com_badlogic_gdx_math_Interpolation$ElasticOut, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_elasticOut, "Lcom/badlogic/gdx/math/Interpolation$ElasticOut;", 25 },
	{ "swing", &class_com_badlogic_gdx_math_Interpolation$Swing, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_swing, "Lcom/badlogic/gdx/math/Interpolation$Swing;", 25 },
	{ "swingIn", &class_com_badlogic_gdx_math_Interpolation$SwingIn, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_swingIn, "Lcom/badlogic/gdx/math/Interpolation$SwingIn;", 25 },
	{ "swingOut", &class_com_badlogic_gdx_math_Interpolation$SwingOut, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_swingOut, "Lcom/badlogic/gdx/math/Interpolation$SwingOut;", 25 },
	{ "bounce", &class_com_badlogic_gdx_math_Interpolation$Bounce, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_bounce, "Lcom/badlogic/gdx/math/Interpolation$Bounce;", 25 },
	{ "bounceIn", &class_com_badlogic_gdx_math_Interpolation$BounceIn, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_bounceIn, "Lcom/badlogic/gdx/math/Interpolation$BounceIn;", 25 },
	{ "bounceOut", &class_com_badlogic_gdx_math_Interpolation$BounceOut, (intptr_t) &SF_com_badlogic_gdx_math_Interpolation_bounceOut, "Lcom/badlogic/gdx/math/Interpolation$BounceOut;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Interpolation, 0, "()V", 1 },
	{ "apply", 0, VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_R_float, "(F)F", 1025 },
	{ "apply", (intptr_t) M_com_badlogic_gdx_math_Interpolation_apply_float_float_float_R_float, VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_float_float_R_float, "(FFF)F", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_Interpolation, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_Interpolation{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Interpolation",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Interpolation),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Interpolation,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Interpolation,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Interpolation,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 15,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 44,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Interpolation = registerClass(&class_com_badlogic_gdx_math_Interpolation);

}

