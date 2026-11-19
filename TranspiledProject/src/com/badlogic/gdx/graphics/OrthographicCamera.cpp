#include "com/badlogic/gdx/graphics/OrthographicCamera.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/OrthographicCamera.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/Frustum.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/graphics/Camera.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_OrthographicCamera(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_Camera(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_OrthographicCamera *) object;
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_OrthographicCamera(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_Camera(ctx);
}

void init_com_badlogic_gdx_graphics_OrthographicCamera(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/OrthographicCamera:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_OrthographicCamera(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_com_badlogic_gdx_graphics_Camera(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(32);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_near = (jfloat(0));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_OrthographicCamera_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/OrthographicCamera:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_OrthographicCamera(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(40);
	init_com_badlogic_gdx_graphics_Camera(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(41);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_viewportWidth = (frame[1].f);
	LINE_NUMBER(42);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_viewportHeight = (frame[2].f);
	LINE_NUMBER(43);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_near = (jfloat(0));
	LINE_NUMBER(44);
	((func_com_badlogic_gdx_graphics_OrthographicCamera_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_update])(ctx, (frame[0].o));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_OrthographicCamera_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/OrthographicCamera:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	((func_com_badlogic_gdx_graphics_OrthographicCamera_update_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_update_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_OrthographicCamera_update_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/OrthographicCamera:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_projection;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToOrtho_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToOrtho_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, ((((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[0].o)))->F_zoom) * (-((jfloat)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_viewportWidth))) / (jfloat(2))), (((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[0].o)))->F_zoom) * (((jfloat)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_viewportWidth) / (jfloat(2)))), (((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[0].o)))->F_zoom) * (-(((jfloat)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_viewportHeight) / (jfloat(2))))), ((((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[0].o)))->F_zoom) * ((jfloat)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_viewportHeight)) / (jfloat(2))), ((jfloat)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_near), ((jfloat)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_far));
	LINE_NUMBER(58);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_view;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToLookAt_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_view;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	jfloat temp0 = -((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	jfloat temp1 = -((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, temp0, temp1, (-((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z)));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_combined;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_projection;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_combined;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[0].o))->F_val;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_view;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[1].o))->F_val;
	SM_com_badlogic_gdx_math_Matrix4_mul_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	if ((frame[1].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_invProjectionView;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_combined;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_invProjectionView;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[0].o))->F_val;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Matrix4_inv_Array1_float_R_boolean(ctx, sp[0].o);
	LINE_NUMBER(66);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_frustum;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_invProjectionView;
	((func_com_badlogic_gdx_math_Frustum_update_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Frustum_update_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/OrthographicCamera:setToOrtho", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp1 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[1].o))(ctx, sp[1].o);
	jfloat temp2 = jfloat(temp1);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp3 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[1].o))(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean_float_float])(ctx, sp[0].o, temp0, temp2, (jfloat(temp3)));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean_float_float(jcontext ctx, jobject self, jbool param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/OrthographicCamera:setToOrtho", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(83);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(1)));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(0)), (jfloat(1)), (jfloat(0)));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(-1.0f)));
	}
label_4:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[0].o)))->F_zoom) * (frame[2].f)) / (jfloat(2))), ((((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[0].o)))->F_zoom) * (frame[3].f)) / (jfloat(2))), (jfloat(0)));
	LINE_NUMBER(91);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_viewportWidth = (frame[2].f);
	LINE_NUMBER(92);
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_viewportHeight = (frame[3].f);
	LINE_NUMBER(93);
	((func_com_badlogic_gdx_graphics_OrthographicCamera_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_update])(ctx, (frame[0].o));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_OrthographicCamera_rotate_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/OrthographicCamera:rotate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_direction;
	((func_com_badlogic_gdx_graphics_OrthographicCamera_rotate_com_badlogic_gdx_math_Vector3_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_rotate_com_badlogic_gdx_math_Vector3_float])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_OrthographicCamera_translate_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/OrthographicCamera:translate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(106);
	((func_com_badlogic_gdx_graphics_OrthographicCamera_translate_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_translate_float_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_OrthographicCamera_translate_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/OrthographicCamera:translate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	((func_com_badlogic_gdx_graphics_OrthographicCamera_translate_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_translate_float_float_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (jfloat(0)));
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_OrthographicCamera[] {
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
	(void *) M_com_badlogic_gdx_graphics_OrthographicCamera_update,
	(void *) M_com_badlogic_gdx_graphics_OrthographicCamera_update_boolean,
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
	(void *) M_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean,
	(void *) M_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean_float_float,
	(void *) M_com_badlogic_gdx_graphics_OrthographicCamera_rotate_float,
	(void *) M_com_badlogic_gdx_graphics_OrthographicCamera_translate_float_float,
	(void *) M_com_badlogic_gdx_graphics_OrthographicCamera_translate_com_badlogic_gdx_math_Vector2,
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
	{ "setToOrtho", "(Z)V" },
	{ "setToOrtho", "(ZFF)V" },
	{ "rotate", "(F)V" },
	{ "translate", "(FF)V" },
	{ "translate", "(Lcom/badlogic/gdx/math/Vector2;)V" },
};

static FieldMetadata fields[] {
	{ "zoom", &class_float, offsetof(com_badlogic_gdx_graphics_OrthographicCamera, F_zoom), "F", 1 },
	{ "tmp", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_OrthographicCamera, F_tmp), "Lcom/badlogic/gdx/math/Vector3;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_OrthographicCamera, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_OrthographicCamera_float_float, 0, "(FF)V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_graphics_OrthographicCamera_update, VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_update, "()V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_graphics_OrthographicCamera_update_boolean, VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_update_boolean, "(Z)V", 1 },
	{ "setToOrtho", (intptr_t) M_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean, VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean, "(Z)V", 1 },
	{ "setToOrtho", (intptr_t) M_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean_float_float, VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean_float_float, "(ZFF)V", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_graphics_OrthographicCamera_rotate_float, VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_rotate_float, "(F)V", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_graphics_OrthographicCamera_translate_float_float, VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_translate_float_float, "(FF)V", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_graphics_OrthographicCamera_translate_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_translate_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_OrthographicCamera{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/OrthographicCamera",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_Camera,
		.size = sizeof(com_badlogic_gdx_graphics_OrthographicCamera),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_OrthographicCamera,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_OrthographicCamera,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_OrthographicCamera,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_OrthographicCamera = registerClass(&class_com_badlogic_gdx_graphics_OrthographicCamera);

}

