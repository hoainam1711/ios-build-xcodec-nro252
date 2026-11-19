#include "com/badlogic/gdx/graphics/PixmapIO_PNG.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/util/zip/Deflater.h"
#include "java/io/OutputStream.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/io/DataOutput.h"
#include "java/nio/ByteBuffer.h"
#include "com/badlogic/gdx/graphics/PixmapIO_PNG.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/PixmapIO_PNG_ChunkBuffer.h"
#include "java/util/zip/DeflaterOutputStream.h"
#include "java/io/DataOutputStream.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "java/io/Closeable.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/graphics/PixmapIO.h"
#include "com/badlogic/gdx/utils/ByteArray.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_PixmapIO$PNG_SIGNATURE;
jint SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IHDR;
jint SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IDAT;
jint SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IEND;
jbyte SF_com_badlogic_gdx_graphics_PixmapIO$PNG_COLOR_ARGB;
jbyte SF_com_badlogic_gdx_graphics_PixmapIO$PNG_COMPRESSION_DEFLATE;
jbyte SF_com_badlogic_gdx_graphics_PixmapIO$PNG_FILTER_NONE;
jbyte SF_com_badlogic_gdx_graphics_PixmapIO$PNG_INTERLACE_NONE;
jbyte SF_com_badlogic_gdx_graphics_PixmapIO$PNG_PAETH;

void mark_com_badlogic_gdx_graphics_PixmapIO$PNG(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_PixmapIO$PNG_SIGNATURE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_PixmapIO$PNG_SIGNATURE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_PixmapIO$PNG_SIGNATURE, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_PixmapIO$PNG *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_deflater)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_deflater)->clazz)->markFunction)((jobject) self->F_deflater, mark, depth + 1);
	if (self->F_lineOutBytes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lineOutBytes)->clazz)->markFunction)((jobject) self->F_lineOutBytes, mark, depth + 1);
	if (self->F_curLineBytes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_curLineBytes)->clazz)->markFunction)((jobject) self->F_curLineBytes, mark, depth + 1);
	if (self->F_prevLineBytes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prevLineBytes)->clazz)->markFunction)((jobject) self->F_prevLineBytes, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_PixmapIO$PNG(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$PNG:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO$PNG(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(200);
	init_com_badlogic_gdx_graphics_PixmapIO$PNG_int(ctx, (frame[0].o), (16384));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_PixmapIO$PNG_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$PNG:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO$PNG(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(203);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(196);
	((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_flipY = (jint(1));
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer);
	init_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_int(ctx, sp[1].o, (frame[1].i));
	((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	clinit_java_util_zip_Deflater(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_Deflater);
	init_java_util_zip_Deflater(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK(sp[0].o))->F_deflater = (jref) sp[1].o;
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_PixmapIO$PNG_setFlipY_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$PNG:setFlipY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(210);
	((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_flipY = (frame[1].i);
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_PixmapIO$PNG_setCompression_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$PNG:setCompression", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_deflater;
	((func_java_util_zip_Deflater_setLevel_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_setLevel_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_PixmapIO$PNG_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$PNG:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream])(ctx, (frame[1].o), (jint(0)));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(221);
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG_write_java_io_OutputStream_com_badlogic_gdx_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_write_java_io_OutputStream_com_badlogic_gdx_graphics_Pixmap])(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(223);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(224);
	goto label_8;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(223);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(224);
	throwException(ctx, (frame[4].o));	}
label_8:;
	LINE_NUMBER(225);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_PixmapIO$PNG_write_java_io_OutputStream_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$PNG:write", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(229);
	clinit_java_util_zip_DeflaterOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_DeflaterOutputStream);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_deflater;
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(230);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(231);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_PixmapIO$PNG(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_PixmapIO$PNG_SIGNATURE;
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(233);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int])(ctx, sp[0].o, (jint(1229472850)));
	LINE_NUMBER(234);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(235);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int])(ctx, sp[0].o, temp1);
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int])(ctx, sp[0].o, (8));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int])(ctx, sp[0].o, (6));
	LINE_NUMBER(238);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(240);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(241);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(243);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int])(ctx, sp[0].o, (jint(1229209940)));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_deflater;
	((func_java_util_zip_Deflater_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_reset])(ctx, sp[0].o);
	LINE_NUMBER(246);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	frame[5].i = (temp2 * (jint(4)));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_lineOutBytes;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ByteArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ByteArray);
	init_com_badlogic_gdx_utils_ByteArray_int(ctx, sp[1].o, (frame[5].i));
	((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK(sp[0].o))->F_lineOutBytes = (jref) sp[1].o;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ByteArray *) NULL_CHECK(sp[1].o))->F_items;
	frame[6].o = sp[0].o;
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ByteArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ByteArray);
	init_com_badlogic_gdx_utils_ByteArray_int(ctx, sp[1].o, (frame[5].i));
	((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK(sp[0].o))->F_curLineBytes = (jref) sp[1].o;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ByteArray *) NULL_CHECK(sp[1].o))->F_items;
	frame[7].o = sp[0].o;
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ByteArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ByteArray);
	init_com_badlogic_gdx_utils_ByteArray_int(ctx, sp[1].o, (frame[5].i));
	((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK(sp[0].o))->F_prevLineBytes = (jref) sp[1].o;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ByteArray *) NULL_CHECK(sp[1].o))->F_items;
	frame[8].o = sp[0].o;
	goto label_21;
	}
label_16:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_lineOutBytes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ByteArray_ensureCapacity_int_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ByteArray_ensureCapacity_int_R_Array1_byte])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(254);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_curLineBytes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ByteArray_ensureCapacity_int_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ByteArray_ensureCapacity_int_R_Array1_byte])(ctx, sp[0].o, (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(255);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_prevLineBytes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ByteArray_ensureCapacity_int_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ByteArray_ensureCapacity_int_R_Array1_byte])(ctx, sp[0].o, (frame[5].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(256);
	frame[9].i = (jint(0));
	frame[10].i = ((jint)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_lastLineLen);
	}
label_26:;
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_21;
	}
	{
	LINE_NUMBER(257);
	ARRAY_ACCESS(jbyte, (frame[8].o), (frame[9].i)) = (jint(0));
	LINE_NUMBER(256);
	INST_IINC(9, 1);
	goto label_26;
	}
label_21:;
	{
	LINE_NUMBER(259);
	((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_lastLineLen = (frame[5].i);
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[2].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(262);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[9].o));
	frame[10].i = temp0;
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[2].o));
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	if (sp[0].o != sp[1].o) goto label_32;
	}
	INST_ICONST(1);
	goto label_33;
label_32:;
	INST_ICONST(0);
label_33:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(264);
	frame[12].i = (jint(0));
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	frame[13].i = temp0;
	}
label_36:;
	{
	if ((frame[12].i) >= (frame[13].i)) goto label_37;
	}
	{
	LINE_NUMBER(265);
	if (((jint)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_flipY) == 0) goto label_39;
	}
	{
	jint temp0 = ((frame[13].i) - (frame[12].i)) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_40;
	}
label_39:;
	INST_ILOAD(12);
label_40:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(266);
	if ((frame[11].i) == 0) goto label_42;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[9].o), ((frame[14].i) * (frame[5].i)));
	LINE_NUMBER(268);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, (frame[9].o), (frame[7].o), (jint(0)), (frame[5].i));
	goto label_45;
	}
label_42:;
	{
	LINE_NUMBER(270);
	frame[15].i = (jint(0));
	frame[16].i = (jint(0));
	}
label_47:;
	{
	jint temp0 = frame[15].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_45;
	}
	{
	LINE_NUMBER(271);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int])(ctx, (frame[2].o), (frame[15].i), (frame[14].i));
	frame[17].i = temp0;
	LINE_NUMBER(272);
	sp[0].o = frame[7].o;
	jint temp1 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte((((frame[17].i) >> (24)) & (255))));
	LINE_NUMBER(273);
	sp[0].o = frame[7].o;
	jint temp2 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (jbyte((((frame[17].i) >> (16)) & (255))));
	LINE_NUMBER(274);
	sp[0].o = frame[7].o;
	jint temp3 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp3) = (jbyte((((frame[17].i) >> (8)) & (255))));
	LINE_NUMBER(275);
	sp[0].o = frame[7].o;
	jint temp4 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = (jbyte(((frame[17].i) & (255))));
	LINE_NUMBER(270);
	INST_IINC(15, 1);
	goto label_47;
	}
label_45:;
	{
	LINE_NUMBER(279);
	ARRAY_ACCESS(jbyte, (frame[6].o), (jint(0))) = (jbyte((((jint)ARRAY_ACCESS(jbyte, (frame[7].o), (jint(0)))) - ((jint)ARRAY_ACCESS(jbyte, (frame[8].o), (jint(0)))))));
	LINE_NUMBER(280);
	ARRAY_ACCESS(jbyte, (frame[6].o), (jint(1))) = (jbyte((((jint)ARRAY_ACCESS(jbyte, (frame[7].o), (jint(1)))) - ((jint)ARRAY_ACCESS(jbyte, (frame[8].o), (jint(1)))))));
	LINE_NUMBER(281);
	ARRAY_ACCESS(jbyte, (frame[6].o), (jint(2))) = (jbyte((((jint)ARRAY_ACCESS(jbyte, (frame[7].o), (jint(2)))) - ((jint)ARRAY_ACCESS(jbyte, (frame[8].o), (jint(2)))))));
	LINE_NUMBER(282);
	ARRAY_ACCESS(jbyte, (frame[6].o), (jint(3))) = (jbyte((((jint)ARRAY_ACCESS(jbyte, (frame[7].o), (jint(3)))) - ((jint)ARRAY_ACCESS(jbyte, (frame[8].o), (jint(3)))))));
	LINE_NUMBER(284);
	frame[15].i = (jint(4));
	}
label_58:;
	{
	if ((frame[15].i) >= (frame[5].i)) goto label_59;
	}
	{
	LINE_NUMBER(285);
	frame[16].i = (((jint)ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[15].i) - (jint(4))))) & (255));
	LINE_NUMBER(286);
	frame[17].i = (((jint)ARRAY_ACCESS(jbyte, (frame[8].o), (frame[15].i))) & (255));
	LINE_NUMBER(287);
	frame[18].i = (((jint)ARRAY_ACCESS(jbyte, (frame[8].o), ((frame[15].i) - (jint(4))))) & (255));
	LINE_NUMBER(288);
	frame[19].i = (((frame[16].i) + (frame[17].i)) - (frame[18].i));
	LINE_NUMBER(289);
	frame[20].i = ((frame[19].i) - (frame[16].i));
	LINE_NUMBER(290);
	if ((frame[20].i) >= 0) goto label_66;
	}
	{
	frame[20].i = (-(frame[20].i));
	}
label_66:;
	{
	LINE_NUMBER(291);
	frame[21].i = ((frame[19].i) - (frame[17].i));
	LINE_NUMBER(292);
	if ((frame[21].i) >= 0) goto label_68;
	}
	{
	frame[21].i = (-(frame[21].i));
	}
label_68:;
	{
	LINE_NUMBER(293);
	frame[22].i = ((frame[19].i) - (frame[18].i));
	LINE_NUMBER(294);
	if ((frame[22].i) >= 0) goto label_70;
	}
	{
	frame[22].i = (-(frame[22].i));
	}
label_70:;
	{
	LINE_NUMBER(295);
	if ((frame[20].i) > (frame[21].i)) goto label_71;
	}
	{
	if ((frame[20].i) > (frame[22].i)) goto label_71;
	}
	{
	LINE_NUMBER(296);
	frame[18].i = (frame[16].i);
	goto label_73;
	}
label_71:;
	{
	LINE_NUMBER(297);
	if ((frame[21].i) > (frame[22].i)) goto label_73;
	}
	{
	LINE_NUMBER(298);
	frame[18].i = (frame[17].i);
	}
label_73:;
	{
	LINE_NUMBER(299);
	ARRAY_ACCESS(jbyte, (frame[6].o), (frame[15].i)) = (jbyte((((jint)ARRAY_ACCESS(jbyte, (frame[7].o), (frame[15].i))) - (frame[18].i))));
	LINE_NUMBER(284);
	INST_IINC(15, 1);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(302);
	((func_java_util_zip_DeflaterOutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_zip_DeflaterOutputStream_write_int])(ctx, (frame[3].o), (jint(4)));
	LINE_NUMBER(303);
	((func_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int])(ctx, (frame[3].o), (frame[6].o), (jint(0)), (frame[5].i));
	LINE_NUMBER(305);
	frame[15].o = (frame[7].o);
	LINE_NUMBER(306);
	frame[7].o = (frame[8].o);
	LINE_NUMBER(307);
	frame[8].o = (frame[15].o);
	LINE_NUMBER(264);
	INST_IINC(12, 1);
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[9].o), (frame[10].i));
	LINE_NUMBER(310);
	((func_java_util_zip_DeflaterOutputStream_finish) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_zip_DeflaterOutputStream_finish])(ctx, (frame[3].o));
	LINE_NUMBER(311);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(313);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int])(ctx, sp[0].o, (jint(1229278788)));
	LINE_NUMBER(314);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(316);
	((func_java_io_OutputStream_flush) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_OutputStream_flush])(ctx, (frame[1].o));
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_PixmapIO$PNG_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$PNG:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG *) NULL_CHECK((frame[0].o)))->F_deflater;
	((func_java_util_zip_Deflater_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_end])(ctx, sp[0].o);
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_PixmapIO$PNG(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IHDR = jint(1229472850);
	SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IDAT = jint(1229209940);
	SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IEND = jint(1229278788);
	SF_com_badlogic_gdx_graphics_PixmapIO$PNG_COLOR_ARGB = jint(6);
	SF_com_badlogic_gdx_graphics_PixmapIO$PNG_COMPRESSION_DEFLATE = jint(0);
	SF_com_badlogic_gdx_graphics_PixmapIO$PNG_FILTER_NONE = jint(0);
	SF_com_badlogic_gdx_graphics_PixmapIO$PNG_INTERLACE_NONE = jint(0);
	SF_com_badlogic_gdx_graphics_PixmapIO$PNG_PAETH = jint(4);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$PNG:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO$PNG(ctx);
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (8));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (-119);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (80);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (78);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (71);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (10);
	clinit_com_badlogic_gdx_graphics_PixmapIO$PNG(ctx);
	SF_com_badlogic_gdx_graphics_PixmapIO$PNG_SIGNATURE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_PixmapIO$PNG[] {
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
	(void *) M_com_badlogic_gdx_graphics_PixmapIO$PNG_dispose,
	(void *) M_com_badlogic_gdx_graphics_PixmapIO$PNG_setFlipY_boolean,
	(void *) M_com_badlogic_gdx_graphics_PixmapIO$PNG_setCompression_int,
	(void *) M_com_badlogic_gdx_graphics_PixmapIO$PNG_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap,
	(void *) M_com_badlogic_gdx_graphics_PixmapIO$PNG_write_java_io_OutputStream_com_badlogic_gdx_graphics_Pixmap,
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
	{ "setFlipY", "(Z)V" },
	{ "setCompression", "(I)V" },
	{ "write", "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/Pixmap;)V" },
	{ "write", "(Ljava/io/OutputStream;Lcom/badlogic/gdx/graphics/Pixmap;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer,
};

static FieldMetadata fields[] {
	{ "SIGNATURE", getArrayClass(&class_byte, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$PNG_SIGNATURE, "[B", 26 },
	{ "IHDR", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IHDR, "I", 26 },
	{ "IDAT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IDAT, "I", 26 },
	{ "IEND", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IEND, "I", 26 },
	{ "COLOR_ARGB", &class_byte, (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$PNG_COLOR_ARGB, "B", 26 },
	{ "COMPRESSION_DEFLATE", &class_byte, (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$PNG_COMPRESSION_DEFLATE, "B", 26 },
	{ "FILTER_NONE", &class_byte, (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$PNG_FILTER_NONE, "B", 26 },
	{ "INTERLACE_NONE", &class_byte, (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$PNG_INTERLACE_NONE, "B", 26 },
	{ "PAETH", &class_byte, (intptr_t) &SF_com_badlogic_gdx_graphics_PixmapIO$PNG_PAETH, "B", 26 },
	{ "buffer", &class_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer, offsetof(com_badlogic_gdx_graphics_PixmapIO$PNG, F_buffer), "Lcom/badlogic/gdx/graphics/PixmapIO$PNG$ChunkBuffer;", 18 },
	{ "deflater", &class_java_util_zip_Deflater, offsetof(com_badlogic_gdx_graphics_PixmapIO$PNG, F_deflater), "Ljava/util/zip/Deflater;", 18 },
	{ "lineOutBytes", &class_com_badlogic_gdx_utils_ByteArray, offsetof(com_badlogic_gdx_graphics_PixmapIO$PNG, F_lineOutBytes), "Lcom/badlogic/gdx/utils/ByteArray;", 2 },
	{ "curLineBytes", &class_com_badlogic_gdx_utils_ByteArray, offsetof(com_badlogic_gdx_graphics_PixmapIO$PNG, F_curLineBytes), "Lcom/badlogic/gdx/utils/ByteArray;", 2 },
	{ "prevLineBytes", &class_com_badlogic_gdx_utils_ByteArray, offsetof(com_badlogic_gdx_graphics_PixmapIO$PNG, F_prevLineBytes), "Lcom/badlogic/gdx/utils/ByteArray;", 2 },
	{ "flipY", &class_boolean, offsetof(com_badlogic_gdx_graphics_PixmapIO$PNG, F_flipY), "Z", 2 },
	{ "lastLineLen", &class_int, offsetof(com_badlogic_gdx_graphics_PixmapIO$PNG, F_lastLineLen), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_PixmapIO$PNG, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_PixmapIO$PNG_int, 0, "(I)V", 1 },
	{ "setFlipY", (intptr_t) M_com_badlogic_gdx_graphics_PixmapIO$PNG_setFlipY_boolean, VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_setFlipY_boolean, "(Z)V", 1 },
	{ "setCompression", (intptr_t) M_com_badlogic_gdx_graphics_PixmapIO$PNG_setCompression_int, VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_setCompression_int, "(I)V", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_graphics_PixmapIO$PNG_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap, VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/Pixmap;)V", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_graphics_PixmapIO$PNG_write_java_io_OutputStream_com_badlogic_gdx_graphics_Pixmap, VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_write_java_io_OutputStream_com_badlogic_gdx_graphics_Pixmap, "(Ljava/io/OutputStream;Lcom/badlogic/gdx/graphics/Pixmap;)V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_PixmapIO$PNG_dispose, VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_dispose, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_PixmapIO$PNG, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_PixmapIO$PNG{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/PixmapIO$PNG",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_PixmapIO$PNG),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_PixmapIO$PNG,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_PixmapIO$PNG,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_PixmapIO$PNG,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_PixmapIO,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_PixmapIO$PNG = registerClass(&class_com_badlogic_gdx_graphics_PixmapIO$PNG);

}

