#include "com/badlogic/gdx/graphics/g3d/utils/RenderContext.h"
#include "com/badlogic/gdx/graphics/g3d/utils/RenderContext.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureBinder.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_utils_RenderContext(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_utils_RenderContext *) object;
	if (self->F_textureBinder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureBinder)->clazz)->markFunction)((jobject) self->F_textureBinder, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_utils_RenderContext(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_utils_RenderContext_com_badlogic_gdx_graphics_g3d_utils_TextureBinder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/RenderContext:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_utils_RenderContext(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_textureBinder = (jref) (frame[1].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/RenderContext:begin", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (2929));
	LINE_NUMBER(47);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_depthFunc = (jint(0));
	LINE_NUMBER(48);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDepthMask_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDepthMask_boolean, sp[0].o))(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(49);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_depthMask = (jint(1));
	LINE_NUMBER(50);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (3042));
	LINE_NUMBER(51);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blending = (jint(0));
	LINE_NUMBER(52);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (2884));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[0].o;
	sp[4].o = frame[0].o;
	jint temp0 = jint(0);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK(sp[4].o))->F_blendDestAlphaFactor = temp0;
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK(sp[3].o))->F_blendSourceAlphaFactor = temp0;
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK(sp[2].o))->F_blendDestRgbFactor = temp0;
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK(sp[1].o))->F_blendSourceRgbFactor = temp0;
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK(sp[0].o))->F_cullFace = temp0;
	LINE_NUMBER(54);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_textureBinder;
	((func_com_badlogic_gdx_graphics_g3d_utils_TextureBinder_begin) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g3d_utils_TextureBinder, INDEX_com_badlogic_gdx_graphics_g3d_utils_TextureBinder_begin, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/RenderContext:end", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_depthFunc) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (2929));
	}
label_1:;
	{
	LINE_NUMBER(60);
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_depthMask) != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDepthMask_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDepthMask_boolean, sp[0].o))(ctx, sp[0].o, (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(61);
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blending) == 0) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (3042));
	}
label_3:;
	{
	LINE_NUMBER(62);
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_cullFace) <= 0) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (2884));
	}
label_4:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_textureBinder;
	((func_com_badlogic_gdx_graphics_g3d_utils_TextureBinder_end) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g3d_utils_TextureBinder, INDEX_com_badlogic_gdx_graphics_g3d_utils_TextureBinder_end, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthMask_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/RenderContext:setDepthMask", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(67);
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_depthMask) == (frame[1].i)) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	sp[1].o = frame[0].o;
	jint temp0 = frame[1].i;
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK(sp[1].o))->F_depthMask = temp0;
	((func_com_badlogic_gdx_graphics_GL20_glDepthMask_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDepthMask_boolean, sp[0].o))(ctx, sp[0].o, temp0);
	}
label_1:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/RenderContext:setDepthTest", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(71);
	((func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int_float_float])(ctx, (frame[0].o), (frame[1].i), (jfloat(0)), (jfloat(1)));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/RenderContext:setDepthTest", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(75);
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_depthFunc) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(76);
	if ((frame[1].i) == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(77);
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_depthFunc) == (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(78);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_depthFunc = (frame[1].i);
	LINE_NUMBER(79);
	if ((frame[5].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(80);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glEnable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glEnable_int, sp[0].o))(ctx, sp[0].o, (2929));
	LINE_NUMBER(81);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDepthFunc_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDepthFunc_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(83);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (2929));
	}
label_7:;
	{
	LINE_NUMBER(85);
	if ((frame[5].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(86);
	if ((frame[4].i) == 0) goto label_15;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_depthFunc) == (frame[1].i)) goto label_16;
	}
label_15:;
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	sp[1].o = frame[0].o;
	jint temp0 = frame[1].i;
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK(sp[1].o))->F_depthFunc = temp0;
	((func_com_badlogic_gdx_graphics_GL20_glDepthFunc_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDepthFunc_int, sp[0].o))(ctx, sp[0].o, temp0);
	}
label_16:;
	{
	LINE_NUMBER(87);
	if ((frame[4].i) == 0) goto label_17;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_depthRangeNear), (frame[2].f), -1)) != 0) goto label_17;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_depthRangeFar), (frame[3].f), -1)) == 0) goto label_13;
	}
label_17:;
	{
	LINE_NUMBER(88);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	sp[1].o = frame[0].o;
	jfloat temp0 = frame[2].f;
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK(sp[1].o))->F_depthRangeNear = temp0;
	sp[1].o = frame[0].o;
	jfloat temp3 = frame[3].f;
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK(sp[1].o))->F_depthRangeFar = temp3;
	((func_com_badlogic_gdx_graphics_GL20_glDepthRangef_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDepthRangef_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp3);
	}
label_13:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int(jcontext ctx, jobject self, jbool param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/RenderContext:setBlending", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(93);
	((func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int_int_int(jcontext ctx, jobject self, jbool param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/RenderContext:setBlending", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(98);
	if ((frame[1].i) == ((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blending)) goto label_1;
	}
	{
	LINE_NUMBER(99);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blending = (frame[1].i);
	LINE_NUMBER(100);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(101);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glEnable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glEnable_int, sp[0].o))(ctx, sp[0].o, (3042));
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(103);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (3042));
	}
label_1:;
	{
	LINE_NUMBER(105);
	if ((frame[1].i) == 0) goto label_6;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blendSourceRgbFactor) != (frame[2].i)) goto label_7;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blendDestRgbFactor) != (frame[3].i)) goto label_7;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blendSourceAlphaFactor) != (frame[4].i)) goto label_7;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blendDestAlphaFactor) == (frame[5].i)) goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(107);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glBlendFuncSeparate_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBlendFuncSeparate_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(108);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blendSourceRgbFactor = (frame[2].i);
	LINE_NUMBER(109);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blendDestRgbFactor = (frame[3].i);
	LINE_NUMBER(110);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blendSourceAlphaFactor = (frame[4].i);
	LINE_NUMBER(111);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_blendDestAlphaFactor = (frame[5].i);
	}
label_6:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setCullFace_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/RenderContext:setCullFace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(116);
	if ((frame[1].i) == ((jint)((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_cullFace)) goto label_1;
	}
	{
	LINE_NUMBER(117);
	((com_badlogic_gdx_graphics_g3d_utils_RenderContext *) NULL_CHECK((frame[0].o)))->F_cullFace = (frame[1].i);
	LINE_NUMBER(118);
	if ((frame[1].i) == (1028)) goto label_4;
	}
	{
	if ((frame[1].i) == (1029)) goto label_4;
	}
	{
	if ((frame[1].i) != (1032)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(119);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glEnable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glEnable_int, sp[0].o))(ctx, sp[0].o, (2884));
	LINE_NUMBER(120);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glCullFace_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glCullFace_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(122);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (2884));
	}
label_1:;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_utils_RenderContext[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_begin,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_end,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthMask_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int_float_float,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setCullFace_int,
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
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "setDepthMask", "(Z)V" },
	{ "setDepthTest", "(I)V" },
	{ "setDepthTest", "(IFF)V" },
	{ "setBlending", "(ZII)V" },
	{ "setBlending", "(ZIIII)V" },
	{ "setCullFace", "(I)V" },
};

static FieldMetadata fields[] {
	{ "textureBinder", &class_com_badlogic_gdx_graphics_g3d_utils_TextureBinder, offsetof(com_badlogic_gdx_graphics_g3d_utils_RenderContext, F_textureBinder), "Lcom/badlogic/gdx/graphics/g3d/utils/TextureBinder;", 17 },
	{ "blending", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_utils_RenderContext, F_blending), "Z", 2 },
	{ "blendSourceRgbFactor", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_utils_RenderContext, F_blendSourceRgbFactor), "I", 2 },
	{ "blendDestRgbFactor", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_utils_RenderContext, F_blendDestRgbFactor), "I", 2 },
	{ "blendSourceAlphaFactor", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_utils_RenderContext, F_blendSourceAlphaFactor), "I", 2 },
	{ "blendDestAlphaFactor", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_utils_RenderContext, F_blendDestAlphaFactor), "I", 2 },
	{ "depthFunc", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_utils_RenderContext, F_depthFunc), "I", 2 },
	{ "depthRangeNear", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_utils_RenderContext, F_depthRangeNear), "F", 2 },
	{ "depthRangeFar", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_utils_RenderContext, F_depthRangeFar), "F", 2 },
	{ "depthMask", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_utils_RenderContext, F_depthMask), "Z", 2 },
	{ "cullFace", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_utils_RenderContext, F_cullFace), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_utils_RenderContext_com_badlogic_gdx_graphics_g3d_utils_TextureBinder, 0, "(Lcom/badlogic/gdx/graphics/g3d/utils/TextureBinder;)V", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_begin, VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_begin, "()V", 1 },
	{ "end", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_end, VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_end, "()V", 1 },
	{ "setDepthMask", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthMask_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthMask_boolean, "(Z)V", 1 },
	{ "setDepthTest", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int, VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int, "(I)V", 1 },
	{ "setDepthTest", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int_float_float, VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int_float_float, "(IFF)V", 1 },
	{ "setBlending", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int, VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int, "(ZII)V", 1 },
	{ "setBlending", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int_int_int, "(ZIIII)V", 1 },
	{ "setCullFace", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setCullFace_int, VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setCullFace_int, "(I)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_utils_RenderContext{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/utils/RenderContext",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_utils_RenderContext),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_utils_RenderContext,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_utils_RenderContext,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_utils_RenderContext,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_utils_RenderContext = registerClass(&class_com_badlogic_gdx_graphics_g3d_utils_RenderContext);

}

