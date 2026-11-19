#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/utils/StreamUtils_OptimizedByteArrayOutputStream.h"
#include "java/io/OutputStream.h"
#include "java/io/InputStream.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/io/InputStreamReader.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "java/io/Closeable.h"
#include "java/io/StringWriter.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/io/ByteArrayOutputStream.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"

extern "C" {

jint SF_com_badlogic_gdx_utils_StreamUtils_DEFAULT_BUFFER_SIZE;
jobject SF_com_badlogic_gdx_utils_StreamUtils_EMPTY_BYTES;

void mark_com_badlogic_gdx_utils_StreamUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_StreamUtils_EMPTY_BYTES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_StreamUtils_EMPTY_BYTES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_StreamUtils_EMPTY_BYTES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_StreamUtils *) object;
}

void init_com_badlogic_gdx_utils_StreamUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_io_OutputStream(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:copyStream", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject) createArray(ctx, &class_byte, (4096));
	SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_io_OutputStream_Array1_byte(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_io_OutputStream_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:copyStream", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_io_OutputStream_Array1_byte(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_io_OutputStream_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:copyStream", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_0:;
	{
	LINE_NUMBER(50);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[3].i = temp0;
	if (temp0 == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(51);
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, (frame[1].o), (frame[2].o), (jint(0)), (frame[3].i));
	goto label_0;
	}
label_2:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:copyStream", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject) createArray(ctx, &class_byte, (4096));
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_nio_ByteBuffer_Array1_byte_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_nio_ByteBuffer_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:copyStream", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_nio_ByteBuffer_Array1_byte_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_nio_ByteBuffer_Array1_byte_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:copyStream", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	frame[4].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(74);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[5].i = temp0;
	if (temp0 == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(75);
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_byte_int_java_nio_Buffer_int(ctx, (frame[2].o), (jint(0)), (frame[1].o), (frame[5].i));
	LINE_NUMBER(76);
	frame[4].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[1].o), ((frame[3].i) + (frame[4].i)));
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToByteArray_java_io_InputStream_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:copyStreamToByteArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToByteArray_java_io_InputStream_int_R_Array1_byte(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToByteArray_java_io_InputStream_int_R_Array1_byte(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:copyStreamToByteArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(91);
	clinit_com_badlogic_gdx_utils_StreamUtils$OptimizedByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_StreamUtils$OptimizedByteArrayOutputStream);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (frame[1].i));
	init_com_badlogic_gdx_utils_StreamUtils$OptimizedByteArrayOutputStream_int(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(92);
	SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_io_OutputStream(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToString_java_io_InputStream_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:copyStreamToString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToString_java_io_InputStream_int_java_lang_String_R_java_lang_String(ctx, sp[0].o, temp0, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToString_java_io_InputStream_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:copyStreamToString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToString_java_io_InputStream_int_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[1].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToString_java_io_InputStream_int_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:copyStreamToString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(111);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	clinit_java_io_InputStreamReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_java_io_InputStreamReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	init_java_io_InputStreamReader_java_io_InputStream_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[2].o));
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(112);
	clinit_java_io_StringWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_StringWriter);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (frame[1].i));
	init_java_io_StringWriter_int(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	LINE_NUMBER(113);
	sp[0].o = (jobject) createArray(ctx, &class_char, (4096));
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(115);
	jint temp0 = (jint)((func_java_io_InputStreamReader_read_Array1_char_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_InputStreamReader_read_Array1_char_R_int])(ctx, (frame[3].o), (frame[5].o));
	frame[6].i = temp0;
	if (temp0 == (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(116);
	((func_java_io_StringWriter_write_Array1_char_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_StringWriter_write_Array1_char_int_int])(ctx, (frame[4].o), (frame[5].o), (jint(0)), (frame[6].i));
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_java_io_StringWriter_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_StringWriter_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:closeQuietly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(123);
	if ((frame[0].o) == nullptr) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(125);
	((func_java_io_Closeable_close) resolveInterfaceMethod(ctx, &class_java_io_Closeable, INDEX_java_io_Closeable_close, (frame[0].o)))(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(127);
	goto label_5;
label_2:;
	LINE_NUMBER(126);
	INST_ASTORE(1);
label_5:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_StreamUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_utils_StreamUtils_DEFAULT_BUFFER_SIZE = jint(4096);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/StreamUtils:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(0)));
	clinit_com_badlogic_gdx_utils_StreamUtils(ctx);
	SF_com_badlogic_gdx_utils_StreamUtils_EMPTY_BYTES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_StreamUtils[] {
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

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_StreamUtils$OptimizedByteArrayOutputStream,
};

static FieldMetadata fields[] {
	{ "DEFAULT_BUFFER_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_StreamUtils_DEFAULT_BUFFER_SIZE, "I", 25 },
	{ "EMPTY_BYTES", getArrayClass(&class_byte, 1), (intptr_t) &SF_com_badlogic_gdx_utils_StreamUtils_EMPTY_BYTES, "[B", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_StreamUtils, 0, "()V", 1 },
	{ "copyStream", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_io_OutputStream, 0, "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", 9 },
	{ "copyStream", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_io_OutputStream_int, 0, "(Ljava/io/InputStream;Ljava/io/OutputStream;I)V", 9 },
	{ "copyStream", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_io_OutputStream_Array1_byte, 0, "(Ljava/io/InputStream;Ljava/io/OutputStream;[B)V", 9 },
	{ "copyStream", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_nio_ByteBuffer, 0, "(Ljava/io/InputStream;Ljava/nio/ByteBuffer;)V", 9 },
	{ "copyStream", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_nio_ByteBuffer_int, 0, "(Ljava/io/InputStream;Ljava/nio/ByteBuffer;I)V", 9 },
	{ "copyStream", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_nio_ByteBuffer_Array1_byte_R_int, 0, "(Ljava/io/InputStream;Ljava/nio/ByteBuffer;[B)I", 9 },
	{ "copyStreamToByteArray", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToByteArray_java_io_InputStream_R_Array1_byte, 0, "(Ljava/io/InputStream;)[B", 9 },
	{ "copyStreamToByteArray", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToByteArray_java_io_InputStream_int_R_Array1_byte, 0, "(Ljava/io/InputStream;I)[B", 9 },
	{ "copyStreamToString", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToString_java_io_InputStream_R_java_lang_String, 0, "(Ljava/io/InputStream;)Ljava/lang/String;", 9 },
	{ "copyStreamToString", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToString_java_io_InputStream_int_R_java_lang_String, 0, "(Ljava/io/InputStream;I)Ljava/lang/String;", 9 },
	{ "copyStreamToString", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToString_java_io_InputStream_int_java_lang_String_R_java_lang_String, 0, "(Ljava/io/InputStream;ILjava/lang/String;)Ljava/lang/String;", 9 },
	{ "closeQuietly", (intptr_t) SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable, 0, "(Ljava/io/Closeable;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_StreamUtils, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_StreamUtils{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/StreamUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_StreamUtils),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_StreamUtils,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_StreamUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_StreamUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_StreamUtils = registerClass(&class_com_badlogic_gdx_utils_StreamUtils);

}

