#include "com/badlogic/gdx/graphics/Camera.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/Frustum.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/graphics/Camera.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/math/collision/Ray.h"
#include "com/badlogic/gdx/math/Vector3.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_Camera(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_Camera *) object;
	if (self->F_position)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_position)->clazz)->markFunction)((jobject) self->F_position, mark, depth + 1);
	if (self->F_direction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_direction)->clazz)->markFunction)((jobject) self->F_direction, mark, depth + 1);
	if (self->F_up)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_up)->clazz)->markFunction)((jobject) self->F_up, mark, depth + 1);
	if (self->F_projection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_projection)->clazz)->markFunction)((jobject) self->F_projection, mark, depth + 1);
	if (self->F_view)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_view)->clazz)->markFunction)((jobject) self->F_view, mark, depth + 1);
	if (self->F_combined)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_combined)->clazz)->markFunction)((jobject) self->F_combined, mark, depth + 1);
	if (self->F_invProjectionView)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_invProjectionView)->clazz)->markFunction)((jobject) self->F_invProjectionView, mark, depth + 1);
	if (self->F_frustum)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frustum)->clazz)->markFunction)((jobject) self->F_frustum, mark, depth + 1);
	if (self->F_tmpVec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpVec)->clazz)->markFunction)((jobject) self->F_tmpVec, mark, depth + 1);
	if (self->F_ray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ray)->clazz)->markFunction)((jobject) self->F_ray, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_Camera(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_Camera(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Camera(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(-1.0f)));
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_direction = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(1)), (jfloat(0)));
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_up = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_projection = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_view = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_combined = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_invProjectionView = (jref) sp[1].o;
	LINE_NUMBER(49);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_near = (jfloat(1));
	LINE_NUMBER(51);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_far = (jfloat(100.0f));
	LINE_NUMBER(54);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_viewportWidth = (jfloat(0));
	LINE_NUMBER(56);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_viewportHeight = (jfloat(0));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Frustum);
	init_com_badlogic_gdx_math_Frustum(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_frustum = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_tmpVec = (jref) sp[1].o;
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_Ray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_collision_Ray);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[2].o);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[3].o);
	init_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(ctx, sp[1].o, sp[2].o, sp[3].o);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_ray = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Camera_lookAt_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:lookAt", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_isZero_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_isZero_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[4].f = temp0;
	LINE_NUMBER(80);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[4].f) - (jfloat(1))));
	if ((floatCompare(temp1, (jfloat(1.000000e-09f)), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(-1.0f)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(83);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[4].f) + (jfloat(1))));
	if ((floatCompare(temp0, (jfloat(1.000000e-09f)), 1)) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	((func_com_badlogic_gdx_graphics_Camera_normalizeUp) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_normalizeUp])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Camera_lookAt_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:lookAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	((func_com_badlogic_gdx_graphics_Camera_lookAt_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_lookAt_float_float_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Camera_normalizeUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:normalizeUp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Camera_rotate_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:rotate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_rotate_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_rotate_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_rotate_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_rotate_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Vector3_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:rotate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:rotate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_rot_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_rot_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_rot_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_rot_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:rotate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_transform_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_transform_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_transform_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_transform_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Camera_rotateAround_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:rotateAround", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	((func_com_badlogic_gdx_graphics_Camera_translate_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_translate_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(155);
	((func_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Vector3_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Vector3_float])(ctx, (frame[0].o), (frame[2].o), (frame[3].f));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o), (frame[3].f));
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	jfloat temp0 = -((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	jfloat temp1 = -((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	((func_com_badlogic_gdx_graphics_Camera_translate_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_translate_float_float_float])(ctx, sp[0].o, temp0, temp1, (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z)));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Camera_transform_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:transform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(165);
	((func_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Camera_translate_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:translate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Camera_translate_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:translate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:unproject", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(195);
	frame[6].f = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[2].f));
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[0].o))(ctx, sp[0].o);
	frame[7].f = (((jfloat(temp0)) - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y)) - (frame[3].f));
	LINE_NUMBER(196);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x = ((((jfloat(2)) * (frame[6].f)) / (frame[4].f)) - (jfloat(1)));
	LINE_NUMBER(197);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y = ((((jfloat(2)) * (frame[7].f)) / (frame[5].f)) - (jfloat(1)));
	LINE_NUMBER(198);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z = (((jfloat(2)) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z)) - (jfloat(1)));
	LINE_NUMBER(199);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_invProjectionView;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_prj_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_prj_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:unproject", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp2 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[2].o))(ctx, sp[2].o);
	jfloat temp3 = jfloat(temp2);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp4 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[2].o))(ctx, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:project", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp2 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[2].o))(ctx, sp[2].o);
	jfloat temp3 = jfloat(temp2);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp4 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[2].o))(ctx, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:project", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_combined;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_prj_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_prj_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(238);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x = ((((frame[4].f) * (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) + (jfloat(1)))) / (jfloat(2))) + (frame[2].f));
	LINE_NUMBER(239);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y = ((((frame[5].f) * (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(1)))) / (jfloat(2))) + (frame[3].f));
	LINE_NUMBER(240);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z = ((((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) + (jfloat(1))) / (jfloat(2)));
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:getPickRay", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_ray;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK(sp[1].o))->F_origin;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_ray;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK(sp[1].o))->F_direction;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (jfloat(1)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(256);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_ray;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK(sp[0].o))->F_direction;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_ray;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK(sp[1].o))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(257);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_ray;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Camera:getPickRay", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp4 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[1].o))(ctx, sp[1].o);
	jfloat temp5 = jfloat(temp4);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp6 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp5, (jfloat(temp6)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Camera[] {
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
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_graphics_Camera_lookAt_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_Camera_lookAt_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_Camera_normalizeUp,
	(void *) M_com_badlogic_gdx_graphics_Camera_rotate_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Vector3_float,
	(void *) M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_graphics_Camera_rotateAround_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float,
	(void *) M_com_badlogic_gdx_graphics_Camera_transform_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_Camera_translate_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_Camera_translate_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray,
	(void *) M_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray,
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
	{ "update", "()V" },
	{ "update", "(Z)V" },
	{ "lookAt", "(FFF)V" },
	{ "lookAt", "(Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "normalizeUp", "()V" },
	{ "rotate", "(FFFF)V" },
	{ "rotate", "(Lcom/badlogic/gdx/math/Vector3;F)V" },
	{ "rotate", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "rotate", "(Lcom/badlogic/gdx/math/Quaternion;)V" },
	{ "rotateAround", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;F)V" },
	{ "transform", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "translate", "(FFF)V" },
	{ "translate", "(Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "unproject", "(Lcom/badlogic/gdx/math/Vector3;FFFF)Lcom/badlogic/gdx/math/Vector3;" },
	{ "unproject", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "project", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "project", "(Lcom/badlogic/gdx/math/Vector3;FFFF)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getPickRay", "(FFFFFF)Lcom/badlogic/gdx/math/collision/Ray;" },
	{ "getPickRay", "(FF)Lcom/badlogic/gdx/math/collision/Ray;" },
};

static FieldMetadata fields[] {
	{ "position", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_Camera, F_position), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "direction", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_Camera, F_direction), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "up", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_Camera, F_up), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "projection", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_Camera, F_projection), "Lcom/badlogic/gdx/math/Matrix4;", 17 },
	{ "view", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_Camera, F_view), "Lcom/badlogic/gdx/math/Matrix4;", 17 },
	{ "combined", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_Camera, F_combined), "Lcom/badlogic/gdx/math/Matrix4;", 17 },
	{ "invProjectionView", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_Camera, F_invProjectionView), "Lcom/badlogic/gdx/math/Matrix4;", 17 },
	{ "near", &class_float, offsetof(com_badlogic_gdx_graphics_Camera, F_near), "F", 1 },
	{ "far", &class_float, offsetof(com_badlogic_gdx_graphics_Camera, F_far), "F", 1 },
	{ "viewportWidth", &class_float, offsetof(com_badlogic_gdx_graphics_Camera, F_viewportWidth), "F", 1 },
	{ "viewportHeight", &class_float, offsetof(com_badlogic_gdx_graphics_Camera, F_viewportHeight), "F", 1 },
	{ "frustum", &class_com_badlogic_gdx_math_Frustum, offsetof(com_badlogic_gdx_graphics_Camera, F_frustum), "Lcom/badlogic/gdx/math/Frustum;", 17 },
	{ "tmpVec", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_Camera, F_tmpVec), "Lcom/badlogic/gdx/math/Vector3;", 18 },
	{ "ray", &class_com_badlogic_gdx_math_collision_Ray, offsetof(com_badlogic_gdx_graphics_Camera, F_ray), "Lcom/badlogic/gdx/math/collision/Ray;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Camera, 0, "()V", 1 },
	{ "update", 0, VTABLE_com_badlogic_gdx_graphics_Camera_update, "()V", 1025 },
	{ "update", 0, VTABLE_com_badlogic_gdx_graphics_Camera_update_boolean, "(Z)V", 1025 },
	{ "lookAt", (intptr_t) M_com_badlogic_gdx_graphics_Camera_lookAt_float_float_float, VTABLE_com_badlogic_gdx_graphics_Camera_lookAt_float_float_float, "(FFF)V", 1 },
	{ "lookAt", (intptr_t) M_com_badlogic_gdx_graphics_Camera_lookAt_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_Camera_lookAt_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "normalizeUp", (intptr_t) M_com_badlogic_gdx_graphics_Camera_normalizeUp, VTABLE_com_badlogic_gdx_graphics_Camera_normalizeUp, "()V", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_graphics_Camera_rotate_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_Camera_rotate_float_float_float_float, "(FFFF)V", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Vector3_float, VTABLE_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Vector3_float, "(Lcom/badlogic/gdx/math/Vector3;F)V", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Quaternion;)V", 1 },
	{ "rotateAround", (intptr_t) M_com_badlogic_gdx_graphics_Camera_rotateAround_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float, VTABLE_com_badlogic_gdx_graphics_Camera_rotateAround_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;F)V", 1 },
	{ "transform", (intptr_t) M_com_badlogic_gdx_graphics_Camera_transform_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_Camera_transform_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_graphics_Camera_translate_float_float_float, VTABLE_com_badlogic_gdx_graphics_Camera_translate_float_float_float, "(FFF)V", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_graphics_Camera_translate_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_Camera_translate_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "unproject", (intptr_t) M_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;FFFF)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "unproject", (intptr_t) M_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "project", (intptr_t) M_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "project", (intptr_t) M_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;FFFF)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getPickRay", (intptr_t) M_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray, VTABLE_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray, "(FFFFFF)Lcom/badlogic/gdx/math/collision/Ray;", 1 },
	{ "getPickRay", (intptr_t) M_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray, VTABLE_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray, "(FF)Lcom/badlogic/gdx/math/collision/Ray;", 1 },
};

Class class_com_badlogic_gdx_graphics_Camera{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Camera",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_Camera),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Camera,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Camera,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Camera,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Camera = registerClass(&class_com_badlogic_gdx_graphics_Camera);

}

