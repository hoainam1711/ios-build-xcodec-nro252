#include "com/badlogic/gdx/graphics/PixmapIO_PNG_ChunkBuffer.h"
#include "com/badlogic/gdx/graphics/PixmapIO_PNG.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/PixmapIO_PNG_ChunkBuffer.h"
#include "java/io/DataOutputStream.h"
#include "java/util/zip/CheckedOutputStream.h"
#include "java/util/zip/Checksum.h"
#include "java/io/FilterOutputStream.h"
#include "java/util/zip/CRC32.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_DataOutputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_crc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_crc)->clazz)->markFunction)((jobject) self->F_crc, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_DataOutputStream(ctx);
}

void init_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$PNG$ChunkBuffer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream_int(ctx, sp[1].o, (frame[1].i));
	clinit_java_util_zip_CRC32(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_zip_CRC32);
	init_java_util_zip_CRC32(ctx, sp[2].o);
	init_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_java_io_ByteArrayOutputStream_java_util_zip_CRC32(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_java_io_ByteArrayOutputStream_java_util_zip_CRC32(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$PNG$ChunkBuffer:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	clinit_java_util_zip_CheckedOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_CheckedOutputStream);
	init_java_util_zip_CheckedOutputStream_java_io_OutputStream_java_util_zip_Checksum(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(335);
	((com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer *) NULL_CHECK((frame[0].o)))->F_buffer = (jref) (frame[1].o);
	LINE_NUMBER(336);
	((com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer *) NULL_CHECK((frame[0].o)))->F_crc = (jref) (frame[2].o);
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO$PNG$ChunkBuffer:endChunk", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(340);
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_flush])(ctx, (frame[0].o));
	LINE_NUMBER(341);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_io_ByteArrayOutputStream_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_ByteArrayOutputStream_size_R_int])(ctx, sp[1].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (temp0 - (jint(4))));
	LINE_NUMBER(342);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_java_io_ByteArrayOutputStream_writeTo_java_io_OutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_ByteArrayOutputStream_writeTo_java_io_OutputStream])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(343);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer *) NULL_CHECK((frame[0].o)))->F_crc;
	jlong temp1 = (jlong)((func_java_util_zip_CRC32_getValue_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_zip_CRC32_getValue_R_long])(ctx, sp[1].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (jint(temp1)));
	LINE_NUMBER(344);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_java_io_ByteArrayOutputStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_ByteArrayOutputStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(345);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer *) NULL_CHECK((frame[0].o)))->F_crc;
	((func_java_util_zip_CRC32_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_reset])(ctx, sp[0].o);
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer[] {
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
	(void *) M_java_io_FilterOutputStream_close,
	(void *) M_java_io_DataOutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_io_DataOutputStream_write_Array1_byte_int_int,
	(void *) M_java_io_DataOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
	(void *) M_java_io_DataOutputStream_writeBoolean_boolean,
	(void *) M_java_io_DataOutputStream_writeByte_int,
	(void *) M_java_io_DataOutputStream_writeChar_int,
	(void *) M_java_io_DataOutputStream_writeChars_java_lang_String,
	(void *) M_java_io_DataOutputStream_writeDouble_double,
	(void *) M_java_io_DataOutputStream_writeFloat_float,
	(void *) M_java_io_DataOutputStream_writeInt_int,
	(void *) M_java_io_DataOutputStream_writeLong_long,
	(void *) M_java_io_DataOutputStream_writeShort_int,
	(void *) M_java_io_DataOutputStream_writeUTF_java_lang_String,
	(void *) M_java_io_DataOutputStream_size_R_int,
	(void *) M_java_io_DataOutputStream_writeBytes_java_lang_String,
	(void *) M_java_io_DataOutputStream_writeLongToBuffer_long_Array1_byte_int_R_int,
	(void *) M_java_io_DataOutputStream_writeShortToBuffer_int_Array1_byte_int_R_int,
	(void *) M_java_io_DataOutputStream_countUTFBytes_java_lang_String_R_long,
	(void *) M_java_io_DataOutputStream_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream,
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
	{ "close", "()V" },
	{ "flush", "()V" },
	{ "write", "([B)V" },
	{ "write", "([BII)V" },
	{ "write", "(I)V" },
	{ "checkError", "()Z" },
	{ "writeBoolean", "(Z)V" },
	{ "writeByte", "(I)V" },
	{ "writeChar", "(I)V" },
	{ "writeChars", "(Ljava/lang/String;)V" },
	{ "writeDouble", "(D)V" },
	{ "writeFloat", "(F)V" },
	{ "writeInt", "(I)V" },
	{ "writeLong", "(J)V" },
	{ "writeShort", "(I)V" },
	{ "writeUTF", "(Ljava/lang/String;)V" },
	{ "size", "()I" },
	{ "writeBytes", "(Ljava/lang/String;)V" },
	{ "writeLongToBuffer", "(J[BI)I" },
	{ "writeShortToBuffer", "(I[BI)I" },
	{ "countUTFBytes", "(Ljava/lang/String;)J" },
	{ "writeUTFBytesToBuffer", "(Ljava/lang/String;J[BI)I" },
	{ "endChunk", "(Ljava/io/DataOutputStream;)V" },
};

static FieldMetadata fields[] {
	{ "buffer", &class_java_io_ByteArrayOutputStream, offsetof(com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer, F_buffer), "Ljava/io/ByteArrayOutputStream;", 16 },
	{ "crc", &class_java_util_zip_CRC32, offsetof(com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer, F_crc), "Ljava/util/zip/CRC32;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_int, 0, "(I)V", 0 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_java_io_ByteArrayOutputStream_java_util_zip_CRC32, 0, "(Ljava/io/ByteArrayOutputStream;Ljava/util/zip/CRC32;)V", 2 },
	{ "endChunk", (intptr_t) M_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream, VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream, "(Ljava/io/DataOutputStream;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/PixmapIO$PNG$ChunkBuffer",
		.parentClass = (intptr_t) &class_java_io_DataOutputStream,
		.size = sizeof(com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_PixmapIO$PNG,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer = registerClass(&class_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer);

}

