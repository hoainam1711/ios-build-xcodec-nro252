#include "com/badlogic/gdx/graphics/glutils/ETC1_ETC1Data.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/io/PrintStream.h"
#include "java/nio/ByteBuffer.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/nio/Buffer.h"
#include "java/io/Closeable.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/io/DataInputStream.h"
#include "java/util/zip/GZIPInputStream.h"
#include "java/util/zip/GZIPOutputStream.h"
#include "java/io/OutputStream.h"
#include "java/io/BufferedInputStream.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/glutils/ETC1.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "java/io/DataOutputStream.h"
#include "com/badlogic/gdx/graphics/glutils/ETC1_ETC1Data.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) object;
	if (self->F_compressedData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_compressedData)->clazz)->markFunction)((jobject) self->F_compressedData, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_int_int_java_nio_ByteBuffer_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1$ETC1Data:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(55);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(56);
	((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].i);
	LINE_NUMBER(57);
	((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].i);
	LINE_NUMBER(58);
	((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData = (jref) (frame[3].o);
	LINE_NUMBER(59);
	((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_dataOffset = (frame[4].i);
	LINE_NUMBER(60);
	M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_checkNPOT(ctx, (frame[0].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1$ETC1Data:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(64);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (10240));
	frame[2].o = sp[0].o;
	LINE_NUMBER(65);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(67);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_java_io_BufferedInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_BufferedInputStream);
	clinit_java_util_zip_GZIPInputStream(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_zip_GZIPInputStream);
	sp[3].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[1].o));
	init_java_util_zip_GZIPInputStream_java_io_InputStream(ctx, sp[2].o, sp[3].o);
	init_java_io_BufferedInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(68);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (frame[4].i));
	((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK(sp[0].o))->F_compressedData = (jref) sp[1].o;
	LINE_NUMBER(70);
	frame[5].i = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(71);
	jint temp0 = (jint)((func_java_io_DataInputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_read_Array1_byte_R_int])(ctx, (frame[3].o), (frame[2].o));
	frame[5].i = temp0;
	if (temp0 == (jint(-1))) goto label_15;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[2].o), (jint(0)), (frame[5].i));
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(79);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(80);
	goto label_19;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(76);
	frame[4].o = sp[0].o;
	LINE_NUMBER(77);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load pkm file '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(79);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(80);
	throwException(ctx, (frame[6].o));	}
label_19:;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_glutils_ETC1_getWidthPKM_java_nio_ByteBuffer_int_R_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_glutils_ETC1_getHeightPKM_java_nio_ByteBuffer_int_R_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK(sp[0].o))->F_height = temp1;
	LINE_NUMBER(84);
	((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_dataOffset = (clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx), (jint)SF_com_badlogic_gdx_graphics_glutils_ETC1_PKM_HEADER_SIZE);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_dataOffset));
	LINE_NUMBER(86);
	M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_checkNPOT(ctx, (frame[0].o));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_checkNPOT(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1$ETC1Data:checkNPOT", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isPowerOfTwo_int_R_boolean(ctx, ((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_width));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isPowerOfTwo_int_R_boolean(ctx, ((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_height));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(91);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ETC1Data warning: non-power-of-two ETC1 textures may crash the driver of PowerVR GPUs"_j))));
	}
label_2:;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hasPKMHeader_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1$ETC1Data:hasPKMHeader", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_dataOffset) != (16)) goto label_1;
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

void M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_write_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1$ETC1Data:write", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(103);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(104);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (10240));
	frame[3].o = sp[0].o;
	LINE_NUMBER(105);
	frame[4].i = (jint(0));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(109);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	clinit_java_util_zip_GZIPOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_GZIPOutputStream);
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream])(ctx, (frame[1].o), (jint(0)));
	init_java_util_zip_GZIPOutputStream_java_io_OutputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(110);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, temp0);
	}
label_14:;
	{
	LINE_NUMBER(111);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_1;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	frame[5].i = temp1;
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[3].o), (jint(0)), (frame[5].i));
	LINE_NUMBER(114);
	((func_java_io_DataOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte_int_int])(ctx, (frame[2].o), (frame[3].o), (jint(0)), (frame[5].i));
	LINE_NUMBER(115);
	frame[4].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(116);
	goto label_14;
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(120);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(121);
	goto label_21;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(117);
	frame[5].o = sp[0].o;
	LINE_NUMBER(118);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't write PKM file to '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(120);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(121);
	throwException(ctx, (frame[6].o));	}
label_21:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_dataOffset));
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1$ETC1Data:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1$ETC1Data:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hasPKMHeader_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hasPKMHeader_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(133);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_glutils_ETC1_isValidPKM_java_nio_ByteBuffer_int_R_boolean(ctx, sp[1].o, (jint(0)));
	sp += 1;
	if (temp0 == 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"valid"_j));
	goto label_4;
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"invalid"_j));
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" pkm ["_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_glutils_ETC1_getWidthPKM_java_nio_ByteBuffer_int_R_int(ctx, sp[1].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp1 = jint(0);
	LINE_NUMBER(134);
	jint temp2 = (jint)SM_com_badlogic_gdx_graphics_glutils_ETC1_getHeightPKM_java_nio_ByteBuffer_int_R_int(ctx, sp[1].o, temp1);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp2);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"], compressed: "_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	LINE_NUMBER(135);
	jint temp3 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (temp3 - (clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx), (jint)SF_com_badlogic_gdx_graphics_glutils_ETC1_PKM_HEADER_SIZE)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(137);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"raw ["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_width));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_height));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"], compressed: "_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (temp0 - (clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx), (jint)SF_com_badlogic_gdx_graphics_glutils_ETC1_PKM_HEADER_SIZE)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_dispose,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_checkNPOT,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hasPKMHeader_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_write_com_badlogic_gdx_files_FileHandle,
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
	{ "checkNPOT", "()V" },
	{ "hasPKMHeader", "()Z" },
	{ "write", "(Lcom/badlogic/gdx/files/FileHandle;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static FieldMetadata fields[] {
	{ "width", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data, F_width), "I", 17 },
	{ "height", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data, F_height), "I", 17 },
	{ "compressedData", &class_java_nio_ByteBuffer, offsetof(com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data, F_compressedData), "Ljava/nio/ByteBuffer;", 17 },
	{ "dataOffset", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data, F_dataOffset), "I", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_int_int_java_nio_ByteBuffer_int, 0, "(IILjava/nio/ByteBuffer;I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "checkNPOT", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_checkNPOT, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_checkNPOT, "()V", 2 },
	{ "hasPKMHeader", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hasPKMHeader_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hasPKMHeader_R_boolean, "()Z", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_write_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_write_com_badlogic_gdx_files_FileHandle, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_dispose, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_dispose, "()V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/ETC1$ETC1Data",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_glutils_ETC1,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data = registerClass(&class_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data);

}

