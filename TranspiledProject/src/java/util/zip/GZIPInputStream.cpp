#include "java/util/zip/GZIPInputStream.h"
#include "java/lang/StringBuilder.h"
#include "java/util/zip/GZIPInputStream.h"
#include "java/io/ByteArrayInputStream.h"
#include "java/util/zip/Checksum.h"
#include "java/util/zip/ZipException.h"
#include "java/util/zip/CheckedInputStream.h"
#include "java/util/zip/Inflater.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/SequenceInputStream.h"
#include "java/util/zip/InflaterInputStream.h"
#include "java/util/zip/GZIPInputStream_1.h"
#include "java/io/EOFException.h"
#include "java/io/IOException.h"
#include "java/util/zip/CRC32.h"
#include "java/lang/Class.h"

extern "C" {

jint SF_java_util_zip_GZIPInputStream_GZIP_MAGIC;
jint SF_java_util_zip_GZIPInputStream_FTEXT;
jint SF_java_util_zip_GZIPInputStream_FHCRC;
jint SF_java_util_zip_GZIPInputStream_FEXTRA;
jint SF_java_util_zip_GZIPInputStream_FNAME;
jint SF_java_util_zip_GZIPInputStream_FCOMMENT;

void mark_java_util_zip_GZIPInputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_zip_InflaterInputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_zip_GZIPInputStream *) object;
	if (self->F_crc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_crc)->clazz)->markFunction)((jobject) self->F_crc, mark, depth + 1);
	if (self->F_tmpbuf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpbuf)->clazz)->markFunction)((jobject) self->F_tmpbuf, mark, depth + 1);
}

void clinit_java_util_zip_GZIPInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_zip_InflaterInputStream(ctx);
	SF_java_util_zip_GZIPInputStream_GZIP_MAGIC = jint(35615);
	SF_java_util_zip_GZIPInputStream_FTEXT = jint(1);
	SF_java_util_zip_GZIPInputStream_FHCRC = jint(2);
	SF_java_util_zip_GZIPInputStream_FEXTRA = jint(4);
	SF_java_util_zip_GZIPInputStream_FNAME = jint(8);
	SF_java_util_zip_GZIPInputStream_FCOMMENT = jint(16);
}

void M_java_util_zip_GZIPInputStream_ensureOpen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream:ensureOpen", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	if (((jint)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_closed) == 0) goto label_1;
	}
	{
	LINE_NUMBER(62);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stream closed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_zip_GZIPInputStream_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_GZIPInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_util_zip_Inflater(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_zip_Inflater);
	init_java_util_zip_Inflater_boolean(ctx, sp[2].o, (jint(1)));
	init_java_util_zip_InflaterInputStream_java_io_InputStream_java_util_zip_Inflater_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].i));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_java_util_zip_CRC32(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_CRC32);
	init_java_util_zip_CRC32(ctx, sp[1].o);
	((java_util_zip_GZIPInputStream *) NULL_CHECK(sp[0].o))->F_crc = (jref) sp[1].o;
	LINE_NUMBER(55);
	((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(0));
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (128));
	((java_util_zip_GZIPInputStream *) NULL_CHECK(sp[0].o))->F_tmpbuf = (jref) sp[1].o;
	LINE_NUMBER(78);
	((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_usesDefaultInflater = (jint(1));
	LINE_NUMBER(79);
	jint temp0 = (jint)M_java_util_zip_GZIPInputStream_readHeader_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_GZIPInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_GZIPInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	init_java_util_zip_GZIPInputStream_java_io_InputStream_int(ctx, (frame[0].o), (frame[1].o), (512));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_GZIPInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(113);
	M_java_util_zip_GZIPInputStream_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(114);
	if (((jint)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_eos) == 0) goto label_2;
	}
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)M_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(118);
	if ((frame[4].i) != (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)M_java_util_zip_GZIPInputStream_readTrailer_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(120);
	((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_eos = (jint(1));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)((func_java_util_zip_GZIPInputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_GZIPInputStream_read_Array1_byte_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	((func_java_util_zip_CRC32_update_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_update_Array1_byte_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[4].i));
	}
label_9:;
	{
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void M_java_util_zip_GZIPInputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	if (((jint)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_closed) != 0) goto label_1;
	}
	{
	LINE_NUMBER(136);
	M_java_util_zip_InflaterInputStream_close(ctx, (frame[0].o));
	LINE_NUMBER(137);
	((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_eos = (jint(1));
	LINE_NUMBER(138);
	((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(1));
	}
label_1:;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_zip_GZIPInputStream_readHeader_java_io_InputStream_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream:readHeader", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	clinit_java_util_zip_CheckedInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_CheckedInputStream);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	init_java_util_zip_CheckedInputStream_java_io_InputStream_java_util_zip_Checksum(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(162);
	sp[0].o = (jobject)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	((func_java_util_zip_CRC32_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_reset])(ctx, sp[0].o);
	LINE_NUMBER(164);
	jint temp0 = (jint)M_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == (jint(35615))) goto label_3;
	}
	{
	LINE_NUMBER(165);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not in GZIP format"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)M_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == (8)) goto label_5;
	}
	{
	LINE_NUMBER(169);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unsupported compression method"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)M_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(174);
	M_java_util_zip_GZIPInputStream_skipBytes_java_io_InputStream_int(ctx, (frame[0].o), (frame[2].o), (6));
	LINE_NUMBER(175);
	frame[4].i = (10);
	LINE_NUMBER(177);
	if (((frame[3].i) & (jint(4))) != (jint(4))) goto label_10;
	}
	{
	LINE_NUMBER(178);
	jint temp0 = (jint)M_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(179);
	M_java_util_zip_GZIPInputStream_skipBytes_java_io_InputStream_int(ctx, (frame[0].o), (frame[2].o), (frame[5].i));
	LINE_NUMBER(180);
	frame[4].i = ((frame[4].i) + ((frame[5].i) + (jint(2))));
	}
label_10:;
	{
	LINE_NUMBER(183);
	if (((frame[3].i) & (8)) != (8)) goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(185);
	INST_IINC(4, 1);
	LINE_NUMBER(186);
	jint temp0 = (jint)M_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[2].o));
	if (temp0 != 0) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(189);
	if (((frame[3].i) & (16)) != (16)) goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(191);
	INST_IINC(4, 1);
	LINE_NUMBER(192);
	jint temp0 = (jint)M_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[2].o));
	if (temp0 != 0) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(195);
	if (((frame[3].i) & (jint(2))) != (jint(2))) goto label_20;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	jlong temp0 = (jlong)((func_java_util_zip_CRC32_getValue_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_getValue_R_long])(ctx, sp[0].o);
	frame[5].i = ((jint(temp0)) & (jint(65535)));
	LINE_NUMBER(197);
	jint temp1 = (jint)M_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[2].o));
	if (temp1 == (frame[5].i)) goto label_23;
	}
	{
	LINE_NUMBER(198);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Corrupt GZIP header"_j))));
	throwException(ctx, sp[0].o);	}
label_23:;
	LINE_NUMBER(200);
	INST_IINC(4, 2);
label_20:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	((func_java_util_zip_CRC32_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_reset])(ctx, sp[0].o);
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_zip_GZIPInputStream_readTrailer_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream:readTrailer", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	frame[1].o = sp[0].o;
	LINE_NUMBER(213);
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_inf;
	jint temp0 = (jint)((func_java_util_zip_Inflater_getRemaining_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Inflater_getRemaining_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(214);
	if ((frame[2].i) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(215);
	clinit_java_io_SequenceInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_SequenceInputStream);
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	sp[2].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	init_java_io_ByteArrayInputStream_Array1_byte_int_int(ctx, sp[1].o, sp[2].o, (((jint)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_len) - (frame[2].i)), (frame[2].i));
	clinit_java_util_zip_GZIPInputStream$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_zip_GZIPInputStream$1);
	init_java_util_zip_GZIPInputStream$1_java_util_zip_GZIPInputStream_java_io_InputStream(ctx, sp[2].o, (frame[0].o), (frame[1].o));
	init_java_io_SequenceInputStream_java_io_InputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[1].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(222);
	jlong temp0 = (jlong)M_java_util_zip_GZIPInputStream_readUInt_java_io_InputStream_R_long(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	jlong temp1 = (jlong)((func_java_util_zip_CRC32_getValue_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_getValue_R_long])(ctx, sp[0].o);
	if ((longCompare(temp0, temp1)) != 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(224);
	jlong temp0 = (jlong)M_java_util_zip_GZIPInputStream_readUInt_java_io_InputStream_R_long(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_inf;
	jlong temp1 = (jlong)((func_java_util_zip_Inflater_getBytesWritten_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Inflater_getBytesWritten_R_long])(ctx, sp[0].o);
	if ((longCompare(temp0, (temp1 & (jlong(4294967295ll))))) == 0) goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(225);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Corrupt GZIP trailer"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, sp[0].o);
	if (temp0 > 0) goto label_12;
	}
	{
	if ((frame[2].i) <= (26)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(232);
	frame[3].i = (8);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(234);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_java_util_zip_GZIPInputStream_readHeader_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = (temp0 + temp1);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(237);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(235);
	frame[4].o = sp[0].o;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (jint(1));
	}
label_14:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_inf;
	((func_java_util_zip_Inflater_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Inflater_reset])(ctx, sp[0].o);
	LINE_NUMBER(239);
	if ((frame[2].i) <= (frame[3].i)) goto label_17;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_inf;
	sp[1].o = (jobject)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	((func_java_util_zip_Inflater_setInput_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Inflater_setInput_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, ((((jint)((java_util_zip_InflaterInputStream *) NULL_CHECK((frame[0].o)))->F_len) - (frame[2].i)) + (frame[3].i)), ((frame[2].i) - (frame[3].i)));
	}
label_17:;
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jlong M_java_util_zip_GZIPInputStream_readUInt_java_io_InputStream_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream:readUInt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	jint temp0 = (jint)M_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[2].l = (jlong(temp0));
	LINE_NUMBER(251);
	jint temp1 = (jint)M_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (((jlong(temp1)) << (16)) | (frame[2].l));
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream:readUShort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(258);
	jint temp0 = (jint)M_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(259);
	jint temp1 = (jint)M_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return ((temp1 << (8)) | (frame[2].i));
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream:readUByte", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(267);
	if ((frame[2].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(268);
	clinit_java_io_EOFException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_EOFException);
	init_java_io_EOFException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(270);
	if ((frame[2].i) < (jint(-1))) goto label_4;
	}
	{
	if ((frame[2].i) <= (255)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(272);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".read() returned value out of range -1..255: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_java_util_zip_GZIPInputStream_skipBytes_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream:skipBytes", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
label_0:;
	{
	LINE_NUMBER(285);
	if ((frame[2].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_tmpbuf;
	jint temp0 = jint(0);
	jint temp1 = frame[2].i;
	sp[2].o = (jobject)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_tmpbuf;
	jobject temp2 = sp[2].o;
	sp[2].i = temp0;
	sp += 3;
	if (temp1 >= (((jarray) nullCheck(ctx, temp2))->length)) goto label_3;
	}
	INST_ILOAD(2);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((java_util_zip_GZIPInputStream *) NULL_CHECK((frame[0].o)))->F_tmpbuf;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 4;
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i);
	frame[3].i = temp0;
	LINE_NUMBER(287);
	if ((frame[3].i) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(288);
	clinit_java_io_EOFException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_EOFException);
	init_java_io_EOFException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(290);
	frame[2].i = ((frame[2].i) - (frame[3].i));
	LINE_NUMBER(291);
	goto label_0;
	}
label_1:;
	LINE_NUMBER(292);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_zip_GZIPInputStream[] {
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
	(void *) M_java_util_zip_GZIPInputStream_close,
	(void *) M_java_util_zip_InflaterInputStream_available_R_int,
	(void *) M_java_util_zip_InflaterInputStream_mark_int,
	(void *) M_java_util_zip_InflaterInputStream_markSupported_R_boolean,
	(void *) M_java_util_zip_InflaterInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_util_zip_GZIPInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_util_zip_InflaterInputStream_reset,
	(void *) M_java_util_zip_InflaterInputStream_skip_long_R_long,
	(void *) M_java_util_zip_GZIPInputStream_ensureOpen,
	(void *) M_java_util_zip_InflaterInputStream_fill,
	(void *) M_java_util_zip_GZIPInputStream_readHeader_java_io_InputStream_R_int,
	(void *) M_java_util_zip_GZIPInputStream_readTrailer_R_boolean,
	(void *) M_java_util_zip_GZIPInputStream_readUInt_java_io_InputStream_R_long,
	(void *) M_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int,
	(void *) M_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int,
	(void *) M_java_util_zip_GZIPInputStream_skipBytes_java_io_InputStream_int,
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
	{ "available", "()I" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([B)I" },
	{ "read", "([BII)I" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
	{ "ensureOpen", "()V" },
	{ "fill", "()V" },
	{ "readHeader", "(Ljava/io/InputStream;)I" },
	{ "readTrailer", "()Z" },
	{ "readUInt", "(Ljava/io/InputStream;)J" },
	{ "readUShort", "(Ljava/io/InputStream;)I" },
	{ "readUByte", "(Ljava/io/InputStream;)I" },
	{ "skipBytes", "(Ljava/io/InputStream;I)V" },
};

static FieldMetadata fields[] {
	{ "crc", &class_java_util_zip_CRC32, offsetof(java_util_zip_GZIPInputStream, F_crc), "Ljava/util/zip/CRC32;", 4 },
	{ "eos", &class_boolean, offsetof(java_util_zip_GZIPInputStream, F_eos), "Z", 4 },
	{ "closed", &class_boolean, offsetof(java_util_zip_GZIPInputStream, F_closed), "Z", 2 },
	{ "GZIP_MAGIC", &class_int, (intptr_t) &SF_java_util_zip_GZIPInputStream_GZIP_MAGIC, "I", 25 },
	{ "FTEXT", &class_int, (intptr_t) &SF_java_util_zip_GZIPInputStream_FTEXT, "I", 26 },
	{ "FHCRC", &class_int, (intptr_t) &SF_java_util_zip_GZIPInputStream_FHCRC, "I", 26 },
	{ "FEXTRA", &class_int, (intptr_t) &SF_java_util_zip_GZIPInputStream_FEXTRA, "I", 26 },
	{ "FNAME", &class_int, (intptr_t) &SF_java_util_zip_GZIPInputStream_FNAME, "I", 26 },
	{ "FCOMMENT", &class_int, (intptr_t) &SF_java_util_zip_GZIPInputStream_FCOMMENT, "I", 26 },
	{ "tmpbuf", getArrayClass(&class_byte, 1), offsetof(java_util_zip_GZIPInputStream, F_tmpbuf), "[B", 2 },
};

static MethodMetadata methods[] {
	{ "ensureOpen", (intptr_t) M_java_util_zip_GZIPInputStream_ensureOpen, VTABLE_java_util_zip_GZIPInputStream_ensureOpen, "()V", 2 },
	{ "<init>", (intptr_t) init_java_util_zip_GZIPInputStream_java_io_InputStream_int, 0, "(Ljava/io/InputStream;I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_GZIPInputStream_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 1 },
	{ "read", (intptr_t) M_java_util_zip_GZIPInputStream_read_Array1_byte_int_int_R_int, VTABLE_java_util_zip_GZIPInputStream_read_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "close", (intptr_t) M_java_util_zip_GZIPInputStream_close, VTABLE_java_util_zip_GZIPInputStream_close, "()V", 1 },
	{ "readHeader", (intptr_t) M_java_util_zip_GZIPInputStream_readHeader_java_io_InputStream_R_int, VTABLE_java_util_zip_GZIPInputStream_readHeader_java_io_InputStream_R_int, "(Ljava/io/InputStream;)I", 2 },
	{ "readTrailer", (intptr_t) M_java_util_zip_GZIPInputStream_readTrailer_R_boolean, VTABLE_java_util_zip_GZIPInputStream_readTrailer_R_boolean, "()Z", 2 },
	{ "readUInt", (intptr_t) M_java_util_zip_GZIPInputStream_readUInt_java_io_InputStream_R_long, VTABLE_java_util_zip_GZIPInputStream_readUInt_java_io_InputStream_R_long, "(Ljava/io/InputStream;)J", 2 },
	{ "readUShort", (intptr_t) M_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int, VTABLE_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int, "(Ljava/io/InputStream;)I", 2 },
	{ "readUByte", (intptr_t) M_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int, VTABLE_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int, "(Ljava/io/InputStream;)I", 2 },
	{ "skipBytes", (intptr_t) M_java_util_zip_GZIPInputStream_skipBytes_java_io_InputStream_int, VTABLE_java_util_zip_GZIPInputStream_skipBytes_java_io_InputStream_int, "(Ljava/io/InputStream;I)V", 2 },
};

Class class_java_util_zip_GZIPInputStream{
		.nativeName = (intptr_t) "java/util/zip/GZIPInputStream",
		.parentClass = (intptr_t) &class_java_util_zip_InflaterInputStream,
		.size = sizeof(java_util_zip_GZIPInputStream),
		.classVtable = (intptr_t) vtable_java_util_zip_GZIPInputStream,
		.staticInitializer = (intptr_t) clinit_java_util_zip_GZIPInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_GZIPInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_GZIPInputStream = registerClass(&class_java_util_zip_GZIPInputStream);

}

