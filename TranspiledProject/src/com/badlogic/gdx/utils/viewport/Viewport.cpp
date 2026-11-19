#include "com/badlogic/gdx/utils/viewport/Viewport.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/utils/viewport/Viewport.h"
#include "com/badlogic/gdx/graphics/Camera.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/math/collision/Ray.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/graphics/glutils/HdpiUtils.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack.h"

extern "C" {


void mark_com_badlogic_gdx_utils_viewport_Viewport(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_viewport_Viewport *) object;
	if (self->F_camera)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_camera)->clazz)->markFunction)((jobject) self->F_camera, mark, depth + 1);
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_viewport_Viewport(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_viewport_Viewport(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_viewport_Viewport(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_apply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:apply", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	((func_com_badlogic_gdx_utils_viewport_Viewport_apply_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_apply_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_apply_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:apply", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(49);
	SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_glViewport_int_int_int_int(ctx, ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX), ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY), ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth), ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_viewportWidth = ((jfloat)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldWidth);
	LINE_NUMBER(51);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_viewportHeight = ((jfloat)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldHeight);
	LINE_NUMBER(52);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldWidth) / (jfloat(2))), (((jfloat)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldHeight) / (jfloat(2))), (jfloat(0)));
	}
label_4:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	((func_com_badlogic_gdx_graphics_Camera_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_update])(ctx, sp[0].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_update_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(58);
	((func_com_badlogic_gdx_utils_viewport_Viewport_update_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_update_int_int_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(0)));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_update_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(66);
	((func_com_badlogic_gdx_utils_viewport_Viewport_apply_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_apply_boolean])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:unproject", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (jfloat(1)));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight))));
	LINE_NUMBER(76);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:project", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (jfloat(1)));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight))));
	LINE_NUMBER(86);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:unproject", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight))));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:project", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight))));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_viewport_Viewport_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getPickRay", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_calculateScissors_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:calculateScissors", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_calculateScissors_com_badlogic_gdx_graphics_Camera_float_float_float_float_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle(ctx, sp[0].o, (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight))), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_viewport_Viewport_toScreenCoordinates_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:toScreenCoordinates", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (jfloat(0)));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth))), (jfloat(((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight))));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[1].o))(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y = (temp1 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(123);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_viewport_Viewport_getCamera_R_com_badlogic_gdx_graphics_Camera(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getCamera", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_setCamera_com_badlogic_gdx_graphics_Camera(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:setCamera", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera = (jref) (frame[1].o);
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_viewport_Viewport_getWorldWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getWorldWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_setWorldWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:setWorldWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(142);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldWidth = (frame[1].f);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_viewport_Viewport_getWorldHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getWorldHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_setWorldHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:setWorldHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(151);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldHeight = (frame[1].f);
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_setWorldSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:setWorldSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(155);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldWidth = (frame[1].f);
	LINE_NUMBER(156);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldHeight = (frame[2].f);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_viewport_Viewport_getScreenX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getScreenX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_setScreenX_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:setScreenX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(166);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX = (frame[1].i);
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_viewport_Viewport_getScreenY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getScreenY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_setScreenY_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:setScreenY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(176);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY = (frame[1].i);
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_viewport_Viewport_getScreenWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getScreenWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_setScreenWidth_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:setScreenWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(185);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth = (frame[1].i);
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_viewport_Viewport_getScreenHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getScreenHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_setScreenHeight_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:setScreenHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(194);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight = (frame[1].i);
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_setScreenPosition_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:setScreenPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(199);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX = (frame[1].i);
	LINE_NUMBER(200);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY = (frame[2].i);
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_setScreenSize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:setScreenSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(205);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth = (frame[1].i);
	LINE_NUMBER(206);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight = (frame[2].i);
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_Viewport_setScreenBounds_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:setScreenBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(211);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX = (frame[1].i);
	LINE_NUMBER(212);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY = (frame[2].i);
	LINE_NUMBER(213);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth = (frame[3].i);
	LINE_NUMBER(214);
	((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight = (frame[4].i);
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_viewport_Viewport_getLeftGutterWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getLeftGutterWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_viewport_Viewport_getRightGutterX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getRightGutterX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX) + ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_viewport_Viewport_getRightGutterWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getRightGutterWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - (((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX) + ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth)));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_viewport_Viewport_getBottomGutterHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getBottomGutterHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_viewport_Viewport_getTopGutterY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getTopGutterY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY) + ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_viewport_Viewport_getTopGutterHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/Viewport:getTopGutterHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(244);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - (((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY) + ((jint)((com_badlogic_gdx_utils_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight)));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_viewport_Viewport[] {
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
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_apply,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_apply_boolean,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_update_int_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_update_int_int_boolean,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_calculateScissors_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_toScreenCoordinates_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getCamera_R_com_badlogic_gdx_graphics_Camera,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setCamera_com_badlogic_gdx_graphics_Camera,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getWorldWidth_R_float,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setWorldWidth_float,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getWorldHeight_R_float,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setWorldHeight_float,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setWorldSize_float_float,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenX_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenX_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenY_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenY_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenWidth_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenWidth_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenHeight_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenHeight_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenPosition_int_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenSize_int_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenBounds_int_int_int_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getLeftGutterWidth_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getRightGutterX_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getRightGutterWidth_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getBottomGutterHeight_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getTopGutterY_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getTopGutterHeight_R_int,
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
	{ "apply", "()V" },
	{ "apply", "(Z)V" },
	{ "update", "(II)V" },
	{ "update", "(IIZ)V" },
	{ "unproject", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "project", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "unproject", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "project", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getPickRay", "(FF)Lcom/badlogic/gdx/math/collision/Ray;" },
	{ "calculateScissors", "(Lcom/badlogic/gdx/math/Matrix4;Lcom/badlogic/gdx/math/Rectangle;Lcom/badlogic/gdx/math/Rectangle;)V" },
	{ "toScreenCoordinates", "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "getCamera", "()Lcom/badlogic/gdx/graphics/Camera;" },
	{ "setCamera", "(Lcom/badlogic/gdx/graphics/Camera;)V" },
	{ "getWorldWidth", "()F" },
	{ "setWorldWidth", "(F)V" },
	{ "getWorldHeight", "()F" },
	{ "setWorldHeight", "(F)V" },
	{ "setWorldSize", "(FF)V" },
	{ "getScreenX", "()I" },
	{ "setScreenX", "(I)V" },
	{ "getScreenY", "()I" },
	{ "setScreenY", "(I)V" },
	{ "getScreenWidth", "()I" },
	{ "setScreenWidth", "(I)V" },
	{ "getScreenHeight", "()I" },
	{ "setScreenHeight", "(I)V" },
	{ "setScreenPosition", "(II)V" },
	{ "setScreenSize", "(II)V" },
	{ "setScreenBounds", "(IIII)V" },
	{ "getLeftGutterWidth", "()I" },
	{ "getRightGutterX", "()I" },
	{ "getRightGutterWidth", "()I" },
	{ "getBottomGutterHeight", "()I" },
	{ "getTopGutterY", "()I" },
	{ "getTopGutterHeight", "()I" },
};

static FieldMetadata fields[] {
	{ "camera", &class_com_badlogic_gdx_graphics_Camera, offsetof(com_badlogic_gdx_utils_viewport_Viewport, F_camera), "Lcom/badlogic/gdx/graphics/Camera;", 2 },
	{ "worldWidth", &class_float, offsetof(com_badlogic_gdx_utils_viewport_Viewport, F_worldWidth), "F", 2 },
	{ "worldHeight", &class_float, offsetof(com_badlogic_gdx_utils_viewport_Viewport, F_worldHeight), "F", 2 },
	{ "screenX", &class_int, offsetof(com_badlogic_gdx_utils_viewport_Viewport, F_screenX), "I", 2 },
	{ "screenY", &class_int, offsetof(com_badlogic_gdx_utils_viewport_Viewport, F_screenY), "I", 2 },
	{ "screenWidth", &class_int, offsetof(com_badlogic_gdx_utils_viewport_Viewport, F_screenWidth), "I", 2 },
	{ "screenHeight", &class_int, offsetof(com_badlogic_gdx_utils_viewport_Viewport, F_screenHeight), "I", 2 },
	{ "tmp", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_utils_viewport_Viewport, F_tmp), "Lcom/badlogic/gdx/math/Vector3;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_viewport_Viewport, 0, "()V", 1 },
	{ "apply", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_apply, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_apply, "()V", 1 },
	{ "apply", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_apply_boolean, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_apply_boolean, "(Z)V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_update_int_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_update_int_int, "(II)V", 17 },
	{ "update", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_update_int_int_boolean, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_update_int_int_boolean, "(IIZ)V", 1 },
	{ "unproject", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "project", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "unproject", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "project", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getPickRay", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray, "(FF)Lcom/badlogic/gdx/math/collision/Ray;", 1 },
	{ "calculateScissors", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_calculateScissors_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_calculateScissors_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Matrix4;Lcom/badlogic/gdx/math/Rectangle;Lcom/badlogic/gdx/math/Rectangle;)V", 1 },
	{ "toScreenCoordinates", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_toScreenCoordinates_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_toScreenCoordinates_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "getCamera", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getCamera_R_com_badlogic_gdx_graphics_Camera, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getCamera_R_com_badlogic_gdx_graphics_Camera, "()Lcom/badlogic/gdx/graphics/Camera;", 1 },
	{ "setCamera", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_setCamera_com_badlogic_gdx_graphics_Camera, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_setCamera_com_badlogic_gdx_graphics_Camera, "(Lcom/badlogic/gdx/graphics/Camera;)V", 1 },
	{ "getWorldWidth", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getWorldWidth_R_float, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getWorldWidth_R_float, "()F", 1 },
	{ "setWorldWidth", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_setWorldWidth_float, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_setWorldWidth_float, "(F)V", 1 },
	{ "getWorldHeight", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getWorldHeight_R_float, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getWorldHeight_R_float, "()F", 1 },
	{ "setWorldHeight", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_setWorldHeight_float, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_setWorldHeight_float, "(F)V", 1 },
	{ "setWorldSize", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_setWorldSize_float_float, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_setWorldSize_float_float, "(FF)V", 1 },
	{ "getScreenX", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenX_R_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getScreenX_R_int, "()I", 1 },
	{ "setScreenX", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenX_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_setScreenX_int, "(I)V", 1 },
	{ "getScreenY", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenY_R_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getScreenY_R_int, "()I", 1 },
	{ "setScreenY", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenY_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_setScreenY_int, "(I)V", 1 },
	{ "getScreenWidth", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenWidth_R_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getScreenWidth_R_int, "()I", 1 },
	{ "setScreenWidth", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenWidth_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_setScreenWidth_int, "(I)V", 1 },
	{ "getScreenHeight", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenHeight_R_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getScreenHeight_R_int, "()I", 1 },
	{ "setScreenHeight", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenHeight_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_setScreenHeight_int, "(I)V", 1 },
	{ "setScreenPosition", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenPosition_int_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_setScreenPosition_int_int, "(II)V", 1 },
	{ "setScreenSize", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenSize_int_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_setScreenSize_int_int, "(II)V", 1 },
	{ "setScreenBounds", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenBounds_int_int_int_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_setScreenBounds_int_int_int_int, "(IIII)V", 1 },
	{ "getLeftGutterWidth", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getLeftGutterWidth_R_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getLeftGutterWidth_R_int, "()I", 1 },
	{ "getRightGutterX", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getRightGutterX_R_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getRightGutterX_R_int, "()I", 1 },
	{ "getRightGutterWidth", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getRightGutterWidth_R_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getRightGutterWidth_R_int, "()I", 1 },
	{ "getBottomGutterHeight", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getBottomGutterHeight_R_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getBottomGutterHeight_R_int, "()I", 1 },
	{ "getTopGutterY", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getTopGutterY_R_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getTopGutterY_R_int, "()I", 1 },
	{ "getTopGutterHeight", (intptr_t) M_com_badlogic_gdx_utils_viewport_Viewport_getTopGutterHeight_R_int, VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getTopGutterHeight_R_int, "()I", 1 },
};

Class class_com_badlogic_gdx_utils_viewport_Viewport{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/viewport/Viewport",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_viewport_Viewport),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_viewport_Viewport,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_viewport_Viewport,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_viewport_Viewport,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 36,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 46,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_viewport_Viewport = registerClass(&class_com_badlogic_gdx_utils_viewport_Viewport);

}

