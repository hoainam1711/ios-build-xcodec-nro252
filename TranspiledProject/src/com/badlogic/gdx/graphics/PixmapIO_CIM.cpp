#include "com/badlogic/gdx/graphics/PixmapIO_CIM.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/io/DataInputStream.h"
#include "java/io/OutputStream.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "com/badlogic/gdx/graphics/PixmapIO_CIM.h"
#include "java/io/DataOutput.h"
#include "java/nio/ByteBuffer.h"
#include "java/io/BufferedInputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/nio/Buffer.h"
#include "java/util/zip/DeflaterOutputStream.h"
#include "java/io/DataOutputStream.h"
#include "java/util/zip/InflaterInputStream.h"
#include "java/io/Closeable.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/graphics/PixmapIO.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_PixmapIO$CIM_BUFFER_SIZE;
jobject SF_com_badlogic_gdx_graphics_PixmapIO$CIM_writeBuffer;
jobject SF_com_badlogic_gdx_graphics_PixmapIO$CIM_readBuffer;

void mark_com_badlogic_gdx_graphics_PixmapIO$CIM(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_PixmapIO$CIM_writeBuffer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_PixmapIO$CIM_writeBuffer)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_PixmapIO$CIM_writeBuffer, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_PixmapIO$CIM_readBuffer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_PixmapIO$CIM_readBuffer)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_PixmapIO$CIM_readBuffer, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_PixmapIO$CIM *) object;
}

void init_com_badlogic_gdx_graphics_PixmapIO$CIM(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$CIM:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(84);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_PixmapIO$CIM_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$CIM:write", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(90);
	frame[2].o = (jobject(nullptr));
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_13; } // goto label_10
	}
	{
	LINE_NUMBER(93);
	clinit_java_util_zip_DeflaterOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_DeflaterOutputStream);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream])(ctx, (frame[0].o), (jint(0)));
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(94);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[3].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(95);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(96);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, temp1);
	LINE_NUMBER(97);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[1].o));
	jint temp2 = (jint)SM_com_badlogic_gdx_graphics_Pixmap$Format_toGdx2DPixmapFormat_com_badlogic_gdx_graphics_Pixmap$Format_R_int(ctx, sp[1].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, temp2);
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(101);
	sp[0].o = frame[4].o;
	jint temp3 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp3);
	LINE_NUMBER(103);
	jint temp4 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[4].o));
	frame[5].i = (temp4 % (32000));
	LINE_NUMBER(104);
	jint temp5 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[4].o));
	frame[6].i = (temp5 / (32000));
	LINE_NUMBER(106);
	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_PixmapIO$CIM_writeBuffer;
	frame[7].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(107);
	frame[8].i = (jint(0));
	}
label_25:;
	{
	if ((frame[8].i) >= (frame[6].i)) goto label_26;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_PixmapIO$CIM_writeBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_PixmapIO$CIM_writeBuffer;
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(107);
	INST_IINC(8, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(112);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_PixmapIO$CIM_writeBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[5].i));
	LINE_NUMBER(113);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_PixmapIO$CIM_writeBuffer;
	((func_java_io_DataOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[5].i));
	LINE_NUMBER(114);
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	goto label_32;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_32:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(117);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(121);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(122);
	goto label_35;
	}
label_8:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_10;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_10; }
	{
	sp -= 1;
	LINE_NUMBER(118);
	frame[3].o = sp[0].o;
	LINE_NUMBER(119);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't write Pixmap to file '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_10:;
	LINE_NUMBER(121);
	INST_ASTORE(10);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(122);
	throwException(ctx, (frame[10].o));	}
label_35:;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_PixmapIO$CIM_read_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$CIM:read", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(126);
	frame[1].o = (jobject(nullptr));
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_13; } // goto label_10
	}
	{
	LINE_NUMBER(129);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	clinit_java_io_BufferedInputStream(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_io_BufferedInputStream);
	sp[3].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	init_java_io_BufferedInputStream_java_io_InputStream(ctx, sp[2].o, sp[3].o);
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(130);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(131);
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(132);
	jint temp2 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_Pixmap$Format_fromGdx2DPixmapFormat_int_R_com_badlogic_gdx_graphics_Pixmap$Format(ctx, temp2);
	frame[4].o = sp[0].o;
	LINE_NUMBER(133);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, (frame[2].i), (frame[3].i), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[6].o), (jint(0)));
	LINE_NUMBER(137);
	sp[0].o = frame[6].o;
	jint temp3 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp3);
	LINE_NUMBER(139);
	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_PixmapIO$CIM_readBuffer;
	frame[7].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(140);
	frame[8].i = (jint(0));
	}
label_23:;
	{
	LINE_NUMBER(141);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_PixmapIO$CIM_readBuffer;
	jint temp0 = (jint)((func_java_io_DataInputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_read_Array1_byte_R_int])(ctx, sp[0].o, sp[1].o);
	frame[8].i = temp0;
	if (temp0 <= 0) goto label_24;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = frame[6].o;
	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_PixmapIO$CIM_readBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[8].i));
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(144);
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	goto label_26;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_26:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[6].o), (jint(0)));
	LINE_NUMBER(147);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(148);
	frame[7].o = (frame[5].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(152);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_8:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_10;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_10; }
	{
	sp -= 1;
	LINE_NUMBER(149);
	frame[2].o = sp[0].o;
	LINE_NUMBER(150);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't read Pixmap from file '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_10:;
	LINE_NUMBER(152);
	INST_ASTORE(10);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(153);
	throwException(ctx, (frame[10].o));	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_PixmapIO$CIM_BUFFER_SIZE = jint(32000);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$CIM:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (32000));
	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	SF_com_badlogic_gdx_graphics_PixmapIO$CIM_writeBuffer = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (32000));
	clinit_com_badlogic_gdx_graphics_PixmapIO$CIM(ctx);
	SF_com_badlogic_gdx_graphics_PixmapIO$CIM_readBuffer = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_PixmapIO$CIM[] {
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
	{ "BUFFER_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$CIM_BUFFER_SIZE, "I", 26 },
	{ "writeBuffer", getArrayClass(&class_byte, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$CIM_writeBuffer, "[B", 26 },
	{ "readBuffer", getArrayClass(&class_byte, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$CIM_readBuffer, "[B", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_PixmapIO$CIM, 0, "()V", 2 },
	{ "write", (intptr_t) SM_com_badlogic_gdx_graphics_PixmapIO$CIM_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/Pixmap;)V", 9 },
	{ "read", (intptr_t) SM_com_badlogic_gdx_graphics_PixmapIO$CIM_read_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Pixmap, 0, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/Pixmap;", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_PixmapIO$CIM, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_PixmapIO$CIM{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/PixmapIO$CIM",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_PixmapIO$CIM),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_PixmapIO$CIM,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_PixmapIO$CIM,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_PixmapIO$CIM,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_PixmapIO,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_PixmapIO$CIM = registerClass(&class_com_badlogic_gdx_graphics_PixmapIO$CIM);

}

