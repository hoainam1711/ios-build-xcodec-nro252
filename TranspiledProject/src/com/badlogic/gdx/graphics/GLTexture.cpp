#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/nio/FloatBuffer.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/Pixmap_Blending.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/TextureData_TextureDataType.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/graphics/glutils/MipMapGenerator.h"

extern "C" {

jfloat SF_com_badlogic_gdx_graphics_GLTexture_maxAnisotropicFilterLevel;

void mark_com_badlogic_gdx_graphics_GLTexture(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_GLTexture *) object;
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_uWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uWrap)->clazz)->markFunction)((jobject) self->F_uWrap, mark, depth + 1);
	if (self->F_vWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vWrap)->clazz)->markFunction)((jobject) self->F_vWrap, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_GLTexture_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int, sp[1].o))(ctx, sp[1].o);
	init_com_badlogic_gdx_graphics_GLTexture_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_GLTexture_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(60);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureWrap_ClampToEdge;
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_uWrap = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureWrap_ClampToEdge;
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_vWrap = (jref) sp[1].o;
	LINE_NUMBER(43);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_anisotropicFilterLevel = (jfloat(1));
	LINE_NUMBER(61);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget = (frame[1].i);
	LINE_NUMBER(62);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle = (frame[2].i);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_GLTexture_bind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:bind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glBindTexture_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindTexture_int_int, sp[0].o))(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), ((jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_GLTexture_bind_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:bind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(79);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glActiveTexture_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glActiveTexture_int, sp[0].o))(ctx, sp[0].o, ((jint(33984)) + (frame[1].i)));
	LINE_NUMBER(80);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glBindTexture_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindTexture_int_int, sp[0].o))(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), ((jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_GLTexture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:getMinFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_GLTexture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:getMagFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_GLTexture_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:getUWrap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_GLTexture_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:getVWrap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:getTextureObjectHandle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:unsafeSetWrap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(112);
	((func_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:unsafeSetWrap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(120);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_2;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(121);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp1 = 10242;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(122);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap = (jref) (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(124);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_5;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap;
	if (sp[0].o == (frame[2].o)) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(125);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp1 = 10243;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(126);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap = (jref) (frame[2].o);
	}
label_4:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_GLTexture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:setWrap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(134);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap = (jref) (frame[1].o);
	LINE_NUMBER(135);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap = (jref) (frame[2].o);
	LINE_NUMBER(136);
	((func_com_badlogic_gdx_graphics_GLTexture_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_GLTexture_bind])(ctx, (frame[0].o));
	LINE_NUMBER(137);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp1 = 10242;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(138);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp4 = 10243;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int, sp[0].o))(ctx, sp[0].o, temp3, temp4, temp5);
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:unsafeSetFilter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(146);
	((func_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:unsafeSetFilter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(155);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_2;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(156);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp1 = 10241;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(157);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter = (jref) (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(159);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_5;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter;
	if (sp[0].o == (frame[2].o)) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(160);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp1 = 10240;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(161);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter = (jref) (frame[2].o);
	}
label_4:;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_GLTexture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:setFilter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(169);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter = (jref) (frame[1].o);
	LINE_NUMBER(170);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter = (jref) (frame[2].o);
	LINE_NUMBER(171);
	((func_com_badlogic_gdx_graphics_GLTexture_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_GLTexture_bind])(ctx, (frame[0].o));
	LINE_NUMBER(172);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp1 = 10241;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(173);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp4 = 10240;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexParameteri_int_int_int, sp[0].o))(ctx, sp[0].o, temp3, temp4, temp5);
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:unsafeSetAnisotropicFilter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(181);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_boolean_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_boolean_R_float])(ctx, (frame[0].o), (frame[1].f), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_boolean_R_float(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:unsafeSetAnisotropicFilter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(190);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_graphics_GLTexture_getMaxAnisotropicFilterLevel_R_float(ctx);
	frame[3].f = temp0;
	LINE_NUMBER(191);
	if ((floatCompare((frame[3].f), (jfloat(1)), -1)) != 0) goto label_2;
	}
	INST_FCONST(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(192);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[1].f), (frame[3].f));
	frame[1].f = temp0;
	LINE_NUMBER(193);
	if ((frame[2].i) != 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[1].f), ((jfloat)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_anisotropicFilterLevel), (jfloat(0.1f)));
	if (temp0 == 0) goto label_4;
	}
	{
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_anisotropicFilterLevel);
	}
label_4:;
	{
	LINE_NUMBER(194);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glTexParameterf_int_int_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexParameterf_int_int_float, sp[0].o))(ctx, sp[0].o, (3553), (jint(34046)), (frame[1].f));
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_anisotropicFilterLevel = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_GLTexture_setAnisotropicFilter_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:setAnisotropicFilter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(203);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_graphics_GLTexture_getMaxAnisotropicFilterLevel_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(204);
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) != 0) goto label_2;
	}
	INST_FCONST(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(205);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	frame[1].f = temp0;
	LINE_NUMBER(206);
	jint temp1 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(ctx, (frame[1].f), ((jfloat)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_anisotropicFilterLevel), (jfloat(0.1f)));
	if (temp1 == 0) goto label_4;
	}
	INST_FLOAD(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_4:;
	{
	LINE_NUMBER(207);
	((func_com_badlogic_gdx_graphics_GLTexture_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_GLTexture_bind])(ctx, (frame[0].o));
	LINE_NUMBER(208);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glTexParameterf_int_int_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexParameterf_int_int_float, sp[0].o))(ctx, sp[0].o, (3553), (jint(34046)), (frame[1].f));
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_anisotropicFilterLevel = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_GLTexture_getAnisotropicFilter_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:getAnisotropicFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_anisotropicFilterLevel);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_graphics_GLTexture_getMaxAnisotropicFilterLevel_R_float(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:getMaxAnisotropicFilterLevel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	{
	LINE_NUMBER(219);
	if ((floatCompare((clinit_com_badlogic_gdx_graphics_GLTexture(ctx), (jfloat)SF_com_badlogic_gdx_graphics_GLTexture_maxAnisotropicFilterLevel), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	(sp++)->f = SF_com_badlogic_gdx_graphics_GLTexture_maxAnisotropicFilterLevel;
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(220);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_supportsExtension_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_supportsExtension_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GL_EXT_texture_filter_anisotropic"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newFloatBuffer_int_R_java_nio_FloatBuffer(ctx, (16));
	frame[0].o = sp[0].o;
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_FloatBuffer_capacity_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(224);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glGetFloatv_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetFloatv_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (jint(34047)), (frame[0].o));
	LINE_NUMBER(225);
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[0].o), (jint(0)));
	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	SF_com_badlogic_gdx_graphics_GLTexture_maxAnisotropicFilterLevel = temp1;
	popStackFrame(ctx);
	return temp1;
	}
label_2:;
	{
	LINE_NUMBER(227);
	jfloat temp0 = jfloat(1);
	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	SF_com_badlogic_gdx_graphics_GLTexture_maxAnisotropicFilterLevel = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_GLTexture_delete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:delete", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(232);
	if (((jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle) == 0) goto label_1;
	}
	{
	LINE_NUMBER(233);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDeleteTexture_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDeleteTexture_int, sp[0].o))(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle));
	LINE_NUMBER(234);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle = (jint(0));
	}
label_1:;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_GLTexture_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	((func_com_badlogic_gdx_graphics_GLTexture_delete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_GLTexture_delete])(ctx, (frame[0].o));
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_GLTexture_uploadImageData_int_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:uploadImageData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(244);
	SM_com_badlogic_gdx_graphics_GLTexture_uploadImageData_int_com_badlogic_gdx_graphics_TextureData_int(ctx, (frame[0].i), (frame[1].o), (jint(0)));
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_GLTexture_uploadImageData_int_com_badlogic_gdx_graphics_TextureData_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:uploadImageData", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(248);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	LINE_NUMBER(250);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_isPrepared_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_TextureData_prepare) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_prepare, sp[0].o))(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_TextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(256);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Custom;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(257);
	((func_com_badlogic_gdx_graphics_TextureData_consumeCustomData_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_consumeCustomData_int, (frame[1].o)))(ctx, (frame[1].o), (frame[0].i));
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_TextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(262);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_disposePixmap_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_disposePixmap_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[4].o));
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(264);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, (frame[1].o)))(ctx, (frame[1].o));
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(265);
	sp[0].o = frame[6].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_None;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(266);
	sp[0].o = frame[6].o;
	sp[1].o = frame[4].o;
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	jint temp4 = jint(0);
	jint temp5 = jint(0);
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[4].o));
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[4].o));
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp2, temp3, temp4, temp5, temp6, temp7);
	LINE_NUMBER(267);
	jint temp8 = (jint)((func_com_badlogic_gdx_graphics_TextureData_disposePixmap_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_disposePixmap_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp8 == 0) goto label_15;
	}
	{
	LINE_NUMBER(268);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[4].o));
	}
label_15:;
	{
	LINE_NUMBER(270);
	frame[4].o = (frame[6].o);
	LINE_NUMBER(271);
	frame[5].i = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(274);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glPixelStorei_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glPixelStorei_int_int, sp[0].o))(ctx, sp[0].o, (3317), (jint(1)));
	LINE_NUMBER(275);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_useMipMaps_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_useMipMaps_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(276);
	jint temp0 = frame[0].i;
	sp[0].o = frame[4].o;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[4].o));
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[4].o));
	SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMap_int_com_badlogic_gdx_graphics_Pixmap_int_int(ctx, temp0, sp[0].o, temp1, temp2);
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(278);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = frame[0].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[4].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[4].o));
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[4].o));
	jint temp5 = jint(0);
	sp[1].o = frame[4].o;
	LINE_NUMBER(279);
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int])(ctx, sp[1].o);
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int])(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[4].o));
	LINE_NUMBER(278);
	((func_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[1].o);
	}
label_21:;
	{
	LINE_NUMBER(281);
	if ((frame[5].i) == 0) goto label_24;
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, sp[0].o);
label_24:;
	LINE_NUMBER(282);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_GLTexture(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/GLTexture:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	{
	LINE_NUMBER(44);
	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	SF_com_badlogic_gdx_graphics_GLTexture_maxAnisotropicFilterLevel = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_GLTexture[] {
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
	(void *) M_com_badlogic_gdx_graphics_GLTexture_dispose,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_bind,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_bind_int,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_boolean_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_setAnisotropicFilter_float_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getAnisotropicFilter_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_delete,
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
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getDepth", "()I" },
	{ "isManaged", "()Z" },
	{ "reload", "()V" },
	{ "bind", "()V" },
	{ "bind", "(I)V" },
	{ "getMinFilter", "()Lcom/badlogic/gdx/graphics/Texture$TextureFilter;" },
	{ "getMagFilter", "()Lcom/badlogic/gdx/graphics/Texture$TextureFilter;" },
	{ "getUWrap", "()Lcom/badlogic/gdx/graphics/Texture$TextureWrap;" },
	{ "getVWrap", "()Lcom/badlogic/gdx/graphics/Texture$TextureWrap;" },
	{ "getTextureObjectHandle", "()I" },
	{ "unsafeSetWrap", "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetWrap", "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Z)V" },
	{ "setWrap", "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetFilter", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;)V" },
	{ "unsafeSetFilter", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)V" },
	{ "setFilter", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;)V" },
	{ "unsafeSetAnisotropicFilter", "(F)F" },
	{ "unsafeSetAnisotropicFilter", "(FZ)F" },
	{ "setAnisotropicFilter", "(F)F" },
	{ "getAnisotropicFilter", "()F" },
	{ "delete", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static FieldMetadata fields[] {
	{ "glTarget", &class_int, offsetof(com_badlogic_gdx_graphics_GLTexture, F_glTarget), "I", 17 },
	{ "glHandle", &class_int, offsetof(com_badlogic_gdx_graphics_GLTexture, F_glHandle), "I", 4 },
	{ "minFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_graphics_GLTexture, F_minFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 4 },
	{ "magFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_graphics_GLTexture, F_magFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 4 },
	{ "uWrap", &class_com_badlogic_gdx_graphics_Texture$TextureWrap, offsetof(com_badlogic_gdx_graphics_GLTexture, F_uWrap), "Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 4 },
	{ "vWrap", &class_com_badlogic_gdx_graphics_Texture$TextureWrap, offsetof(com_badlogic_gdx_graphics_GLTexture, F_vWrap), "Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 4 },
	{ "anisotropicFilterLevel", &class_float, offsetof(com_badlogic_gdx_graphics_GLTexture, F_anisotropicFilterLevel), "F", 4 },
	{ "maxAnisotropicFilterLevel", &class_float, (intptr_t) &SF_com_badlogic_gdx_graphics_GLTexture_maxAnisotropicFilterLevel, "F", 10 },
};

static MethodMetadata methods[] {
	{ "getWidth", 0, VTABLE_com_badlogic_gdx_graphics_GLTexture_getWidth_R_int, "()I", 1025 },
	{ "getHeight", 0, VTABLE_com_badlogic_gdx_graphics_GLTexture_getHeight_R_int, "()I", 1025 },
	{ "getDepth", 0, VTABLE_com_badlogic_gdx_graphics_GLTexture_getDepth_R_int, "()I", 1025 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_GLTexture_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_GLTexture_int_int, 0, "(II)V", 1 },
	{ "isManaged", 0, VTABLE_com_badlogic_gdx_graphics_GLTexture_isManaged_R_boolean, "()Z", 1025 },
	{ "reload", 0, VTABLE_com_badlogic_gdx_graphics_GLTexture_reload, "()V", 1028 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_bind, VTABLE_com_badlogic_gdx_graphics_GLTexture_bind, "()V", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_bind_int, VTABLE_com_badlogic_gdx_graphics_GLTexture_bind_int, "(I)V", 1 },
	{ "getMinFilter", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter, VTABLE_com_badlogic_gdx_graphics_GLTexture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter, "()Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 1 },
	{ "getMagFilter", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter, VTABLE_com_badlogic_gdx_graphics_GLTexture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter, "()Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 1 },
	{ "getUWrap", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap, VTABLE_com_badlogic_gdx_graphics_GLTexture_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap, "()Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 1 },
	{ "getVWrap", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap, VTABLE_com_badlogic_gdx_graphics_GLTexture_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap, "()Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 1 },
	{ "getTextureObjectHandle", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int, VTABLE_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int, "()I", 1 },
	{ "unsafeSetWrap", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap, VTABLE_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap, "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;)V", 1 },
	{ "unsafeSetWrap", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean, VTABLE_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean, "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Z)V", 1 },
	{ "setWrap", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap, VTABLE_com_badlogic_gdx_graphics_GLTexture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap, "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;)V", 1 },
	{ "unsafeSetFilter", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter, VTABLE_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter, "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;)V", 1 },
	{ "unsafeSetFilter", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean, VTABLE_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean, "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)V", 1 },
	{ "setFilter", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter, VTABLE_com_badlogic_gdx_graphics_GLTexture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter, "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;)V", 1 },
	{ "unsafeSetAnisotropicFilter", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_R_float, VTABLE_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_R_float, "(F)F", 1 },
	{ "unsafeSetAnisotropicFilter", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_boolean_R_float, VTABLE_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_boolean_R_float, "(FZ)F", 1 },
	{ "setAnisotropicFilter", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_setAnisotropicFilter_float_R_float, VTABLE_com_badlogic_gdx_graphics_GLTexture_setAnisotropicFilter_float_R_float, "(F)F", 1 },
	{ "getAnisotropicFilter", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_getAnisotropicFilter_R_float, VTABLE_com_badlogic_gdx_graphics_GLTexture_getAnisotropicFilter_R_float, "()F", 1 },
	{ "getMaxAnisotropicFilterLevel", (intptr_t) SM_com_badlogic_gdx_graphics_GLTexture_getMaxAnisotropicFilterLevel_R_float, 0, "()F", 9 },
	{ "delete", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_delete, VTABLE_com_badlogic_gdx_graphics_GLTexture_delete, "()V", 4 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_GLTexture_dispose, VTABLE_com_badlogic_gdx_graphics_GLTexture_dispose, "()V", 1 },
	{ "uploadImageData", (intptr_t) SM_com_badlogic_gdx_graphics_GLTexture_uploadImageData_int_com_badlogic_gdx_graphics_TextureData, 0, "(ILcom/badlogic/gdx/graphics/TextureData;)V", 12 },
	{ "uploadImageData", (intptr_t) SM_com_badlogic_gdx_graphics_GLTexture_uploadImageData_int_com_badlogic_gdx_graphics_TextureData_int, 0, "(ILcom/badlogic/gdx/graphics/TextureData;I)V", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_GLTexture, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_GLTexture{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/GLTexture",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_GLTexture),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_GLTexture,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_GLTexture,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_GLTexture,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_GLTexture = registerClass(&class_com_badlogic_gdx_graphics_GLTexture);

}

