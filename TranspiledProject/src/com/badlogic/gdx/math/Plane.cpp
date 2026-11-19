#include "com/badlogic/gdx/math/Plane.h"
#include "com/badlogic/gdx/math/Plane_PlaneSide.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Plane.h"
#include "com/badlogic/gdx/math/Vector3.h"

extern "C" {

jlong SF_com_badlogic_gdx_math_Plane_serialVersionUID;

void mark_com_badlogic_gdx_math_Plane(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_math_Plane *) object;
	if (self->F_normal)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_normal)->clazz)->markFunction)((jobject) self->F_normal, mark, depth + 1);
}

void clinit_com_badlogic_gdx_math_Plane(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_Plane_serialVersionUID = jlong(-1240652082930747866ll);
}

void init_com_badlogic_gdx_math_Plane(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Plane(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK(sp[0].o))->F_normal = (jref) sp[1].o;
	LINE_NUMBER(36);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d = (jfloat(0));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Plane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK(sp[0].o))->F_normal = (jref) sp[1].o;
	LINE_NUMBER(36);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d = (jfloat(0));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(49);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d = (frame[2].f);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Plane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(56);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK(sp[0].o))->F_normal = (jref) sp[1].o;
	LINE_NUMBER(36);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d = (jfloat(0));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[1].o, (frame[2].o));
	((com_badlogic_gdx_math_Plane *) NULL_CHECK(sp[0].o))->F_d = (-temp0);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Plane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(67);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK(sp[0].o))->F_normal = (jref) sp[1].o;
	LINE_NUMBER(36);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d = (jfloat(0));
	LINE_NUMBER(68);
	((func_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[3].o)))->F_x)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[3].o)))->F_y)), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[3].o)))->F_z)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK(sp[0].o))->F_d = (-temp0);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Plane_set_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(90);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d = (frame[4].f);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Plane_distance_com_badlogic_gdx_math_Vector3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:distance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:testPoint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, (frame[1].o));
	frame[2].f = (temp0 + ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d));
	LINE_NUMBER(109);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(110);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_OnPlane;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(111);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(112);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(114);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Front;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:testPoint", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_float_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_float_float_float_R_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	frame[4].f = (temp0 + ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d));
	LINE_NUMBER(127);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(128);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_OnPlane;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(129);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(130);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(132);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Front;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Plane_isFrontFacing_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:isFrontFacing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(142);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) > 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:getNormal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Plane_getD_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:getD", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[1].o), (frame[2].o));
	((com_badlogic_gdx_math_Plane *) NULL_CHECK(sp[0].o))->F_d = (-temp0);
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Plane_set_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(166);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d = (-((((frame[1].f) * (frame[4].f)) + ((frame[2].f) * (frame[5].f))) + ((frame[3].f) * (frame[6].f))));
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Plane(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[1].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(174);
	((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d = ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[1].o)))->F_d);
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Plane_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Plane:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Plane[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_Plane_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Plane_set_float_float_float_float,
	(void *) M_com_badlogic_gdx_math_Plane_distance_com_badlogic_gdx_math_Vector3_R_float,
	(void *) M_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide,
	(void *) M_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide,
	(void *) M_com_badlogic_gdx_math_Plane_isFrontFacing_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Plane_getD_R_float,
	(void *) M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_Plane_set_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Plane,
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
	{ "set", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "set", "(FFFF)V" },
	{ "distance", "(Lcom/badlogic/gdx/math/Vector3;)F" },
	{ "testPoint", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Plane$PlaneSide;" },
	{ "testPoint", "(FFF)Lcom/badlogic/gdx/math/Plane$PlaneSide;" },
	{ "isFrontFacing", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "getNormal", "()Lcom/badlogic/gdx/math/Vector3;" },
	{ "getD", "()F" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "set", "(FFFFFF)V" },
	{ "set", "(Lcom/badlogic/gdx/math/Plane;)V" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_math_Plane$PlaneSide,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_Plane_serialVersionUID, "J", 26 },
	{ "normal", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_math_Plane, F_normal), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "d", &class_float, offsetof(com_badlogic_gdx_math_Plane, F_d), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Plane, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_float, 0, "(Lcom/badlogic/gdx/math/Vector3;F)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3, 0, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3, 0, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Plane_set_float_float_float_float, VTABLE_com_badlogic_gdx_math_Plane_set_float_float_float_float, "(FFFF)V", 1 },
	{ "distance", (intptr_t) M_com_badlogic_gdx_math_Plane_distance_com_badlogic_gdx_math_Vector3_R_float, VTABLE_com_badlogic_gdx_math_Plane_distance_com_badlogic_gdx_math_Vector3_R_float, "(Lcom/badlogic/gdx/math/Vector3;)F", 1 },
	{ "testPoint", (intptr_t) M_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide, VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Plane$PlaneSide;", 1 },
	{ "testPoint", (intptr_t) M_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide, VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide, "(FFF)Lcom/badlogic/gdx/math/Plane$PlaneSide;", 1 },
	{ "isFrontFacing", (intptr_t) M_com_badlogic_gdx_math_Plane_isFrontFacing_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_Plane_isFrontFacing_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "getNormal", (intptr_t) M_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3, "()Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getD", (intptr_t) M_com_badlogic_gdx_math_Plane_getD_R_float, VTABLE_com_badlogic_gdx_math_Plane_getD_R_float, "()F", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Plane_set_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_math_Plane_set_float_float_float_float_float_float, "(FFFFFF)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Plane, VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Plane, "(Lcom/badlogic/gdx/math/Plane;)V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_Plane_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_Plane_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_math_Plane{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Plane",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Plane),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Plane,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Plane,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Plane,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Plane = registerClass(&class_com_badlogic_gdx_math_Plane);

}

