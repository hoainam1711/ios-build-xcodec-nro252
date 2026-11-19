#include "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/Camera.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack.h"
#include "com/badlogic/gdx/graphics/glutils/HdpiUtils.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
jobject SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp;
jobject SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_viewport;

void mark_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_viewport)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_viewport)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_viewport, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_ScissorStack *) object;
}

void init_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_pushScissors_com_badlogic_gdx_math_Rectangle_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack:pushScissors", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(47);
	SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_fix_com_badlogic_gdx_math_Rectangle(ctx, (frame[0].o));
	LINE_NUMBER(49);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_2;
	}
	{
	LINE_NUMBER(50);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width), (jfloat(1)), 1)) < 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height), (jfloat(1)), 1)) >= 0) goto label_5;
	}
label_4:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(51);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glEnable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glEnable_int, sp[0].o))(ctx, sp[0].o, (3089));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(54);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Rectangle, sp[0].o));
	LINE_NUMBER(55);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].f = temp0;
	LINE_NUMBER(56);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width)), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width)));
	frame[3].f = temp1;
	LINE_NUMBER(57);
	if ((floatCompare(((frame[3].f) - (frame[2].f)), (jfloat(1)), 1)) >= 0) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(59);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y));
	frame[4].f = temp0;
	LINE_NUMBER(60);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height)), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height)));
	frame[5].f = temp1;
	LINE_NUMBER(61);
	if ((floatCompare(((frame[5].f) - (frame[4].f)), (jfloat(1)), 1)) >= 0) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(63);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(64);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y = (frame[4].f);
	LINE_NUMBER(65);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = ((frame[3].f) - (frame[2].f));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(1)), ((frame[5].f) - (frame[4].f)));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = temp0;
	}
label_6:;
	{
	LINE_NUMBER(68);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(69);
	SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_glScissor_int_int_int_int(ctx, (jint(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x))), (jint(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y))), (jint(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width))), (jint(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height))));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_popScissors_R_com_badlogic_gdx_math_Rectangle(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack:popScissors", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	{
	LINE_NUMBER(78);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object])(ctx, sp[0].o);
	frame[0].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Rectangle, sp[0].o));
	LINE_NUMBER(79);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_2;
	}
	{
	LINE_NUMBER(80);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (3089));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(82);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Rectangle, sp[0].o));
	LINE_NUMBER(83);
	SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_glScissor_int_int_int_int(ctx, (jint(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x))), (jint(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y))), (jint(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width))), (jint(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height))));
	}
label_4:;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_peekScissors_R_com_badlogic_gdx_math_Rectangle(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack:peekScissors", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	{
	LINE_NUMBER(91);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(92);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_math_Rectangle, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_fix_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack:fix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = (jfloat(temp0));
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = (jfloat(temp1));
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = (jfloat(temp2));
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = (jfloat(temp3));
	LINE_NUMBER(100);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width), (jfloat(0)), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(101);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = (-((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x) - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width));
	}
label_5:;
	{
	LINE_NUMBER(104);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height), (jfloat(0)), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(105);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height = (-((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y) - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height));
	}
label_8:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_calculateScissors_com_badlogic_gdx_graphics_Camera_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack:calculateScissors", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp2 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[1].o))(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp4 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[1].o))(ctx, sp[1].o);
	SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_calculateScissors_com_badlogic_gdx_graphics_Camera_float_float_float_float_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_calculateScissors_com_badlogic_gdx_graphics_Camera_float_float_float_float_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack:calculateScissors", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(127);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_y), (jfloat(0)));
	LINE_NUMBER(128);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(130);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(131);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(133);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_width)), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_height)), (jfloat(0)));
	LINE_NUMBER(134);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(136);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x) - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[7].o)))->F_x));
	LINE_NUMBER(137);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y) - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[7].o)))->F_y));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_getViewport_R_com_badlogic_gdx_math_Rectangle(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack:getViewport", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	{
	LINE_NUMBER(142);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(143);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_viewport;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp2 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[1].o))(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp4 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(144);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_viewport;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(146);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[0].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Rectangle, sp[0].o));
	LINE_NUMBER(147);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_viewport;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(148);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_viewport;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	{
	LINE_NUMBER(34);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors = sp[0].o;
	LINE_NUMBER(35);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp = sp[0].o;
	LINE_NUMBER(36);
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_viewport = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack[] {
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

static FieldMetadata fields[] {
	{ "scissors", &class_com_badlogic_gdx_utils_Array, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_scissors, "Lcom/badlogic/gdx/utils/Array;", 10 },
	{ "tmp", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_tmp, "Lcom/badlogic/gdx/math/Vector3;", 8 },
	{ "viewport", &class_com_badlogic_gdx_math_Rectangle, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_viewport, "Lcom/badlogic/gdx/math/Rectangle;", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack, 0, "()V", 1 },
	{ "pushScissors", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_pushScissors_com_badlogic_gdx_math_Rectangle_R_boolean, 0, "(Lcom/badlogic/gdx/math/Rectangle;)Z", 9 },
	{ "popScissors", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_popScissors_R_com_badlogic_gdx_math_Rectangle, 0, "()Lcom/badlogic/gdx/math/Rectangle;", 9 },
	{ "peekScissors", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_peekScissors_R_com_badlogic_gdx_math_Rectangle, 0, "()Lcom/badlogic/gdx/math/Rectangle;", 9 },
	{ "fix", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_fix_com_badlogic_gdx_math_Rectangle, 0, "(Lcom/badlogic/gdx/math/Rectangle;)V", 10 },
	{ "calculateScissors", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_calculateScissors_com_badlogic_gdx_graphics_Camera_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle, 0, "(Lcom/badlogic/gdx/graphics/Camera;Lcom/badlogic/gdx/math/Matrix4;Lcom/badlogic/gdx/math/Rectangle;Lcom/badlogic/gdx/math/Rectangle;)V", 9 },
	{ "calculateScissors", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_calculateScissors_com_badlogic_gdx_graphics_Camera_float_float_float_float_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle, 0, "(Lcom/badlogic/gdx/graphics/Camera;FFFFLcom/badlogic/gdx/math/Matrix4;Lcom/badlogic/gdx/math/Rectangle;Lcom/badlogic/gdx/math/Rectangle;)V", 9 },
	{ "getViewport", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_getViewport_R_com_badlogic_gdx_math_Rectangle, 0, "()Lcom/badlogic/gdx/math/Rectangle;", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_ScissorStack),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack);

}

