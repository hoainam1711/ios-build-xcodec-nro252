#include "com/badlogic/gdx/graphics/glutils/KTXTextureData.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/IntBuffer.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/nio/ByteBuffer.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/CubemapData.h"
#include "com/badlogic/gdx/Graphics.h"
#include "java/io/Closeable.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "java/io/DataInputStream.h"
#include "java/nio/ByteOrder.h"
#include "java/util/zip/GZIPInputStream.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/io/BufferedInputStream.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/TextureData_TextureDataType.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "com/badlogic/gdx/graphics/glutils/ETC1.h"
#include "com/badlogic/gdx/graphics/glutils/ETC1_ETC1Data.h"
#include "com/badlogic/gdx/graphics/glutils/KTXTextureData.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_1D;
jint SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_3D;
jint SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_1D_ARRAY_EXT;
jint SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_2D_ARRAY_EXT;

void mark_com_badlogic_gdx_graphics_glutils_KTXTextureData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_KTXTextureData *) object;
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_compressedData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_compressedData)->clazz)->markFunction)((jobject) self->F_compressedData, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_KTXTextureData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_1D = jint(4660);
	SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_3D = jint(4660);
	SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_1D_ARRAY_EXT = jint(4660);
	SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_2D_ARRAY_EXT = jint(4660);
}

void init_com_badlogic_gdx_graphics_glutils_KTXTextureData_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_KTXTextureData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(58);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(44);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_pixelWidth = (jint(-1));
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_pixelHeight = (jint(-1));
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_pixelDepth = (jint(-1));
	LINE_NUMBER(59);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(60);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (frame[2].i);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Custom;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_KTXTextureData_isPrepared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:isPrepared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
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

void M_com_badlogic_gdx_graphics_glutils_KTXTextureData_prepare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:prepare", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Already prepared"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Need a file to load from"_j))));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".zktx"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (10240));
	frame[1].o = sp[0].o;
	LINE_NUMBER(80);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(82);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_java_io_BufferedInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_BufferedInputStream);
	clinit_java_util_zip_GZIPInputStream(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_zip_GZIPInputStream);
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	sp[3].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, sp[3].o);
	init_java_util_zip_GZIPInputStream_java_io_InputStream(ctx, sp[2].o, sp[3].o);
	init_java_io_BufferedInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(83);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (frame[3].i));
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_compressedData = (jref) sp[1].o;
	LINE_NUMBER(85);
	frame[4].i = (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_java_io_DataInputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_read_Array1_byte_R_int])(ctx, (frame[2].o), (frame[1].o));
	frame[4].i = temp0;
	if (temp0 == (jint(-1))) goto label_18;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[1].o), (jint(0)), (frame[4].i));
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(93);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(94);
	goto label_22;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(90);
	frame[3].o = sp[0].o;
	LINE_NUMBER(91);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load zktx file '"_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(93);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(94);
	throwException(ctx, (frame[5].o));	}
label_22:;
	LINE_NUMBER(95);
	goto label_25;
label_11:;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_nio_ByteBuffer_wrap_Array1_byte_R_java_nio_ByteBuffer(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_compressedData = (jref) sp[1].o;
	}
label_25:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (-85)) goto label_26;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (75)) goto label_27;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (84)) goto label_28;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (88)) goto label_29;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_29:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (32)) goto label_30;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (49)) goto label_31;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_31:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (49)) goto label_32;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_32:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (-69)) goto label_33;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_33:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (13)) goto label_34;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_34:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (10)) goto label_35;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_35:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (26)) goto label_36;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_36:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 == (10)) goto label_37;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_37:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(111);
	if ((frame[1].i) == (jint(67305985))) goto label_39;
	}
	{
	if ((frame[1].i) == (jint(16909060))) goto label_39;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid KTX Header"_j))));
	throwException(ctx, sp[0].o);	}
label_39:;
	{
	LINE_NUMBER(112);
	if ((frame[1].i) == (jint(67305985))) goto label_40;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, sp[1].o);
	clinit_java_nio_ByteOrder(ctx);
	sp[2].o = (jobject)SF_java_nio_ByteOrder_BIG_ENDIAN;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_42;
	}
	clinit_java_nio_ByteOrder(ctx);
	(sp++)->o = SF_java_nio_ByteOrder_LITTLE_ENDIAN;
	goto label_43;
label_42:;
	clinit_java_nio_ByteOrder(ctx);
	(sp++)->o = SF_java_nio_ByteOrder_BIG_ENDIAN;
label_43:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	sp++;
	INST_POP();
label_40:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_glType = temp0;
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_glTypeSize = temp1;
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_glFormat = temp2;
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp3 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_glInternalFormat = temp3;
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp4 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_glBaseInternalFormat = temp4;
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp5 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_pixelWidth = temp5;
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp6 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_pixelHeight = temp6;
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp7 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_pixelDepth = temp7;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp8 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_numberOfArrayElements = temp8;
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp9 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_numberOfFaces = temp9;
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp10 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_numberOfMipmapLevels = temp10;
	LINE_NUMBER(125);
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfMipmapLevels) != 0) goto label_55;
	}
	{
	LINE_NUMBER(126);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfMipmapLevels = (jint(1));
	LINE_NUMBER(127);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (jint(1));
	}
label_55:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK(sp[0].o))->F_imagePos = (temp1 + (frame[2].i));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_isDirect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_isDirect_R_boolean])(ctx, sp[0].o);
	if (temp2 != 0) goto label_60;
	}
	{
	LINE_NUMBER(132);
	frame[3].i = ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_imagePos);
	LINE_NUMBER(133);
	frame[4].i = (jint(0));
	}
label_63:;
	{
	if ((frame[4].i) >= ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfMipmapLevels)) goto label_64;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, sp[0].o, (frame[3].i));
	frame[5].i = temp0;
	LINE_NUMBER(135);
	frame[6].i = (((frame[5].i) + (jint(3))) & (-4));
	LINE_NUMBER(136);
	frame[3].i = ((frame[3].i) + (((frame[6].i) * ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfFaces)) + (jint(4))));
	LINE_NUMBER(133);
	INST_IINC(4, 1);
	goto label_63;
	}
label_64:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(140);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(141);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_java_nio_ByteBuffer_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_java_nio_ByteBuffer_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(143);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData = (jref) (frame[4].o);
	}
label_60:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumeCubemapData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:consumeCubemapData", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	((func_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumeCustomData_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumeCustomData_int])(ctx, (frame[0].o), (jint(34067)));
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumeCustomData_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[31];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:consumeCustomData", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Call prepare() before calling consumeCompressedData()"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (16));
	frame[2].o = sp[0].o;
	LINE_NUMBER(163);
	frame[3].i = (jint(0));
	LINE_NUMBER(164);
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_glType) == 0) goto label_4;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_glFormat) != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(165);
	if ((((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_glType) + ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_glFormat)) == 0) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"either both or none of glType, glFormat must be zero"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(166);
	frame[3].i = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(170);
	frame[4].i = (jint(1));
	LINE_NUMBER(171);
	frame[5].i = (4660);
	LINE_NUMBER(172);
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_pixelHeight) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(173);
	frame[4].i = (jint(2));
	LINE_NUMBER(174);
	frame[5].i = (3553);
	}
label_9:;
	{
	LINE_NUMBER(176);
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_pixelDepth) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(177);
	frame[4].i = (jint(3));
	LINE_NUMBER(178);
	frame[5].i = (4660);
	}
label_12:;
	{
	LINE_NUMBER(180);
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfFaces) != (6)) goto label_15;
	}
	{
	LINE_NUMBER(181);
	if ((frame[4].i) != (jint(2))) goto label_17;
	}
	{
	LINE_NUMBER(182);
	frame[5].i = (jint(34067));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(184);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cube map needs 2D faces"_j))));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(185);
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfFaces) == (jint(1))) goto label_19;
	}
	{
	LINE_NUMBER(186);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"numberOfFaces must be either 1 or 6"_j))));
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(188);
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfArrayElements) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(189);
	if ((frame[5].i) != (4660)) goto label_23;
	}
	{
	LINE_NUMBER(190);
	frame[5].i = (4660);
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(191);
	if ((frame[5].i) != (3553)) goto label_26;
	}
	{
	LINE_NUMBER(192);
	frame[5].i = (4660);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(194);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No API for 3D and cube arrays yet"_j))));
	throwException(ctx, sp[0].o);	}
label_25:;
	LINE_NUMBER(195);
	INST_IINC(4, 1);
label_21:;
	{
	LINE_NUMBER(197);
	if ((frame[5].i) != (4660)) goto label_28;
	}
	{
	LINE_NUMBER(198);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unsupported texture format (only 2D texture are supported in LibGdx for the time being)"_j))));
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(200);
	frame[6].i = (jint(-1));
	LINE_NUMBER(201);
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfFaces) != (6)) goto label_31;
	}
	{
	if ((frame[1].i) == (jint(34067))) goto label_31;
	}
	{
	LINE_NUMBER(203);
	if ((jint(34069)) > (frame[1].i)) goto label_33;
	}
	{
	if ((frame[1].i) <= (jint(34074))) goto label_34;
	}
label_33:;
	{
	LINE_NUMBER(204);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"You must specify either GL_TEXTURE_CUBE_MAP to bind all 6 faces of the cube or the requested face GL_TEXTURE_CUBE_MAP_POSITIVE_X and followings."_j))));
	throwException(ctx, sp[0].o);	}
label_34:;
	{
	LINE_NUMBER(206);
	frame[6].i = ((frame[1].i) - (jint(34069)));
	LINE_NUMBER(207);
	frame[1].i = (jint(34069));
	goto label_36;
	}
label_31:;
	{
	LINE_NUMBER(208);
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfFaces) != (6)) goto label_37;
	}
	{
	if ((frame[1].i) != (jint(34067))) goto label_37;
	}
	{
	LINE_NUMBER(210);
	frame[1].i = (jint(34069));
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(213);
	if ((frame[1].i) == (frame[5].i)) goto label_36;
	}
	{
	if ((jint(34069)) > (frame[1].i)) goto label_39;
	}
	{
	if ((frame[1].i) > (jint(34074))) goto label_39;
	}
	{
	if ((frame[1].i) == (3553)) goto label_36;
	}
label_39:;
	{
	LINE_NUMBER(215);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid target requested : 0x"_j))));
	sp[2].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", expecting : 0x"_j))));
	jint temp0 = frame[5].i;
	LINE_NUMBER(216);
	sp[2].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_36:;
	{
	LINE_NUMBER(220);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glGetIntegerv_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetIntegerv_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (3317), (frame[2].o));
	LINE_NUMBER(221);
	jint temp0 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, (frame[2].o), (jint(0)));
	frame[7].i = temp0;
	LINE_NUMBER(222);
	if ((frame[7].i) == (jint(4))) goto label_43;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glPixelStorei_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glPixelStorei_int_int, sp[0].o))(ctx, sp[0].o, (3317), (jint(4)));
	}
label_43:;
	{
	LINE_NUMBER(223);
	frame[8].i = ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_glInternalFormat);
	LINE_NUMBER(224);
	frame[9].i = ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_glFormat);
	LINE_NUMBER(225);
	frame[10].i = ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_imagePos);
	LINE_NUMBER(226);
	frame[11].i = (jint(0));
	}
label_47:;
	{
	if ((frame[11].i) >= ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfMipmapLevels)) goto label_48;
	}
	{
	LINE_NUMBER(227);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(1)), (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_pixelWidth) >> (frame[11].i)));
	frame[12].i = temp0;
	LINE_NUMBER(228);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(1)), (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_pixelHeight) >> (frame[11].i)));
	frame[13].i = temp1;
	LINE_NUMBER(229);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(1)), (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_pixelDepth) >> (frame[11].i)));
	frame[14].i = temp2;
	LINE_NUMBER(230);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[10].i));
	LINE_NUMBER(231);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp3 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[0].o);
	frame[15].i = temp3;
	LINE_NUMBER(232);
	frame[16].i = (((frame[15].i) + (jint(3))) & (-4));
	LINE_NUMBER(233);
	INST_IINC(10, 4);
	LINE_NUMBER(234);
	frame[17].i = (jint(0));
	}
label_57:;
	{
	if ((frame[17].i) >= ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfFaces)) goto label_58;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[10].i));
	LINE_NUMBER(236);
	frame[10].i = ((frame[10].i) + (frame[16].i));
	LINE_NUMBER(237);
	if ((frame[6].i) == (jint(-1))) goto label_62;
	}
	{
	if ((frame[6].i) == (frame[17].i)) goto label_62;
	}
	goto label_63;
label_62:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer])(ctx, sp[0].o);
	frame[18].o = sp[0].o;
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, (frame[18].o), (frame[16].i));
	LINE_NUMBER(240);
	if ((frame[4].i) != (jint(1))) goto label_66;
	}
	goto label_63;
label_66:;
	{
	LINE_NUMBER(246);
	if ((frame[4].i) != (jint(2))) goto label_67;
	}
	{
	LINE_NUMBER(247);
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfArrayElements) <= 0) goto label_69;
	}
	{
	frame[13].i = ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfArrayElements);
	}
label_69:;
	{
	LINE_NUMBER(248);
	if ((frame[3].i) == 0) goto label_70;
	}
	{
	LINE_NUMBER(249);
	if ((frame[8].i) != (clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx), (jint)SF_com_badlogic_gdx_graphics_glutils_ETC1_ETC1_RGB8_OES)) goto label_72;
	}
	{
	LINE_NUMBER(250);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_supportsExtension_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_supportsExtension_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GL_OES_compressed_ETC1_RGB8_texture"_j))));
	if (temp0 != 0) goto label_74;
	}
	{
	LINE_NUMBER(251);
	clinit_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data);
	init_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_int_int_java_nio_ByteBuffer_int(ctx, sp[0].o, (frame[12].i), (frame[13].i), (frame[18].o), (jint(0)));
	frame[19].o = sp[0].o;
	LINE_NUMBER(252);
	sp[0].o = frame[19].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB888;
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_glutils_ETC1_decodeImage_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_com_badlogic_gdx_graphics_Pixmap$Format_R_com_badlogic_gdx_graphics_Pixmap(ctx, sp[0].o, sp[1].o);
	frame[20].o = sp[0].o;
	LINE_NUMBER(253);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (frame[1].i) + (frame[17].i);
	jint temp1 = frame[11].i;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[20].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[20].o));
	sp[1].o = frame[20].o;
	LINE_NUMBER(254);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, sp[1].o);
	jint temp5 = jint(0);
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int])(ctx, (frame[20].o));
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int])(ctx, (frame[20].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[20].o));
	LINE_NUMBER(253);
	((func_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[1].o);
	LINE_NUMBER(255);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[20].o));
	LINE_NUMBER(256);
	goto label_63;
	}
label_74:;
	{
	LINE_NUMBER(257);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, ((frame[1].i) + (frame[17].i)), (frame[11].i), (frame[8].i), (frame[12].i), (frame[13].i), (jint(0)), (frame[15].i), (frame[18].o));
	goto label_63;
	}
label_72:;
	{
	LINE_NUMBER(262);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, ((frame[1].i) + (frame[17].i)), (frame[11].i), (frame[8].i), (frame[12].i), (frame[13].i), (jint(0)), (frame[15].i), (frame[18].o));
	goto label_63;
	}
label_70:;
	{
	LINE_NUMBER(266);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, ((frame[1].i) + (frame[17].i)), (frame[11].i), (frame[8].i), (frame[12].i), (frame[13].i), (jint(0)), (frame[9].i), ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_glType), (frame[18].o));
	goto label_63;
	}
label_67:;
	{
	LINE_NUMBER(267);
	if ((frame[4].i) != (jint(3))) goto label_63;
	}
	{
	LINE_NUMBER(268);
	if (((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfArrayElements) <= 0) goto label_63;
	}
	{
	frame[14].i = ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfArrayElements);
	}
label_63:;
	{
	LINE_NUMBER(234);
	INST_IINC(17, 1);
	goto label_57;
	}
label_58:;
	{
	LINE_NUMBER(226);
	INST_IINC(11, 1);
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(278);
	if ((frame[7].i) == (jint(4))) goto label_83;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glPixelStorei_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glPixelStorei_int_int, sp[0].o))(ctx, sp[0].o, (3317), (frame[7].i));
	}
label_83:;
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_KTXTextureData_useMipMaps_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_useMipMaps_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_84;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glGenerateMipmap_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenerateMipmap_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	}
label_84:;
	{
	LINE_NUMBER(282);
	((func_com_badlogic_gdx_graphics_glutils_KTXTextureData_disposePreparedData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_disposePreparedData])(ctx, (frame[0].o));
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_KTXTextureData_disposePreparedData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:disposePreparedData", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(287);
	((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData = (jref) (jobject(nullptr));
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:consumePixmap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(292);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not return a Pixmap"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_KTXTextureData_disposePixmap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:disposePixmap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(297);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not return a Pixmap"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_pixelWidth);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_pixelHeight);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getNumberOfMipMapLevels_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:getNumberOfMipMapLevels", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfMipmapLevels);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getNumberOfFaces_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:getNumberOfFaces", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfFaces);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getGlInternalFormat_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:getGlInternalFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_glInternalFormat);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getData_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:getData", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(323);
	frame[3].i = ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_imagePos);
	LINE_NUMBER(324);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfMipmapLevels)) goto label_3;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, sp[0].o, (frame[3].i));
	frame[5].i = temp0;
	LINE_NUMBER(326);
	frame[6].i = (((frame[5].i) + (jint(3))) & (-4));
	LINE_NUMBER(327);
	INST_IINC(3, 4);
	LINE_NUMBER(328);
	if ((frame[4].i) != (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(329);
	frame[7].i = (jint(0));
	}
label_10:;
	{
	if ((frame[7].i) >= ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfFaces)) goto label_11;
	}
	{
	LINE_NUMBER(330);
	if ((frame[7].i) != (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(332);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(333);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, (frame[8].o), (frame[6].i));
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_13:;
	{
	LINE_NUMBER(336);
	frame[3].i = ((frame[3].i) + (frame[6].i));
	LINE_NUMBER(329);
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	goto label_19;
label_8:;
	{
	LINE_NUMBER(339);
	frame[3].i = ((frame[3].i) + ((frame[6].i) * ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_numberOfFaces)));
	}
label_19:;
	{
	LINE_NUMBER(324);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:getFormat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(347);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation directly handles texture formats."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_KTXTextureData_useMipMaps_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:useMipMaps", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_KTXTextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_KTXTextureData_isManaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/KTXTextureData:isManaged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_KTXTextureData[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_isPrepared_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_prepare,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_disposePixmap_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumeCustomData_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_useMipMaps_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_isManaged_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumeCubemapData,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_disposePreparedData,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getNumberOfMipMapLevels_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getNumberOfFaces_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getGlInternalFormat_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getData_int_int_R_java_nio_ByteBuffer,
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
	{ "consumeCubemapData", "()V" },
	{ "disposePreparedData", "()V" },
	{ "getNumberOfMipMapLevels", "()I" },
	{ "getNumberOfFaces", "()I" },
	{ "getGlInternalFormat", "()I" },
	{ "getData", "(II)Ljava/nio/ByteBuffer;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_TextureData, &class_com_badlogic_gdx_graphics_CubemapData, };

static FieldMetadata fields[] {
	{ "file", &class_com_badlogic_gdx_files_FileHandle, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_file), "Lcom/badlogic/gdx/files/FileHandle;", 2 },
	{ "glType", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_glType), "I", 2 },
	{ "glTypeSize", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_glTypeSize), "I", 2 },
	{ "glFormat", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_glFormat), "I", 2 },
	{ "glInternalFormat", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_glInternalFormat), "I", 2 },
	{ "glBaseInternalFormat", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_glBaseInternalFormat), "I", 2 },
	{ "pixelWidth", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_pixelWidth), "I", 2 },
	{ "pixelHeight", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_pixelHeight), "I", 2 },
	{ "pixelDepth", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_pixelDepth), "I", 2 },
	{ "numberOfArrayElements", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_numberOfArrayElements), "I", 2 },
	{ "numberOfFaces", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_numberOfFaces), "I", 2 },
	{ "numberOfMipmapLevels", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_numberOfMipmapLevels), "I", 2 },
	{ "imagePos", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_imagePos), "I", 2 },
	{ "compressedData", &class_java_nio_ByteBuffer, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_compressedData), "Ljava/nio/ByteBuffer;", 2 },
	{ "useMipMaps", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_KTXTextureData, F_useMipMaps), "Z", 2 },
	{ "GL_TEXTURE_1D", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_1D, "I", 26 },
	{ "GL_TEXTURE_3D", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_3D, "I", 26 },
	{ "GL_TEXTURE_1D_ARRAY_EXT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_1D_ARRAY_EXT, "I", 26 },
	{ "GL_TEXTURE_2D_ARRAY_EXT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_KTXTextureData_GL_TEXTURE_2D_ARRAY_EXT, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_KTXTextureData_com_badlogic_gdx_files_FileHandle_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "getType", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, "()Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;", 1 },
	{ "isPrepared", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_isPrepared_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_isPrepared_R_boolean, "()Z", 1 },
	{ "prepare", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_prepare, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_prepare, "()V", 1 },
	{ "consumeCubemapData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumeCubemapData, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumeCubemapData, "()V", 1 },
	{ "consumeCustomData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumeCustomData_int, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumeCustomData_int, "(I)V", 1 },
	{ "disposePreparedData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_disposePreparedData, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_disposePreparedData, "()V", 1 },
	{ "consumePixmap", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap, "()Lcom/badlogic/gdx/graphics/Pixmap;", 1 },
	{ "disposePixmap", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_disposePixmap_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_disposePixmap_R_boolean, "()Z", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_getHeight_R_int, "()I", 1 },
	{ "getNumberOfMipMapLevels", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getNumberOfMipMapLevels_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_getNumberOfMipMapLevels_R_int, "()I", 1 },
	{ "getNumberOfFaces", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getNumberOfFaces_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_getNumberOfFaces_R_int, "()I", 1 },
	{ "getGlInternalFormat", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getGlInternalFormat_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_getGlInternalFormat_R_int, "()I", 1 },
	{ "getData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getData_int_int_R_java_nio_ByteBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_getData_int_int_R_java_nio_ByteBuffer, "(II)Ljava/nio/ByteBuffer;", 1 },
	{ "getFormat", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, "()Lcom/badlogic/gdx/graphics/Pixmap$Format;", 1 },
	{ "useMipMaps", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_useMipMaps_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_useMipMaps_R_boolean, "()Z", 1 },
	{ "isManaged", (intptr_t) M_com_badlogic_gdx_graphics_glutils_KTXTextureData_isManaged_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_KTXTextureData_isManaged_R_boolean, "()Z", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_KTXTextureData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/KTXTextureData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_KTXTextureData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_KTXTextureData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_KTXTextureData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_KTXTextureData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_KTXTextureData = registerClass(&class_com_badlogic_gdx_graphics_glutils_KTXTextureData);

}

