#include "com/badlogic/gdx/graphics/glutils/MipMapGenerator.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/GL30.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/Pixmap_Blending.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/Graphics.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/glutils/MipMapGenerator.h"

extern "C" {

jbool SF_com_badlogic_gdx_graphics_glutils_MipMapGenerator_useHWMipMap;

void mark_com_badlogic_gdx_graphics_glutils_MipMapGenerator(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_MipMapGenerator *) object;
}

void init_com_badlogic_gdx_graphics_glutils_MipMapGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/MipMapGenerator:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_setUseHardwareMipMap_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/MipMapGenerator:setUseHardwareMipMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(36);
	clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(ctx);
	SF_com_badlogic_gdx_graphics_glutils_MipMapGenerator_useHWMipMap = (frame[0].i);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMap_com_badlogic_gdx_graphics_Pixmap_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/MipMapGenerator:generateMipMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(43);
	SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMap_int_com_badlogic_gdx_graphics_Pixmap_int_int(ctx, (3553), (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMap_int_com_badlogic_gdx_graphics_Pixmap_int_int(jcontext ctx, jint param0, jobject param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/MipMapGenerator:generateMipMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(49);
	if ((clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(ctx), (jint)SF_com_badlogic_gdx_graphics_glutils_MipMapGenerator_useHWMipMap) != 0) goto label_1;
	}
	{
	LINE_NUMBER(50);
	SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMapCPU_int_com_badlogic_gdx_graphics_Pixmap_int_int(ctx, (frame[0].i), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(54);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Android;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_WebGL;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_iOS;
	if (sp[0].o != sp[1].o) goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(56);
	SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMapGLES20_int_com_badlogic_gdx_graphics_Pixmap(ctx, (frame[0].i), (frame[1].o));
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(58);
	SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMapDesktop_int_com_badlogic_gdx_graphics_Pixmap_int_int(ctx, (frame[0].i), (frame[1].o), (frame[2].i), (frame[3].i));
	}
label_7:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMapGLES20_int_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jint param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/MipMapGenerator:generateMipMapGLES20", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(63);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = frame[0].i;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	jint temp5 = jint(0);
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int])(ctx, (frame[1].o));
	sp[1].o = frame[1].o;
	LINE_NUMBER(64);
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[1].o));
	LINE_NUMBER(63);
	((func_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[1].o);
	LINE_NUMBER(65);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glGenerateMipmap_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenerateMipmap_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMapDesktop_int_com_badlogic_gdx_graphics_Pixmap_int_int(jcontext ctx, jint param0, jobject param1, jint param2, jint param3) {
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/MipMapGenerator:generateMipMapDesktop", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(69);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_supportsExtension_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_supportsExtension_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GL_ARB_framebuffer_object"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GL_EXT_framebuffer_object"_j));
	LINE_NUMBER(70);
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_supportsExtension_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_supportsExtension_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"com.badlogic.gdx.backends.lwjgl3.angle.Lwjgl3GLES20"_j))));
	if (temp0 != 0) goto label_1;
	}
	clinit_com_badlogic_gdx_Gdx(ctx);
	(sp++)->o = SF_com_badlogic_gdx_Gdx_gl30;
	if ((--sp)->o == nullptr) goto label_4;
label_1:;
	{
	LINE_NUMBER(73);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = frame[0].i;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	jint temp5 = jint(0);
	sp[1].o = frame[1].o;
	LINE_NUMBER(74);
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int])(ctx, sp[1].o);
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[1].o));
	LINE_NUMBER(73);
	((func_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[1].o);
	LINE_NUMBER(75);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glGenerateMipmap_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenerateMipmap_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(77);
	SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMapCPU_int_com_badlogic_gdx_graphics_Pixmap_int_int(ctx, (frame[0].i), (frame[1].o), (frame[2].i), (frame[3].i));
	}
label_8:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMapCPU_int_com_badlogic_gdx_graphics_Pixmap_int_int(jcontext ctx, jint param0, jobject param1, jint param2, jint param3) {
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/MipMapGenerator:generateMipMapCPU", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(82);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = frame[0].i;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	jint temp5 = jint(0);
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int])(ctx, (frame[1].o));
	sp[1].o = frame[1].o;
	LINE_NUMBER(83);
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[1].o));
	LINE_NUMBER(82);
	((func_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[1].o);
	LINE_NUMBER(84);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	if ((frame[2].i) == (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(85);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"texture width and height must be square when using mipmapping."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	frame[4].i = (temp0 / (jint(2)));
	LINE_NUMBER(87);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	frame[5].i = (temp1 / (jint(2)));
	LINE_NUMBER(88);
	frame[6].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(92);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = frame[4].i;
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[1].o));
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_None;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(94);
	sp[0].o = frame[7].o;
	sp[1].o = frame[1].o;
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp2, temp3, temp4, temp5, (jint(0)), (jint(0)), (frame[4].i), (frame[5].i));
	LINE_NUMBER(95);
	if ((frame[6].i) <= (jint(1))) goto label_12;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, sp[0].o);
label_12:;
	{
	LINE_NUMBER(96);
	frame[1].o = (frame[7].o);
	LINE_NUMBER(98);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = frame[0].i;
	jint temp1 = frame[6].i;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	jint temp5 = jint(0);
	sp[1].o = frame[1].o;
	LINE_NUMBER(99);
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int])(ctx, sp[1].o);
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[1].o));
	LINE_NUMBER(98);
	((func_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[1].o);
	LINE_NUMBER(101);
	jint temp8 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	frame[4].i = (temp8 / (jint(2)));
	LINE_NUMBER(102);
	jint temp9 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	frame[5].i = (temp9 / (jint(2)));
	LINE_NUMBER(105);
	if ((frame[4].i) != 0) goto label_19;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_19;
	LINE_NUMBER(106);
	goto label_21;
label_19:;
	{
	LINE_NUMBER(108);
	if ((frame[4].i) != 0) goto label_22;
	}
	INST_ICONST(1);
	INST_ISTORE(4);
label_22:;
	{
	LINE_NUMBER(109);
	if ((frame[5].i) != 0) goto label_23;
	}
	INST_ICONST(1);
	INST_ISTORE(5);
label_23:;
	{
	LINE_NUMBER(111);
	INST_IINC(6, 1);
	LINE_NUMBER(112);
	goto label_8;
	}
label_21:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/MipMapGenerator:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(ctx);
	{
	LINE_NUMBER(33);
	clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator(ctx);
	SF_com_badlogic_gdx_graphics_glutils_MipMapGenerator_useHWMipMap = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_MipMapGenerator[] {
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
	{ "useHWMipMap", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_MipMapGenerator_useHWMipMap, "Z", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_MipMapGenerator, 0, "()V", 2 },
	{ "setUseHardwareMipMap", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_setUseHardwareMipMap_boolean, 0, "(Z)V", 9 },
	{ "generateMipMap", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMap_com_badlogic_gdx_graphics_Pixmap_int_int, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;II)V", 9 },
	{ "generateMipMap", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMap_int_com_badlogic_gdx_graphics_Pixmap_int_int, 0, "(ILcom/badlogic/gdx/graphics/Pixmap;II)V", 9 },
	{ "generateMipMapGLES20", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMapGLES20_int_com_badlogic_gdx_graphics_Pixmap, 0, "(ILcom/badlogic/gdx/graphics/Pixmap;)V", 10 },
	{ "generateMipMapDesktop", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMapDesktop_int_com_badlogic_gdx_graphics_Pixmap_int_int, 0, "(ILcom/badlogic/gdx/graphics/Pixmap;II)V", 10 },
	{ "generateMipMapCPU", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMapCPU_int_com_badlogic_gdx_graphics_Pixmap_int_int, 0, "(ILcom/badlogic/gdx/graphics/Pixmap;II)V", 10 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_glutils_MipMapGenerator{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/MipMapGenerator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_MipMapGenerator),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_MipMapGenerator,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_MipMapGenerator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_MipMapGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_MipMapGenerator = registerClass(&class_com_badlogic_gdx_graphics_glutils_MipMapGenerator);

}

