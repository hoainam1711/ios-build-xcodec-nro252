#include "com/badlogic/gdx/math/Affine2.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/math/Affine2.h"
#include "com/badlogic/gdx/math/Matrix3.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {

jlong SF_com_badlogic_gdx_math_Affine2_serialVersionUID;

void mark_com_badlogic_gdx_math_Affine2(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_math_Affine2 *) object;
}

void clinit_com_badlogic_gdx_math_Affine2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_Affine2_serialVersionUID = jlong(1524569123485049187ll);
}

void init_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Affine2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (jfloat(1));
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(33);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (jfloat(1));
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Affine2_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Affine2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (jfloat(1));
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(33);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (jfloat(1));
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_idt_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:idt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (jfloat(1));
	LINE_NUMBER(52);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(53);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(54);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(55);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (jfloat(1));
	LINE_NUMBER(56);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00);
	LINE_NUMBER(65);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01);
	LINE_NUMBER(66);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02);
	LINE_NUMBER(67);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10);
	LINE_NUMBER(68);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11);
	LINE_NUMBER(69);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))));
	LINE_NUMBER(80);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))));
	LINE_NUMBER(81);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6)));
	LINE_NUMBER(82);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))));
	LINE_NUMBER(83);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))));
	LINE_NUMBER(84);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7)));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(101);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))));
	LINE_NUMBER(102);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))));
	LINE_NUMBER(103);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (12)));
	LINE_NUMBER(104);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))));
	LINE_NUMBER(105);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))));
	LINE_NUMBER(106);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (13)));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToTranslation_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(115);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (jfloat(1));
	LINE_NUMBER(116);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(117);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[1].f);
	LINE_NUMBER(118);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(119);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (jfloat(1));
	LINE_NUMBER(120);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[2].f);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_setToTranslation_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_setToTranslation_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToScaling_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToScaling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(136);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[1].f);
	LINE_NUMBER(137);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(138);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(139);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(140);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[2].f);
	LINE_NUMBER(141);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToScaling_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToScaling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_setToScaling_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_setToScaling_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToRotation_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToRotation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(156);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(157);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(159);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[2].f);
	LINE_NUMBER(160);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (-(frame[3].f));
	LINE_NUMBER(161);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(162);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[3].f);
	LINE_NUMBER(163);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[2].f);
	LINE_NUMBER(164);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToRotationRad_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToRotationRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(172);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(173);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(175);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[2].f);
	LINE_NUMBER(176);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (-(frame[3].f));
	LINE_NUMBER(177);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(178);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[3].f);
	LINE_NUMBER(179);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[2].f);
	LINE_NUMBER(180);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToRotation_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToRotation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(189);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[1].f);
	LINE_NUMBER(190);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (-(frame[2].f));
	LINE_NUMBER(191);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(192);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[2].f);
	LINE_NUMBER(193);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[1].f);
	LINE_NUMBER(194);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToShearing_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToShearing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(203);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (jfloat(1));
	LINE_NUMBER(204);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[1].f);
	LINE_NUMBER(205);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(206);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[2].f);
	LINE_NUMBER(207);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (jfloat(1));
	LINE_NUMBER(208);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToShearing_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToShearing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_setToShearing_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_setToShearing_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToTrnRotScl", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(228);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[1].f);
	LINE_NUMBER(229);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[2].f);
	LINE_NUMBER(231);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(232);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(233);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(234);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(235);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[5].f);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(237);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[3].f));
	frame[6].f = temp0;
	LINE_NUMBER(238);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[3].f));
	frame[7].f = temp1;
	LINE_NUMBER(240);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((frame[7].f) * (frame[4].f));
	LINE_NUMBER(241);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((-(frame[6].f)) * (frame[5].f));
	LINE_NUMBER(242);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((frame[6].f) * (frame[4].f));
	LINE_NUMBER(243);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((frame[7].f) * (frame[5].f));
	}
label_8:;
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToTrnRotScl_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToTrnRotScl", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToTrnRotRadScl", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(267);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[1].f);
	LINE_NUMBER(268);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[2].f);
	LINE_NUMBER(270);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(271);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(272);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(273);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(274);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[5].f);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(276);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, (frame[3].f));
	frame[6].f = temp0;
	LINE_NUMBER(277);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, (frame[3].f));
	frame[7].f = temp1;
	LINE_NUMBER(279);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((frame[7].f) * (frame[4].f));
	LINE_NUMBER(280);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((-(frame[6].f)) * (frame[5].f));
	LINE_NUMBER(281);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((frame[6].f) * (frame[4].f));
	LINE_NUMBER(282);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((frame[7].f) * (frame[5].f));
	}
label_8:;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToTrnRotRadScl_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToTrnRotRadScl", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToTrnScl_float_float_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToTrnScl", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(305);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[3].f);
	LINE_NUMBER(306);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(307);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[1].f);
	LINE_NUMBER(308);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(309);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[4].f);
	LINE_NUMBER(310);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[2].f);
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToTrnScl_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToTrnScl", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_setToTrnScl_float_float_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_setToTrnScl_float_float_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_setToProduct_com_badlogic_gdx_math_Affine2_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:setToProduct", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(328);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m00)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m10)));
	LINE_NUMBER(329);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m01)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m11)));
	LINE_NUMBER(330);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m02)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m12))) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02));
	LINE_NUMBER(331);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m00)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m10)));
	LINE_NUMBER(332);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m01)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m11)));
	LINE_NUMBER(333);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m02)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m12))) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12));
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_inv_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:inv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(341);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Affine2_det_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_det_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(342);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can't invert a singular affine matrix"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(344);
	frame[2].f = ((jfloat(1)) / (frame[1].f));
	LINE_NUMBER(346);
	frame[3].f = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11);
	LINE_NUMBER(347);
	frame[4].f = (-((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01));
	LINE_NUMBER(348);
	frame[5].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)) - (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)));
	LINE_NUMBER(349);
	frame[6].f = (-((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10));
	LINE_NUMBER(350);
	frame[7].f = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00);
	LINE_NUMBER(351);
	frame[8].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) - (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(353);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((frame[2].f) * (frame[3].f));
	LINE_NUMBER(354);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((frame[2].f) * (frame[4].f));
	LINE_NUMBER(355);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = ((frame[2].f) * (frame[5].f));
	LINE_NUMBER(356);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((frame[2].f) * (frame[6].f));
	LINE_NUMBER(357);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((frame[2].f) * (frame[7].f));
	LINE_NUMBER(358);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = ((frame[2].f) * (frame[8].f));
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_mul_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:mul", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(371);
	frame[2].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10)));
	LINE_NUMBER(372);
	frame[3].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11)));
	LINE_NUMBER(373);
	frame[4].f = (((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12))) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02));
	LINE_NUMBER(374);
	frame[5].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10)));
	LINE_NUMBER(375);
	frame[6].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11)));
	LINE_NUMBER(376);
	frame[7].f = (((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12))) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12));
	LINE_NUMBER(378);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[2].f);
	LINE_NUMBER(379);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[3].f);
	LINE_NUMBER(380);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[4].f);
	LINE_NUMBER(381);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[5].f);
	LINE_NUMBER(382);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[6].f);
	LINE_NUMBER(383);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[7].f);
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_preMul_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:preMul", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(396);
	frame[2].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(397);
	frame[3].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(398);
	frame[4].f = (((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12))) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02));
	LINE_NUMBER(399);
	frame[5].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(400);
	frame[6].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(401);
	frame[7].f = (((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12))) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12));
	LINE_NUMBER(403);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[2].f);
	LINE_NUMBER(404);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[3].f);
	LINE_NUMBER(405);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[4].f);
	LINE_NUMBER(406);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[5].f);
	LINE_NUMBER(407);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[6].f);
	LINE_NUMBER(408);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[7].f);
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_translate_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:translate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(417);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02) + ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (frame[1].f)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[2].f))));
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12) + ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (frame[1].f)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[2].f))));
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_translate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:translate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_translate_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_translate_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_preTranslate_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:preTranslate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(434);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02) + (frame[1].f));
	LINE_NUMBER(435);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12) + (frame[2].f));
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_preTranslate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:preTranslate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_preTranslate_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_preTranslate_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_scale_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:scale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m00 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m00) * (frame[1].f));
	LINE_NUMBER(452);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m01 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m01) * (frame[2].f));
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m10 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m10) * (frame[1].f));
	LINE_NUMBER(454);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m11 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m11) * (frame[2].f));
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_scale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:scale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_scale_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_scale_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_preScale_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:preScale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(470);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m00 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m00) * (frame[1].f));
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m01 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m01) * (frame[1].f));
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02) * (frame[1].f));
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m10 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m10) * (frame[2].f));
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m11 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m11) * (frame[2].f));
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12 = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12) * (frame[2].f));
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_preScale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:preScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_preScale_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_preScale_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_rotate_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:rotate", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(490);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(492);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(493);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(495);
	frame[4].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (frame[2].f)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[3].f)));
	LINE_NUMBER(496);
	frame[5].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (-(frame[3].f))) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[2].f)));
	LINE_NUMBER(497);
	frame[6].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (frame[2].f)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[3].f)));
	LINE_NUMBER(498);
	frame[7].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (-(frame[3].f))) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[2].f)));
	LINE_NUMBER(500);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(501);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[5].f);
	LINE_NUMBER(502);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[6].f);
	LINE_NUMBER(503);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[7].f);
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_rotateRad_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:rotateRad", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(511);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(513);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(514);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(516);
	frame[4].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (frame[2].f)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[3].f)));
	LINE_NUMBER(517);
	frame[5].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (-(frame[3].f))) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[2].f)));
	LINE_NUMBER(518);
	frame[6].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (frame[2].f)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[3].f)));
	LINE_NUMBER(519);
	frame[7].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (-(frame[3].f))) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[2].f)));
	LINE_NUMBER(521);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(522);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[5].f);
	LINE_NUMBER(523);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[6].f);
	LINE_NUMBER(524);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[7].f);
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_preRotate_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:preRotate", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(532);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(534);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(535);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(537);
	frame[4].f = (((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) - ((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(538);
	frame[5].f = (((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) - ((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(539);
	frame[6].f = (((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) - ((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(540);
	frame[7].f = (((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(541);
	frame[8].f = (((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(542);
	frame[9].f = (((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(544);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(545);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[5].f);
	LINE_NUMBER(546);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[6].f);
	LINE_NUMBER(547);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[7].f);
	LINE_NUMBER(548);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[8].f);
	LINE_NUMBER(549);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[9].f);
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_preRotateRad_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:preRotateRad", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(557);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(559);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(560);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(562);
	frame[4].f = (((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) - ((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(563);
	frame[5].f = (((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) - ((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(564);
	frame[6].f = (((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) - ((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(565);
	frame[7].f = (((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(566);
	frame[8].f = (((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(567);
	frame[9].f = (((frame[3].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(569);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(570);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[5].f);
	LINE_NUMBER(571);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[6].f);
	LINE_NUMBER(572);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[7].f);
	LINE_NUMBER(573);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[8].f);
	LINE_NUMBER(574);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[9].f);
	LINE_NUMBER(575);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_shear_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:shear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(583);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)));
	LINE_NUMBER(584);
	frame[4].f = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) + ((frame[1].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)));
	LINE_NUMBER(585);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[3].f);
	LINE_NUMBER(586);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[4].f);
	LINE_NUMBER(588);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(589);
	frame[4].f = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) + ((frame[1].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(590);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[3].f);
	LINE_NUMBER(591);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[4].f);
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_shear_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:shear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_shear_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_shear_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_preShear_float_float_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:preShear", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(607);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) + ((frame[1].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(608);
	frame[4].f = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) + ((frame[1].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(609);
	frame[5].f = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02) + ((frame[1].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(610);
	frame[6].f = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)));
	LINE_NUMBER(611);
	frame[7].f = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)));
	LINE_NUMBER(612);
	frame[8].f = (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12) + ((frame[2].f) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)));
	LINE_NUMBER(614);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[3].f);
	LINE_NUMBER(615);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[4].f);
	LINE_NUMBER(616);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[5].f);
	LINE_NUMBER(617);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[6].f);
	LINE_NUMBER(618);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[7].f);
	LINE_NUMBER(619);
	((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[8].f);
	LINE_NUMBER(620);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_preShear_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:preShear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_preShear_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_preShear_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Affine2_det_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:det", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)) - (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_getTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:getTranslation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(640);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02);
	LINE_NUMBER(641);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12);
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Affine2_isTranslation_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:isTranslation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(648);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00), (jfloat(1)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11), (jfloat(1)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10), (jfloat(0)), -1)) != 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Affine2_isIdt_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:isIdt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(654);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00), (jfloat(1)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11), (jfloat(1)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10), (jfloat(0)), -1)) != 0) goto label_1;
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

void M_com_badlogic_gdx_math_Affine2_applyTo_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:applyTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(659);
	frame[2].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(660);
	frame[3].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(661);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x = (((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (frame[2].f)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[3].f))) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02));
	LINE_NUMBER(662);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y = (((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (frame[2].f)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[3].f))) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12));
	LINE_NUMBER(663);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Affine2_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Affine2:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(667);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n[0.0|0.0|0.1]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Affine2[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_Affine2_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_Affine2_idt_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToTranslation_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToScaling_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToScaling_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToRotation_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToRotationRad_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToRotation_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToShearing_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToShearing_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToTrnRotScl_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToTrnRotRadScl_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToTrnScl_float_float_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToTrnScl_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_setToProduct_com_badlogic_gdx_math_Affine2_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_inv_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_mul_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_preMul_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_translate_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_translate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_preTranslate_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_preTranslate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_scale_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_scale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_preScale_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_preScale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_rotate_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_rotateRad_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_preRotate_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_preRotateRad_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_shear_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_shear_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_preShear_float_float_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_preShear_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_math_Affine2_det_R_float,
	(void *) M_com_badlogic_gdx_math_Affine2_getTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Affine2_isTranslation_R_boolean,
	(void *) M_com_badlogic_gdx_math_Affine2_isIdt_R_boolean,
	(void *) M_com_badlogic_gdx_math_Affine2_applyTo_com_badlogic_gdx_math_Vector2,
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
	{ "idt", "()Lcom/badlogic/gdx/math/Affine2;" },
	{ "set", "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "set", "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "set", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToTranslation", "(FF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToTranslation", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToScaling", "(FF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToScaling", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToRotation", "(F)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToRotationRad", "(F)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToRotation", "(FF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToShearing", "(FF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToShearing", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToTrnRotScl", "(FFFFF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToTrnRotScl", "(Lcom/badlogic/gdx/math/Vector2;FLcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToTrnRotRadScl", "(FFFFF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToTrnRotRadScl", "(Lcom/badlogic/gdx/math/Vector2;FLcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToTrnScl", "(FFFF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToTrnScl", "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "setToProduct", "(Lcom/badlogic/gdx/math/Affine2;Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "inv", "()Lcom/badlogic/gdx/math/Affine2;" },
	{ "mul", "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "preMul", "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "translate", "(FF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "translate", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "preTranslate", "(FF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "preTranslate", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "scale", "(FF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "scale", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "preScale", "(FF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "preScale", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "rotate", "(F)Lcom/badlogic/gdx/math/Affine2;" },
	{ "rotateRad", "(F)Lcom/badlogic/gdx/math/Affine2;" },
	{ "preRotate", "(F)Lcom/badlogic/gdx/math/Affine2;" },
	{ "preRotateRad", "(F)Lcom/badlogic/gdx/math/Affine2;" },
	{ "shear", "(FF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "shear", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "preShear", "(FF)Lcom/badlogic/gdx/math/Affine2;" },
	{ "preShear", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;" },
	{ "det", "()F" },
	{ "getTranslation", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "isTranslation", "()Z" },
	{ "isIdt", "()Z" },
	{ "applyTo", "(Lcom/badlogic/gdx/math/Vector2;)V" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_Affine2_serialVersionUID, "J", 26 },
	{ "m00", &class_float, offsetof(com_badlogic_gdx_math_Affine2, F_m00), "F", 1 },
	{ "m01", &class_float, offsetof(com_badlogic_gdx_math_Affine2, F_m01), "F", 1 },
	{ "m02", &class_float, offsetof(com_badlogic_gdx_math_Affine2, F_m02), "F", 1 },
	{ "m10", &class_float, offsetof(com_badlogic_gdx_math_Affine2, F_m10), "F", 1 },
	{ "m11", &class_float, offsetof(com_badlogic_gdx_math_Affine2, F_m11), "F", 1 },
	{ "m12", &class_float, offsetof(com_badlogic_gdx_math_Affine2, F_m12), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Affine2, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Affine2_com_badlogic_gdx_math_Affine2, 0, "(Lcom/badlogic/gdx/math/Affine2;)V", 1 },
	{ "idt", (intptr_t) M_com_badlogic_gdx_math_Affine2_idt_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_idt_R_com_badlogic_gdx_math_Affine2, "()Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Matrix3;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToTranslation", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToTranslation_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToTranslation_float_float_R_com_badlogic_gdx_math_Affine2, "(FF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToTranslation", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToScaling", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToScaling_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToScaling_float_float_R_com_badlogic_gdx_math_Affine2, "(FF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToScaling", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToScaling_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToScaling_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToRotation", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToRotation_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToRotation_float_R_com_badlogic_gdx_math_Affine2, "(F)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToRotationRad", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToRotationRad_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToRotationRad_float_R_com_badlogic_gdx_math_Affine2, "(F)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToRotation", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToRotation_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToRotation_float_float_R_com_badlogic_gdx_math_Affine2, "(FF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToShearing", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToShearing_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToShearing_float_float_R_com_badlogic_gdx_math_Affine2, "(FF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToShearing", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToShearing_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToShearing_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToTrnRotScl", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2, "(FFFFF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToTrnRotScl", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToTrnRotScl_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToTrnRotScl_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;FLcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToTrnRotRadScl", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2, "(FFFFF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToTrnRotRadScl", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToTrnRotRadScl_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToTrnRotRadScl_com_badlogic_gdx_math_Vector2_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;FLcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToTrnScl", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToTrnScl_float_float_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToTrnScl_float_float_float_float_R_com_badlogic_gdx_math_Affine2, "(FFFF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToTrnScl", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToTrnScl_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToTrnScl_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "setToProduct", (intptr_t) M_com_badlogic_gdx_math_Affine2_setToProduct_com_badlogic_gdx_math_Affine2_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_setToProduct_com_badlogic_gdx_math_Affine2_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Affine2;Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "inv", (intptr_t) M_com_badlogic_gdx_math_Affine2_inv_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_inv_R_com_badlogic_gdx_math_Affine2, "()Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_Affine2_mul_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_mul_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "preMul", (intptr_t) M_com_badlogic_gdx_math_Affine2_preMul_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_preMul_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Affine2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_math_Affine2_translate_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_translate_float_float_R_com_badlogic_gdx_math_Affine2, "(FF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_math_Affine2_translate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_translate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "preTranslate", (intptr_t) M_com_badlogic_gdx_math_Affine2_preTranslate_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_preTranslate_float_float_R_com_badlogic_gdx_math_Affine2, "(FF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "preTranslate", (intptr_t) M_com_badlogic_gdx_math_Affine2_preTranslate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_preTranslate_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_math_Affine2_scale_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_scale_float_float_R_com_badlogic_gdx_math_Affine2, "(FF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_math_Affine2_scale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_scale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "preScale", (intptr_t) M_com_badlogic_gdx_math_Affine2_preScale_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_preScale_float_float_R_com_badlogic_gdx_math_Affine2, "(FF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "preScale", (intptr_t) M_com_badlogic_gdx_math_Affine2_preScale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_preScale_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_math_Affine2_rotate_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_rotate_float_R_com_badlogic_gdx_math_Affine2, "(F)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "rotateRad", (intptr_t) M_com_badlogic_gdx_math_Affine2_rotateRad_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_rotateRad_float_R_com_badlogic_gdx_math_Affine2, "(F)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "preRotate", (intptr_t) M_com_badlogic_gdx_math_Affine2_preRotate_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_preRotate_float_R_com_badlogic_gdx_math_Affine2, "(F)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "preRotateRad", (intptr_t) M_com_badlogic_gdx_math_Affine2_preRotateRad_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_preRotateRad_float_R_com_badlogic_gdx_math_Affine2, "(F)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "shear", (intptr_t) M_com_badlogic_gdx_math_Affine2_shear_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_shear_float_float_R_com_badlogic_gdx_math_Affine2, "(FF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "shear", (intptr_t) M_com_badlogic_gdx_math_Affine2_shear_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_shear_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "preShear", (intptr_t) M_com_badlogic_gdx_math_Affine2_preShear_float_float_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_preShear_float_float_R_com_badlogic_gdx_math_Affine2, "(FF)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "preShear", (intptr_t) M_com_badlogic_gdx_math_Affine2_preShear_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_math_Affine2_preShear_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Affine2;", 1 },
	{ "det", (intptr_t) M_com_badlogic_gdx_math_Affine2_det_R_float, VTABLE_com_badlogic_gdx_math_Affine2_det_R_float, "()F", 1 },
	{ "getTranslation", (intptr_t) M_com_badlogic_gdx_math_Affine2_getTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Affine2_getTranslation_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "isTranslation", (intptr_t) M_com_badlogic_gdx_math_Affine2_isTranslation_R_boolean, VTABLE_com_badlogic_gdx_math_Affine2_isTranslation_R_boolean, "()Z", 1 },
	{ "isIdt", (intptr_t) M_com_badlogic_gdx_math_Affine2_isIdt_R_boolean, VTABLE_com_badlogic_gdx_math_Affine2_isIdt_R_boolean, "()Z", 1 },
	{ "applyTo", (intptr_t) M_com_badlogic_gdx_math_Affine2_applyTo_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Affine2_applyTo_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_Affine2_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_Affine2_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_math_Affine2{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Affine2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Affine2),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Affine2,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Affine2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Affine2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 47,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 55,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Affine2 = registerClass(&class_com_badlogic_gdx_math_Affine2);

}

