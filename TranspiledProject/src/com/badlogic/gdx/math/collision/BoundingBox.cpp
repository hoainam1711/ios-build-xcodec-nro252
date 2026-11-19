#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/math/collision/OrientedBoundingBox.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "java/util/List.h"

extern "C" {

jlong SF_com_badlogic_gdx_math_collision_BoundingBox_serialVersionUID;
jobject SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;

void mark_com_badlogic_gdx_math_collision_BoundingBox(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_collision_BoundingBox *) object;
	if (self->F_min)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_min)->clazz)->markFunction)((jobject) self->F_min, mark, depth + 1);
	if (self->F_max)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_max)->clazz)->markFunction)((jobject) self->F_max, mark, depth + 1);
	if (self->F_cnt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cnt)->clazz)->markFunction)((jobject) self->F_cnt, mark, depth + 1);
	if (self->F_dim)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dim)->clazz)->markFunction)((jobject) self->F_dim, mark, depth + 1);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getCenter_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCenter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_collision_BoundingBox_getCenterX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCenterX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_collision_BoundingBox_getCenterY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCenterY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_collision_BoundingBox_getCenterZ_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCenterZ", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCorner000", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCorner001", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCorner010", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCorner011", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCorner100", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCorner101", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCorner110", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getCorner111", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getDimensions_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getDimensions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_collision_BoundingBox_getWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_collision_BoundingBox_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_collision_BoundingBox_getDepth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getDepth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getMin_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getMin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_getMax_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:getMax", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(125);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_min = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_max = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_cnt = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_dim = (jref) sp[1].o;
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_clr_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_clr_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_min = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_max = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_cnt = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_dim = (jref) sp[1].o;
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(140);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_min = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_max = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_cnt = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK(sp[0].o))->F_dim = (jref) sp[1].o;
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp += 1;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x), 1)) >= 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(2);
	sp[-1].f = ((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[-1].o))->F_x;
label_2:;
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y), 1)) >= 0) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(2);
	sp[-1].f = ((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[-1].o))->F_y;
label_4:;
	{
	LINE_NUMBER(159);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z), 1)) >= 0) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z;
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(2);
	sp[-1].f = ((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[-1].o))->F_z;
label_6:;
	{
	sp -= 4;
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp += 1;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x), -1)) <= 0) goto label_8;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x;
	sp[0].f = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ALOAD(2);
	sp[-1].f = ((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[-1].o))->F_x;
label_9:;
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y), -1)) <= 0) goto label_10;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].f = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ALOAD(2);
	sp[-1].f = ((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[-1].o))->F_y;
label_11:;
	{
	LINE_NUMBER(161);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z), -1)) <= 0) goto label_12;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z;
	sp[0].f = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_ALOAD(2);
	sp[-1].f = ((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[-1].o))->F_z;
label_13:;
	{
	sp -= 4;
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
	LINE_NUMBER(162);
	((func_com_badlogic_gdx_math_collision_BoundingBox_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_update])(ctx, (frame[0].o));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_collision_BoundingBox_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(0.5f)));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_set_Array1_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o));
	LINE_NUMBER(178);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(178);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_set_java_util_List_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o));
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, sp[0].o));
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[3].o));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:inf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(std::numeric_limits<float>::infinity())), (jfloat(std::numeric_limits<float>::infinity())), (jfloat(std::numeric_limits<float>::infinity())));
	LINE_NUMBER(199);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(-std::numeric_limits<float>::infinity())), (jfloat(-std::numeric_limits<float>::infinity())), (jfloat(-std::numeric_limits<float>::infinity())));
	LINE_NUMBER(200);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:ext", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp0, temp1, temp2);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_x;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x;
	LINE_NUMBER(210);
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp3, temp4);
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y));
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp7 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[2].o, temp5, temp6, temp7);
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_clr_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:clr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[2].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_BoundingBox_isValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:isValid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_1;
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

jobject M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:ext", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp3 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, temp2, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp5 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, temp4, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp1, temp3, temp5);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp6 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_x;
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp7 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_x;
	LINE_NUMBER(231);
	jfloat temp8 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_max_float_float_R_float(ctx, temp6, temp7);
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp9 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_y;
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp10 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_max_float_float_R_float(ctx, temp9, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_y));
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp11 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_z;
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp12 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_max_float_float_R_float(ctx, temp11, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_z));
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[2].o, temp8, temp10, temp12);
	LINE_NUMBER(230);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:ext", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[2].f)));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[2].f)));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) - (frame[2].f)));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp0, temp1, temp2);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_x;
	jfloat temp4 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) + (frame[2].f);
	LINE_NUMBER(241);
	jfloat temp5 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_max_float_float_R_float(ctx, temp3, temp4);
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp6 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_y), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) + (frame[2].f)));
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp7 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_z), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) + (frame[2].f)));
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[2].o, temp5, temp6, temp7);
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:ext", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp0, temp1, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp2, temp3, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp5 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp4, temp5, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp6 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp7 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp6, temp7, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp8 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp9 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp8, temp9, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp10 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp11 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp10, temp11, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp12 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp13 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp12, temp13, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp14 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp15 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp14, temp15, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:mul", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	frame[2].f = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	frame[3].f = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	frame[4].f = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	frame[5].f = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	frame[6].f = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	frame[7].f = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z);
	LINE_NUMBER(268);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o));
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].f), (frame[3].f), (frame[4].f));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].f), (frame[3].f), (frame[7].f));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(271);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].f), (frame[6].f), (frame[4].f));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].f), (frame[6].f), (frame[7].f));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[5].f), (frame[3].f), (frame[4].f));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[5].f), (frame[3].f), (frame[7].f));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[5].f), (frame[6].f), (frame[4].f));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[5].f), (frame[6].f), (frame[7].f));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_collision_BoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(284);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	LINE_NUMBER(293);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	LINE_NUMBER(294);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	LINE_NUMBER(295);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(292);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_BoundingBox_intersects_com_badlogic_gdx_math_collision_BoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:intersects", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(302);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_cnt;
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x)));
	frame[2].f = temp1;
	LINE_NUMBER(307);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	jfloat temp2 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(2));
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_dim;
	frame[3].f = (temp2 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(2))));
	LINE_NUMBER(309);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_cnt;
	jfloat temp4 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp3 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)));
	frame[4].f = temp4;
	LINE_NUMBER(310);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	jfloat temp5 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(2));
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_dim;
	frame[5].f = (temp5 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(2))));
	LINE_NUMBER(312);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	jfloat temp6 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_cnt;
	jfloat temp7 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp6 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)));
	frame[6].f = temp7;
	LINE_NUMBER(313);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	jfloat temp8 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z) / (jfloat(2));
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_dim;
	frame[7].f = (temp8 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z) / (jfloat(2))));
	LINE_NUMBER(315);
	if ((floatCompare((frame[2].f), (frame[3].f), 1)) > 0) goto label_8;
	}
	{
	if ((floatCompare((frame[4].f), (frame[5].f), 1)) > 0) goto label_8;
	}
	{
	if ((floatCompare((frame[6].f), (frame[7].f), 1)) > 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), -1)) < 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), -1)) < 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), -1)) < 0) goto label_1;
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

jobject M_com_badlogic_gdx_math_collision_BoundingBox_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:ext", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_x), (frame[1].f));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_y), (frame[2].f));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[2].o))->F_z), (frame[3].f));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, temp0, temp1, temp2);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp3 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_x), (frame[1].f));
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp4 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_y), (frame[2].f));
	sp[3].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp5 = (jfloat)SM_com_badlogic_gdx_math_collision_BoundingBox_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[3].o))->F_z), (frame[3].f));
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[2].o, temp3, temp4, temp5);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:min", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(341);
	if ((floatCompare((frame[0].f), (frame[1].f), -1)) <= 0) goto label_1;
	}
	INST_FLOAD(1);
	goto label_2;
label_1:;
	INST_FLOAD(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_collision_BoundingBox_max_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:max", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(345);
	if ((floatCompare((frame[0].f), (frame[1].f), -1)) <= 0) goto label_1;
	}
	INST_FLOAD(0);
	goto label_2;
label_1:;
	INST_FLOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_collision_BoundingBox_serialVersionUID = jlong(-1286036817192127343ll);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/BoundingBox:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	{
	LINE_NUMBER(32);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_collision_BoundingBox[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCenter_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCenterX_R_float,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCenterY_R_float,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCenterZ_R_float,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getDimensions_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getWidth_R_float,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getHeight_R_float,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getDepth_R_float,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getMin_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_getMax_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_update,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_set_Array1_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_set_java_util_List_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_clr_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_isValid_R_boolean,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_collision_BoundingBox_R_boolean,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_intersects_com_badlogic_gdx_math_collision_BoundingBox_R_boolean,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox,
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
	{ "getCenter", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCenterX", "()F" },
	{ "getCenterY", "()F" },
	{ "getCenterZ", "()F" },
	{ "getCorner000", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner001", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner010", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner011", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner100", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner101", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner110", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner111", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getDimensions", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getWidth", "()F" },
	{ "getHeight", "()F" },
	{ "getDepth", "()F" },
	{ "getMin", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getMax", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "set", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "update", "()V" },
	{ "set", "([Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "set", "(Ljava/util/List;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "inf", "()Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "ext", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "clr", "()Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "isValid", "()Z" },
	{ "ext", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "ext", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "ext", "(Lcom/badlogic/gdx/math/collision/BoundingBox;Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "mul", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "contains", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Z" },
	{ "contains", "(Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;)Z" },
	{ "intersects", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Z" },
	{ "contains", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "ext", "(FFF)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_collision_BoundingBox_serialVersionUID, "J", 26 },
	{ "tmpVector", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_collision_BoundingBox_tmpVector, "Lcom/badlogic/gdx/math/Vector3;", 26 },
	{ "min", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_math_collision_BoundingBox, F_min), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "max", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_math_collision_BoundingBox, F_max), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "cnt", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_math_collision_BoundingBox, F_cnt), "Lcom/badlogic/gdx/math/Vector3;", 18 },
	{ "dim", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_math_collision_BoundingBox, F_dim), "Lcom/badlogic/gdx/math/Vector3;", 18 },
};

static MethodMetadata methods[] {
	{ "getCenter", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCenter_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCenter_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCenterX", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCenterX_R_float, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCenterX_R_float, "()F", 1 },
	{ "getCenterY", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCenterY_R_float, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCenterY_R_float, "()F", 1 },
	{ "getCenterZ", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCenterZ_R_float, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCenterZ_R_float, "()F", 1 },
	{ "getCorner000", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner001", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner010", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner011", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner100", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner101", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner110", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner111", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getDimensions", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getDimensions_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getDimensions_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getWidth_R_float, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getWidth_R_float, "()F", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getHeight_R_float, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getHeight_R_float, "()F", 1 },
	{ "getDepth", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getDepth_R_float, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getDepth_R_float, "()F", 1 },
	{ "getMin", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getMin_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getMin_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getMax", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_getMax_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getMax_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_collision_BoundingBox, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_collision_BoundingBox, 0, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3, 0, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_update, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_update, "()V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_set_Array1_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_Array1_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox, "([Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_set_java_util_List_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_java_util_List_R_com_badlogic_gdx_math_collision_BoundingBox, "(Ljava/util/List;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "inf", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox, "()Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "ext", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "clr", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_clr_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_clr_R_com_badlogic_gdx_math_collision_BoundingBox, "()Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "isValid", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_isValid_R_boolean, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_isValid_R_boolean, "()Z", 1 },
	{ "ext", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "ext", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "ext", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Z", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean, "(Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;)Z", 1 },
	{ "intersects", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_intersects_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_intersects_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Z", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "ext", (intptr_t) M_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox, "(FFF)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "min", (intptr_t) SM_com_badlogic_gdx_math_collision_BoundingBox_min_float_float_R_float, 0, "(FF)F", 24 },
	{ "max", (intptr_t) SM_com_badlogic_gdx_math_collision_BoundingBox_max_float_float_R_float, 0, "(FF)F", 24 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_collision_BoundingBox, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_collision_BoundingBox{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/collision/BoundingBox",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_collision_BoundingBox),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_collision_BoundingBox,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_collision_BoundingBox,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_collision_BoundingBox,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_collision_BoundingBox = registerClass(&class_com_badlogic_gdx_math_collision_BoundingBox);

}

