#include "com/badlogic/gdx/graphics/glutils/ETC1TextureData.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/glutils/ETC1TextureData.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/TextureData_TextureDataType.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/graphics/glutils/ETC1.h"
#include "com/badlogic/gdx/graphics/glutils/ETC1_ETC1Data.h"
#include "com/badlogic/gdx/graphics/glutils/MipMapGenerator.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_ETC1TextureData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_ETC1TextureData *) object;
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_ETC1TextureData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_ETC1TextureData_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ETC1TextureData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	init_com_badlogic_gdx_graphics_glutils_ETC1TextureData_com_badlogic_gdx_files_FileHandle_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_ETC1TextureData_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ETC1TextureData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_width = (jint(0));
	LINE_NUMBER(33);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_height = (jint(0));
	LINE_NUMBER(34);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(0));
	LINE_NUMBER(41);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(42);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (frame[2].i);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_ETC1TextureData_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ETC1TextureData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_width = (jint(0));
	LINE_NUMBER(33);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_height = (jint(0));
	LINE_NUMBER(34);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(0));
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(47);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (frame[2].i);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Custom;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_isPrepared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:isPrepared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_prepare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:prepare", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Already prepared"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_file;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_data;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can only load once from ETC1Data"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_file;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_file;
	init_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_com_badlogic_gdx_files_FileHandle(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_data;
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK(sp[0].o))->F_width = ((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_data;
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK(sp[0].o))->F_height = ((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(69);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(1));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_consumeCustomData_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:consumeCustomData", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared) != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Call prepare() before calling consumeCompressedData()"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(76);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_supportsExtension_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_supportsExtension_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GL_OES_compressed_ETC1_RGB8_texture"_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565;
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_glutils_ETC1_decodeImage_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_com_badlogic_gdx_graphics_Pixmap$Format_R_com_badlogic_gdx_graphics_Pixmap(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(78);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = frame[1].i;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	jint temp5 = jint(0);
	sp[1].o = frame[2].o;
	LINE_NUMBER(79);
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int])(ctx, sp[1].o);
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[2].o));
	LINE_NUMBER(78);
	((func_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[1].o);
	LINE_NUMBER(80);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps) == 0) goto label_8;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = frame[2].o;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	SM_com_badlogic_gdx_graphics_glutils_MipMapGenerator_generateMipMap_int_com_badlogic_gdx_graphics_Pixmap_int_int(ctx, temp0, sp[0].o, temp1, temp2);
	}
label_8:;
	{
	LINE_NUMBER(81);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(82);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (jint(0));
	LINE_NUMBER(83);
	goto label_11;
	}
label_2:;
	{
	LINE_NUMBER(84);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = frame[1].i;
	jint temp1 = jint(0);
	clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx);
	jint temp2 = (jint)SF_com_badlogic_gdx_graphics_glutils_ETC1_ETC1_RGB8_OES;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_width;
	jint temp4 = (jint)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_height;
	jint temp5 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK(sp[1].o))->F_compressedData;
	LINE_NUMBER(85);
	jint temp6 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp7 = temp6 - ((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK(sp[1].o))->F_dataOffset);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK(sp[1].o))->F_compressedData;
	LINE_NUMBER(84);
	((func_com_badlogic_gdx_graphics_GL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp7, sp[1].o);
	LINE_NUMBER(86);
	jint temp8 = (jint)((func_com_badlogic_gdx_graphics_glutils_ETC1TextureData_useMipMaps_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_useMipMaps_R_boolean])(ctx, (frame[0].o));
	if (temp8 == 0) goto label_11;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glGenerateMipmap_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenerateMipmap_int, sp[0].o))(ctx, sp[0].o, (3553));
	}
label_11:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_data;
	((func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_dispose])(ctx, sp[0].o);
	LINE_NUMBER(89);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_data = (jref) (jobject(nullptr));
	LINE_NUMBER(90);
	((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(0));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:consumePixmap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not return a Pixmap"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_disposePixmap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:disposePixmap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not return a Pixmap"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:getFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_useMipMaps_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:useMipMaps", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_ETC1TextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_isManaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1TextureData:isManaged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_ETC1TextureData[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_isPrepared_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_prepare,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_disposePixmap_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_consumeCustomData_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_useMipMaps_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_isManaged_R_boolean,
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
	{ "getType", "()Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;" },
	{ "isPrepared", "()Z" },
	{ "prepare", "()V" },
	{ "consumePixmap", "()Lcom/badlogic/gdx/graphics/Pixmap;" },
	{ "disposePixmap", "()Z" },
	{ "consumeCustomData", "(I)V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getFormat", "()Lcom/badlogic/gdx/graphics/Pixmap$Format;" },
	{ "useMipMaps", "()Z" },
	{ "isManaged", "()Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_TextureData, };

static FieldMetadata fields[] {
	{ "file", &class_com_badlogic_gdx_files_FileHandle, offsetof(com_badlogic_gdx_graphics_glutils_ETC1TextureData, F_file), "Lcom/badlogic/gdx/files/FileHandle;", 0 },
	{ "data", &class_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data, offsetof(com_badlogic_gdx_graphics_glutils_ETC1TextureData, F_data), "Lcom/badlogic/gdx/graphics/glutils/ETC1$ETC1Data;", 0 },
	{ "useMipMaps", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_ETC1TextureData, F_useMipMaps), "Z", 0 },
	{ "width", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ETC1TextureData, F_width), "I", 0 },
	{ "height", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ETC1TextureData, F_height), "I", 0 },
	{ "isPrepared", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_ETC1TextureData, F_isPrepared), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ETC1TextureData_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ETC1TextureData_com_badlogic_gdx_files_FileHandle_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ETC1TextureData_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_boolean, 0, "(Lcom/badlogic/gdx/graphics/glutils/ETC1$ETC1Data;Z)V", 1 },
	{ "getType", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, "()Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;", 1 },
	{ "isPrepared", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_isPrepared_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_isPrepared_R_boolean, "()Z", 1 },
	{ "prepare", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_prepare, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_prepare, "()V", 1 },
	{ "consumeCustomData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_consumeCustomData_int, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_consumeCustomData_int, "(I)V", 1 },
	{ "consumePixmap", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap, "()Lcom/badlogic/gdx/graphics/Pixmap;", 1 },
	{ "disposePixmap", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_disposePixmap_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_disposePixmap_R_boolean, "()Z", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getHeight_R_int, "()I", 1 },
	{ "getFormat", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, "()Lcom/badlogic/gdx/graphics/Pixmap$Format;", 1 },
	{ "useMipMaps", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_useMipMaps_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_useMipMaps_R_boolean, "()Z", 1 },
	{ "isManaged", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1TextureData_isManaged_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1TextureData_isManaged_R_boolean, "()Z", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_ETC1TextureData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/ETC1TextureData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_ETC1TextureData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_ETC1TextureData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_ETC1TextureData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_ETC1TextureData,
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
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_ETC1TextureData = registerClass(&class_com_badlogic_gdx_graphics_glutils_ETC1TextureData);

}

