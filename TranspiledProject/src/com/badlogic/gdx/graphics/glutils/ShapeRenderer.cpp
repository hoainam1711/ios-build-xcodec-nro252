#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer_ShapeType.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/Graphics.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_ShapeRenderer *) object;
	if (self->F_renderer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_renderer)->clazz)->markFunction)((jobject) self->F_renderer, mark, depth + 1);
	if (self->F_projectionMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_projectionMatrix)->clazz)->markFunction)((jobject) self->F_projectionMatrix, mark, depth + 1);
	if (self->F_transformMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transformMatrix)->clazz)->markFunction)((jobject) self->F_transformMatrix, mark, depth + 1);
	if (self->F_combinedMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_combinedMatrix)->clazz)->markFunction)((jobject) self->F_combinedMatrix, mark, depth + 1);
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_shapeType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shapeType)->clazz)->markFunction)((jobject) self->F_shapeType, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(107);
	init_com_badlogic_gdx_graphics_glutils_ShapeRenderer_int(ctx, (frame[0].o), (5000));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_ShapeRenderer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(111);
	init_com_badlogic_gdx_graphics_glutils_ShapeRenderer_int_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx, (frame[0].o), (frame[1].i), (jobject(nullptr)));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_ShapeRenderer_int_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(114);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(96);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty = (jint(0));
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK(sp[0].o))->F_projectionMatrix = (jref) sp[1].o;
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK(sp[0].o))->F_transformMatrix = (jref) sp[1].o;
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK(sp[0].o))->F_combinedMatrix = (jref) sp[1].o;
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(104);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_defaultRectLineWidth = (jfloat(0.75f));
	LINE_NUMBER(115);
	if ((frame[2].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20);
	init_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_int_boolean_boolean_int(ctx, sp[1].o, (frame[1].i), (jint(0)), (jint(1)), (jint(0)));
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK(sp[0].o))->F_renderer = (jref) sp[1].o;
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20);
	init_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_int_boolean_boolean_int_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx, sp[1].o, (frame[1].i), (jint(0)), (jint(1)), (jint(0)), (frame[2].o));
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK(sp[0].o))->F_renderer = (jref) sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp2 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[1].o))(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp4 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(121);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty = (jint(1));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:setColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_updateMatrices(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:updateMatrices", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty = (jint(1));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setProjectionMatrix_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:setProjectionMatrix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(146);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty = (jint(1));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getProjectionMatrix_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:getProjectionMatrix", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setTransformMatrix_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:setTransformMatrix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(156);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty = (jint(1));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:getTransformMatrix", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_identity(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:identity", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o);
	LINE_NUMBER(167);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty = (jint(1));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_translate_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:translate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(173);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty = (jint(1));
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rotate_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:rotate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(179);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty = (jint(1));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_scale_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:scale", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_scale_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_scale_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(185);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty = (jint(1));
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setAutoShapeType_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:setAutoShapeType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(192);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_autoShapeType = (frame[1].i);
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:begin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_autoShapeType) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"autoShapeType must be true to use this method."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:begin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Call end() before beginning a new shape batch."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(207);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType = (jref) (frame[1].o);
	LINE_NUMBER(208);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty) == 0) goto label_3;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_combinedMatrix;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(210);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_combinedMatrix;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[0].o))->F_val;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK(sp[1].o))->F_val;
	SM_com_badlogic_gdx_math_Matrix4_mul_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(211);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_combinedMatrix;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_getGlType_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_getGlType_R_int])(ctx, sp[2].o);
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_begin_com_badlogic_gdx_math_Matrix4_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_begin_com_badlogic_gdx_math_Matrix4_int, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_set_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"begin must be called first."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(219);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_autoShapeType) != 0) goto label_3;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"autoShapeType must be enabled."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(220);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end])(ctx, (frame[0].o));
	LINE_NUMBER(221);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_point_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:point", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(227);
	frame[4].f = (((jfloat)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_defaultRectLineWidth) * (jfloat(0.5f)));
	LINE_NUMBER(228);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float])(ctx, (frame[0].o), ((frame[1].f) - (frame[4].f)), ((frame[2].f) - (frame[4].f)), (frame[3].f), ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[4].f)), (frame[3].f));
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(231);
	frame[4].f = (((jfloat)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_defaultRectLineWidth) * (jfloat(0.5f)));
	LINE_NUMBER(232);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_box_float_float_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_box_float_float_float_float_float_float])(ctx, (frame[0].o), ((frame[1].f) - (frame[4].f)), ((frame[2].f) - (frame[4].f)), ((frame[3].f) - (frame[4].f)), ((jfloat)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_defaultRectLineWidth), ((jfloat)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_defaultRectLineWidth), ((jfloat)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_defaultRectLineWidth));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Point;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (jint(1)));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_com_badlogic_gdx_graphics_Color) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_com_badlogic_gdx_graphics_Color, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(237);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:line", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	jfloat temp4 = frame[5].f;
	jfloat temp5 = frame[6].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, sp[1].o, sp[2].o);
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:line", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y;
	jfloat temp5 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, sp[1].o, sp[2].o);
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:line", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = jfloat(0);
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	jfloat temp5 = jfloat(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, sp[1].o, sp[2].o);
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:line", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = jfloat(0);
	jfloat temp3 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y;
	jfloat temp5 = jfloat(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, sp[1].o, sp[2].o);
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:line", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(262);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jfloat(0)), (frame[3].f), (frame[4].f), (jfloat(0)), (frame[5].o), (frame[6].o));
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:line", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(269);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[4].f), (frame[5].f), ((jfloat)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_defaultRectLineWidth), (frame[7].o), (frame[8].o));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (jint(2)));
	LINE_NUMBER(273);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_a));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_a));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_curve_float_float_float_float_float_float_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jint param8) {
	NULL_CHECK(self);
	jtype frame[35];
	auto stack = &frame[30];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:curve", 35 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].i = param8;
	{
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (((frame[9].i) * (jint(2))) + (jint(2))));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[10].f = temp0;
	LINE_NUMBER(285);
	frame[11].f = ((jfloat(1)) / (jfloat((frame[9].i))));
	LINE_NUMBER(286);
	frame[12].f = ((frame[11].f) * (frame[11].f));
	LINE_NUMBER(287);
	frame[13].f = (((frame[11].f) * (frame[11].f)) * (frame[11].f));
	LINE_NUMBER(289);
	frame[14].f = ((jfloat(3.0f)) * (frame[11].f));
	LINE_NUMBER(290);
	frame[15].f = ((jfloat(3.0f)) * (frame[12].f));
	LINE_NUMBER(291);
	frame[16].f = ((jfloat(6.0f)) * (frame[12].f));
	LINE_NUMBER(292);
	frame[17].f = ((jfloat(6.0f)) * (frame[13].f));
	LINE_NUMBER(294);
	frame[18].f = (((frame[1].f) - ((frame[3].f) * (jfloat(2)))) + (frame[5].f));
	LINE_NUMBER(295);
	frame[19].f = (((frame[2].f) - ((frame[4].f) * (jfloat(2)))) + (frame[6].f));
	LINE_NUMBER(297);
	frame[20].f = (((((frame[3].f) - (frame[5].f)) * (jfloat(3.0f))) - (frame[1].f)) + (frame[7].f));
	LINE_NUMBER(298);
	frame[21].f = (((((frame[4].f) - (frame[6].f)) * (jfloat(3.0f))) - (frame[2].f)) + (frame[8].f));
	LINE_NUMBER(300);
	frame[22].f = (frame[1].f);
	LINE_NUMBER(301);
	frame[23].f = (frame[2].f);
	LINE_NUMBER(303);
	frame[24].f = (((((frame[3].f) - (frame[1].f)) * (frame[14].f)) + ((frame[18].f) * (frame[15].f))) + ((frame[20].f) * (frame[13].f)));
	LINE_NUMBER(304);
	frame[25].f = (((((frame[4].f) - (frame[2].f)) * (frame[14].f)) + ((frame[19].f) * (frame[15].f))) + ((frame[21].f) * (frame[13].f)));
	LINE_NUMBER(306);
	frame[26].f = (((frame[18].f) * (frame[16].f)) + ((frame[20].f) * (frame[17].f)));
	LINE_NUMBER(307);
	frame[27].f = (((frame[19].f) * (frame[16].f)) + ((frame[21].f) * (frame[17].f)));
	LINE_NUMBER(309);
	frame[28].f = ((frame[20].f) * (frame[17].f));
	LINE_NUMBER(310);
	frame[29].f = ((frame[21].f) * (frame[17].f));
	}
label_21:;
	{
	LINE_NUMBER(312);
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	if (temp0 <= 0) goto label_22;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[10].f));
	LINE_NUMBER(314);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[22].f), (frame[23].f), (jfloat(0)));
	LINE_NUMBER(315);
	frame[22].f = ((frame[22].f) + (frame[24].f));
	LINE_NUMBER(316);
	frame[23].f = ((frame[23].f) + (frame[25].f));
	LINE_NUMBER(317);
	frame[24].f = ((frame[24].f) + (frame[26].f));
	LINE_NUMBER(318);
	frame[25].f = ((frame[25].f) + (frame[27].f));
	LINE_NUMBER(319);
	frame[26].f = ((frame[26].f) + (frame[28].f));
	LINE_NUMBER(320);
	frame[27].f = ((frame[27].f) + (frame[29].f));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[10].f));
	LINE_NUMBER(322);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[22].f), (frame[23].f), (jfloat(0)));
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[10].f));
	LINE_NUMBER(325);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[22].f), (frame[23].f), (jfloat(0)));
	LINE_NUMBER(326);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[10].f));
	LINE_NUMBER(327);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[7].f), (frame[8].f), (jfloat(0)));
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_triangle_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:triangle", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (6));
	LINE_NUMBER(333);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[7].f = temp0;
	LINE_NUMBER(334);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(336);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(337);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(338);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[3].f), (frame[4].f), (jfloat(0)));
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(341);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[3].f), (frame[4].f), (jfloat(0)));
	LINE_NUMBER(342);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[5].f), (frame[6].f), (jfloat(0)));
	LINE_NUMBER(345);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(346);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[5].f), (frame[6].f), (jfloat(0)));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(348);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	goto label_16;
	}
label_3:;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(351);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(352);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(353);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[3].f), (frame[4].f), (jfloat(0)));
	LINE_NUMBER(354);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(355);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[5].f), (frame[6].f), (jfloat(0)));
	}
label_16:;
	LINE_NUMBER(357);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_triangle_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6, jobject param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:triangle", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (6));
	LINE_NUMBER(362);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_a));
	LINE_NUMBER(364);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(365);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_a));
	LINE_NUMBER(366);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[3].f), (frame[4].f), (jfloat(0)));
	LINE_NUMBER(368);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_a));
	LINE_NUMBER(369);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[3].f), (frame[4].f), (jfloat(0)));
	LINE_NUMBER(370);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_a));
	LINE_NUMBER(371);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[5].f), (frame[6].f), (jfloat(0)));
	LINE_NUMBER(373);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_a));
	LINE_NUMBER(374);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[5].f), (frame[6].f), (jfloat(0)));
	LINE_NUMBER(375);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_a));
	LINE_NUMBER(376);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	goto label_15;
	}
label_2:;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_a));
	LINE_NUMBER(379);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(380);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_a));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[3].f), (frame[4].f), (jfloat(0)));
	LINE_NUMBER(382);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[9].o)))->F_a));
	LINE_NUMBER(383);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[5].f), (frame[6].f), (jfloat(0)));
	}
label_15:;
	LINE_NUMBER(385);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:rect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (8));
	LINE_NUMBER(390);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[5].f = temp0;
	LINE_NUMBER(391);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(394);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(397);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(398);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(400);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(402);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(403);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(404);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(405);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(407);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(408);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(409);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(410);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	goto label_20;
	}
label_3:;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(413);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(414);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(415);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(416);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(417);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(419);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(420);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(421);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(422);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(423);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(424);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	}
label_20:;
	LINE_NUMBER(426);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:rect", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(435);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (8));
	LINE_NUMBER(437);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_a));
	LINE_NUMBER(439);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(440);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_a));
	LINE_NUMBER(441);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_a));
	LINE_NUMBER(444);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(445);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_a));
	LINE_NUMBER(446);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(448);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_a));
	LINE_NUMBER(449);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_a));
	LINE_NUMBER(451);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(453);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_a));
	LINE_NUMBER(454);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(455);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_a));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	goto label_19;
	}
label_2:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_a));
	LINE_NUMBER(459);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(460);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_a));
	LINE_NUMBER(461);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(462);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_a));
	LINE_NUMBER(463);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(465);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_a));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[3].f)), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(467);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[8].o)))->F_a));
	LINE_NUMBER(468);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[4].f)), (jfloat(0)));
	LINE_NUMBER(469);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_a));
	LINE_NUMBER(470);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	}
label_19:;
	LINE_NUMBER(472);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:rect", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	{
	LINE_NUMBER(478);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	jfloat temp4 = frame[5].f;
	jfloat temp5 = frame[6].f;
	jfloat temp6 = frame[7].f;
	jfloat temp7 = frame[8].f;
	jfloat temp8 = frame[9].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	sp[4].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(479);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jobject param11, jobject param12) {
	NULL_CHECK(self);
	jtype frame[35];
	auto stack = &frame[30];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:rect", 35 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].o = param9;
	frame[11].o = param10;
	frame[12].o = param11;
	frame[13].o = param12;
	{
	LINE_NUMBER(489);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (8));
	LINE_NUMBER(491);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[9].f));
	frame[14].f = temp0;
	LINE_NUMBER(492);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[9].f));
	frame[15].f = temp1;
	LINE_NUMBER(493);
	frame[16].f = (-(frame[3].f));
	LINE_NUMBER(494);
	frame[17].f = (-(frame[4].f));
	LINE_NUMBER(495);
	frame[18].f = ((frame[5].f) - (frame[3].f));
	LINE_NUMBER(496);
	frame[19].f = ((frame[6].f) - (frame[4].f));
	LINE_NUMBER(498);
	if ((floatCompare((frame[7].f), (jfloat(1)), -1)) != 0) goto label_8;
	}
	{
	if ((floatCompare((frame[8].f), (jfloat(1)), -1)) == 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(499);
	frame[16].f = ((frame[16].f) * (frame[7].f));
	LINE_NUMBER(500);
	frame[17].f = ((frame[17].f) * (frame[8].f));
	LINE_NUMBER(501);
	frame[18].f = ((frame[18].f) * (frame[7].f));
	LINE_NUMBER(502);
	frame[19].f = ((frame[19].f) * (frame[8].f));
	}
label_9:;
	{
	LINE_NUMBER(505);
	frame[20].f = ((frame[1].f) + (frame[3].f));
	LINE_NUMBER(506);
	frame[21].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(508);
	frame[22].f = ((((frame[14].f) * (frame[16].f)) - ((frame[15].f) * (frame[17].f))) + (frame[20].f));
	LINE_NUMBER(509);
	frame[23].f = ((((frame[15].f) * (frame[16].f)) + ((frame[14].f) * (frame[17].f))) + (frame[21].f));
	LINE_NUMBER(511);
	frame[24].f = ((((frame[14].f) * (frame[18].f)) - ((frame[15].f) * (frame[17].f))) + (frame[20].f));
	LINE_NUMBER(512);
	frame[25].f = ((((frame[15].f) * (frame[18].f)) + ((frame[14].f) * (frame[17].f))) + (frame[21].f));
	LINE_NUMBER(514);
	frame[26].f = ((((frame[14].f) * (frame[18].f)) - ((frame[15].f) * (frame[19].f))) + (frame[20].f));
	LINE_NUMBER(515);
	frame[27].f = ((((frame[15].f) * (frame[18].f)) + ((frame[14].f) * (frame[19].f))) + (frame[21].f));
	LINE_NUMBER(517);
	frame[28].f = ((frame[22].f) + ((frame[26].f) - (frame[24].f)));
	LINE_NUMBER(518);
	frame[29].f = ((frame[27].f) - ((frame[25].f) - (frame[23].f)));
	LINE_NUMBER(520);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_23;
	}
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_a));
	LINE_NUMBER(522);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[22].f), (frame[23].f), (jfloat(0)));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_a));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[24].f), (frame[25].f), (jfloat(0)));
	LINE_NUMBER(526);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_a));
	LINE_NUMBER(527);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[24].f), (frame[25].f), (jfloat(0)));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_a));
	LINE_NUMBER(529);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[26].f), (frame[27].f), (jfloat(0)));
	LINE_NUMBER(531);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_a));
	LINE_NUMBER(532);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[26].f), (frame[27].f), (jfloat(0)));
	LINE_NUMBER(533);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_a));
	LINE_NUMBER(534);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[28].f), (frame[29].f), (jfloat(0)));
	LINE_NUMBER(536);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_a));
	LINE_NUMBER(537);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[28].f), (frame[29].f), (jfloat(0)));
	LINE_NUMBER(538);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_a));
	LINE_NUMBER(539);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[22].f), (frame[23].f), (jfloat(0)));
	goto label_40;
	}
label_23:;
	{
	LINE_NUMBER(541);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_a));
	LINE_NUMBER(542);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[22].f), (frame[23].f), (jfloat(0)));
	LINE_NUMBER(543);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[11].o)))->F_a));
	LINE_NUMBER(544);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[24].f), (frame[25].f), (jfloat(0)));
	LINE_NUMBER(545);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_a));
	LINE_NUMBER(546);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[26].f), (frame[27].f), (jfloat(0)));
	LINE_NUMBER(548);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[12].o)))->F_a));
	LINE_NUMBER(549);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[26].f), (frame[27].f), (jfloat(0)));
	LINE_NUMBER(550);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[13].o)))->F_a));
	LINE_NUMBER(551);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[28].f), (frame[29].f), (jfloat(0)));
	LINE_NUMBER(552);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_a));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[22].f), (frame[23].f), (jfloat(0)));
	}
label_40:;
	LINE_NUMBER(556);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:rectLine", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(561);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (8));
	LINE_NUMBER(562);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[6].f = temp0;
	LINE_NUMBER(563);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, ((frame[4].f) - (frame[2].f)), ((frame[1].f) - (frame[3].f)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(564);
	frame[5].f = ((frame[5].f) * (jfloat(0.5f)));
	LINE_NUMBER(565);
	frame[8].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_x) * (frame[5].f));
	LINE_NUMBER(566);
	frame[9].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_y) * (frame[5].f));
	LINE_NUMBER(567);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(569);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[8].f)), ((frame[2].f) + (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(570);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(571);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) - (frame[8].f)), ((frame[2].f) - (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(573);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(574);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) + (frame[8].f)), ((frame[4].f) + (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(575);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(576);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) - (frame[8].f)), ((frame[4].f) - (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(578);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(579);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) + (frame[8].f)), ((frame[4].f) + (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(580);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(581);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[8].f)), ((frame[2].f) + (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(583);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(584);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) - (frame[8].f)), ((frame[4].f) - (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(585);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(586);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) - (frame[8].f)), ((frame[2].f) - (frame[9].f)), (jfloat(0)));
	goto label_24;
	}
label_7:;
	{
	LINE_NUMBER(588);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(589);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[8].f)), ((frame[2].f) + (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(590);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(591);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) - (frame[8].f)), ((frame[2].f) - (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(592);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(593);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) + (frame[8].f)), ((frame[4].f) + (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(595);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(596);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) - (frame[8].f)), ((frame[4].f) - (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(597);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(598);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) + (frame[8].f)), ((frame[4].f) + (frame[9].f)), (jfloat(0)));
	LINE_NUMBER(599);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(600);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) - (frame[8].f)), ((frame[2].f) - (frame[9].f)), (jfloat(0)));
	}
label_24:;
	LINE_NUMBER(602);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:rectLine", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(607);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (8));
	LINE_NUMBER(608);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, (frame[6].o));
	frame[8].f = temp0;
	LINE_NUMBER(609);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, (frame[7].o));
	frame[9].f = temp1;
	LINE_NUMBER(610);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, ((frame[4].f) - (frame[2].f)), ((frame[1].f) - (frame[3].f)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(611);
	frame[5].f = ((frame[5].f) * (jfloat(0.5f)));
	LINE_NUMBER(612);
	frame[11].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[10].o)))->F_x) * (frame[5].f));
	LINE_NUMBER(613);
	frame[12].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[10].o)))->F_y) * (frame[5].f));
	LINE_NUMBER(614);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(616);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(617);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(618);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) - (frame[11].f)), ((frame[2].f) - (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(620);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[9].f));
	LINE_NUMBER(621);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) + (frame[11].f)), ((frame[4].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(622);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[9].f));
	LINE_NUMBER(623);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) - (frame[11].f)), ((frame[4].f) - (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(625);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[9].f));
	LINE_NUMBER(626);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) + (frame[11].f)), ((frame[4].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(627);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(628);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(630);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[9].f));
	LINE_NUMBER(631);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) - (frame[11].f)), ((frame[4].f) - (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(632);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(633);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) - (frame[11].f)), ((frame[2].f) - (frame[12].f)), (jfloat(0)));
	goto label_25;
	}
label_8:;
	{
	LINE_NUMBER(635);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(636);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(637);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(638);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) - (frame[11].f)), ((frame[2].f) - (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(639);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[9].f));
	LINE_NUMBER(640);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) + (frame[11].f)), ((frame[4].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(642);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[9].f));
	LINE_NUMBER(643);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) - (frame[11].f)), ((frame[4].f) - (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(644);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[9].f));
	LINE_NUMBER(645);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[3].f) + (frame[11].f)), ((frame[4].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(646);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(647);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) - (frame[11].f)), ((frame[2].f) - (frame[12].f)), (jfloat(0)));
	}
label_25:;
	LINE_NUMBER(649);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:rectLine", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(653);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y), (frame[3].f));
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_box_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:box", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(659);
	frame[6].f = (-(frame[6].f));
	LINE_NUMBER(660);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[7].f = temp0;
	LINE_NUMBER(661);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(662);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (24));
	LINE_NUMBER(664);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(665);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(666);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(667);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), (frame[3].f));
	LINE_NUMBER(669);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(670);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), (frame[3].f));
	LINE_NUMBER(671);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(672);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(674);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(675);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(676);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(677);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(679);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(680);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(681);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(682);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(684);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(685);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(686);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(687);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(689);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(690);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(691);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(692);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(694);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(695);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(696);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(697);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(699);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(700);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(701);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(702);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(704);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(705);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(706);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(707);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(709);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(710);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), (frame[3].f));
	LINE_NUMBER(711);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(712);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(714);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(715);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(716);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(717);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(719);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(720);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(721);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(722);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	goto label_53;
	}
label_3:;
	{
	LINE_NUMBER(724);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (36));
	LINE_NUMBER(727);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(728);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(729);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(730);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), (frame[3].f));
	LINE_NUMBER(731);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(732);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(734);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(735);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(736);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(737);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(738);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(739);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(742);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(743);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(744);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(745);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(746);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(747);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(749);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(750);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(751);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(752);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(753);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(754);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(757);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(758);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(759);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(760);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(761);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(762);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(764);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(765);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(766);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(767);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(768);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(769);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(772);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(773);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), (frame[3].f));
	LINE_NUMBER(774);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(775);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(776);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(777);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(779);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(780);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), (frame[3].f));
	LINE_NUMBER(781);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(782);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(783);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(784);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(787);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(788);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(789);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(790);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(791);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(792);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(794);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(795);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), (frame[3].f));
	LINE_NUMBER(796);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(797);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(798);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(799);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(802);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(803);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(804);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(805);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(806);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(807);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), (frame[3].f));
	LINE_NUMBER(809);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(810);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[6].f)));
	LINE_NUMBER(811);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(812);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[4].f)), (frame[2].f), (frame[3].f));
	LINE_NUMBER(813);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(814);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	}
label_53:;
	LINE_NUMBER(817);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_x_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:x", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(821);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float])(ctx, (frame[0].o), ((frame[1].f) - (frame[3].f)), ((frame[2].f) - (frame[3].f)), ((frame[1].f) + (frame[3].f)), ((frame[2].f) + (frame[3].f)));
	LINE_NUMBER(822);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float])(ctx, (frame[0].o), ((frame[1].f) - (frame[3].f)), ((frame[2].f) + (frame[3].f)), ((frame[1].f) + (frame[3].f)), ((frame[2].f) - (frame[3].f)));
	LINE_NUMBER(823);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_x_com_badlogic_gdx_math_Vector2_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:x", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(827);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_x_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_x_float_float_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f));
	LINE_NUMBER(828);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_arc_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:arc", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(832);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	jfloat temp4 = frame[5].f;
	jint temp5 = jint(1);
	jfloat temp6 = jfloat(6.0f);
	jdouble temp7 = (jdouble)SM_java_lang_Math_cbrt_double_R_double(ctx, (jdouble((frame[3].f))));
	jint temp8 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp5, (jint(((temp6 * (jfloat(temp7))) * ((frame[5].f) / (jfloat(360.0f)))))));
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_arc_float_float_float_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_arc_float_float_float_float_float_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp8);
	LINE_NUMBER(833);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_arc_float_float_float_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:arc", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(837);
	if ((frame[6].i) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"segments must be > 0."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[7].f = temp0;
	LINE_NUMBER(839);
	frame[8].f = (((jfloat(6.2831855f)) * ((frame[5].f) / (jfloat(360.0f)))) / (jfloat((frame[6].i))));
	LINE_NUMBER(840);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, (frame[8].f));
	frame[9].f = temp1;
	LINE_NUMBER(841);
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, (frame[8].f));
	frame[10].f = temp2;
	LINE_NUMBER(842);
	jfloat temp3 = frame[3].f;
	jfloat temp4 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, ((frame[4].f) * (jfloat(0.017453292f))));
	frame[11].f = (temp3 * temp4);
	LINE_NUMBER(843);
	jfloat temp5 = frame[3].f;
	jfloat temp6 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, ((frame[4].f) * (jfloat(0.017453292f))));
	frame[12].f = (temp5 * temp6);
	LINE_NUMBER(845);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(846);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((frame[6].i) * (jint(2))) + (jint(2))));
	LINE_NUMBER(848);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(849);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(850);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(851);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(852);
	frame[13].i = (jint(0));
	}
label_15:;
	{
	if ((frame[13].i) >= (frame[6].i)) goto label_16;
	}
	{
	LINE_NUMBER(853);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(854);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(855);
	frame[14].f = (frame[11].f);
	LINE_NUMBER(856);
	frame[11].f = (((frame[9].f) * (frame[11].f)) - ((frame[10].f) * (frame[12].f)));
	LINE_NUMBER(857);
	frame[12].f = (((frame[10].f) * (frame[14].f)) + ((frame[9].f) * (frame[12].f)));
	LINE_NUMBER(858);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(859);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(852);
	INST_IINC(13, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(861);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(862);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (jfloat(0)));
	goto label_26;
	}
label_8:;
	{
	LINE_NUMBER(864);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((frame[6].i) * (jint(3))) + (jint(3))));
	LINE_NUMBER(866);
	frame[13].i = (jint(0));
	}
label_28:;
	{
	if ((frame[13].i) >= (frame[6].i)) goto label_29;
	}
	{
	LINE_NUMBER(867);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(868);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(869);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(870);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(871);
	frame[14].f = (frame[11].f);
	LINE_NUMBER(872);
	frame[11].f = (((frame[9].f) * (frame[11].f)) - ((frame[10].f) * (frame[12].f)));
	LINE_NUMBER(873);
	frame[12].f = (((frame[10].f) * (frame[14].f)) + ((frame[9].f) * (frame[12].f)));
	LINE_NUMBER(874);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(875);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(866);
	INST_IINC(13, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(877);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(878);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(879);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(880);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (jfloat(0)));
	}
label_26:;
	{
	LINE_NUMBER(883);
	frame[13].f = (frame[11].f);
	LINE_NUMBER(884);
	frame[11].f = (jfloat(0));
	LINE_NUMBER(885);
	frame[12].f = (jfloat(0));
	LINE_NUMBER(886);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(887);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (jfloat(0)));
	LINE_NUMBER(888);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_circle_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:circle", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(892);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jint temp3 = jint(1);
	jfloat temp4 = jfloat(6.0f);
	jdouble temp5 = (jdouble)SM_java_lang_Math_cbrt_double_R_double(ctx, (jdouble((frame[3].f))));
	jint temp6 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp3, (jint((temp4 * (jfloat(temp5))))));
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_circle_float_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_circle_float_float_float_int])(ctx, sp[0].o, temp0, temp1, temp2, temp6);
	LINE_NUMBER(893);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_circle_float_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:circle", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(897);
	if ((frame[4].i) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"segments must be > 0."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(898);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[5].f = temp0;
	LINE_NUMBER(899);
	frame[6].f = ((jfloat(6.2831855f)) / (jfloat((frame[4].i))));
	LINE_NUMBER(900);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, (frame[6].f));
	frame[7].f = temp1;
	LINE_NUMBER(901);
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, (frame[6].f));
	frame[8].f = temp2;
	LINE_NUMBER(902);
	frame[9].f = (frame[3].f);
	frame[10].f = (jfloat(0));
	LINE_NUMBER(903);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(904);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((frame[4].i) * (jint(2))) + (jint(2))));
	LINE_NUMBER(905);
	frame[11].i = (jint(0));
	}
label_11:;
	{
	if ((frame[11].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(906);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(907);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[9].f)), ((frame[2].f) + (frame[10].f)), (jfloat(0)));
	LINE_NUMBER(908);
	frame[12].f = (frame[9].f);
	LINE_NUMBER(909);
	frame[9].f = (((frame[7].f) * (frame[9].f)) - ((frame[8].f) * (frame[10].f)));
	LINE_NUMBER(910);
	frame[10].f = (((frame[8].f) * (frame[12].f)) + ((frame[7].f) * (frame[10].f)));
	LINE_NUMBER(911);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(912);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[9].f)), ((frame[2].f) + (frame[10].f)), (jfloat(0)));
	LINE_NUMBER(905);
	INST_IINC(11, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(915);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(916);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[9].f)), ((frame[2].f) + (frame[10].f)), (jfloat(0)));
	goto label_22;
	}
label_8:;
	{
	LINE_NUMBER(918);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((frame[4].i) * (jint(3))) + (jint(3))));
	LINE_NUMBER(919);
	INST_IINC(4, -1);
	LINE_NUMBER(920);
	frame[11].i = (jint(0));
	}
label_25:;
	{
	if ((frame[11].i) >= (frame[4].i)) goto label_26;
	}
	{
	LINE_NUMBER(921);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(922);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(923);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(924);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[9].f)), ((frame[2].f) + (frame[10].f)), (jfloat(0)));
	LINE_NUMBER(925);
	frame[12].f = (frame[9].f);
	LINE_NUMBER(926);
	frame[9].f = (((frame[7].f) * (frame[9].f)) - ((frame[8].f) * (frame[10].f)));
	LINE_NUMBER(927);
	frame[10].f = (((frame[8].f) * (frame[12].f)) + ((frame[7].f) * (frame[10].f)));
	LINE_NUMBER(928);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(929);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[9].f)), ((frame[2].f) + (frame[10].f)), (jfloat(0)));
	LINE_NUMBER(920);
	INST_IINC(11, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(932);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(933);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	LINE_NUMBER(934);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(935);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[9].f)), ((frame[2].f) + (frame[10].f)), (jfloat(0)));
	}
label_22:;
	{
	LINE_NUMBER(938);
	frame[11].f = (frame[9].f);
	LINE_NUMBER(939);
	frame[9].f = (frame[3].f);
	LINE_NUMBER(940);
	frame[10].f = (jfloat(0));
	LINE_NUMBER(941);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(942);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[9].f)), ((frame[2].f) + (frame[10].f)), (jfloat(0)));
	LINE_NUMBER(943);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:ellipse", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(948);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	jint temp4 = jint(1);
	jfloat temp5 = jfloat(12.0f);
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((frame[3].f) * (jfloat(0.5f))), ((frame[4].f) * (jfloat(0.5f))));
	jdouble temp7 = (jdouble)SM_java_lang_Math_cbrt_double_R_double(ctx, (jdouble(temp6)));
	jint temp8 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp4, (jint((temp5 * (jfloat(temp7))))));
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp8);
	LINE_NUMBER(949);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:ellipse", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(953);
	if ((frame[5].i) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"segments must be > 0."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(954);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[5].i) * (jint(3))));
	LINE_NUMBER(955);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[6].f = temp0;
	LINE_NUMBER(956);
	frame[7].f = ((jfloat(6.2831855f)) / (jfloat((frame[5].i))));
	LINE_NUMBER(958);
	frame[8].f = ((frame[1].f) + ((frame[3].f) / (jfloat(2))));
	frame[9].f = ((frame[2].f) + ((frame[4].f) / (jfloat(2))));
	LINE_NUMBER(959);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(960);
	frame[10].i = (jint(0));
	}
label_9:;
	{
	if ((frame[10].i) >= (frame[5].i)) goto label_10;
	}
	{
	LINE_NUMBER(961);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(962);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	jfloat temp0 = frame[8].f;
	jfloat temp1 = (frame[3].f) * (jfloat(0.5f));
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, ((jfloat((frame[10].i))) * (frame[7].f)));
	jfloat temp3 = temp0 + (temp1 * temp2);
	jfloat temp4 = frame[9].f;
	jfloat temp5 = (frame[4].f) * (jfloat(0.5f));
	jfloat temp6 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, ((jfloat((frame[10].i))) * (frame[7].f)));
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, temp3, (temp4 + (temp5 * temp6)), (jfloat(0)));
	LINE_NUMBER(964);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(965);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	jfloat temp7 = frame[8].f;
	jfloat temp8 = (frame[3].f) * (jfloat(0.5f));
	jfloat temp9 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, ((jfloat(((frame[10].i) + (jint(1))))) * (frame[7].f)));
	jfloat temp10 = temp7 + (temp8 * temp9);
	jfloat temp11 = frame[9].f;
	jfloat temp12 = (frame[4].f) * (jfloat(0.5f));
	jfloat temp13 = (jfloat(((frame[10].i) + (jint(1))))) * (frame[7].f);
	LINE_NUMBER(966);
	jfloat temp14 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, temp13);
	jfloat temp15 = temp11 + (temp12 * temp14);
	jfloat temp16 = jfloat(0);
	LINE_NUMBER(965);
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, temp10, temp15, temp16);
	LINE_NUMBER(960);
	INST_IINC(10, 1);
	goto label_9;
	}
label_10:;
	goto label_18;
label_7:;
	{
	LINE_NUMBER(969);
	frame[10].i = (jint(0));
	}
label_19:;
	{
	if ((frame[10].i) >= (frame[5].i)) goto label_18;
	}
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(971);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	jfloat temp0 = frame[8].f;
	jfloat temp1 = (frame[3].f) * (jfloat(0.5f));
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, ((jfloat((frame[10].i))) * (frame[7].f)));
	jfloat temp3 = temp0 + (temp1 * temp2);
	jfloat temp4 = frame[9].f;
	jfloat temp5 = (frame[4].f) * (jfloat(0.5f));
	jfloat temp6 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, ((jfloat((frame[10].i))) * (frame[7].f)));
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, temp3, (temp4 + (temp5 * temp6)), (jfloat(0)));
	LINE_NUMBER(973);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(974);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[8].f), (frame[9].f), (jfloat(0)));
	LINE_NUMBER(976);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(977);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	jfloat temp7 = frame[8].f;
	jfloat temp8 = (frame[3].f) * (jfloat(0.5f));
	jfloat temp9 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, ((jfloat(((frame[10].i) + (jint(1))))) * (frame[7].f)));
	jfloat temp10 = temp7 + (temp8 * temp9);
	jfloat temp11 = frame[9].f;
	jfloat temp12 = (frame[4].f) * (jfloat(0.5f));
	jfloat temp13 = (jfloat(((frame[10].i) + (jint(1))))) * (frame[7].f);
	LINE_NUMBER(978);
	jfloat temp14 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, temp13);
	jfloat temp15 = temp11 + (temp12 * temp14);
	jfloat temp16 = jfloat(0);
	LINE_NUMBER(977);
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, temp10, temp15, temp16);
	LINE_NUMBER(969);
	INST_IINC(10, 1);
	goto label_19;
	}
label_18:;
	LINE_NUMBER(981);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:ellipse", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(986);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	jfloat temp4 = frame[5].f;
	jint temp5 = jint(1);
	jfloat temp6 = jfloat(12.0f);
	jfloat temp7 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((frame[3].f) * (jfloat(0.5f))), ((frame[4].f) * (jfloat(0.5f))));
	jdouble temp8 = (jdouble)SM_java_lang_Math_cbrt_double_R_double(ctx, (jdouble(temp7)));
	jint temp9 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp5, (jint((temp6 * (jfloat(temp8))))));
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_float_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp9);
	LINE_NUMBER(987);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:ellipse", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(991);
	if ((frame[6].i) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"segments must be > 0."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(992);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[6].i) * (jint(3))));
	LINE_NUMBER(993);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[7].f = temp0;
	LINE_NUMBER(994);
	frame[8].f = ((jfloat(6.2831855f)) / (jfloat((frame[6].i))));
	LINE_NUMBER(996);
	frame[5].f = (((jfloat(3.1415927f)) * (frame[5].f)) / (jfloat(180.0f)));
	LINE_NUMBER(997);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, (frame[5].f));
	frame[9].f = temp1;
	LINE_NUMBER(998);
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, (frame[5].f));
	frame[10].f = temp2;
	LINE_NUMBER(1000);
	frame[11].f = ((frame[1].f) + ((frame[3].f) / (jfloat(2))));
	frame[12].f = ((frame[2].f) + ((frame[4].f) / (jfloat(2))));
	LINE_NUMBER(1001);
	frame[13].f = ((frame[3].f) * (jfloat(0.5f)));
	LINE_NUMBER(1002);
	frame[14].f = (jfloat(0));
	LINE_NUMBER(1003);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(1004);
	frame[15].i = (jint(0));
	}
label_14:;
	{
	if ((frame[15].i) >= (frame[6].i)) goto label_15;
	}
	{
	LINE_NUMBER(1005);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (((frame[11].f) + ((frame[10].f) * (frame[13].f))) - ((frame[9].f) * (frame[14].f))), (((frame[12].f) + ((frame[9].f) * (frame[13].f))) + ((frame[10].f) * (frame[14].f))), (jfloat(0)));
	LINE_NUMBER(1008);
	jfloat temp0 = (frame[3].f) * (jfloat(0.5f));
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, ((jfloat(((frame[15].i) + (jint(1))))) * (frame[8].f)));
	frame[13].f = (temp0 * temp1);
	LINE_NUMBER(1009);
	jfloat temp2 = (frame[4].f) * (jfloat(0.5f));
	jfloat temp3 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, ((jfloat(((frame[15].i) + (jint(1))))) * (frame[8].f)));
	frame[14].f = (temp2 * temp3);
	LINE_NUMBER(1011);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1012);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (((frame[11].f) + ((frame[10].f) * (frame[13].f))) - ((frame[9].f) * (frame[14].f))), (((frame[12].f) + ((frame[9].f) * (frame[13].f))) + ((frame[10].f) * (frame[14].f))), (jfloat(0)));
	LINE_NUMBER(1004);
	INST_IINC(15, 1);
	goto label_14;
	}
label_15:;
	goto label_23;
label_12:;
	{
	LINE_NUMBER(1015);
	frame[15].i = (jint(0));
	}
label_24:;
	{
	if ((frame[15].i) >= (frame[6].i)) goto label_23;
	}
	{
	LINE_NUMBER(1016);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1017);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (((frame[11].f) + ((frame[10].f) * (frame[13].f))) - ((frame[9].f) * (frame[14].f))), (((frame[12].f) + ((frame[9].f) * (frame[13].f))) + ((frame[10].f) * (frame[14].f))), (jfloat(0)));
	LINE_NUMBER(1019);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[11].f), (frame[12].f), (jfloat(0)));
	LINE_NUMBER(1022);
	jfloat temp0 = (frame[3].f) * (jfloat(0.5f));
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, ((jfloat(((frame[15].i) + (jint(1))))) * (frame[8].f)));
	frame[13].f = (temp0 * temp1);
	LINE_NUMBER(1023);
	jfloat temp2 = (frame[4].f) * (jfloat(0.5f));
	jfloat temp3 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, ((jfloat(((frame[15].i) + (jint(1))))) * (frame[8].f)));
	frame[14].f = (temp2 * temp3);
	LINE_NUMBER(1025);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1026);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (((frame[11].f) + ((frame[10].f) * (frame[13].f))) - ((frame[9].f) * (frame[14].f))), (((frame[12].f) + ((frame[9].f) * (frame[13].f))) + ((frame[10].f) * (frame[14].f))), (jfloat(0)));
	LINE_NUMBER(1015);
	INST_IINC(15, 1);
	goto label_24;
	}
label_23:;
	LINE_NUMBER(1029);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_cone_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:cone", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(1034);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	jfloat temp4 = frame[5].f;
	jint temp5 = jint(1);
	jfloat temp6 = jfloat(4.0f);
	jdouble temp7 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[4].f))));
	jint temp8 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp5, (jint((temp6 * (jfloat(temp7))))));
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_cone_float_float_float_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_cone_float_float_float_float_float_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp8);
	LINE_NUMBER(1035);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_cone_float_float_float_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:cone", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(1039);
	if ((frame[6].i) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"segments must be > 0."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1040);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (((frame[6].i) * (jint(4))) + (jint(2))));
	LINE_NUMBER(1041);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[7].f = temp0;
	LINE_NUMBER(1042);
	frame[8].f = ((jfloat(6.2831855f)) / (jfloat((frame[6].i))));
	LINE_NUMBER(1043);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(ctx, (frame[8].f));
	frame[9].f = temp1;
	LINE_NUMBER(1044);
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, (frame[8].f));
	frame[10].f = temp2;
	LINE_NUMBER(1045);
	frame[11].f = (frame[4].f);
	frame[12].f = (jfloat(0));
	LINE_NUMBER(1046);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(1047);
	frame[13].i = (jint(0));
	}
label_11:;
	{
	if ((frame[13].i) >= (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(1048);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1049);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (frame[3].f));
	LINE_NUMBER(1050);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[5].f)));
	LINE_NUMBER(1052);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1053);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (frame[3].f));
	LINE_NUMBER(1054);
	frame[14].f = (frame[11].f);
	LINE_NUMBER(1055);
	frame[11].f = (((frame[9].f) * (frame[11].f)) - ((frame[10].f) * (frame[12].f)));
	LINE_NUMBER(1056);
	frame[12].f = (((frame[10].f) * (frame[14].f)) + ((frame[9].f) * (frame[12].f)));
	LINE_NUMBER(1057);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1058);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (frame[3].f));
	LINE_NUMBER(1047);
	INST_IINC(13, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1062);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (frame[3].f));
	goto label_26;
	}
label_9:;
	{
	LINE_NUMBER(1064);
	INST_IINC(6, -1);
	LINE_NUMBER(1065);
	frame[13].i = (jint(0));
	}
label_28:;
	{
	if ((frame[13].i) >= (frame[6].i)) goto label_29;
	}
	{
	LINE_NUMBER(1066);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (frame[3].f));
	LINE_NUMBER(1070);
	frame[14].f = (frame[11].f);
	LINE_NUMBER(1071);
	frame[15].f = (frame[12].f);
	LINE_NUMBER(1072);
	frame[11].f = (((frame[9].f) * (frame[11].f)) - ((frame[10].f) * (frame[12].f)));
	LINE_NUMBER(1073);
	frame[12].f = (((frame[10].f) * (frame[14].f)) + ((frame[9].f) * (frame[12].f)));
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1075);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (frame[3].f));
	LINE_NUMBER(1077);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1078);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[14].f)), ((frame[2].f) + (frame[15].f)), (frame[3].f));
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1080);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (frame[3].f));
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1082);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[5].f)));
	LINE_NUMBER(1065);
	INST_IINC(13, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(1085);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1086);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(1087);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1088);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (frame[3].f));
	}
label_26:;
	{
	LINE_NUMBER(1090);
	frame[13].f = (frame[11].f);
	LINE_NUMBER(1091);
	frame[14].f = (frame[12].f);
	LINE_NUMBER(1092);
	frame[11].f = (frame[4].f);
	LINE_NUMBER(1093);
	frame[12].f = (jfloat(0));
	LINE_NUMBER(1094);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1095);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (frame[3].f));
	LINE_NUMBER(1096);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	if (sp[0].o == sp[1].o) goto label_56;
	}
	{
	LINE_NUMBER(1097);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1098);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[13].f)), ((frame[2].f) + (frame[14].f)), (frame[3].f));
	LINE_NUMBER(1099);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1100);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + (frame[11].f)), ((frame[2].f) + (frame[12].f)), (frame[3].f));
	LINE_NUMBER(1101);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(1102);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) + (frame[5].f)));
	}
label_56:;
	LINE_NUMBER(1104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polygon_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:polygon", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1109);
	if ((frame[3].i) >= (6)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Polygons must contain at least 3 points."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1110);
	if (((frame[3].i) % (jint(2))) == 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Polygons must have an even number of vertices."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1112);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (frame[3].i));
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[4].f = temp0;
	LINE_NUMBER(1114);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))));
	LINE_NUMBER(1115);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))));
	LINE_NUMBER(1117);
	frame[7].i = (frame[2].i);
	frame[8].i = ((frame[2].i) + (frame[3].i));
	}
label_8:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_9;
	}
	{
	LINE_NUMBER(1118);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[7].i)));
	LINE_NUMBER(1119);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(1124);
	if (((frame[7].i) + (jint(2))) < (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(1125);
	frame[11].f = (frame[5].f);
	LINE_NUMBER(1126);
	frame[12].f = (frame[6].f);
	goto label_17;
	}
label_13:;
	{
	LINE_NUMBER(1128);
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[7].i) + (jint(2)))));
	LINE_NUMBER(1129);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[7].i) + (jint(3)))));
	}
label_17:;
	{
	LINE_NUMBER(1132);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[4].f));
	LINE_NUMBER(1133);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[9].f), (frame[10].f), (jfloat(0)));
	LINE_NUMBER(1134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[4].f));
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[11].f), (frame[12].f), (jfloat(0)));
	LINE_NUMBER(1117);
	INST_IINC(7, 2);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(1137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polygon_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:polygon", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1141);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polygon_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polygon_Array1_float_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(1142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polyline_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:polyline", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1147);
	if ((frame[3].i) >= (jint(4))) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Polylines must contain at least 2 points."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1148);
	if (((frame[3].i) % (jint(2))) == 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Polylines must have an even number of vertices."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1150);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (frame[3].i));
	LINE_NUMBER(1151);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[4].f = temp0;
	LINE_NUMBER(1152);
	frame[5].i = (frame[2].i);
	frame[6].i = (((frame[2].i) + (frame[3].i)) - (jint(2)));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_7;
	}
	{
	LINE_NUMBER(1153);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(1154);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(1)))));
	LINE_NUMBER(1159);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(2)))));
	LINE_NUMBER(1160);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(3)))));
	LINE_NUMBER(1162);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[4].f));
	LINE_NUMBER(1163);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[7].f), (frame[8].f), (jfloat(0)));
	LINE_NUMBER(1164);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, sp[0].o))(ctx, sp[0].o, (frame[4].f));
	LINE_NUMBER(1165);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[9].f), (frame[10].f), (jfloat(0)));
	LINE_NUMBER(1152);
	INST_IINC(5, 2);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(1167);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polyline_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:polyline", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1171);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polyline_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polyline_Array1_float_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(1172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:check", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1181);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"begin must be called first."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1183);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	if (sp[0].o == (frame[1].o)) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	if (sp[0].o == (frame[2].o)) goto label_2;
	}
	{
	LINE_NUMBER(1185);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_autoShapeType) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1186);
	if ((frame[2].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1187);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Must call begin(ShapeType."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1189);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Must call begin(ShapeType."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8") or begin(ShapeType."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1191);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end])(ctx, (frame[0].o));
	LINE_NUMBER(1192);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType])(ctx, (frame[0].o), (frame[1].o));
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(1193);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_matrixDirty) == 0) goto label_10;
	}
	{
	LINE_NUMBER(1195);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1196);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end])(ctx, (frame[0].o));
	LINE_NUMBER(1197);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(1198);
	goto label_9;
	}
label_10:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_getMaxVertices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_getMaxVertices_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_getNumVertices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_getNumVertices_R_int, sp[0].o))(ctx, sp[0].o);
	if ((temp0 - temp1) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(1200);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1201);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end])(ctx, (frame[0].o));
	LINE_NUMBER(1202);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType])(ctx, (frame[0].o), (frame[4].o));
	}
label_9:;
	LINE_NUMBER(1204);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:end", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1208);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_end) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_end, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(1209);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType = (jref) (jobject(nullptr));
	LINE_NUMBER(1210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:flush", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1213);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1214);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1215);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end])(ctx, (frame[0].o));
	LINE_NUMBER(1216);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1217);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getCurrentType_R_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:getCurrentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1221);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getRenderer_R_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:getRenderer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1225);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_isDrawing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:isDrawing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1230);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_shapeType;
	if (sp[0].o == nullptr) goto label_1;
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

void M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1234);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShapeRenderer *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_dispose, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(1235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_ShapeRenderer[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_dispose,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_updateMatrices,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setProjectionMatrix_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getProjectionMatrix_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setTransformMatrix_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_identity,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_translate_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rotate_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_scale_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setAutoShapeType_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_set_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_point_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_curve_float_float_float_float_float_float_float_float_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_triangle_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_triangle_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_box_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_x_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_x_com_badlogic_gdx_math_Vector2_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_arc_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_arc_float_float_float_float_float_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_circle_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_circle_float_float_float_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_float_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_cone_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_cone_float_float_float_float_float_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polygon_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polygon_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polyline_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polyline_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getCurrentType_R_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getRenderer_R_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_isDrawing_R_boolean,
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
	{ "dispose", "()V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "updateMatrices", "()V" },
	{ "setProjectionMatrix", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "getProjectionMatrix", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setTransformMatrix", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "getTransformMatrix", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "identity", "()V" },
	{ "translate", "(FFF)V" },
	{ "rotate", "(FFFF)V" },
	{ "scale", "(FFF)V" },
	{ "setAutoShapeType", "(Z)V" },
	{ "begin", "()V" },
	{ "begin", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;)V" },
	{ "point", "(FFF)V" },
	{ "line", "(FFFFFF)V" },
	{ "line", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "line", "(FFFF)V" },
	{ "line", "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)V" },
	{ "line", "(FFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "line", "(FFFFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "curve", "(FFFFFFFFI)V" },
	{ "triangle", "(FFFFFF)V" },
	{ "triangle", "(FFFFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "rect", "(FFFF)V" },
	{ "rect", "(FFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "rect", "(FFFFFFFFF)V" },
	{ "rect", "(FFFFFFFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "rectLine", "(FFFFF)V" },
	{ "rectLine", "(FFFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "rectLine", "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;F)V" },
	{ "box", "(FFFFFF)V" },
	{ "x", "(FFF)V" },
	{ "x", "(Lcom/badlogic/gdx/math/Vector2;F)V" },
	{ "arc", "(FFFFF)V" },
	{ "arc", "(FFFFFI)V" },
	{ "circle", "(FFF)V" },
	{ "circle", "(FFFI)V" },
	{ "ellipse", "(FFFF)V" },
	{ "ellipse", "(FFFFI)V" },
	{ "ellipse", "(FFFFF)V" },
	{ "ellipse", "(FFFFFI)V" },
	{ "cone", "(FFFFF)V" },
	{ "cone", "(FFFFFI)V" },
	{ "polygon", "([FII)V" },
	{ "polygon", "([F)V" },
	{ "polyline", "([FII)V" },
	{ "polyline", "([F)V" },
	{ "check", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;I)V" },
	{ "end", "()V" },
	{ "flush", "()V" },
	{ "getCurrentType", "()Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;" },
	{ "getRenderer", "()Lcom/badlogic/gdx/graphics/glutils/ImmediateModeRenderer;" },
	{ "isDrawing", "()Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType,
};

static FieldMetadata fields[] {
	{ "renderer", &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, offsetof(com_badlogic_gdx_graphics_glutils_ShapeRenderer, F_renderer), "Lcom/badlogic/gdx/graphics/glutils/ImmediateModeRenderer;", 18 },
	{ "matrixDirty", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_ShapeRenderer, F_matrixDirty), "Z", 2 },
	{ "projectionMatrix", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_glutils_ShapeRenderer, F_projectionMatrix), "Lcom/badlogic/gdx/math/Matrix4;", 18 },
	{ "transformMatrix", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_glutils_ShapeRenderer, F_transformMatrix), "Lcom/badlogic/gdx/math/Matrix4;", 18 },
	{ "combinedMatrix", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_glutils_ShapeRenderer, F_combinedMatrix), "Lcom/badlogic/gdx/math/Matrix4;", 18 },
	{ "tmp", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_graphics_glutils_ShapeRenderer, F_tmp), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "color", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_glutils_ShapeRenderer, F_color), "Lcom/badlogic/gdx/graphics/Color;", 18 },
	{ "shapeType", &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, offsetof(com_badlogic_gdx_graphics_glutils_ShapeRenderer, F_shapeType), "Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;", 2 },
	{ "autoShapeType", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_ShapeRenderer, F_autoShapeType), "Z", 2 },
	{ "defaultRectLineWidth", &class_float, offsetof(com_badlogic_gdx_graphics_glutils_ShapeRenderer, F_defaultRectLineWidth), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ShapeRenderer, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ShapeRenderer_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ShapeRenderer_int_com_badlogic_gdx_graphics_glutils_ShaderProgram, 0, "(ILcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_float_float_float_float, "(FFFF)V", 1 },
	{ "getColor", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "updateMatrices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_updateMatrices, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_updateMatrices, "()V", 1 },
	{ "setProjectionMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setProjectionMatrix_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setProjectionMatrix_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "getProjectionMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getProjectionMatrix_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getProjectionMatrix_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setTransformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setTransformMatrix_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setTransformMatrix_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "getTransformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "identity", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_identity, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_identity, "()V", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_translate_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_translate_float_float_float, "(FFF)V", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rotate_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rotate_float_float_float_float, "(FFFF)V", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_scale_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_scale_float_float_float, "(FFF)V", 1 },
	{ "setAutoShapeType", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setAutoShapeType_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setAutoShapeType_boolean, "(Z)V", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin, "()V", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_set_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_set_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;)V", 1 },
	{ "point", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_point_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_point_float_float_float, "(FFF)V", 1 },
	{ "line", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float, "(FFFFFF)V", 17 },
	{ "line", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)V", 17 },
	{ "line", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float, "(FFFF)V", 17 },
	{ "line", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)V", 17 },
	{ "line", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, "(FFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V", 17 },
	{ "line", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_line_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, "(FFFFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "curve", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_curve_float_float_float_float_float_float_float_float_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_curve_float_float_float_float_float_float_float_float_int, "(FFFFFFFFI)V", 1 },
	{ "triangle", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_triangle_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_triangle_float_float_float_float_float_float, "(FFFFFF)V", 1 },
	{ "triangle", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_triangle_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_triangle_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, "(FFFFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "rect", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float, "(FFFF)V", 1 },
	{ "rect", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, "(FFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "rect", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float, "(FFFFFFFFF)V", 1 },
	{ "rect", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, "(FFFFFFFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "rectLine", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float, "(FFFFF)V", 1 },
	{ "rectLine", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_float_float_float_float_float_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color, "(FFFFFLcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "rectLine", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rectLine_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_float, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;F)V", 1 },
	{ "box", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_box_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_box_float_float_float_float_float_float, "(FFFFFF)V", 1 },
	{ "x", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_x_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_x_float_float_float, "(FFF)V", 1 },
	{ "x", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_x_com_badlogic_gdx_math_Vector2_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_x_com_badlogic_gdx_math_Vector2_float, "(Lcom/badlogic/gdx/math/Vector2;F)V", 1 },
	{ "arc", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_arc_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_arc_float_float_float_float_float, "(FFFFF)V", 1 },
	{ "arc", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_arc_float_float_float_float_float_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_arc_float_float_float_float_float_int, "(FFFFFI)V", 1 },
	{ "circle", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_circle_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_circle_float_float_float, "(FFF)V", 1 },
	{ "circle", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_circle_float_float_float_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_circle_float_float_float_int, "(FFFI)V", 1 },
	{ "ellipse", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float, "(FFFF)V", 1 },
	{ "ellipse", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_int, "(FFFFI)V", 1 },
	{ "ellipse", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_float, "(FFFFF)V", 1 },
	{ "ellipse", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_float_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_ellipse_float_float_float_float_float_int, "(FFFFFI)V", 1 },
	{ "cone", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_cone_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_cone_float_float_float_float_float, "(FFFFF)V", 1 },
	{ "cone", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_cone_float_float_float_float_float_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_cone_float_float_float_float_float_int, "(FFFFFI)V", 1 },
	{ "polygon", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polygon_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polygon_Array1_float_int_int, "([FII)V", 1 },
	{ "polygon", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polygon_Array1_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polygon_Array1_float, "([F)V", 1 },
	{ "polyline", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polyline_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polyline_Array1_float_int_int, "([FII)V", 1 },
	{ "polyline", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polyline_Array1_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_polyline_Array1_float, "([F)V", 1 },
	{ "check", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_check_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_int, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;I)V", 20 },
	{ "end", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end, "()V", 1 },
	{ "flush", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush, "()V", 1 },
	{ "getCurrentType", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getCurrentType_R_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getCurrentType_R_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, "()Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;", 1 },
	{ "getRenderer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getRenderer_R_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getRenderer_R_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, "()Lcom/badlogic/gdx/graphics/glutils/ImmediateModeRenderer;", 1 },
	{ "isDrawing", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_isDrawing_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_isDrawing_R_boolean, "()Z", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer_dispose, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_dispose, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_ShapeRenderer{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/ShapeRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_ShapeRenderer),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 60,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 68,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_ShapeRenderer = registerClass(&class_com_badlogic_gdx_graphics_glutils_ShapeRenderer);

}

