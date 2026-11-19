#include "java/util/zip/GZIPOutputStream.h"
#include "java/lang/Object.h"
#include "java/util/zip/GZIPOutputStream.h"
#include "java/util/zip/DeflaterOutputStream.h"
#include "java/util/zip/CRC32.h"
#include "java/util/zip/Deflater.h"
#include "java/io/OutputStream.h"

extern "C" {

jint SF_java_util_zip_GZIPOutputStream_GZIP_MAGIC;
jint SF_java_util_zip_GZIPOutputStream_TRAILER_SIZE;

void mark_java_util_zip_GZIPOutputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_zip_DeflaterOutputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_zip_GZIPOutputStream *) object;
	if (self->F_crc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_crc)->clazz)->markFunction)((jobject) self->F_crc, mark, depth + 1);
}

void clinit_java_util_zip_GZIPOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_zip_DeflaterOutputStream(ctx);
	SF_java_util_zip_GZIPOutputStream_GZIP_MAGIC = jint(35615);
	SF_java_util_zip_GZIPOutputStream_TRAILER_SIZE = jint(8);
}

void init_java_util_zip_GZIPOutputStream_java_io_OutputStream_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPOutputStream:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_GZIPOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(67);
	init_java_util_zip_GZIPOutputStream_java_io_OutputStream_int_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_GZIPOutputStream_java_io_OutputStream_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPOutputStream:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_GZIPOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_util_zip_Deflater(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_zip_Deflater);
	init_java_util_zip_Deflater_int_boolean(ctx, sp[2].o, (jint(-1)), (jint(1)));
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_int_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_java_util_zip_CRC32(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_CRC32);
	init_java_util_zip_CRC32(ctx, sp[1].o);
	((java_util_zip_GZIPOutputStream *) NULL_CHECK(sp[0].o))->F_crc = (jref) sp[1].o;
	LINE_NUMBER(93);
	((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_usesDefaultDeflater = (jint(1));
	LINE_NUMBER(94);
	M_java_util_zip_GZIPOutputStream_writeHeader(ctx, (frame[0].o));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((java_util_zip_GZIPOutputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	((func_java_util_zip_CRC32_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_reset])(ctx, sp[0].o);
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_GZIPOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPOutputStream:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_GZIPOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	init_java_util_zip_GZIPOutputStream_java_io_OutputStream_int_boolean(ctx, (frame[0].o), (frame[1].o), (512), (jint(0)));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_GZIPOutputStream_java_io_OutputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPOutputStream:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_GZIPOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(131);
	init_java_util_zip_GZIPOutputStream_java_io_OutputStream_int_boolean(ctx, (frame[0].o), (frame[1].o), (512), (frame[2].i));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_GZIPOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPOutputStream:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(145);
	M_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((java_util_zip_GZIPOutputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	((func_java_util_zip_CRC32_update_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_update_Array1_byte_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(147);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_GZIPOutputStream_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPOutputStream:finish", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jint temp0 = (jint)((func_java_util_zip_Deflater_finished_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finished_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	((func_java_util_zip_Deflater_finish) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finish])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jint temp0 = (jint)((func_java_util_zip_Deflater_finished_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finished_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	sp[1].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_util_zip_Deflater_deflate_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_deflate_Array1_byte_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, (((jarray) nullCheck(ctx, sp[2].o))->length));
	frame[1].i = temp1;
	LINE_NUMBER(160);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jint temp2 = (jint)((func_java_util_zip_Deflater_finished_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finished_R_boolean])(ctx, sp[0].o);
	if (temp2 == 0) goto label_7;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 > ((((jarray) nullCheck(ctx, sp[0].o))->length) - (8))) goto label_7;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	M_java_util_zip_GZIPOutputStream_writeTrailer_Array1_byte_int(ctx, sp[0].o, sp[1].o, (frame[1].i));
	LINE_NUMBER(163);
	frame[1].i = ((frame[1].i) + (8));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[1].i));
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(167);
	if ((frame[1].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[1].i));
	}
label_12:;
	LINE_NUMBER(169);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (8));
	frame[1].o = sp[0].o;
	LINE_NUMBER(173);
	M_java_util_zip_GZIPOutputStream_writeTrailer_Array1_byte_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_GZIPOutputStream_writeHeader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPOutputStream:writeHeader", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (10));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (31);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (-117);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (8);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (jint(0));
	((func_java_io_OutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_GZIPOutputStream_writeTrailer_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPOutputStream:writeTrailer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_GZIPOutputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	jlong temp0 = (jlong)((func_java_util_zip_CRC32_getValue_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_zip_CRC32_getValue_R_long])(ctx, sp[1].o);
	M_java_util_zip_GZIPOutputStream_writeInt_int_Array1_byte_int(ctx, sp[0].o, (jint(temp0)), (frame[1].o), (frame[2].i));
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jint temp1 = (jint)((func_java_util_zip_Deflater_getTotalIn_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_zip_Deflater_getTotalIn_R_int])(ctx, sp[1].o);
	M_java_util_zip_GZIPOutputStream_writeInt_int_Array1_byte_int(ctx, sp[0].o, temp1, (frame[1].o), ((frame[2].i) + (jint(4))));
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_GZIPOutputStream_writeInt_int_Array1_byte_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPOutputStream:writeInt", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(210);
	M_java_util_zip_GZIPOutputStream_writeShort_int_Array1_byte_int(ctx, (frame[0].o), ((frame[1].i) & (jint(65535))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(211);
	M_java_util_zip_GZIPOutputStream_writeShort_int_Array1_byte_int(ctx, (frame[0].o), (((frame[1].i) >> (16)) & (jint(65535))), (frame[2].o), ((frame[3].i) + (jint(2))));
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_GZIPOutputStream_writeShort_int_Array1_byte_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPOutputStream:writeShort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(219);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i)) = (jbyte(((frame[1].i) & (255))));
	LINE_NUMBER(220);
	ARRAY_ACCESS(jbyte, (frame[2].o), ((frame[3].i) + (jint(1)))) = (jbyte((((frame[1].i) >> (8)) & (255))));
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_GZIPOutputStream[] {
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
	(void *) M_java_util_zip_DeflaterOutputStream_close,
	(void *) M_java_util_zip_DeflaterOutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_util_zip_GZIPOutputStream_write_Array1_byte_int_int,
	(void *) M_java_util_zip_DeflaterOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
	(void *) M_java_util_zip_GZIPOutputStream_finish,
	(void *) M_java_util_zip_DeflaterOutputStream_deflate,
	(void *) M_java_util_zip_GZIPOutputStream_writeHeader,
	(void *) M_java_util_zip_GZIPOutputStream_writeTrailer_Array1_byte_int,
	(void *) M_java_util_zip_GZIPOutputStream_writeInt_int_Array1_byte_int,
	(void *) M_java_util_zip_GZIPOutputStream_writeShort_int_Array1_byte_int,
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
	{ "finish", "()V" },
	{ "deflate", "()V" },
	{ "writeHeader", "()V" },
	{ "writeTrailer", "([BI)V" },
	{ "writeInt", "(I[BI)V" },
	{ "writeShort", "(I[BI)V" },
};

static FieldMetadata fields[] {
	{ "crc", &class_java_util_zip_CRC32, offsetof(java_util_zip_GZIPOutputStream, F_crc), "Ljava/util/zip/CRC32;", 4 },
	{ "GZIP_MAGIC", &class_int, (intptr_t) &SF_java_util_zip_GZIPOutputStream_GZIP_MAGIC, "I", 26 },
	{ "TRAILER_SIZE", &class_int, (intptr_t) &SF_java_util_zip_GZIPOutputStream_TRAILER_SIZE, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_GZIPOutputStream_java_io_OutputStream_int, 0, "(Ljava/io/OutputStream;I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_GZIPOutputStream_java_io_OutputStream_int_boolean, 0, "(Ljava/io/OutputStream;IZ)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_GZIPOutputStream_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_GZIPOutputStream_java_io_OutputStream_boolean, 0, "(Ljava/io/OutputStream;Z)V", 1 },
	{ "write", (intptr_t) M_java_util_zip_GZIPOutputStream_write_Array1_byte_int_int, VTABLE_java_util_zip_GZIPOutputStream_write_Array1_byte_int_int, "([BII)V", 33 },
	{ "finish", (intptr_t) M_java_util_zip_GZIPOutputStream_finish, VTABLE_java_util_zip_GZIPOutputStream_finish, "()V", 1 },
	{ "writeHeader", (intptr_t) M_java_util_zip_GZIPOutputStream_writeHeader, VTABLE_java_util_zip_GZIPOutputStream_writeHeader, "()V", 2 },
	{ "writeTrailer", (intptr_t) M_java_util_zip_GZIPOutputStream_writeTrailer_Array1_byte_int, VTABLE_java_util_zip_GZIPOutputStream_writeTrailer_Array1_byte_int, "([BI)V", 2 },
	{ "writeInt", (intptr_t) M_java_util_zip_GZIPOutputStream_writeInt_int_Array1_byte_int, VTABLE_java_util_zip_GZIPOutputStream_writeInt_int_Array1_byte_int, "(I[BI)V", 2 },
	{ "writeShort", (intptr_t) M_java_util_zip_GZIPOutputStream_writeShort_int_Array1_byte_int, VTABLE_java_util_zip_GZIPOutputStream_writeShort_int_Array1_byte_int, "(I[BI)V", 2 },
};

Class class_java_util_zip_GZIPOutputStream{
		.nativeName = (intptr_t) "java/util/zip/GZIPOutputStream",
		.parentClass = (intptr_t) &class_java_util_zip_DeflaterOutputStream,
		.size = sizeof(java_util_zip_GZIPOutputStream),
		.classVtable = (intptr_t) vtable_java_util_zip_GZIPOutputStream,
		.staticInitializer = (intptr_t) clinit_java_util_zip_GZIPOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_GZIPOutputStream,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_GZIPOutputStream = registerClass(&class_java_util_zip_GZIPOutputStream);

}

