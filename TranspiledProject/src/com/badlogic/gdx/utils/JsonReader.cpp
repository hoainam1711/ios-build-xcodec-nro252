#include "com/badlogic/gdx/utils/JsonReader.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/io/PrintStream.h"
#include "java/io/InputStream.h"
#include "com/badlogic/gdx/utils/BaseJsonReader.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/util/Arrays.h"
#include "java/io/InputStreamReader.h"
#include "java/io/IOException.h"
#include "com/badlogic/gdx/utils/JsonValue_ValueType.h"
#include "java/io/Closeable.h"
#include "java/io/Reader.h"
#include "com/badlogic/gdx/utils/SerializationException.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "java/lang/Long.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/NumberFormatException.h"
#include "com/badlogic/gdx/utils/JsonReader.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_JsonReader__json_actions;
jobject SF_com_badlogic_gdx_utils_JsonReader__json_key_offsets;
jobject SF_com_badlogic_gdx_utils_JsonReader__json_trans_keys;
jobject SF_com_badlogic_gdx_utils_JsonReader__json_single_lengths;
jobject SF_com_badlogic_gdx_utils_JsonReader__json_range_lengths;
jobject SF_com_badlogic_gdx_utils_JsonReader__json_index_offsets;
jobject SF_com_badlogic_gdx_utils_JsonReader__json_indicies;
jobject SF_com_badlogic_gdx_utils_JsonReader__json_trans_targs;
jobject SF_com_badlogic_gdx_utils_JsonReader__json_trans_actions;
jobject SF_com_badlogic_gdx_utils_JsonReader__json_eof_actions;
jint SF_com_badlogic_gdx_utils_JsonReader_json_start;
jint SF_com_badlogic_gdx_utils_JsonReader_json_first_final;
jint SF_com_badlogic_gdx_utils_JsonReader_json_error;
jint SF_com_badlogic_gdx_utils_JsonReader_json_en_object;
jint SF_com_badlogic_gdx_utils_JsonReader_json_en_array;
jint SF_com_badlogic_gdx_utils_JsonReader_json_en_main;

void mark_com_badlogic_gdx_utils_JsonReader(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_JsonReader__json_actions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_actions)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_actions, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonReader__json_key_offsets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_key_offsets)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_key_offsets, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonReader__json_trans_keys)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_trans_keys)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_trans_keys, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonReader__json_single_lengths)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_single_lengths)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_single_lengths, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonReader__json_range_lengths)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_range_lengths)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_range_lengths, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonReader__json_index_offsets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_index_offsets)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_index_offsets, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonReader__json_indicies)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_indicies)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_indicies, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonReader__json_trans_targs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_trans_targs)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_trans_targs, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonReader__json_trans_actions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_trans_actions)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_trans_actions, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonReader__json_eof_actions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_eof_actions)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonReader__json_eof_actions, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_JsonReader *) object;
	if (self->F_elements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elements)->clazz)->markFunction)((jobject) self->F_elements, mark, depth + 1);
	if (self->F_root)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_root)->clazz)->markFunction)((jobject) self->F_root, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
}

void init_com_badlogic_gdx_utils_JsonReader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(665);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (8));
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK(sp[0].o))->F_elements = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:parse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:parse", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject) createArray(ctx, &class_char, (1024));
	frame[2].o = sp[0].o;
	LINE_NUMBER(45);
	frame[3].i = (jint(0));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(48);
	jint temp0 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, (frame[1].o), (frame[2].o), (frame[3].i), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)));
	frame[4].i = temp0;
	LINE_NUMBER(49);
	if ((frame[4].i) != (jint(-1))) goto label_11;
	}
	goto label_1;
label_11:;
	{
	LINE_NUMBER(50);
	if ((frame[4].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((((jarray) nullCheck(ctx, (frame[2].o)))->length) * (jint(2))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(52);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[5].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(53);
	frame[2].o = (frame[5].o);
	LINE_NUMBER(54);
	goto label_17;
	}
label_12:;
	{
	LINE_NUMBER(55);
	frame[3].i = ((frame[3].i) + (frame[4].i));
	}
label_17:;
	LINE_NUMBER(56);
	{ popExceptionFrames(frameRef, 2); goto label_0; }
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(60);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(61);
	goto label_19;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(57);
	frame[4].o = sp[0].o;
	LINE_NUMBER(58);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error reading input."_j))), (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(60);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(61);
	throwException(ctx, (frame[6].o));	}
label_19:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[2].o), (jint(0)), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:parse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	clinit_java_io_InputStreamReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	init_java_io_InputStreamReader_java_io_InputStream_java_lang_String(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(71);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(69);
	frame[3].o = sp[0].o;
	LINE_NUMBER(70);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error reading stream."_j))), (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:parse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_reader_java_lang_String_R_java_io_Reader) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_reader_java_lang_String_R_java_io_Reader])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(81);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(79);
	frame[3].o = sp[0].o;
	LINE_NUMBER(80);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(84);
	frame[3].o = sp[0].o;
	LINE_NUMBER(85);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error parsing file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[40];
	auto stack = &frame[30];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:parse", 40 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(90);
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_stop = (jint(0));
	LINE_NUMBER(91);
	frame[5].i = (frame[2].i);
	frame[6].i = (frame[3].i);
	frame[7].i = (frame[6].i);
	frame[8].i = (jint(0));
	LINE_NUMBER(92);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(94);
	frame[10].i = (jint(0));
	LINE_NUMBER(95);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(96);
	frame[12].i = (jint(0));
	frame[13].i = (jint(0));
	frame[14].i = (jint(0));
	LINE_NUMBER(97);
	frame[15].o = (jobject(nullptr));
	LINE_NUMBER(99);
	frame[16].i = (jint(0));
	LINE_NUMBER(100);
	if ((frame[16].i) == 0) goto label_16;
	}
	clinit_java_lang_System(ctx);
	(sp++)->o = SF_java_lang_System_out;
	POP_N(1); // Pop method args
	((func_java_io_PrintStream_println) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println])(ctx, sp[0].o);
label_16:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	LINE_NUMBER(106);
	frame[4].i = (jint(1));
	LINE_NUMBER(107);
	frame[8].i = (jint(0));
	LINE_NUMBER(113);
	frame[18].i = (jint(0));
	LINE_NUMBER(117);
	frame[22].i = (jint(0));
	}
label_37:;
	{
	LINE_NUMBER(121);
	switch((frame[22].i)) {
		case 0: goto label_38;
		case 1: goto label_39;
		case 2: goto label_40;
		case 3: goto label_41;
		case 4: goto label_42;
		case 5: goto label_41;
		default: goto label_41;
	}
	}
label_38:;
	{
	LINE_NUMBER(123);
	if ((frame[5].i) != (frame[6].i)) goto label_43;
	}
	{
	LINE_NUMBER(124);
	frame[22].i = (jint(4));
	LINE_NUMBER(125);
	goto label_37;
	}
label_43:;
	{
	LINE_NUMBER(127);
	if ((frame[4].i) != 0) goto label_39;
	}
	{
	LINE_NUMBER(128);
	frame[22].i = (jint(5));
	LINE_NUMBER(129);
	goto label_37;
	}
label_39:;
	{
	LINE_NUMBER(134);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_key_offsets;
	frame[21].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[4].i)));
	LINE_NUMBER(135);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_index_offsets;
	frame[18].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[4].i)));
	LINE_NUMBER(136);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_single_lengths;
	frame[17].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i)));
	LINE_NUMBER(137);
	if ((frame[17].i) <= 0) goto label_51;
	}
	{
	LINE_NUMBER(138);
	frame[23].i = (frame[21].i);
	LINE_NUMBER(140);
	frame[25].i = (((frame[21].i) + (frame[17].i)) - (jint(1)));
	}
label_54:;
	{
	LINE_NUMBER(142);
	if ((frame[25].i) >= (frame[23].i)) goto label_55;
	}
	goto label_56;
label_55:;
	{
	LINE_NUMBER(144);
	frame[24].i = ((frame[23].i) + (((frame[25].i) - (frame[23].i)) >> (jint(1))));
	LINE_NUMBER(145);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i));
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_trans_keys;
	if (temp0 >= ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[24].i)))) goto label_58;
	}
	{
	LINE_NUMBER(146);
	frame[25].i = ((frame[24].i) - (jint(1)));
	goto label_54;
	}
label_58:;
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i));
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_trans_keys;
	if (temp0 <= ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[24].i)))) goto label_60;
	}
	{
	LINE_NUMBER(148);
	frame[23].i = ((frame[24].i) + (jint(1)));
	goto label_54;
	}
label_60:;
	{
	LINE_NUMBER(150);
	frame[18].i = ((frame[18].i) + ((frame[24].i) - (frame[21].i)));
	LINE_NUMBER(151);
	goto label_63;
	}
label_56:;
	{
	LINE_NUMBER(154);
	frame[21].i = ((frame[21].i) + (frame[17].i));
	LINE_NUMBER(155);
	frame[18].i = ((frame[18].i) + (frame[17].i));
	}
label_51:;
	{
	LINE_NUMBER(158);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_range_lengths;
	frame[17].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i)));
	LINE_NUMBER(159);
	if ((frame[17].i) <= 0) goto label_63;
	}
	{
	LINE_NUMBER(160);
	frame[23].i = (frame[21].i);
	LINE_NUMBER(162);
	frame[25].i = (((frame[21].i) + ((frame[17].i) << (jint(1)))) - (jint(2)));
	}
label_68:;
	{
	LINE_NUMBER(164);
	if ((frame[25].i) >= (frame[23].i)) goto label_69;
	}
	goto label_70;
label_69:;
	{
	LINE_NUMBER(166);
	frame[24].i = ((frame[23].i) + ((((frame[25].i) - (frame[23].i)) >> (jint(1))) & (-2)));
	LINE_NUMBER(167);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i));
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_trans_keys;
	if (temp0 >= ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[24].i)))) goto label_72;
	}
	{
	LINE_NUMBER(168);
	frame[25].i = ((frame[24].i) - (jint(2)));
	goto label_68;
	}
label_72:;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i));
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_trans_keys;
	if (temp0 <= ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[24].i) + (jint(1)))))) goto label_74;
	}
	{
	LINE_NUMBER(170);
	frame[23].i = ((frame[24].i) + (jint(2)));
	goto label_68;
	}
label_74:;
	{
	LINE_NUMBER(172);
	frame[18].i = ((frame[18].i) + (((frame[24].i) - (frame[21].i)) >> (jint(1))));
	LINE_NUMBER(173);
	goto label_63;
	}
label_70:;
	{
	LINE_NUMBER(176);
	frame[18].i = ((frame[18].i) + (frame[17].i));
	}
label_63:;
	{
	LINE_NUMBER(180);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_indicies;
	frame[18].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[18].i)));
	LINE_NUMBER(181);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_trans_targs;
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[18].i)));
	LINE_NUMBER(183);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_trans_actions;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[18].i))) == 0) goto label_40;
	}
	{
	LINE_NUMBER(184);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_trans_actions;
	frame[19].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[18].i)));
	LINE_NUMBER(185);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_actions;
	jint temp0 = frame[19].i;
	INST_IINC(19, 1);
	frame[20].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	}
label_81:;
	{
	LINE_NUMBER(186);
	jint temp0 = frame[20].i;
	INST_IINC(20, -1);
	if (temp0 <= 0) goto label_40;
	}
	{
	LINE_NUMBER(187);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_actions;
	jint temp0 = frame[19].i;
	INST_IINC(19, 1);
	switch(((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0))) {
		case 0: goto label_83;
		case 1: goto label_84;
		case 2: goto label_85;
		case 3: goto label_86;
		case 4: goto label_87;
		case 5: goto label_88;
		case 6: goto label_89;
		case 7: goto label_90;
		case 8: goto label_91;
		default: goto label_92;
	}
	}
label_83:;
	{
	LINE_NUMBER(191);
	frame[13].i = (jint(1));
	LINE_NUMBER(193);
	goto label_92;
	}
label_84:;
	{
	LINE_NUMBER(197);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[1].o), (frame[10].i), ((frame[5].i) - (frame[10].i)));
	frame[23].o = sp[0].o;
	LINE_NUMBER(198);
	if ((frame[12].i) == 0) goto label_95;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_unescape_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_unescape_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[23].o));
	frame[23].o = sp[0].o;
	}
label_95:;
	{
	LINE_NUMBER(200);
	if ((frame[13].i) == 0) goto label_96;
	}
	{
	LINE_NUMBER(201);
	frame[13].i = (jint(0));
	LINE_NUMBER(202);
	if ((frame[16].i) == 0) goto label_99;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[23].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_99:;
	{
	LINE_NUMBER(203);
	frame[11].o = (frame[23].o);
	goto label_100;
	}
label_96:;
	{
	LINE_NUMBER(205);
	frame[24].o = (frame[11].o);
	LINE_NUMBER(206);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(207);
	if ((frame[14].i) == 0) goto label_103;
	}
	{
	LINE_NUMBER(208);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[23].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[23].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 == 0) goto label_105;
	}
	{
	LINE_NUMBER(209);
	if ((frame[16].i) == 0) goto label_107;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"boolean: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[24].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"=true"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_107:;
	{
	LINE_NUMBER(210);
	((func_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean])(ctx, (frame[0].o), (frame[24].o), (jint(1)));
	LINE_NUMBER(211);
	goto label_100;
	}
label_105:;
	{
	LINE_NUMBER(212);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[23].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[23].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	if (temp0 == 0) goto label_109;
	}
	{
	LINE_NUMBER(213);
	if ((frame[16].i) == 0) goto label_111;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"boolean: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[24].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"=false"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_111:;
	{
	LINE_NUMBER(214);
	((func_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean])(ctx, (frame[0].o), (frame[24].o), (jint(0)));
	LINE_NUMBER(215);
	goto label_100;
	}
label_109:;
	{
	LINE_NUMBER(216);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[23].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[23].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	if (temp0 == 0) goto label_113;
	}
	{
	LINE_NUMBER(217);
	((func_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[24].o), (jobject(nullptr)));
	LINE_NUMBER(218);
	goto label_100;
	}
label_113:;
	{
	LINE_NUMBER(220);
	frame[25].i = (jint(0));
	frame[26].i = (jint(1));
	LINE_NUMBER(222);
	frame[27].i = (frame[10].i);
	}
label_118:;
	{
	if ((frame[27].i) >= (frame[5].i)) goto label_119;
	}
	{
	LINE_NUMBER(223);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[27].i)))) {
		case 43: goto label_121;
		case 44: goto label_122;
		case 45: goto label_121;
		case 46: goto label_123;
		case 47: goto label_122;
		case 48: goto label_121;
		case 49: goto label_121;
		case 50: goto label_121;
		case 51: goto label_121;
		case 52: goto label_121;
		case 53: goto label_121;
		case 54: goto label_121;
		case 55: goto label_121;
		case 56: goto label_121;
		case 57: goto label_121;
		case 58: goto label_122;
		case 59: goto label_122;
		case 60: goto label_122;
		case 61: goto label_122;
		case 62: goto label_122;
		case 63: goto label_122;
		case 64: goto label_122;
		case 65: goto label_122;
		case 66: goto label_122;
		case 67: goto label_122;
		case 68: goto label_122;
		case 69: goto label_123;
		case 70: goto label_122;
		case 71: goto label_122;
		case 72: goto label_122;
		case 73: goto label_122;
		case 74: goto label_122;
		case 75: goto label_122;
		case 76: goto label_122;
		case 77: goto label_122;
		case 78: goto label_122;
		case 79: goto label_122;
		case 80: goto label_122;
		case 81: goto label_122;
		case 82: goto label_122;
		case 83: goto label_122;
		case 84: goto label_122;
		case 85: goto label_122;
		case 86: goto label_122;
		case 87: goto label_122;
		case 88: goto label_122;
		case 89: goto label_122;
		case 90: goto label_122;
		case 91: goto label_122;
		case 92: goto label_122;
		case 93: goto label_122;
		case 94: goto label_122;
		case 95: goto label_122;
		case 96: goto label_122;
		case 97: goto label_122;
		case 98: goto label_122;
		case 99: goto label_122;
		case 100: goto label_122;
		case 101: goto label_123;
		default: goto label_122;
	}
	}
label_121:;
	LINE_NUMBER(236);
	goto label_124;
label_123:;
	{
	LINE_NUMBER(240);
	frame[25].i = (jint(1));
	LINE_NUMBER(241);
	frame[26].i = (jint(0));
	LINE_NUMBER(242);
	goto label_124;
	}
label_122:;
	{
	LINE_NUMBER(244);
	frame[25].i = (jint(0));
	LINE_NUMBER(245);
	frame[26].i = (jint(0));
	LINE_NUMBER(246);
	goto label_119;
	}
label_124:;
	{
	LINE_NUMBER(222);
	INST_IINC(27, 1);
	goto label_118;
	}
label_119:;
	{
	LINE_NUMBER(249);
	if ((frame[25].i) == 0) goto label_129;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(251);
	if ((frame[16].i) == 0) goto label_130;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"double: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[24].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[23].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_130:;
	{
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	sp[1].o = frame[24].o;
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[23].o));
	((func_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_double_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_double_java_lang_String])(ctx, sp[0].o, sp[1].o, temp0, (frame[23].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(253);
	goto label_100;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(254);
	frame[27].o = sp[0].o;
	LINE_NUMBER(255);
	goto label_103;
	}
label_129:;
	{
	LINE_NUMBER(256);
	if ((frame[26].i) == 0) goto label_103;
	}
	{
	LINE_NUMBER(257);
	if ((frame[16].i) == 0) goto label_4;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"double: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[24].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[23].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	sp[1].o = frame[24].o;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (frame[23].o));
	((func_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_long_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_long_java_lang_String])(ctx, sp[0].o, sp[1].o, temp0, (frame[23].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(260);
	goto label_100;
label_6:;
	LINE_NUMBER(261);
	INST_ASTORE(27);
label_103:;
	{
	LINE_NUMBER(265);
	if ((frame[16].i) == 0) goto label_133;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"string: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[24].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[23].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_133:;
	{
	LINE_NUMBER(266);
	((func_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[24].o), (frame[23].o));
	}
label_100:;
	{
	LINE_NUMBER(268);
	if (((jint)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_stop) == 0) goto label_134;
	}
	goto label_17;
label_134:;
	{
	LINE_NUMBER(269);
	frame[14].i = (jint(0));
	LINE_NUMBER(270);
	frame[10].i = (frame[5].i);
	LINE_NUMBER(272);
	goto label_92;
	}
label_85:;
	{
	LINE_NUMBER(276);
	if ((frame[16].i) == 0) goto label_137;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"startObject: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[11].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_137:;
	{
	LINE_NUMBER(277);
	((func_com_badlogic_gdx_utils_JsonReader_startObject_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_startObject_java_lang_String])(ctx, (frame[0].o), (frame[11].o));
	LINE_NUMBER(278);
	if (((jint)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_stop) == 0) goto label_139;
	}
	goto label_17;
label_139:;
	{
	LINE_NUMBER(279);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(281);
	if ((frame[8].i) != (((jarray) nullCheck(ctx, (frame[9].o)))->length)) goto label_141;
	}
	{
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, (frame[9].o), ((((jarray) nullCheck(ctx, (frame[9].o)))->length) * (jint(2))));
	frame[9].o = sp[0].o;
	}
label_141:;
	{
	LINE_NUMBER(283);
	sp[0].o = frame[9].o;
	jint temp0 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[4].i);
	LINE_NUMBER(284);
	frame[4].i = (jint(5));
	LINE_NUMBER(285);
	frame[22].i = (jint(2));
	LINE_NUMBER(286);
	goto label_37;
	}
label_86:;
	{
	LINE_NUMBER(294);
	if ((frame[16].i) == 0) goto label_145;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"endObject"_j))));
	}
label_145:;
	{
	LINE_NUMBER(295);
	((func_com_badlogic_gdx_utils_JsonReader_pop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_pop])(ctx, (frame[0].o));
	LINE_NUMBER(296);
	if (((jint)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_stop) == 0) goto label_147;
	}
	goto label_17;
label_147:;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[9].o;
	INST_IINC(8, -1);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[8].i)));
	LINE_NUMBER(299);
	frame[22].i = (jint(2));
	LINE_NUMBER(300);
	goto label_37;
	}
label_87:;
	{
	LINE_NUMBER(307);
	if ((frame[16].i) == 0) goto label_150;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"startArray: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[11].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_150:;
	{
	LINE_NUMBER(308);
	((func_com_badlogic_gdx_utils_JsonReader_startArray_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_startArray_java_lang_String])(ctx, (frame[0].o), (frame[11].o));
	LINE_NUMBER(309);
	if (((jint)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_stop) == 0) goto label_152;
	}
	goto label_17;
label_152:;
	{
	LINE_NUMBER(310);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(312);
	if ((frame[8].i) != (((jarray) nullCheck(ctx, (frame[9].o)))->length)) goto label_154;
	}
	{
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, (frame[9].o), ((((jarray) nullCheck(ctx, (frame[9].o)))->length) * (jint(2))));
	frame[9].o = sp[0].o;
	}
label_154:;
	{
	LINE_NUMBER(314);
	sp[0].o = frame[9].o;
	jint temp0 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[4].i);
	LINE_NUMBER(315);
	frame[4].i = (23);
	LINE_NUMBER(316);
	frame[22].i = (jint(2));
	LINE_NUMBER(317);
	goto label_37;
	}
label_88:;
	{
	LINE_NUMBER(325);
	if ((frame[16].i) == 0) goto label_158;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"endArray"_j))));
	}
label_158:;
	{
	LINE_NUMBER(326);
	((func_com_badlogic_gdx_utils_JsonReader_pop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_pop])(ctx, (frame[0].o));
	LINE_NUMBER(327);
	if (((jint)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_stop) == 0) goto label_160;
	}
	goto label_17;
label_160:;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[9].o;
	INST_IINC(8, -1);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[8].i)));
	LINE_NUMBER(330);
	frame[22].i = (jint(2));
	LINE_NUMBER(331);
	goto label_37;
	}
label_89:;
	{
	LINE_NUMBER(338);
	frame[23].i = ((frame[5].i) - (jint(1)));
	LINE_NUMBER(339);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) != (47)) goto label_164;
	}
label_165:;
	{
	LINE_NUMBER(340);
	if ((frame[5].i) == (frame[7].i)) goto label_166;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))) == (10)) goto label_166;
	}
	{
	LINE_NUMBER(341);
	INST_IINC(5, 1);
	goto label_165;
	}
label_166:;
	{
	LINE_NUMBER(342);
	INST_IINC(5, -1);
	goto label_168;
	}
label_164:;
	{
	LINE_NUMBER(344);
	if (((frame[5].i) + (jint(1))) >= (frame[7].i)) goto label_169;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))) != (42)) goto label_170;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((frame[5].i) + (jint(1))))) == (47)) goto label_169;
	}
label_170:;
	{
	LINE_NUMBER(345);
	INST_IINC(5, 1);
	goto label_164;
	}
label_169:;
	LINE_NUMBER(346);
	INST_IINC(5, 1);
label_168:;
	{
	LINE_NUMBER(348);
	if ((frame[16].i) == 0) goto label_171;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"comment "_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[2].o, (frame[1].o), (frame[23].i), ((frame[5].i) - (frame[23].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_171:;
	LINE_NUMBER(350);
	goto label_92;
label_90:;
	{
	LINE_NUMBER(354);
	if ((frame[16].i) == 0) goto label_172;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unquotedChars"_j))));
	}
label_172:;
	{
	LINE_NUMBER(355);
	frame[10].i = (frame[5].i);
	LINE_NUMBER(356);
	frame[12].i = (jint(0));
	LINE_NUMBER(357);
	frame[14].i = (jint(1));
	LINE_NUMBER(358);
	if ((frame[13].i) == 0) goto label_176;
	}
label_177:;
	{
	LINE_NUMBER(361);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i)))) {
		case 10: goto label_178;
		case 13: goto label_178;
		case 47: goto label_179;
		case 58: goto label_178;
		case 92: goto label_180;
		default: goto label_181;
	}
	}
label_180:;
	{
	LINE_NUMBER(363);
	frame[12].i = (jint(1));
	LINE_NUMBER(364);
	goto label_181;
	}
label_179:;
	{
	LINE_NUMBER(366);
	if (((frame[5].i) + (jint(1))) != (frame[7].i)) goto label_183;
	}
	goto label_181;
label_183:;
	{
	LINE_NUMBER(367);
	frame[23].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((frame[5].i) + (jint(1)))));
	LINE_NUMBER(368);
	if ((frame[23].i) == (47)) goto label_185;
	}
	{
	if ((frame[23].i) != (42)) goto label_181;
	}
	goto label_185;
label_178:;
	LINE_NUMBER(373);
	goto label_185;
label_181:;
	{
	LINE_NUMBER(375);
	if ((frame[16].i) == 0) goto label_186;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unquotedChar (name): '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_186:;
	{
	LINE_NUMBER(376);
	INST_IINC(5, 1);
	LINE_NUMBER(377);
	if ((frame[5].i) != (frame[7].i)) goto label_177;
	}
	goto label_185;
label_176:;
	{
	LINE_NUMBER(382);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i)))) {
		case 10: goto label_188;
		case 13: goto label_188;
		case 44: goto label_188;
		case 47: goto label_189;
		case 92: goto label_190;
		case 93: goto label_188;
		case 125: goto label_188;
		default: goto label_191;
	}
	}
label_190:;
	{
	LINE_NUMBER(384);
	frame[12].i = (jint(1));
	LINE_NUMBER(385);
	goto label_191;
	}
label_189:;
	{
	LINE_NUMBER(387);
	if (((frame[5].i) + (jint(1))) != (frame[7].i)) goto label_193;
	}
	goto label_191;
label_193:;
	{
	LINE_NUMBER(388);
	frame[23].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((frame[5].i) + (jint(1)))));
	LINE_NUMBER(389);
	if ((frame[23].i) == (47)) goto label_185;
	}
	{
	if ((frame[23].i) != (42)) goto label_191;
	}
	goto label_185;
label_188:;
	LINE_NUMBER(396);
	goto label_185;
label_191:;
	{
	LINE_NUMBER(398);
	if ((frame[16].i) == 0) goto label_195;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unquotedChar (value): '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_195:;
	{
	LINE_NUMBER(399);
	INST_IINC(5, 1);
	LINE_NUMBER(400);
	if ((frame[5].i) != (frame[7].i)) goto label_176;
	}
	goto label_185;
label_185:;
	LINE_NUMBER(403);
	INST_IINC(5, -1);
label_197:;
	{
	LINE_NUMBER(404);
	jint temp0 = (jint)SM_java_lang_Character_isSpace_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))));
	if (temp0 == 0) goto label_92;
	}
	{
	LINE_NUMBER(405);
	INST_IINC(5, -1);
	goto label_197;
	}
label_91:;
	{
	LINE_NUMBER(411);
	if ((frame[16].i) == 0) goto label_199;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"quotedChars"_j))));
	}
label_199:;
	{
	LINE_NUMBER(412);
	INST_IINC(5, 1);
	frame[10].i = (frame[5].i);
	LINE_NUMBER(413);
	frame[12].i = (jint(0));
	}
label_201:;
	{
	LINE_NUMBER(416);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i)))) {
		case 34: goto label_202;
		case 92: goto label_203;
		default: goto label_204;
	}
	}
label_203:;
	{
	LINE_NUMBER(418);
	frame[12].i = (jint(1));
	LINE_NUMBER(419);
	INST_IINC(5, 1);
	LINE_NUMBER(420);
	goto label_204;
	}
label_202:;
	LINE_NUMBER(422);
	goto label_207;
label_204:;
	{
	LINE_NUMBER(424);
	if ((frame[16].i) == 0) goto label_208;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"quotedChar: '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_208:;
	{
	LINE_NUMBER(425);
	INST_IINC(5, 1);
	LINE_NUMBER(426);
	if ((frame[5].i) != (frame[7].i)) goto label_201;
	}
	goto label_207;
label_207:;
	LINE_NUMBER(428);
	INST_IINC(5, -1);
label_92:;
	LINE_NUMBER(430);
	goto label_81;
label_40:;
	{
	LINE_NUMBER(437);
	if ((frame[4].i) != 0) goto label_210;
	}
	{
	LINE_NUMBER(438);
	frame[22].i = (jint(5));
	LINE_NUMBER(439);
	goto label_37;
	}
label_210:;
	{
	LINE_NUMBER(441);
	INST_IINC(5, 1);
	if ((frame[5].i) == (frame[6].i)) goto label_42;
	}
	{
	LINE_NUMBER(442);
	frame[22].i = (jint(1));
	LINE_NUMBER(443);
	goto label_37;
	}
label_42:;
	{
	LINE_NUMBER(446);
	if ((frame[5].i) != (frame[7].i)) goto label_41;
	}
	{
	LINE_NUMBER(447);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_eof_actions;
	frame[23].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i)));
	LINE_NUMBER(448);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_actions;
	jint temp0 = frame[23].i;
	INST_IINC(23, 1);
	frame[24].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	}
label_217:;
	{
	LINE_NUMBER(449);
	jint temp0 = frame[24].i;
	INST_IINC(24, -1);
	if (temp0 <= 0) goto label_41;
	}
	{
	LINE_NUMBER(450);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonReader__json_actions;
	jint temp0 = frame[23].i;
	INST_IINC(23, 1);
	switch(((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0))) {
		case 1: goto label_219;
		default: goto label_220;
	}
	}
label_219:;
	{
	LINE_NUMBER(454);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[1].o), (frame[10].i), ((frame[5].i) - (frame[10].i)));
	frame[25].o = sp[0].o;
	LINE_NUMBER(455);
	if ((frame[12].i) == 0) goto label_222;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_unescape_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_unescape_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[25].o));
	frame[25].o = sp[0].o;
	}
label_222:;
	{
	LINE_NUMBER(457);
	if ((frame[13].i) == 0) goto label_223;
	}
	{
	LINE_NUMBER(458);
	frame[13].i = (jint(0));
	LINE_NUMBER(459);
	if ((frame[16].i) == 0) goto label_226;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[25].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_226:;
	{
	LINE_NUMBER(460);
	frame[11].o = (frame[25].o);
	goto label_227;
	}
label_223:;
	{
	LINE_NUMBER(462);
	frame[26].o = (frame[11].o);
	LINE_NUMBER(463);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(464);
	if ((frame[14].i) == 0) goto label_230;
	}
	{
	LINE_NUMBER(465);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[25].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 == 0) goto label_232;
	}
	{
	LINE_NUMBER(466);
	if ((frame[16].i) == 0) goto label_234;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"boolean: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[26].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"=true"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_234:;
	{
	LINE_NUMBER(467);
	((func_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean])(ctx, (frame[0].o), (frame[26].o), (jint(1)));
	LINE_NUMBER(468);
	goto label_227;
	}
label_232:;
	{
	LINE_NUMBER(469);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[25].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	if (temp0 == 0) goto label_236;
	}
	{
	LINE_NUMBER(470);
	if ((frame[16].i) == 0) goto label_238;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"boolean: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[26].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"=false"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_238:;
	{
	LINE_NUMBER(471);
	((func_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean])(ctx, (frame[0].o), (frame[26].o), (jint(0)));
	LINE_NUMBER(472);
	goto label_227;
	}
label_236:;
	{
	LINE_NUMBER(473);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[25].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	if (temp0 == 0) goto label_240;
	}
	{
	LINE_NUMBER(474);
	((func_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[26].o), (jobject(nullptr)));
	LINE_NUMBER(475);
	goto label_227;
	}
label_240:;
	{
	LINE_NUMBER(477);
	frame[27].i = (jint(0));
	frame[28].i = (jint(1));
	LINE_NUMBER(479);
	frame[29].i = (frame[10].i);
	}
label_245:;
	{
	if ((frame[29].i) >= (frame[5].i)) goto label_246;
	}
	{
	LINE_NUMBER(480);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[29].i)))) {
		case 43: goto label_248;
		case 44: goto label_249;
		case 45: goto label_248;
		case 46: goto label_250;
		case 47: goto label_249;
		case 48: goto label_248;
		case 49: goto label_248;
		case 50: goto label_248;
		case 51: goto label_248;
		case 52: goto label_248;
		case 53: goto label_248;
		case 54: goto label_248;
		case 55: goto label_248;
		case 56: goto label_248;
		case 57: goto label_248;
		case 58: goto label_249;
		case 59: goto label_249;
		case 60: goto label_249;
		case 61: goto label_249;
		case 62: goto label_249;
		case 63: goto label_249;
		case 64: goto label_249;
		case 65: goto label_249;
		case 66: goto label_249;
		case 67: goto label_249;
		case 68: goto label_249;
		case 69: goto label_250;
		case 70: goto label_249;
		case 71: goto label_249;
		case 72: goto label_249;
		case 73: goto label_249;
		case 74: goto label_249;
		case 75: goto label_249;
		case 76: goto label_249;
		case 77: goto label_249;
		case 78: goto label_249;
		case 79: goto label_249;
		case 80: goto label_249;
		case 81: goto label_249;
		case 82: goto label_249;
		case 83: goto label_249;
		case 84: goto label_249;
		case 85: goto label_249;
		case 86: goto label_249;
		case 87: goto label_249;
		case 88: goto label_249;
		case 89: goto label_249;
		case 90: goto label_249;
		case 91: goto label_249;
		case 92: goto label_249;
		case 93: goto label_249;
		case 94: goto label_249;
		case 95: goto label_249;
		case 96: goto label_249;
		case 97: goto label_249;
		case 98: goto label_249;
		case 99: goto label_249;
		case 100: goto label_249;
		case 101: goto label_250;
		default: goto label_249;
	}
	}
label_248:;
	LINE_NUMBER(493);
	goto label_251;
label_250:;
	{
	LINE_NUMBER(497);
	frame[27].i = (jint(1));
	LINE_NUMBER(498);
	frame[28].i = (jint(0));
	LINE_NUMBER(499);
	goto label_251;
	}
label_249:;
	{
	LINE_NUMBER(501);
	frame[27].i = (jint(0));
	LINE_NUMBER(502);
	frame[28].i = (jint(0));
	LINE_NUMBER(503);
	goto label_246;
	}
label_251:;
	{
	LINE_NUMBER(479);
	INST_IINC(29, 1);
	goto label_245;
	}
label_246:;
	{
	LINE_NUMBER(506);
	if ((frame[27].i) == 0) goto label_256;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(508);
	if ((frame[16].i) == 0) goto label_257;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"double: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[26].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[25].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_257:;
	{
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	sp[1].o = frame[26].o;
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[25].o));
	((func_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_double_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_double_java_lang_String])(ctx, sp[0].o, sp[1].o, temp0, (frame[25].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(510);
	goto label_227;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(511);
	frame[29].o = sp[0].o;
	LINE_NUMBER(512);
	goto label_230;
	}
label_256:;
	{
	LINE_NUMBER(513);
	if ((frame[28].i) == 0) goto label_230;
	}
	{
	LINE_NUMBER(514);
	if ((frame[16].i) == 0) goto label_12;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"double: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[26].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[25].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(516);
	sp[0].o = frame[0].o;
	sp[1].o = frame[26].o;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (frame[25].o));
	((func_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_long_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_long_java_lang_String])(ctx, sp[0].o, sp[1].o, temp0, (frame[25].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(517);
	goto label_227;
label_14:;
	LINE_NUMBER(518);
	INST_ASTORE(29);
label_230:;
	{
	LINE_NUMBER(522);
	if ((frame[16].i) == 0) goto label_260;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"string: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[26].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[25].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_260:;
	{
	LINE_NUMBER(523);
	((func_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[26].o), (frame[25].o));
	}
label_227:;
	{
	LINE_NUMBER(525);
	if (((jint)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_stop) == 0) goto label_261;
	}
	goto label_17;
label_261:;
	{
	LINE_NUMBER(526);
	frame[14].i = (jint(0));
	LINE_NUMBER(527);
	frame[10].i = (frame[5].i);
	}
label_220:;
	LINE_NUMBER(529);
	goto label_217;
label_41:;
	LINE_NUMBER(537);
	goto label_17;
label_17:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(545);
	goto label_263;
label_18:;
	{
	sp -= 1;
	LINE_NUMBER(543);
	frame[17].o = sp[0].o;
	LINE_NUMBER(544);
	frame[15].o = (frame[17].o);
	}
label_263:;
	{
	LINE_NUMBER(547);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_root;
	frame[17].o = sp[0].o;
	LINE_NUMBER(548);
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_root = (jref) (jobject(nullptr));
	LINE_NUMBER(549);
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	LINE_NUMBER(551);
	if (((jint)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_stop) != 0) goto label_268;
	}
	{
	LINE_NUMBER(552);
	if ((frame[5].i) >= (frame[6].i)) goto label_270;
	}
	{
	LINE_NUMBER(553);
	frame[18].i = (jint(1));
	LINE_NUMBER(554);
	frame[19].i = (jint(0));
	}
label_273:;
	{
	if ((frame[19].i) >= (frame[5].i)) goto label_274;
	}
	{
	LINE_NUMBER(555);
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[19].i))) != (10)) goto label_276;
	}
	INST_IINC(18, 1);
label_276:;
	{
	LINE_NUMBER(554);
	INST_IINC(19, 1);
	goto label_273;
	}
label_274:;
	{
	LINE_NUMBER(556);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[5].i) - (32)));
	frame[19].i = temp0;
	LINE_NUMBER(557);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error parsing JSON on line "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[18].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" near: "_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[2].o, (frame[1].o), (frame[19].i), ((frame[5].i) - (frame[19].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"*ERROR*"_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	sp[3].o = frame[1].o;
	jint temp1 = frame[5].i;
	jint temp2 = 64;
	jint temp3 = (frame[6].i) - (frame[5].i);
	LINE_NUMBER(558);
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, temp3);
	init_java_lang_String_Array1_char_int_int(ctx, sp[2].o, sp[3].o, temp1, temp4);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[15].o));
	throwException(ctx, sp[0].o);	}
label_270:;
	{
	LINE_NUMBER(560);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_279;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[18].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_JsonValue, sp[0].o));
	LINE_NUMBER(562);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(563);
	if ((frame[18].o) == nullptr) goto label_283;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean])(ctx, (frame[18].o));
	if (temp0 == 0) goto label_283;
	}
	{
	LINE_NUMBER(564);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error parsing JSON, unmatched brace."_j))));
	throwException(ctx, sp[0].o);	}
label_283:;
	{
	LINE_NUMBER(566);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error parsing JSON, unmatched bracket."_j))));
	throwException(ctx, sp[0].o);	}
label_279:;
	{
	LINE_NUMBER(568);
	if ((frame[15].o) == nullptr) goto label_268;
	}
	{
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error parsing JSON: "_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[2].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[15].o));
	throwException(ctx, sp[0].o);	}
label_268:;
	{
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return (frame[17].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonReader_init__json_actions_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:init__json_actions_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (29));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (jint(5));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonReader_init__json_key_offsets_0_R_Array1_short(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:init__json_key_offsets_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	{
	LINE_NUMBER(581);
	sp[0].o = (jobject) createArray(ctx, &class_short, (39));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(2))) = (11);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(3))) = (13);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(4))) = (14);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(5))) = (16);
	ARRAY_ACCESS(jshort, sp[0].o, (6)) = (25);
	ARRAY_ACCESS(jshort, sp[0].o, (7)) = (31);
	ARRAY_ACCESS(jshort, sp[0].o, (8)) = (37);
	ARRAY_ACCESS(jshort, sp[0].o, (9)) = (39);
	ARRAY_ACCESS(jshort, sp[0].o, (10)) = (50);
	ARRAY_ACCESS(jshort, sp[0].o, (11)) = (57);
	ARRAY_ACCESS(jshort, sp[0].o, (12)) = (64);
	ARRAY_ACCESS(jshort, sp[0].o, (13)) = (73);
	ARRAY_ACCESS(jshort, sp[0].o, (14)) = (74);
	ARRAY_ACCESS(jshort, sp[0].o, (15)) = (83);
	ARRAY_ACCESS(jshort, sp[0].o, (16)) = (85);
	ARRAY_ACCESS(jshort, sp[0].o, (17)) = (87);
	ARRAY_ACCESS(jshort, sp[0].o, (18)) = (96);
	ARRAY_ACCESS(jshort, sp[0].o, (19)) = (98);
	ARRAY_ACCESS(jshort, sp[0].o, (20)) = (100);
	ARRAY_ACCESS(jshort, sp[0].o, (21)) = (101);
	ARRAY_ACCESS(jshort, sp[0].o, (22)) = (103);
	ARRAY_ACCESS(jshort, sp[0].o, (23)) = (105);
	ARRAY_ACCESS(jshort, sp[0].o, (24)) = (116);
	ARRAY_ACCESS(jshort, sp[0].o, (25)) = (123);
	ARRAY_ACCESS(jshort, sp[0].o, (26)) = (130);
	ARRAY_ACCESS(jshort, sp[0].o, (27)) = (141);
	ARRAY_ACCESS(jshort, sp[0].o, (28)) = (142);
	ARRAY_ACCESS(jshort, sp[0].o, (29)) = (153);
	ARRAY_ACCESS(jshort, sp[0].o, (30)) = (155);
	ARRAY_ACCESS(jshort, sp[0].o, (31)) = (157);
	ARRAY_ACCESS(jshort, sp[0].o, (32)) = (168);
	ARRAY_ACCESS(jshort, sp[0].o, (33)) = (170);
	ARRAY_ACCESS(jshort, sp[0].o, (34)) = (172);
	ARRAY_ACCESS(jshort, sp[0].o, (35)) = (174);
	ARRAY_ACCESS(jshort, sp[0].o, (36)) = (179);
	ARRAY_ACCESS(jshort, sp[0].o, (37)) = (184);
	ARRAY_ACCESS(jshort, sp[0].o, (38)) = (184);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonReader_init__json_trans_keys_0_R_Array1_char(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:init__json_trans_keys_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	{
	LINE_NUMBER(588);
	sp[0].o = (jobject) createArray(ctx, &class_char, (185));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (10)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (11)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (12)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (13)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (14)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (15)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (16)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (17)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (18)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (19)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (20)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (21)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (22)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (23)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (24)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (25)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (26)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (27)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (28)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (29)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (30)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (31)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (32)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (33)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (34)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (35)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (36)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (37)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (38)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (39)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (40)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (41)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (42)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (43)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (44)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (45)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (46)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (47)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (48)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (49)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (50)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (51)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (52)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (53)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (54)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (55)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (56)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (57)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (58)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (59)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (60)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (61)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (62)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (63)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (64)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (65)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (66)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (67)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (68)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (69)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (70)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (71)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (72)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (73)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (74)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (75)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (76)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (77)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (78)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (79)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (80)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (81)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (82)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (83)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (84)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (85)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (86)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (87)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (88)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (89)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (90)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (91)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (92)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (93)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (94)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (95)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (96)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (97)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (98)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (99)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (100)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (101)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (102)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (103)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (104)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (105)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (106)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (107)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (108)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (109)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (110)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (111)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (112)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (113)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (114)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (115)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (116)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (117)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (118)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (119)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (120)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (121)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (122)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (123)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (124)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (125)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (126)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (127)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (128)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (129)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (130)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (131)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (132)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (133)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (134)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (135)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (136)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (137)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (138)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (139)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (140)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (141)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (142)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (143)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (144)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (145)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (146)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (147)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (148)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (149)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (150)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (151)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (152)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (153)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (154)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (155)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (156)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (157)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (158)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (159)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (160)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (161)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (162)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (163)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (164)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (165)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (166)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (167)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (168)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (169)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (170)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (171)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (172)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (173)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (174)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (175)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (176)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (177)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (178)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (179)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (180)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (181)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (182)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (183)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (184)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonReader_init__json_single_lengths_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:init__json_single_lengths_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	{
	LINE_NUMBER(600);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (39));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonReader_init__json_range_lengths_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:init__json_range_lengths_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	{
	LINE_NUMBER(607);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (39));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonReader_init__json_index_offsets_0_R_Array1_short(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:init__json_index_offsets_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject) createArray(ctx, &class_short, (39));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(2))) = (11);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(3))) = (14);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(4))) = (16);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(5))) = (19);
	ARRAY_ACCESS(jshort, sp[0].o, (6)) = (28);
	ARRAY_ACCESS(jshort, sp[0].o, (7)) = (34);
	ARRAY_ACCESS(jshort, sp[0].o, (8)) = (40);
	ARRAY_ACCESS(jshort, sp[0].o, (9)) = (43);
	ARRAY_ACCESS(jshort, sp[0].o, (10)) = (54);
	ARRAY_ACCESS(jshort, sp[0].o, (11)) = (62);
	ARRAY_ACCESS(jshort, sp[0].o, (12)) = (70);
	ARRAY_ACCESS(jshort, sp[0].o, (13)) = (79);
	ARRAY_ACCESS(jshort, sp[0].o, (14)) = (81);
	ARRAY_ACCESS(jshort, sp[0].o, (15)) = (90);
	ARRAY_ACCESS(jshort, sp[0].o, (16)) = (93);
	ARRAY_ACCESS(jshort, sp[0].o, (17)) = (96);
	ARRAY_ACCESS(jshort, sp[0].o, (18)) = (105);
	ARRAY_ACCESS(jshort, sp[0].o, (19)) = (108);
	ARRAY_ACCESS(jshort, sp[0].o, (20)) = (111);
	ARRAY_ACCESS(jshort, sp[0].o, (21)) = (113);
	ARRAY_ACCESS(jshort, sp[0].o, (22)) = (116);
	ARRAY_ACCESS(jshort, sp[0].o, (23)) = (119);
	ARRAY_ACCESS(jshort, sp[0].o, (24)) = (130);
	ARRAY_ACCESS(jshort, sp[0].o, (25)) = (138);
	ARRAY_ACCESS(jshort, sp[0].o, (26)) = (146);
	ARRAY_ACCESS(jshort, sp[0].o, (27)) = (157);
	ARRAY_ACCESS(jshort, sp[0].o, (28)) = (159);
	ARRAY_ACCESS(jshort, sp[0].o, (29)) = (170);
	ARRAY_ACCESS(jshort, sp[0].o, (30)) = (173);
	ARRAY_ACCESS(jshort, sp[0].o, (31)) = (176);
	ARRAY_ACCESS(jshort, sp[0].o, (32)) = (187);
	ARRAY_ACCESS(jshort, sp[0].o, (33)) = (190);
	ARRAY_ACCESS(jshort, sp[0].o, (34)) = (193);
	ARRAY_ACCESS(jshort, sp[0].o, (35)) = (196);
	ARRAY_ACCESS(jshort, sp[0].o, (36)) = (201);
	ARRAY_ACCESS(jshort, sp[0].o, (37)) = (206);
	ARRAY_ACCESS(jshort, sp[0].o, (38)) = (207);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonReader_init__json_indicies_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:init__json_indicies_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	{
	LINE_NUMBER(621);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (209));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (14);
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (18);
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (20);
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (39)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (40)) = (22);
	ARRAY_ACCESS(jbyte, sp[0].o, (41)) = (22);
	ARRAY_ACCESS(jbyte, sp[0].o, (42)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (43)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (44)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (45)) = (24);
	ARRAY_ACCESS(jbyte, sp[0].o, (46)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (47)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (48)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (49)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (50)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (51)) = (27);
	ARRAY_ACCESS(jbyte, sp[0].o, (52)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (53)) = (23);
	ARRAY_ACCESS(jbyte, sp[0].o, (54)) = (28);
	ARRAY_ACCESS(jbyte, sp[0].o, (55)) = (29);
	ARRAY_ACCESS(jbyte, sp[0].o, (56)) = (29);
	ARRAY_ACCESS(jbyte, sp[0].o, (57)) = (28);
	ARRAY_ACCESS(jbyte, sp[0].o, (58)) = (30);
	ARRAY_ACCESS(jbyte, sp[0].o, (59)) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (60)) = (32);
	ARRAY_ACCESS(jbyte, sp[0].o, (61)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (62)) = (33);
	ARRAY_ACCESS(jbyte, sp[0].o, (63)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (64)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (65)) = (33);
	ARRAY_ACCESS(jbyte, sp[0].o, (66)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (67)) = (35);
	ARRAY_ACCESS(jbyte, sp[0].o, (68)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (69)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (70)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (71)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (72)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (73)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (74)) = (37);
	ARRAY_ACCESS(jbyte, sp[0].o, (75)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (76)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (77)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (78)) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (79)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (80)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (81)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (82)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (83)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (84)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (85)) = (38);
	ARRAY_ACCESS(jbyte, sp[0].o, (86)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (87)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (88)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (89)) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (90)) = (39);
	ARRAY_ACCESS(jbyte, sp[0].o, (91)) = (39);
	ARRAY_ACCESS(jbyte, sp[0].o, (92)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (93)) = (40);
	ARRAY_ACCESS(jbyte, sp[0].o, (94)) = (40);
	ARRAY_ACCESS(jbyte, sp[0].o, (95)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (96)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (97)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (98)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (99)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (100)) = (41);
	ARRAY_ACCESS(jbyte, sp[0].o, (101)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (102)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (103)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (104)) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (105)) = (42);
	ARRAY_ACCESS(jbyte, sp[0].o, (106)) = (42);
	ARRAY_ACCESS(jbyte, sp[0].o, (107)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (108)) = (43);
	ARRAY_ACCESS(jbyte, sp[0].o, (109)) = (43);
	ARRAY_ACCESS(jbyte, sp[0].o, (110)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (111)) = (28);
	ARRAY_ACCESS(jbyte, sp[0].o, (112)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (113)) = (44);
	ARRAY_ACCESS(jbyte, sp[0].o, (114)) = (44);
	ARRAY_ACCESS(jbyte, sp[0].o, (115)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (116)) = (45);
	ARRAY_ACCESS(jbyte, sp[0].o, (117)) = (45);
	ARRAY_ACCESS(jbyte, sp[0].o, (118)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (119)) = (47);
	ARRAY_ACCESS(jbyte, sp[0].o, (120)) = (47);
	ARRAY_ACCESS(jbyte, sp[0].o, (121)) = (48);
	ARRAY_ACCESS(jbyte, sp[0].o, (122)) = (49);
	ARRAY_ACCESS(jbyte, sp[0].o, (123)) = (50);
	ARRAY_ACCESS(jbyte, sp[0].o, (124)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (125)) = (51);
	ARRAY_ACCESS(jbyte, sp[0].o, (126)) = (52);
	ARRAY_ACCESS(jbyte, sp[0].o, (127)) = (53);
	ARRAY_ACCESS(jbyte, sp[0].o, (128)) = (47);
	ARRAY_ACCESS(jbyte, sp[0].o, (129)) = (46);
	ARRAY_ACCESS(jbyte, sp[0].o, (130)) = (54);
	ARRAY_ACCESS(jbyte, sp[0].o, (131)) = (55);
	ARRAY_ACCESS(jbyte, sp[0].o, (132)) = (55);
	ARRAY_ACCESS(jbyte, sp[0].o, (133)) = (54);
	ARRAY_ACCESS(jbyte, sp[0].o, (134)) = (56);
	ARRAY_ACCESS(jbyte, sp[0].o, (135)) = (57);
	ARRAY_ACCESS(jbyte, sp[0].o, (136)) = (58);
	ARRAY_ACCESS(jbyte, sp[0].o, (137)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (138)) = (59);
	ARRAY_ACCESS(jbyte, sp[0].o, (139)) = (60);
	ARRAY_ACCESS(jbyte, sp[0].o, (140)) = (60);
	ARRAY_ACCESS(jbyte, sp[0].o, (141)) = (59);
	ARRAY_ACCESS(jbyte, sp[0].o, (142)) = (49);
	ARRAY_ACCESS(jbyte, sp[0].o, (143)) = (61);
	ARRAY_ACCESS(jbyte, sp[0].o, (144)) = (52);
	ARRAY_ACCESS(jbyte, sp[0].o, (145)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (146)) = (60);
	ARRAY_ACCESS(jbyte, sp[0].o, (147)) = (60);
	ARRAY_ACCESS(jbyte, sp[0].o, (148)) = (48);
	ARRAY_ACCESS(jbyte, sp[0].o, (149)) = (62);
	ARRAY_ACCESS(jbyte, sp[0].o, (150)) = (63);
	ARRAY_ACCESS(jbyte, sp[0].o, (151)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (152)) = (51);
	ARRAY_ACCESS(jbyte, sp[0].o, (153)) = (52);
	ARRAY_ACCESS(jbyte, sp[0].o, (154)) = (53);
	ARRAY_ACCESS(jbyte, sp[0].o, (155)) = (60);
	ARRAY_ACCESS(jbyte, sp[0].o, (156)) = (46);
	ARRAY_ACCESS(jbyte, sp[0].o, (157)) = (54);
	ARRAY_ACCESS(jbyte, sp[0].o, (158)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (159)) = (62);
	ARRAY_ACCESS(jbyte, sp[0].o, (160)) = (62);
	ARRAY_ACCESS(jbyte, sp[0].o, (161)) = (48);
	ARRAY_ACCESS(jbyte, sp[0].o, (162)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (163)) = (64);
	ARRAY_ACCESS(jbyte, sp[0].o, (164)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (165)) = (51);
	ARRAY_ACCESS(jbyte, sp[0].o, (166)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (167)) = (53);
	ARRAY_ACCESS(jbyte, sp[0].o, (168)) = (62);
	ARRAY_ACCESS(jbyte, sp[0].o, (169)) = (46);
	ARRAY_ACCESS(jbyte, sp[0].o, (170)) = (65);
	ARRAY_ACCESS(jbyte, sp[0].o, (171)) = (65);
	ARRAY_ACCESS(jbyte, sp[0].o, (172)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (173)) = (66);
	ARRAY_ACCESS(jbyte, sp[0].o, (174)) = (66);
	ARRAY_ACCESS(jbyte, sp[0].o, (175)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (176)) = (49);
	ARRAY_ACCESS(jbyte, sp[0].o, (177)) = (49);
	ARRAY_ACCESS(jbyte, sp[0].o, (178)) = (48);
	ARRAY_ACCESS(jbyte, sp[0].o, (179)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (180)) = (67);
	ARRAY_ACCESS(jbyte, sp[0].o, (181)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (182)) = (51);
	ARRAY_ACCESS(jbyte, sp[0].o, (183)) = (52);
	ARRAY_ACCESS(jbyte, sp[0].o, (184)) = (53);
	ARRAY_ACCESS(jbyte, sp[0].o, (185)) = (49);
	ARRAY_ACCESS(jbyte, sp[0].o, (186)) = (46);
	ARRAY_ACCESS(jbyte, sp[0].o, (187)) = (68);
	ARRAY_ACCESS(jbyte, sp[0].o, (188)) = (68);
	ARRAY_ACCESS(jbyte, sp[0].o, (189)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (190)) = (69);
	ARRAY_ACCESS(jbyte, sp[0].o, (191)) = (69);
	ARRAY_ACCESS(jbyte, sp[0].o, (192)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (193)) = (70);
	ARRAY_ACCESS(jbyte, sp[0].o, (194)) = (70);
	ARRAY_ACCESS(jbyte, sp[0].o, (195)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (196)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (197)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (198)) = (71);
	ARRAY_ACCESS(jbyte, sp[0].o, (199)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (200)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (201)) = (72);
	ARRAY_ACCESS(jbyte, sp[0].o, (202)) = (72);
	ARRAY_ACCESS(jbyte, sp[0].o, (203)) = (73);
	ARRAY_ACCESS(jbyte, sp[0].o, (204)) = (72);
	ARRAY_ACCESS(jbyte, sp[0].o, (205)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (206)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (207)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (208)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonReader_init__json_trans_targs_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:init__json_trans_targs_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	{
	LINE_NUMBER(633);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (74));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (35);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (22);
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (37);
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (20);
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (37);
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (14);
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (39)) = (14);
	ARRAY_ACCESS(jbyte, sp[0].o, (40)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (41)) = (18);
	ARRAY_ACCESS(jbyte, sp[0].o, (42)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (43)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (44)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (45)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (46)) = (24);
	ARRAY_ACCESS(jbyte, sp[0].o, (47)) = (23);
	ARRAY_ACCESS(jbyte, sp[0].o, (48)) = (27);
	ARRAY_ACCESS(jbyte, sp[0].o, (49)) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (50)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (51)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (52)) = (38);
	ARRAY_ACCESS(jbyte, sp[0].o, (53)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (54)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (55)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (56)) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (57)) = (33);
	ARRAY_ACCESS(jbyte, sp[0].o, (58)) = (38);
	ARRAY_ACCESS(jbyte, sp[0].o, (59)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (60)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (61)) = (33);
	ARRAY_ACCESS(jbyte, sp[0].o, (62)) = (28);
	ARRAY_ACCESS(jbyte, sp[0].o, (63)) = (30);
	ARRAY_ACCESS(jbyte, sp[0].o, (64)) = (29);
	ARRAY_ACCESS(jbyte, sp[0].o, (65)) = (28);
	ARRAY_ACCESS(jbyte, sp[0].o, (66)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (67)) = (32);
	ARRAY_ACCESS(jbyte, sp[0].o, (68)) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (69)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (70)) = (23);
	ARRAY_ACCESS(jbyte, sp[0].o, (71)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (72)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (73)) = (jint(2));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonReader_init__json_trans_actions_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:init__json_trans_actions_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (74));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (20);
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (23);
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (39)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (40)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (41)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (42)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (43)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (44)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (45)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (46)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (47)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (48)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (49)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (50)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (51)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (52)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (53)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (54)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (55)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (56)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (57)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (58)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (59)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (60)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (61)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (62)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (63)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (64)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (65)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (66)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (67)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (68)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (69)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (70)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (71)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (72)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (73)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonReader_init__json_eof_actions_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:init__json_eof_actions_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	{
	LINE_NUMBER(649);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (39));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonReader_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(671);
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_stop = (jint(1));
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonReader_isStopped_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:isStopped", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(675);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_stop);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonReader_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:addChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(679);
	((func_com_badlogic_gdx_utils_JsonValue_setName_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_setName_java_lang_String])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(680);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(681);
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(682);
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_root = (jref) (frame[2].o);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(683);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(684);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	((func_com_badlogic_gdx_utils_JsonValue_addChild_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_addChild_com_badlogic_gdx_utils_JsonValue])(ctx, sp[0].o, (frame[2].o));
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(686);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK(sp[0].o))->F_root = (jref) sp[1].o;
	}
label_5:;
	LINE_NUMBER(687);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonReader_startObject_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:startObject", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(691);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_object;
	init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(692);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	M_com_badlogic_gdx_utils_JsonReader_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(694);
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonReader_startArray_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:startArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(699);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(700);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	M_com_badlogic_gdx_utils_JsonReader_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(702);
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(703);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonReader_pop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:pop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(707);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object])(ctx, sp[1].o);
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK(sp[0].o))->F_root = (jref) (checkCast(ctx, &class_com_badlogic_gdx_utils_JsonValue, sp[1].o));
	LINE_NUMBER(708);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	sp += 1;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_utils_JsonValue, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	{
	sp -= 2;
	((com_badlogic_gdx_utils_JsonReader *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(709);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:string", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(713);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	init_com_badlogic_gdx_utils_JsonValue_java_lang_String(ctx, sp[2].o, (frame[2].o));
	M_com_badlogic_gdx_utils_JsonReader_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(714);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_double_java_lang_String(jcontext ctx, jobject self, jobject param0, jdouble param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:number", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(718);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	init_com_badlogic_gdx_utils_JsonValue_double_java_lang_String(ctx, sp[2].o, (frame[2].d), (frame[4].o));
	M_com_badlogic_gdx_utils_JsonReader_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(719);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_long_java_lang_String(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:number", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(723);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	init_com_badlogic_gdx_utils_JsonValue_long_java_lang_String(ctx, sp[2].o, (frame[2].l), (frame[4].o));
	M_com_badlogic_gdx_utils_JsonReader_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(724);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:bool", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(728);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	init_com_badlogic_gdx_utils_JsonValue_boolean(ctx, sp[2].o, (frame[2].i));
	M_com_badlogic_gdx_utils_JsonReader_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(729);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonReader_unescape_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:unescape", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(733);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(734);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, ((frame[2].i) + (16)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(735);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(736);
	sp[0].o = frame[1].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[5].i = temp1;
	LINE_NUMBER(737);
	if ((frame[5].i) == (92)) goto label_7;
	}
	{
	LINE_NUMBER(738);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[5].i));
	LINE_NUMBER(739);
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(741);
	if ((frame[4].i) != (frame[2].i)) goto label_10;
	}
	goto label_4;
label_10:;
	{
	LINE_NUMBER(742);
	sp[0].o = frame[1].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[5].i = temp1;
	LINE_NUMBER(743);
	if ((frame[5].i) != (117)) goto label_12;
	}
	{
	LINE_NUMBER(744);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[4].i), ((frame[4].i) + (jint(4))));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, sp[1].o, (16));
	sp[1].o = (jobject)SM_java_lang_Character_toChars_int_R_Array1_char(ctx, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(745);
	INST_IINC(4, 4);
	LINE_NUMBER(746);
	goto label_3;
	}
label_12:;
	{
	LINE_NUMBER(748);
	switch((frame[5].i)) {
		case 34: goto label_16;
		case 47: goto label_16;
		case 92: goto label_16;
		case 98: goto label_17;
		case 102: goto label_18;
		case 110: goto label_19;
		case 114: goto label_20;
		case 116: goto label_21;
		default: goto label_22;
	}
	}
label_16:;
	LINE_NUMBER(752);
	goto label_23;
label_17:;
	{
	LINE_NUMBER(754);
	frame[5].i = (8);
	LINE_NUMBER(755);
	goto label_23;
	}
label_18:;
	{
	LINE_NUMBER(757);
	frame[5].i = (12);
	LINE_NUMBER(758);
	goto label_23;
	}
label_19:;
	{
	LINE_NUMBER(760);
	frame[5].i = (10);
	LINE_NUMBER(761);
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(763);
	frame[5].i = (13);
	LINE_NUMBER(764);
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(766);
	frame[5].i = (9);
	LINE_NUMBER(767);
	goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(769);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Illegal escaped character: \\"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[5].i));
	LINE_NUMBER(772);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(773);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_JsonReader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_utils_JsonReader_json_start = jint(1);
	SF_com_badlogic_gdx_utils_JsonReader_json_first_final = jint(35);
	SF_com_badlogic_gdx_utils_JsonReader_json_error = jint(0);
	SF_com_badlogic_gdx_utils_JsonReader_json_en_object = jint(5);
	SF_com_badlogic_gdx_utils_JsonReader_json_en_array = jint(23);
	SF_com_badlogic_gdx_utils_JsonReader_json_en_main = jint(1);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonReader:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonReader_init__json_actions_0_R_Array1_byte(ctx);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	SF_com_badlogic_gdx_utils_JsonReader__json_actions = sp[0].o;
	LINE_NUMBER(585);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonReader_init__json_key_offsets_0_R_Array1_short(ctx);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	SF_com_badlogic_gdx_utils_JsonReader__json_key_offsets = sp[0].o;
	LINE_NUMBER(597);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonReader_init__json_trans_keys_0_R_Array1_char(ctx);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	SF_com_badlogic_gdx_utils_JsonReader__json_trans_keys = sp[0].o;
	LINE_NUMBER(604);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonReader_init__json_single_lengths_0_R_Array1_byte(ctx);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	SF_com_badlogic_gdx_utils_JsonReader__json_single_lengths = sp[0].o;
	LINE_NUMBER(611);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonReader_init__json_range_lengths_0_R_Array1_byte(ctx);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	SF_com_badlogic_gdx_utils_JsonReader__json_range_lengths = sp[0].o;
	LINE_NUMBER(618);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonReader_init__json_index_offsets_0_R_Array1_short(ctx);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	SF_com_badlogic_gdx_utils_JsonReader__json_index_offsets = sp[0].o;
	LINE_NUMBER(630);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonReader_init__json_indicies_0_R_Array1_byte(ctx);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	SF_com_badlogic_gdx_utils_JsonReader__json_indicies = sp[0].o;
	LINE_NUMBER(638);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonReader_init__json_trans_targs_0_R_Array1_byte(ctx);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	SF_com_badlogic_gdx_utils_JsonReader__json_trans_targs = sp[0].o;
	LINE_NUMBER(646);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonReader_init__json_trans_actions_0_R_Array1_byte(ctx);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	SF_com_badlogic_gdx_utils_JsonReader__json_trans_actions = sp[0].o;
	LINE_NUMBER(653);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonReader_init__json_eof_actions_0_R_Array1_byte(ctx);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	SF_com_badlogic_gdx_utils_JsonReader__json_eof_actions = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_JsonReader[] {
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
	(void *) M_com_badlogic_gdx_utils_JsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonReader_stop,
	(void *) M_com_badlogic_gdx_utils_JsonReader_isStopped_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonReader_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonReader_startObject_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonReader_startArray_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonReader_pop,
	(void *) M_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_double_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_long_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonReader_unescape_java_lang_String_R_java_lang_String,
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
	{ "parse", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "parse", "(Ljava/io/Reader;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "parse", "([CII)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "stop", "()V" },
	{ "isStopped", "()Z" },
	{ "addChild", "(Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "startObject", "(Ljava/lang/String;)V" },
	{ "startArray", "(Ljava/lang/String;)V" },
	{ "pop", "()V" },
	{ "string", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "number", "(Ljava/lang/String;DLjava/lang/String;)V" },
	{ "number", "(Ljava/lang/String;JLjava/lang/String;)V" },
	{ "bool", "(Ljava/lang/String;Z)V" },
	{ "unescape", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_BaseJsonReader, };

static FieldMetadata fields[] {
	{ "_json_actions", getArrayClass(&class_byte, 1), (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader__json_actions, "[B", 26 },
	{ "_json_key_offsets", getArrayClass(&class_short, 1), (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader__json_key_offsets, "[S", 26 },
	{ "_json_trans_keys", getArrayClass(&class_char, 1), (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader__json_trans_keys, "[C", 26 },
	{ "_json_single_lengths", getArrayClass(&class_byte, 1), (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader__json_single_lengths, "[B", 26 },
	{ "_json_range_lengths", getArrayClass(&class_byte, 1), (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader__json_range_lengths, "[B", 26 },
	{ "_json_index_offsets", getArrayClass(&class_short, 1), (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader__json_index_offsets, "[S", 26 },
	{ "_json_indicies", getArrayClass(&class_byte, 1), (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader__json_indicies, "[B", 26 },
	{ "_json_trans_targs", getArrayClass(&class_byte, 1), (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader__json_trans_targs, "[B", 26 },
	{ "_json_trans_actions", getArrayClass(&class_byte, 1), (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader__json_trans_actions, "[B", 26 },
	{ "_json_eof_actions", getArrayClass(&class_byte, 1), (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader__json_eof_actions, "[B", 26 },
	{ "json_start", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader_json_start, "I", 24 },
	{ "json_first_final", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader_json_first_final, "I", 24 },
	{ "json_error", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader_json_error, "I", 24 },
	{ "json_en_object", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader_json_en_object, "I", 24 },
	{ "json_en_array", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader_json_en_array, "I", 24 },
	{ "json_en_main", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_JsonReader_json_en_main, "I", 24 },
	{ "elements", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_utils_JsonReader, F_elements), "Lcom/badlogic/gdx/utils/Array;", 18 },
	{ "root", &class_com_badlogic_gdx_utils_JsonValue, offsetof(com_badlogic_gdx_utils_JsonReader, F_root), "Lcom/badlogic/gdx/utils/JsonValue;", 2 },
	{ "current", &class_com_badlogic_gdx_utils_JsonValue, offsetof(com_badlogic_gdx_utils_JsonReader, F_current), "Lcom/badlogic/gdx/utils/JsonValue;", 2 },
	{ "stop", &class_boolean, offsetof(com_badlogic_gdx_utils_JsonReader, F_stop), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonReader, 0, "()V", 1 },
	{ "parse", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "parse", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/io/Reader;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "parse", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/io/InputStream;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "parse", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "parse", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue, "([CII)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "init__json_actions_0", (intptr_t) SM_com_badlogic_gdx_utils_JsonReader_init__json_actions_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_key_offsets_0", (intptr_t) SM_com_badlogic_gdx_utils_JsonReader_init__json_key_offsets_0_R_Array1_short, 0, "()[S", 10 },
	{ "init__json_trans_keys_0", (intptr_t) SM_com_badlogic_gdx_utils_JsonReader_init__json_trans_keys_0_R_Array1_char, 0, "()[C", 10 },
	{ "init__json_single_lengths_0", (intptr_t) SM_com_badlogic_gdx_utils_JsonReader_init__json_single_lengths_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_range_lengths_0", (intptr_t) SM_com_badlogic_gdx_utils_JsonReader_init__json_range_lengths_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_index_offsets_0", (intptr_t) SM_com_badlogic_gdx_utils_JsonReader_init__json_index_offsets_0_R_Array1_short, 0, "()[S", 10 },
	{ "init__json_indicies_0", (intptr_t) SM_com_badlogic_gdx_utils_JsonReader_init__json_indicies_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_trans_targs_0", (intptr_t) SM_com_badlogic_gdx_utils_JsonReader_init__json_trans_targs_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_trans_actions_0", (intptr_t) SM_com_badlogic_gdx_utils_JsonReader_init__json_trans_actions_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_eof_actions_0", (intptr_t) SM_com_badlogic_gdx_utils_JsonReader_init__json_eof_actions_0_R_Array1_byte, 0, "()[B", 10 },
	{ "stop", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_stop, VTABLE_com_badlogic_gdx_utils_JsonReader_stop, "()V", 1 },
	{ "isStopped", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_isStopped_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonReader_isStopped_R_boolean, "()Z", 1 },
	{ "addChild", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonReader_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue;)V", 2 },
	{ "startObject", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_startObject_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonReader_startObject_java_lang_String, "(Ljava/lang/String;)V", 4 },
	{ "startArray", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_startArray_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonReader_startArray_java_lang_String, "(Ljava/lang/String;)V", 4 },
	{ "pop", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_pop, VTABLE_com_badlogic_gdx_utils_JsonReader_pop, "()V", 4 },
	{ "string", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonReader_string_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 4 },
	{ "number", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_double_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_double_java_lang_String, "(Ljava/lang/String;DLjava/lang/String;)V", 4 },
	{ "number", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_long_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonReader_number_java_lang_String_long_java_lang_String, "(Ljava/lang/String;JLjava/lang/String;)V", 4 },
	{ "bool", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean, VTABLE_com_badlogic_gdx_utils_JsonReader_bool_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 4 },
	{ "unescape", (intptr_t) M_com_badlogic_gdx_utils_JsonReader_unescape_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonReader_unescape_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 4 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_JsonReader, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_JsonReader{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/JsonReader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_JsonReader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_JsonReader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_JsonReader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_JsonReader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_JsonReader = registerClass(&class_com_badlogic_gdx_utils_JsonReader);

}

