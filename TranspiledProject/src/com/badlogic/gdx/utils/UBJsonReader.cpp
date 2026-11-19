#include "com/badlogic/gdx/utils/UBJsonReader.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/io/DataInputStream.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/io/InputStream.h"
#include "java/io/BufferedInputStream.h"
#include "com/badlogic/gdx/utils/BaseJsonReader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/io/IOException.h"
#include "java/io/FilterInputStream.h"
#include "com/badlogic/gdx/utils/JsonValue_ValueType.h"
#include "com/badlogic/gdx/utils/UBJsonReader.h"
#include "java/io/Closeable.h"
#include "com/badlogic/gdx/utils/SerializationException.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"

extern "C" {


void mark_com_badlogic_gdx_utils_UBJsonReader(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_UBJsonReader *) object;
}

void clinit_com_badlogic_gdx_utils_UBJsonReader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_UBJsonReader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_UBJsonReader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((com_badlogic_gdx_utils_UBJsonReader *) NULL_CHECK((frame[0].o)))->F_oldFormat = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:parse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(38);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[2].o));
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(43);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(40);
	frame[3].o = sp[0].o;
	LINE_NUMBER(41);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(43);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(44);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_UBJsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:parse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_int_R_java_io_BufferedInputStream])(ctx, (frame[1].o), (8192));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(51);
	frame[2].o = sp[0].o;
	LINE_NUMBER(52);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error parsing file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:parse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[0].o, sp[1].o, temp0);
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(60);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(60);
	frame[3].o = sp[0].o;
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(61);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:parse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(65);
	if ((frame[2].i) != (91)) goto label_1;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parseArray_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseArray_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(67);
	if ((frame[2].i) != (123)) goto label_3;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parseObject_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseObject_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(69);
	if ((frame[2].i) != (90)) goto label_5;
	}
	{
	LINE_NUMBER(70);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_nullValue;
	init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(71);
	if ((frame[2].i) != (84)) goto label_7;
	}
	{
	LINE_NUMBER(72);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	init_com_badlogic_gdx_utils_JsonValue_boolean(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(73);
	if ((frame[2].i) != (70)) goto label_9;
	}
	{
	LINE_NUMBER(74);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	init_com_badlogic_gdx_utils_JsonValue_boolean(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(75);
	if ((frame[2].i) != (66)) goto label_11;
	}
	{
	LINE_NUMBER(76);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short])(ctx, (frame[0].o), (frame[1].o));
	init_com_badlogic_gdx_utils_JsonValue_long(ctx, sp[0].o, (jlong(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(77);
	if ((frame[2].i) != (85)) goto label_13;
	}
	{
	LINE_NUMBER(78);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short])(ctx, (frame[0].o), (frame[1].o));
	init_com_badlogic_gdx_utils_JsonValue_long(ctx, sp[0].o, (jlong(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(79);
	if ((frame[2].i) != (105)) goto label_15;
	}
	{
	LINE_NUMBER(80);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((com_badlogic_gdx_utils_UBJsonReader *) NULL_CHECK((frame[0].o)))->F_oldFormat) == 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	jlong temp1 = jlong(temp0);
	sp[0].l = temp1;
	sp += 1;
	goto label_18;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	jlong temp1 = jlong(temp0);
	sp[0].l = temp1;
	sp += 1;
	}
label_18:;
	POP_N(2); // Pop method args
	init_com_badlogic_gdx_utils_JsonValue_long(ctx, sp[0].o, sp[1].l);
	popStackFrame(ctx);
	INST_ARETURN();
label_15:;
	{
	LINE_NUMBER(81);
	if ((frame[2].i) != (73)) goto label_19;
	}
	{
	LINE_NUMBER(82);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((com_badlogic_gdx_utils_UBJsonReader *) NULL_CHECK((frame[0].o)))->F_oldFormat) == 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	jlong temp1 = jlong(temp0);
	sp[0].l = temp1;
	sp += 1;
	goto label_22;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	jlong temp1 = jlong(temp0);
	sp[0].l = temp1;
	sp += 1;
	}
label_22:;
	POP_N(2); // Pop method args
	init_com_badlogic_gdx_utils_JsonValue_long(ctx, sp[0].o, sp[1].l);
	popStackFrame(ctx);
	INST_ARETURN();
label_19:;
	{
	LINE_NUMBER(83);
	if ((frame[2].i) != (108)) goto label_23;
	}
	{
	LINE_NUMBER(84);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	init_com_badlogic_gdx_utils_JsonValue_long(ctx, sp[0].o, (jlong(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(85);
	if ((frame[2].i) != (76)) goto label_25;
	}
	{
	LINE_NUMBER(86);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	jlong temp0 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, (frame[1].o));
	init_com_badlogic_gdx_utils_JsonValue_long(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(87);
	if ((frame[2].i) != (100)) goto label_27;
	}
	{
	LINE_NUMBER(88);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	jfloat temp0 = (jfloat)((func_java_io_DataInputStream_readFloat_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readFloat_R_float])(ctx, (frame[1].o));
	init_com_badlogic_gdx_utils_JsonValue_double(ctx, sp[0].o, (jdouble(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(89);
	if ((frame[2].i) != (68)) goto label_29;
	}
	{
	LINE_NUMBER(90);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	jdouble temp0 = (jdouble)((func_java_io_DataInputStream_readDouble_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readDouble_R_double])(ctx, (frame[1].o));
	init_com_badlogic_gdx_utils_JsonValue_double(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(91);
	if ((frame[2].i) == (115)) goto label_31;
	}
	{
	if ((frame[2].i) != (83)) goto label_32;
	}
label_31:;
	{
	LINE_NUMBER(92);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	init_com_badlogic_gdx_utils_JsonValue_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(93);
	if ((frame[2].i) == (97)) goto label_33;
	}
	{
	if ((frame[2].i) != (65)) goto label_34;
	}
label_33:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parseData_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseData_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_34:;
	{
	LINE_NUMBER(95);
	if ((frame[2].i) != (67)) goto label_35;
	}
	{
	LINE_NUMBER(96);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	jint temp0 = (jint)((func_java_io_DataInputStream_readChar_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readChar_R_char])(ctx, (frame[1].o));
	init_com_badlogic_gdx_utils_JsonValue_long(ctx, sp[0].o, (jlong(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_35:;
	{
	LINE_NUMBER(98);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unrecognized data type"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_UBJsonReader_parseArray_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:parseArray", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(103);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(104);
	frame[4].i = (jint(0));
	LINE_NUMBER(105);
	if ((frame[3].i) != (36)) goto label_4;
	}
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(107);
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp1;
	}
label_4:;
	{
	LINE_NUMBER(109);
	frame[5].i = (jint(-1));
	LINE_NUMBER(110);
	if ((frame[3].i) != (35)) goto label_8;
	}
	{
	LINE_NUMBER(111);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jlong(-1ll)));
	frame[5].i = (jint(temp0));
	LINE_NUMBER(112);
	if ((frame[5].i) >= 0) goto label_11;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unrecognized data type"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(113);
	if ((frame[5].i) != 0) goto label_12;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(114);
	if ((frame[4].i) != 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ILOAD(4);
label_14:;
	INST_ISTORE(3);
label_8:;
	{
	LINE_NUMBER(116);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(117);
	frame[7].i = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_17;
	}
	{
	if ((frame[3].i) == (93)) goto label_17;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(120);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_parent = (jref) (frame[2].o);
	LINE_NUMBER(121);
	if ((frame[6].o) == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(122);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_prev = (jref) (frame[6].o);
	LINE_NUMBER(123);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[6].o)))->F_next = (jref) (frame[8].o);
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(125);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_child = (jref) (frame[8].o);
	}
label_24:;
	{
	LINE_NUMBER(126);
	frame[6].o = (frame[8].o);
	LINE_NUMBER(127);
	INST_IINC(7, 1);
	LINE_NUMBER(128);
	if ((frame[5].i) <= 0) goto label_27;
	}
	{
	if ((frame[7].i) < (frame[5].i)) goto label_27;
	}
	goto label_17;
label_27:;
	{
	LINE_NUMBER(129);
	if ((frame[4].i) != 0) goto label_28;
	}
	{
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_29;
	}
label_28:;
	INST_ILOAD(4);
label_29:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(130);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(131);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_size = (frame[7].i);
	LINE_NUMBER(132);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_last = (jref) (frame[6].o);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_UBJsonReader_parseObject_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:parseObject", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_object;
	init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(138);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(139);
	frame[4].i = (jint(0));
	LINE_NUMBER(140);
	if ((frame[3].i) != (36)) goto label_4;
	}
	{
	LINE_NUMBER(141);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(142);
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp1;
	}
label_4:;
	{
	LINE_NUMBER(144);
	frame[5].i = (jint(-1));
	LINE_NUMBER(145);
	if ((frame[3].i) != (35)) goto label_8;
	}
	{
	LINE_NUMBER(146);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jlong(-1ll)));
	frame[5].i = (jint(temp0));
	LINE_NUMBER(147);
	if ((frame[5].i) >= 0) goto label_11;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unrecognized data type"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(148);
	if ((frame[5].i) != 0) goto label_12;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	}
label_8:;
	{
	LINE_NUMBER(151);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(152);
	frame[7].i = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(153);
	jint temp0 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_15;
	}
	{
	if ((frame[3].i) == (125)) goto label_15;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[3].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[4].i) != 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_ILOAD(4);
label_19:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[0].o, sp[1].o, sp[2].i);
	frame[9].o = sp[0].o;
	LINE_NUMBER(156);
	((func_com_badlogic_gdx_utils_JsonValue_setName_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_setName_java_lang_String])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(157);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[9].o)))->F_parent = (jref) (frame[2].o);
	LINE_NUMBER(158);
	if ((frame[6].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(159);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[9].o)))->F_prev = (jref) (frame[6].o);
	LINE_NUMBER(160);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[6].o)))->F_next = (jref) (frame[9].o);
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(162);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_child = (jref) (frame[9].o);
	}
label_26:;
	{
	LINE_NUMBER(163);
	frame[6].o = (frame[9].o);
	LINE_NUMBER(164);
	INST_IINC(7, 1);
	LINE_NUMBER(165);
	if ((frame[5].i) <= 0) goto label_29;
	}
	{
	if ((frame[7].i) < (frame[5].i)) goto label_29;
	}
	goto label_15;
label_29:;
	{
	LINE_NUMBER(166);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(167);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(168);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_size = (frame[7].i);
	LINE_NUMBER(169);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_last = (jref) (frame[6].o);
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_UBJsonReader_parseData_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:parseData", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(177);
	if ((frame[2].i) != (65)) goto label_2;
	}
	{
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_UBJsonReader_readUInt_java_io_DataInputStream_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_readUInt_java_io_DataInputStream_R_long])(ctx, (frame[0].o), (frame[1].o));
	sp[0].l = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short])(ctx, (frame[0].o), (frame[1].o));
	jlong temp1 = jlong(temp0);
	sp[0].l = temp1;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[4].i = (jint(sp[0].l));
	LINE_NUMBER(178);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(179);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(180);
	frame[7].l = (jlong(0));
	}
label_7:;
	{
	if ((longCompare((frame[7].l), (jlong((frame[4].i))))) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(182);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[9].o)))->F_parent = (jref) (frame[5].o);
	LINE_NUMBER(183);
	if ((frame[6].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(184);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[6].o)))->F_next = (jref) (frame[9].o);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(186);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_child = (jref) (frame[9].o);
	}
label_14:;
	{
	LINE_NUMBER(187);
	frame[6].o = (frame[9].o);
	LINE_NUMBER(180);
	frame[7].l = ((frame[7].l) + (jlong(1)));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(189);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_size = (frame[4].i);
	LINE_NUMBER(190);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_last = (jref) (frame[6].o);
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:parseString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1, jbyte param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:parseString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(199);
	frame[4].l = (jlong(-1ll));
	LINE_NUMBER(200);
	if ((frame[3].i) != (83)) goto label_2;
	}
	{
	LINE_NUMBER(201);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long])(ctx, (frame[0].o), (frame[1].o), (jint(1)), (jlong(-1ll)));
	frame[4].l = temp0;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(202);
	if ((frame[3].i) != (115)) goto label_5;
	}
	{
	LINE_NUMBER(203);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short])(ctx, (frame[0].o), (frame[1].o));
	frame[4].l = (jlong(temp0));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(204);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long])(ctx, (frame[0].o), (frame[1].o), (frame[3].i), (jint(0)), (jlong(-1ll)));
	frame[4].l = temp0;
	}
label_4:;
	{
	LINE_NUMBER(205);
	if ((longCompare((frame[4].l), (jlong(0)))) >= 0) goto label_7;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unrecognized data type, string expected"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(206);
	if ((longCompare((frame[4].l), (jlong(0)))) <= 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[4].l));
	sp += 1;
	goto label_9;
	}
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_9:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long(jcontext ctx, jobject self, jobject param0, jbool param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:parseSize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	jlong temp1 = (jlong)((func_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long])(ctx, sp[0].o, sp[1].o, temp0, (frame[2].i), (frame[3].l));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long(jcontext ctx, jobject self, jobject param0, jbyte param1, jbool param2, jlong param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:parseSize", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].l = param3;
	{
	LINE_NUMBER(215);
	if ((frame[2].i) != (105)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (jlong(temp0));
	}
label_1:;
	{
	LINE_NUMBER(216);
	if ((frame[2].i) != (73)) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_UBJsonReader_readUShort_java_io_DataInputStream_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_readUShort_java_io_DataInputStream_R_int])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (jlong(temp0));
	}
label_2:;
	{
	LINE_NUMBER(217);
	if ((frame[2].i) != (108)) goto label_3;
	}
	{
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_UBJsonReader_readUInt_java_io_DataInputStream_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_UBJsonReader_readUInt_java_io_DataInputStream_R_long])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(218);
	if ((frame[2].i) != (76)) goto label_4;
	}
	{
	jlong temp0 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(219);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(220);
	frame[6].l = ((jlong(((jshort((frame[2].i))) & (255)))) << (24));
	LINE_NUMBER(221);
	jlong temp0 = frame[6].l;
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[6].l = (temp0 | ((jlong(((jshort(temp1)) & (255)))) << (16)));
	LINE_NUMBER(222);
	jlong temp2 = frame[6].l;
	jint temp3 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[6].l = (temp2 | ((jlong(((jshort(temp3)) & (255)))) << (8)));
	LINE_NUMBER(223);
	jlong temp4 = frame[6].l;
	jint temp5 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[6].l = (temp4 | (jlong(((jshort(temp5)) & (255)))));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (frame[6].l);
	}
label_5:;
	{
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return (frame[4].l);
	}

	popStackFrame(ctx);
}

jshort M_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:readUChar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(230);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (jshort(((jshort(temp0)) & (255))));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_UBJsonReader_readUShort_java_io_DataInputStream_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:readUShort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(234);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 & (jint(65535)));
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_UBJsonReader_readUInt_java_io_DataInputStream_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:readUInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(238);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return ((jlong(temp0)) & (jlong(-1ll)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/UBJsonReader:readString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint((frame[2].l))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(243);
	((func_java_io_DataInputStream_readFully_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(244);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_byte_java_lang_String(ctx, sp[0].o, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_UBJsonReader[] {
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
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_parseArray_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_parseObject_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_parseData_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_readUShort_java_io_DataInputStream_R_int,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_readUInt_java_io_DataInputStream_R_long,
	(void *) M_com_badlogic_gdx_utils_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String,
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
	{ "parse", "(Ljava/io/InputStream;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "parse", "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "parse", "(Ljava/io/DataInputStream;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "parse", "(Ljava/io/DataInputStream;B)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "parseArray", "(Ljava/io/DataInputStream;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "parseObject", "(Ljava/io/DataInputStream;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "parseData", "(Ljava/io/DataInputStream;B)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "parseString", "(Ljava/io/DataInputStream;B)Ljava/lang/String;" },
	{ "parseString", "(Ljava/io/DataInputStream;ZB)Ljava/lang/String;" },
	{ "parseSize", "(Ljava/io/DataInputStream;ZJ)J" },
	{ "parseSize", "(Ljava/io/DataInputStream;BZJ)J" },
	{ "readUChar", "(Ljava/io/DataInputStream;)S" },
	{ "readUShort", "(Ljava/io/DataInputStream;)I" },
	{ "readUInt", "(Ljava/io/DataInputStream;)J" },
	{ "readString", "(Ljava/io/DataInputStream;J)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_BaseJsonReader, };

static FieldMetadata fields[] {
	{ "oldFormat", &class_boolean, offsetof(com_badlogic_gdx_utils_UBJsonReader, F_oldFormat), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_UBJsonReader, 0, "()V", 1 },
	{ "parse", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/io/InputStream;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "parse", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_UBJsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "parse", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/io/DataInputStream;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "parse", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_UBJsonReader_parse_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/io/DataInputStream;B)Lcom/badlogic/gdx/utils/JsonValue;", 4 },
	{ "parseArray", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_parseArray_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseArray_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/io/DataInputStream;)Lcom/badlogic/gdx/utils/JsonValue;", 4 },
	{ "parseObject", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_parseObject_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseObject_java_io_DataInputStream_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/io/DataInputStream;)Lcom/badlogic/gdx/utils/JsonValue;", 4 },
	{ "parseData", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_parseData_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseData_java_io_DataInputStream_byte_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/io/DataInputStream;B)Lcom/badlogic/gdx/utils/JsonValue;", 4 },
	{ "parseString", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_byte_R_java_lang_String, "(Ljava/io/DataInputStream;B)Ljava/lang/String;", 4 },
	{ "parseString", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseString_java_io_DataInputStream_boolean_byte_R_java_lang_String, "(Ljava/io/DataInputStream;ZB)Ljava/lang/String;", 4 },
	{ "parseSize", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long, VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_boolean_long_R_long, "(Ljava/io/DataInputStream;ZJ)J", 4 },
	{ "parseSize", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long, VTABLE_com_badlogic_gdx_utils_UBJsonReader_parseSize_java_io_DataInputStream_byte_boolean_long_R_long, "(Ljava/io/DataInputStream;BZJ)J", 4 },
	{ "readUChar", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short, VTABLE_com_badlogic_gdx_utils_UBJsonReader_readUChar_java_io_DataInputStream_R_short, "(Ljava/io/DataInputStream;)S", 4 },
	{ "readUShort", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_readUShort_java_io_DataInputStream_R_int, VTABLE_com_badlogic_gdx_utils_UBJsonReader_readUShort_java_io_DataInputStream_R_int, "(Ljava/io/DataInputStream;)I", 4 },
	{ "readUInt", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_readUInt_java_io_DataInputStream_R_long, VTABLE_com_badlogic_gdx_utils_UBJsonReader_readUInt_java_io_DataInputStream_R_long, "(Ljava/io/DataInputStream;)J", 4 },
	{ "readString", (intptr_t) M_com_badlogic_gdx_utils_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_UBJsonReader_readString_java_io_DataInputStream_long_R_java_lang_String, "(Ljava/io/DataInputStream;J)Ljava/lang/String;", 4 },
};

Class class_com_badlogic_gdx_utils_UBJsonReader{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/UBJsonReader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_UBJsonReader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_UBJsonReader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_UBJsonReader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_UBJsonReader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_UBJsonReader = registerClass(&class_com_badlogic_gdx_utils_UBJsonReader);

}

