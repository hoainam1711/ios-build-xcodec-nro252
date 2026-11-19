#include "com/badlogic/gdx/math/collision/OrientedBoundingBox.h"
#include "com/badlogic/gdx/math/Intersector.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "com/badlogic/gdx/math/collision/OrientedBoundingBox.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/Vector3.h"

extern "C" {

jlong SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_serialVersionUID;
jobject SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
jobject SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
jobject SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;

void mark_com_badlogic_gdx_math_collision_OrientedBoundingBox(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_collision_OrientedBoundingBox *) object;
	if (self->F_bounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bounds)->clazz)->markFunction)((jobject) self->F_bounds, mark, depth + 1);
	if (self->F_transform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transform)->clazz)->markFunction)((jobject) self->F_transform, mark, depth + 1);
	if (self->F_inverseTransform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inverseTransform)->clazz)->markFunction)((jobject) self->F_inverseTransform, mark, depth + 1);
	if (self->F_axes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_axes)->clazz)->markFunction)((jobject) self->F_axes, mark, depth + 1);
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
}

void init_com_badlogic_gdx_math_collision_OrientedBoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(50);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_collision_BoundingBox);
	init_com_badlogic_gdx_math_collision_BoundingBox(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_inverseTransform = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Vector3, (jint(3)));
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_axes = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Vector3, (8));
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_clr_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_clr_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o);
	LINE_NUMBER(52);
	M_com_badlogic_gdx_math_collision_OrientedBoundingBox_init(ctx, (frame[0].o));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_collision_OrientedBoundingBox_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_collision_BoundingBox);
	init_com_badlogic_gdx_math_collision_BoundingBox(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_inverseTransform = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Vector3, (jint(3)));
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_axes = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Vector3, (8));
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(60);
	M_com_badlogic_gdx_math_collision_OrientedBoundingBox_init(ctx, (frame[0].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_collision_OrientedBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(67);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_collision_BoundingBox);
	init_com_badlogic_gdx_math_collision_BoundingBox(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_inverseTransform = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Vector3, (jint(3)));
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_axes = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Vector3, (8));
	((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(69);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(70);
	M_com_badlogic_gdx_math_collision_OrientedBoundingBox_init(ctx, (frame[0].o));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_collision_OrientedBoundingBox_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_axes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_axes;
	jint temp0 = frame[1].i;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(74);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(77);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = frame[1].i;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(77);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(80);
	M_com_badlogic_gdx_math_collision_OrientedBoundingBox_update(ctx, (frame[0].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_R_Array1_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getVertices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getBounds_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getBounds", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_collision_OrientedBoundingBox_setBounds_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:setBounds", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(97);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(100);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(101);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (6))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (7))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getTransform_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getTransform", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_collision_OrientedBoundingBox_setTransform_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:setTransform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(114);
	M_com_badlogic_gdx_math_collision_OrientedBoundingBox_update(ctx, (frame[0].o));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_OrientedBoundingBox(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(118);
	((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_setBounds_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_setBounds_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(119);
	((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_setTransform_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_setTransform_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getCorner000", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getCorner001", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getCorner010", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getCorner011", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getCorner100", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getCorner101", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getCorner110", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (6))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getCorner111", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (7))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(163);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_collision_BoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[1].o), (frame[2].o));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[1].o), (frame[2].o));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	LINE_NUMBER(173);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[1].o), (frame[2].o));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	LINE_NUMBER(174);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[1].o), (frame[2].o));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	LINE_NUMBER(175);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[1].o), (frame[2].o));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_6;
label_2:;
	INST_ICONST(0);
label_6:;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))));
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	LINE_NUMBER(183);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	LINE_NUMBER(184);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	LINE_NUMBER(185);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	LINE_NUMBER(186);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	LINE_NUMBER(187);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	LINE_NUMBER(188);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	LINE_NUMBER(189);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	jint temp0 = (jint)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_9;
label_1:;
	INST_ICONST(0);
label_9:;
	LINE_NUMBER(182);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_OrientedBoundingBox_intersects_com_badlogic_gdx_math_collision_BoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:intersects", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_axes;
	frame[2].o = sp[0].o;
	LINE_NUMBER(198);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))));
	LINE_NUMBER(199);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1))));
	LINE_NUMBER(200);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(2))));
	LINE_NUMBER(201);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp0 = jint(3);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Vector3_X;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(202);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp1 = jint(4);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Vector3_Y;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(203);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp2 = jint(5);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Vector3_Z;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(204);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp3 = 6;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Vector3_X;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	LINE_NUMBER(205);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp4 = 7;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Vector3_Y;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	LINE_NUMBER(206);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp5 = 8;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Vector3_Z;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	LINE_NUMBER(207);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp6 = 9;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Vector3_X;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	LINE_NUMBER(208);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp7 = 10;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Vector3_Y;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	LINE_NUMBER(209);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp8 = 11;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Vector3_Z;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	LINE_NUMBER(210);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp9 = 12;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (6))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (6))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(2)))));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Vector3_X;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	LINE_NUMBER(211);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp10 = 13;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (7))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (7))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(2)))));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Vector3_Y;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	LINE_NUMBER(212);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp11 = 14;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (8))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (8))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(2)))));
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Vector3_Z;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_R_Array1_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_R_Array1_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(215);
	sp[0].o = (jobject)M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_com_badlogic_gdx_math_collision_BoundingBox_R_Array1_com_badlogic_gdx_math_Vector3(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(217);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp12 = (jint)SM_com_badlogic_gdx_math_Intersector_hasOverlap_Array1_com_badlogic_gdx_math_Vector3_Array1_com_badlogic_gdx_math_Vector3_Array1_com_badlogic_gdx_math_Vector3_R_boolean(ctx, sp[0].o, (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return temp12;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_OrientedBoundingBox_intersects_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:intersects", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_axes;
	frame[2].o = sp[0].o;
	LINE_NUMBER(225);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[1].o)))->F_axes;
	frame[3].o = sp[0].o;
	LINE_NUMBER(227);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))));
	LINE_NUMBER(228);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1))));
	LINE_NUMBER(229);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(2))));
	LINE_NUMBER(230);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))));
	LINE_NUMBER(231);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1))));
	LINE_NUMBER(232);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(2))));
	LINE_NUMBER(233);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp0 = 6;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(234);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp1 = 7;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(235);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp2 = 8;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(2)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(236);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp3 = 9;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	LINE_NUMBER(237);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp4 = 10;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	LINE_NUMBER(238);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp5 = 11;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(2)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	LINE_NUMBER(239);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp6 = 12;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (6))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (6))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(2)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	LINE_NUMBER(240);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp7 = 13;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (7))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (7))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(2)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	LINE_NUMBER(241);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	jint temp8 = 14;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (8))))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (8))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(2)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(2)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	LINE_NUMBER(243);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[1].o)))->F_vertices;
	jint temp9 = (jint)SM_com_badlogic_gdx_math_Intersector_hasOverlap_Array1_com_badlogic_gdx_math_Vector3_Array1_com_badlogic_gdx_math_Vector3_Array1_com_badlogic_gdx_math_Vector3_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp9;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_com_badlogic_gdx_math_collision_BoundingBox_R_Array1_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:getVertices", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(247);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	LINE_NUMBER(248);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))));
	LINE_NUMBER(249);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))));
	LINE_NUMBER(250);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))));
	LINE_NUMBER(251);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)))));
	LINE_NUMBER(252);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))));
	LINE_NUMBER(253);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (6))));
	LINE_NUMBER(254);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (7))));
	LINE_NUMBER(255);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_collision_OrientedBoundingBox_mul_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:mul", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(260);
	M_com_badlogic_gdx_math_collision_OrientedBoundingBox_update(ctx, (frame[0].o));
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_collision_OrientedBoundingBox_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(266);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(267);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(268);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(269);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(271);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (6))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(272);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (7))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(274);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_axes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[1].o))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[1].o))->F_val;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[1].o))->F_val;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(275);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_axes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[1].o))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[1].o))->F_val;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[1].o))->F_val;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp2, temp3, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_axes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[1].o))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[1].o))->F_val;
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[1].o))->F_val;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp4, temp5, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(278);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_inverseTransform;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_OrientedBoundingBox *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_inv_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_inv_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o);
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_serialVersionUID = jlong(3864065514676250557ll);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/OrientedBoundingBox:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Vector3, (15));
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Vector3, (8));
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices = sp[0].o;
	LINE_NUMBER(30);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Vector3, (9));
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors = sp[0].o;
	LINE_NUMBER(32);
	frame[0].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[0].i;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(33);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors;
	jint temp0 = frame[0].i;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(32);
	INST_IINC(0, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(35);
	frame[0].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[0].i;
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(36);
	clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices;
	jint temp0 = frame[0].i;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(35);
	INST_IINC(0, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_collision_OrientedBoundingBox[] {
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
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_init,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_R_Array1_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getBounds_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_setBounds_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getTransform_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_setTransform_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_OrientedBoundingBox,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_collision_BoundingBox_R_boolean,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_intersects_com_badlogic_gdx_math_collision_BoundingBox_R_boolean,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_intersects_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_com_badlogic_gdx_math_collision_BoundingBox_R_Array1_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_mul_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_update,
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
	{ "init", "()V" },
	{ "getVertices", "()[Lcom/badlogic/gdx/math/Vector3;" },
	{ "getBounds", "()Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "setBounds", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)V" },
	{ "getTransform", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setTransform", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "set", "(Lcom/badlogic/gdx/math/collision/BoundingBox;Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;" },
	{ "getCorner000", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner001", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner010", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner011", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner100", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner101", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner110", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getCorner111", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "contains", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "contains", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Matrix4;)Z" },
	{ "contains", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Z" },
	{ "contains", "(Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;)Z" },
	{ "intersects", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Z" },
	{ "intersects", "(Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;)Z" },
	{ "getVertices", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)[Lcom/badlogic/gdx/math/Vector3;" },
	{ "mul", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "update", "()V" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_serialVersionUID, "J", 26 },
	{ "tempAxes", getArrayClass(&class_com_badlogic_gdx_math_Vector3, 1), (intptr_t) &SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempAxes, "[Lcom/badlogic/gdx/math/Vector3;", 26 },
	{ "tempVertices", getArrayClass(&class_com_badlogic_gdx_math_Vector3, 1), (intptr_t) &SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tempVertices, "[Lcom/badlogic/gdx/math/Vector3;", 26 },
	{ "tmpVectors", getArrayClass(&class_com_badlogic_gdx_math_Vector3, 1), (intptr_t) &SF_com_badlogic_gdx_math_collision_OrientedBoundingBox_tmpVectors, "[Lcom/badlogic/gdx/math/Vector3;", 26 },
	{ "bounds", &class_com_badlogic_gdx_math_collision_BoundingBox, offsetof(com_badlogic_gdx_math_collision_OrientedBoundingBox, F_bounds), "Lcom/badlogic/gdx/math/collision/BoundingBox;", 18 },
	{ "transform", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_math_collision_OrientedBoundingBox, F_transform), "Lcom/badlogic/gdx/math/Matrix4;", 17 },
	{ "inverseTransform", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_math_collision_OrientedBoundingBox, F_inverseTransform), "Lcom/badlogic/gdx/math/Matrix4;", 18 },
	{ "axes", getArrayClass(&class_com_badlogic_gdx_math_Vector3, 1), offsetof(com_badlogic_gdx_math_collision_OrientedBoundingBox, F_axes), "[Lcom/badlogic/gdx/math/Vector3;", 18 },
	{ "vertices", getArrayClass(&class_com_badlogic_gdx_math_Vector3, 1), offsetof(com_badlogic_gdx_math_collision_OrientedBoundingBox, F_vertices), "[Lcom/badlogic/gdx/math/Vector3;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_collision_OrientedBoundingBox, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_collision_OrientedBoundingBox_com_badlogic_gdx_math_collision_BoundingBox, 0, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_collision_OrientedBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4, 0, "(Lcom/badlogic/gdx/math/collision/BoundingBox;Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "init", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_init, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_init, "()V", 2 },
	{ "getVertices", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_R_Array1_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_R_Array1_com_badlogic_gdx_math_Vector3, "()[Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getBounds", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getBounds_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getBounds_R_com_badlogic_gdx_math_collision_BoundingBox, "()Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "setBounds", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_setBounds_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_setBounds_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)V", 1 },
	{ "getTransform", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getTransform_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getTransform_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setTransform", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_setTransform_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_setTransform_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_OrientedBoundingBox, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_set_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_OrientedBoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;", 1 },
	{ "getCorner000", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner001", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner010", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner011", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner100", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner101", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner110", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getCorner111", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Matrix4_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Matrix4;)Z", 2 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Z", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean, "(Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;)Z", 1 },
	{ "intersects", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_intersects_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_intersects_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Z", 1 },
	{ "intersects", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_intersects_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_intersects_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean, "(Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;)Z", 1 },
	{ "getVertices", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_com_badlogic_gdx_math_collision_BoundingBox_R_Array1_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_com_badlogic_gdx_math_collision_BoundingBox_R_Array1_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)[Lcom/badlogic/gdx/math/Vector3;", 2 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_mul_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_mul_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_math_collision_OrientedBoundingBox_update, VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_update, "()V", 2 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_collision_OrientedBoundingBox{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/collision/OrientedBoundingBox",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_collision_OrientedBoundingBox),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_collision_OrientedBoundingBox,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_collision_OrientedBoundingBox,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_collision_OrientedBoundingBox,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_collision_OrientedBoundingBox = registerClass(&class_com_badlogic_gdx_math_collision_OrientedBoundingBox);

}

