#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/IntBuffer.h"
#include "java/nio/DoubleBuffer.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/nio/ByteOrder.h"
#include "java/nio/CharBuffer.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "java/nio/ShortBuffer.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "com/badlogic/gdx/math/Matrix3.h"
#include "java/nio/LongBuffer.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers;
jint SF_com_badlogic_gdx_utils_BufferUtils_allocatedUnsafe;

void mark_com_badlogic_gdx_utils_BufferUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_BufferUtils *) object;
}

void init_com_badlogic_gdx_utils_BufferUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(54);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_ByteBuffer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, (frame[1].o), ((frame[2].i) << (jint(2))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(56);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_FloatBuffer)) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, (frame[1].o), (frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(58);
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_float_java_nio_Buffer_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_byte_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[2].o), (frame[3].i));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_byte_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (frame[3].i));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_short_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[2].o), ((frame[3].i) << (jint(1))));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_short_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, ((frame[3].i) << (jint(1))));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_char_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[3].o;
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[3].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_char_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, ((frame[2].i) << (jint(1))));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_int_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[3].o;
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[3].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_int_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, ((frame[2].i) << (jint(2))));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_long_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[3].o;
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[3].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_long_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, ((frame[2].i) << (jint(3))));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[3].o;
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[3].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_float_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, ((frame[2].i) << (jint(2))));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_double_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[3].o;
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[3].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_double_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, ((frame[2].i) << (jint(3))));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_char_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(160);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[2].o), ((frame[3].i) << (jint(1))));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_char_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, ((frame[3].i) << (jint(1))));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_int_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(174);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[2].o), ((frame[3].i) << (jint(2))));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_int_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, ((frame[3].i) << (jint(2))));
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_long_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[2].o), ((frame[3].i) << (jint(3))));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_long_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, ((frame[3].i) << (jint(3))));
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(202);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[2].o), ((frame[3].i) << (jint(2))));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_float_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, ((frame[3].i) << (jint(2))));
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_double_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(216);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[2].o), ((frame[3].i) << (jint(3))));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_double_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, ((frame[3].i) << (jint(3))));
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_copy_java_nio_Buffer_java_nio_Buffer_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:copy", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(230);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_elementsToBytes_java_nio_Buffer_int_R_int(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(231);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[1].o));
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[1].o), (frame[3].i));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp1 + temp2));
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	jint temp4 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[1].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copyJni_java_nio_Buffer_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp3, sp[1].o, temp4, (frame[3].i));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:transform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(243);
	SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix4_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o), (jint(0)));
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:transform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(254);
	SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix4_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o), (jint(0)));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix4_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:transform", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(266);
	switch((frame[1].i)) {
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[4].o)))->F_val;
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[0].o));
	SM_com_badlogic_gdx_utils_BufferUtils_transformV4M4Jni_java_nio_Buffer_int_int_Array1_float_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (temp2 + (frame[5].i)));
	LINE_NUMBER(269);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(271);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[4].o)))->F_val;
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[0].o));
	SM_com_badlogic_gdx_utils_BufferUtils_transformV3M4Jni_java_nio_Buffer_int_int_Array1_float_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (temp2 + (frame[5].i)));
	LINE_NUMBER(272);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[4].o)))->F_val;
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[0].o));
	SM_com_badlogic_gdx_utils_BufferUtils_transformV2M4Jni_java_nio_Buffer_int_int_Array1_float_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (temp2 + (frame[5].i)));
	LINE_NUMBER(275);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(277);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(279);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix4_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:transform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(290);
	switch((frame[1].i)) {
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[4].o)))->F_val;
	SM_com_badlogic_gdx_utils_BufferUtils_transformV4M4Jni_Array1_float_int_int_Array1_float_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[5].i));
	LINE_NUMBER(293);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[4].o)))->F_val;
	SM_com_badlogic_gdx_utils_BufferUtils_transformV3M4Jni_Array1_float_int_int_Array1_float_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[5].i));
	LINE_NUMBER(296);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[4].o)))->F_val;
	SM_com_badlogic_gdx_utils_BufferUtils_transformV2M4Jni_Array1_float_int_int_Array1_float_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[5].i));
	LINE_NUMBER(299);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(301);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(303);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:transform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(313);
	SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix3_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o), (jint(0)));
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:transform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(324);
	SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix3_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o), (jint(0)));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix3_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:transform", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(336);
	switch((frame[1].i)) {
		case 2: goto label_1;
		case 3: goto label_2;
		default: goto label_3;
	}
	}
label_2:;
	{
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[4].o)))->F_val;
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[0].o));
	SM_com_badlogic_gdx_utils_BufferUtils_transformV3M3Jni_java_nio_Buffer_int_int_Array1_float_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (temp2 + (frame[5].i)));
	LINE_NUMBER(339);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[4].o)))->F_val;
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[0].o));
	SM_com_badlogic_gdx_utils_BufferUtils_transformV2M3Jni_java_nio_Buffer_int_int_Array1_float_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (temp2 + (frame[5].i)));
	LINE_NUMBER(342);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(344);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(346);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix3_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:transform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(357);
	switch((frame[1].i)) {
		case 2: goto label_1;
		case 3: goto label_2;
		default: goto label_3;
	}
	}
label_2:;
	{
	LINE_NUMBER(359);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[4].o)))->F_val;
	SM_com_badlogic_gdx_utils_BufferUtils_transformV3M3Jni_Array1_float_int_int_Array1_float_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[5].i));
	LINE_NUMBER(360);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[4].o)))->F_val;
	SM_com_badlogic_gdx_utils_BufferUtils_transformV2M3Jni_Array1_float_int_int_Array1_float_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[5].i));
	LINE_NUMBER(363);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(365);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(367);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_java_nio_Buffer_int_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:findFloats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[0].o));
	jint temp1 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	jlong temp3 = (jlong)SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_java_nio_Buffer_int_int_R_long(ctx, sp[0].o, temp0, temp1, sp[1].o, temp2, (frame[3].i));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_java_nio_Buffer_int_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:findFloats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(374);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	jlong temp3 = (jlong)SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_java_nio_Buffer_int_int_R_long(ctx, sp[0].o, temp0, temp1, sp[1].o, temp2, (frame[3].i));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_Array1_float_int_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:findFloats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(378);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[0].o));
	jlong temp1 = (jlong)SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_Array1_float_int_int_R_long(ctx, sp[0].o, temp0, (frame[1].i), (frame[2].o), (jint(0)), (frame[3].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_Array1_float_int_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:findFloats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(382);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_Array1_float_int_int_R_long(ctx, (frame[0].o), (jint(0)), (frame[1].i), (frame[2].o), (jint(0)), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_java_nio_Buffer_int_float_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jfloat param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:findFloats", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[0].o));
	jint temp1 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	jlong temp3 = (jlong)SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_java_nio_Buffer_int_int_float_R_long(ctx, sp[0].o, temp0, temp1, sp[1].o, temp2, (frame[3].i), (frame[4].f));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_java_nio_Buffer_int_float_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jfloat param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:findFloats", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(390);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	jlong temp3 = (jlong)SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_java_nio_Buffer_int_int_float_R_long(ctx, sp[0].o, temp0, temp1, sp[1].o, temp2, (frame[3].i), (frame[4].f));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_Array1_float_int_float_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jfloat param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:findFloats", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[0].o));
	jlong temp1 = (jlong)SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_Array1_float_int_int_float_R_long(ctx, sp[0].o, temp0, (frame[1].i), (frame[2].o), (jint(0)), (frame[3].i), (frame[4].f));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_Array1_float_int_float_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jfloat param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:findFloats", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(398);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_Array1_float_int_int_float_R_long(ctx, (frame[0].o), (jint(0)), (frame[1].i), (frame[2].o), (jint(0)), (frame[3].i), (frame[4].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:positionInBytes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(402);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_ByteBuffer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(403);
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(404);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_ShortBuffer)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(405);
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 << (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(406);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_CharBuffer)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(407);
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 << (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(408);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_IntBuffer)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(409);
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 << (jint(2)));
	}
label_7:;
	{
	LINE_NUMBER(410);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_LongBuffer)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(411);
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 << (jint(3)));
	}
label_9:;
	{
	LINE_NUMBER(412);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_FloatBuffer)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 << (jint(2)));
	}
label_11:;
	{
	LINE_NUMBER(414);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_DoubleBuffer)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(415);
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 << (jint(3)));
	}
label_13:;
	{
	LINE_NUMBER(417);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Can't copy to a "_j))));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" instance"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_BufferUtils_bytesToElements_java_nio_Buffer_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:bytesToElements", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(421);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_ByteBuffer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(422);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_1:;
	{
	LINE_NUMBER(423);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_ShortBuffer)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(1))));
	}
label_3:;
	{
	LINE_NUMBER(425);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_CharBuffer)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(1))));
	}
label_5:;
	{
	LINE_NUMBER(427);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_IntBuffer)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(2))));
	}
label_7:;
	{
	LINE_NUMBER(429);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_LongBuffer)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(3))));
	}
label_9:;
	{
	LINE_NUMBER(431);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_FloatBuffer)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(2))));
	}
label_11:;
	{
	LINE_NUMBER(433);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_DoubleBuffer)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(3))));
	}
label_13:;
	{
	LINE_NUMBER(436);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Can't copy to a "_j))));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" instance"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_BufferUtils_elementsToBytes_java_nio_Buffer_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:elementsToBytes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(440);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_ByteBuffer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_1:;
	{
	LINE_NUMBER(442);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_ShortBuffer)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return ((frame[1].i) << (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(444);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_CharBuffer)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return ((frame[1].i) << (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(446);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_IntBuffer)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return ((frame[1].i) << (jint(2)));
	}
label_7:;
	{
	LINE_NUMBER(448);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_LongBuffer)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return ((frame[1].i) << (jint(3)));
	}
label_9:;
	{
	LINE_NUMBER(450);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_FloatBuffer)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return ((frame[1].i) << (jint(2)));
	}
label_11:;
	{
	LINE_NUMBER(452);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_DoubleBuffer)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(453);
	popStackFrame(ctx);
	return ((frame[1].i) << (jint(3)));
	}
label_13:;
	{
	LINE_NUMBER(455);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Can't copy to a "_j))));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" instance"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_BufferUtils_newFloatBuffer_int_R_java_nio_FloatBuffer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:newFloatBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, ((frame[0].i) * (jint(4))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(460);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(461);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_BufferUtils_newDoubleBuffer_int_R_java_nio_DoubleBuffer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:newDoubleBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, ((frame[0].i) * (8)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(466);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asDoubleBuffer_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_asDoubleBuffer_R_java_nio_DoubleBuffer])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_BufferUtils_newByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:newByteBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, (frame[0].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(472);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_BufferUtils_newShortBuffer_int_R_java_nio_ShortBuffer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:newShortBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, ((frame[0].i) * (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(478);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_BufferUtils_newCharBuffer_int_R_java_nio_CharBuffer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:newCharBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, ((frame[0].i) * (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(484);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(485);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asCharBuffer_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_asCharBuffer_R_java_nio_CharBuffer])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_BufferUtils_newIntBuffer_int_R_java_nio_IntBuffer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:newIntBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, ((frame[0].i) * (jint(4))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(490);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_BufferUtils_newLongBuffer_int_R_java_nio_LongBuffer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:newLongBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, ((frame[0].i) * (8)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(496);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(497);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asLongBuffer_R_java_nio_LongBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_asLongBuffer_R_java_nio_LongBuffer])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:disposeUnsafeByteBuffer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(501);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(502);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(503);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(504);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buffer not allocated with newUnsafeByteBuffer or already disposed"_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(505);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_10:;
	{
	LINE_NUMBER(506);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	SF_com_badlogic_gdx_utils_BufferUtils_allocatedUnsafe = ((clinit_com_badlogic_gdx_utils_BufferUtils(ctx), (jint)SF_com_badlogic_gdx_utils_BufferUtils_allocatedUnsafe) - (frame[1].i));
	LINE_NUMBER(507);
	SM_com_badlogic_gdx_utils_BufferUtils_freeMemory_java_nio_ByteBuffer(ctx, (frame[0].o));
	LINE_NUMBER(508);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_BufferUtils_isUnsafeByteBuffer_java_nio_ByteBuffer_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:isUnsafeByteBuffer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(511);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(512);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(513);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:newUnsafeByteBuffer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newDisposableByteBuffer_int_R_java_nio_ByteBuffer(ctx, (frame[0].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(520);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(521);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	SF_com_badlogic_gdx_utils_BufferUtils_allocatedUnsafe = ((clinit_com_badlogic_gdx_utils_BufferUtils(ctx), (jint)SF_com_badlogic_gdx_utils_BufferUtils_allocatedUnsafe) + (frame[0].i));
	LINE_NUMBER(522);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(523);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(524);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_11;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_11:;
	{
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_utils_BufferUtils_getUnsafeBufferAddress_java_nio_Buffer_R_long(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:getUnsafeBufferAddress", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(532);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_utils_BufferUtils_getBufferAddress_java_nio_Buffer_R_long(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + (jlong(temp1)));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_java_nio_ByteBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:newUnsafeByteBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(540);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	jint temp0 = (jint)SF_com_badlogic_gdx_utils_BufferUtils_allocatedUnsafe;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[0].o));
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	SF_com_badlogic_gdx_utils_BufferUtils_allocatedUnsafe = (temp0 + temp1);
	LINE_NUMBER(541);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(542);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(543);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_9:;
	{
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_BufferUtils_getAllocatedBytesUnsafe_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:getAllocatedBytesUnsafe", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	{
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return (clinit_com_badlogic_gdx_utils_BufferUtils(ctx), (jint)SF_com_badlogic_gdx_utils_BufferUtils_allocatedUnsafe);
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_BufferUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/BufferUtils:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	{
	LINE_NUMBER(40);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers = sp[0].o;
	LINE_NUMBER(41);
	clinit_com_badlogic_gdx_utils_BufferUtils(ctx);
	SF_com_badlogic_gdx_utils_BufferUtils_allocatedUnsafe = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_BufferUtils[] {
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
	{ "unsafeBuffers", &class_com_badlogic_gdx_utils_Array, (intptr_t) &SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers, "Lcom/badlogic/gdx/utils/Array;", 8 },
	{ "allocatedUnsafe", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_BufferUtils_allocatedUnsafe, "I", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_BufferUtils, 0, "()V", 2 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_java_nio_Buffer_int_int, 0, "([FLjava/nio/Buffer;II)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_byte_int_java_nio_Buffer_int, 0, "([BILjava/nio/Buffer;I)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_short_int_java_nio_Buffer_int, 0, "([SILjava/nio/Buffer;I)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_char_int_int_java_nio_Buffer, 0, "([CIILjava/nio/Buffer;)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_int_int_int_java_nio_Buffer, 0, "([IIILjava/nio/Buffer;)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_long_int_int_java_nio_Buffer, 0, "([JIILjava/nio/Buffer;)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_int_int_java_nio_Buffer, 0, "([FIILjava/nio/Buffer;)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_double_int_int_java_nio_Buffer, 0, "([DIILjava/nio/Buffer;)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_char_int_java_nio_Buffer_int, 0, "([CILjava/nio/Buffer;I)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_int_int_java_nio_Buffer_int, 0, "([IILjava/nio/Buffer;I)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_long_int_java_nio_Buffer_int, 0, "([JILjava/nio/Buffer;I)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_int_java_nio_Buffer_int, 0, "([FILjava/nio/Buffer;I)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_double_int_java_nio_Buffer_int, 0, "([DILjava/nio/Buffer;I)V", 9 },
	{ "copy", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copy_java_nio_Buffer_java_nio_Buffer_int, 0, "(Ljava/nio/Buffer;Ljava/nio/Buffer;I)V", 9 },
	{ "transform", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix4, 0, "(Ljava/nio/Buffer;IIILcom/badlogic/gdx/math/Matrix4;)V", 9 },
	{ "transform", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix4, 0, "([FIIILcom/badlogic/gdx/math/Matrix4;)V", 9 },
	{ "transform", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix4_int, 0, "(Ljava/nio/Buffer;IIILcom/badlogic/gdx/math/Matrix4;I)V", 9 },
	{ "transform", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix4_int, 0, "([FIIILcom/badlogic/gdx/math/Matrix4;I)V", 9 },
	{ "transform", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix3, 0, "(Ljava/nio/Buffer;IIILcom/badlogic/gdx/math/Matrix3;)V", 9 },
	{ "transform", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix3, 0, "([FIIILcom/badlogic/gdx/math/Matrix3;)V", 9 },
	{ "transform", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix3_int, 0, "(Ljava/nio/Buffer;IIILcom/badlogic/gdx/math/Matrix3;I)V", 9 },
	{ "transform", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix3_int, 0, "([FIIILcom/badlogic/gdx/math/Matrix3;I)V", 9 },
	{ "findFloats", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_java_nio_Buffer_int_R_long, 0, "(Ljava/nio/Buffer;ILjava/nio/Buffer;I)J", 9 },
	{ "findFloats", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_java_nio_Buffer_int_R_long, 0, "([FILjava/nio/Buffer;I)J", 9 },
	{ "findFloats", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_Array1_float_int_R_long, 0, "(Ljava/nio/Buffer;I[FI)J", 9 },
	{ "findFloats", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_Array1_float_int_R_long, 0, "([FI[FI)J", 9 },
	{ "findFloats", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_java_nio_Buffer_int_float_R_long, 0, "(Ljava/nio/Buffer;ILjava/nio/Buffer;IF)J", 9 },
	{ "findFloats", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_java_nio_Buffer_int_float_R_long, 0, "([FILjava/nio/Buffer;IF)J", 9 },
	{ "findFloats", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_Array1_float_int_float_R_long, 0, "(Ljava/nio/Buffer;I[FIF)J", 9 },
	{ "findFloats", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_Array1_float_int_float_R_long, 0, "([FI[FIF)J", 9 },
	{ "positionInBytes", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int, 0, "(Ljava/nio/Buffer;)I", 10 },
	{ "bytesToElements", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_bytesToElements_java_nio_Buffer_int_R_int, 0, "(Ljava/nio/Buffer;I)I", 10 },
	{ "elementsToBytes", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_elementsToBytes_java_nio_Buffer_int_R_int, 0, "(Ljava/nio/Buffer;I)I", 10 },
	{ "newFloatBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_newFloatBuffer_int_R_java_nio_FloatBuffer, 0, "(I)Ljava/nio/FloatBuffer;", 9 },
	{ "newDoubleBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_newDoubleBuffer_int_R_java_nio_DoubleBuffer, 0, "(I)Ljava/nio/DoubleBuffer;", 9 },
	{ "newByteBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_newByteBuffer_int_R_java_nio_ByteBuffer, 0, "(I)Ljava/nio/ByteBuffer;", 9 },
	{ "newShortBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_newShortBuffer_int_R_java_nio_ShortBuffer, 0, "(I)Ljava/nio/ShortBuffer;", 9 },
	{ "newCharBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_newCharBuffer_int_R_java_nio_CharBuffer, 0, "(I)Ljava/nio/CharBuffer;", 9 },
	{ "newIntBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_newIntBuffer_int_R_java_nio_IntBuffer, 0, "(I)Ljava/nio/IntBuffer;", 9 },
	{ "newLongBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_newLongBuffer_int_R_java_nio_LongBuffer, 0, "(I)Ljava/nio/LongBuffer;", 9 },
	{ "disposeUnsafeByteBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)V", 9 },
	{ "isUnsafeByteBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_isUnsafeByteBuffer_java_nio_ByteBuffer_R_boolean, 0, "(Ljava/nio/ByteBuffer;)Z", 9 },
	{ "newUnsafeByteBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer, 0, "(I)Ljava/nio/ByteBuffer;", 9 },
	{ "getUnsafeBufferAddress", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_getUnsafeBufferAddress_java_nio_Buffer_R_long, 0, "(Ljava/nio/Buffer;)J", 9 },
	{ "newUnsafeByteBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_java_nio_ByteBuffer_R_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", 9 },
	{ "getAllocatedBytesUnsafe", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_getAllocatedBytesUnsafe_R_int, 0, "()I", 9 },
	{ "freeMemory", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_freeMemory_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)V", 266 },
	{ "newDisposableByteBuffer", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_newDisposableByteBuffer_int_R_java_nio_ByteBuffer, 0, "(I)Ljava/nio/ByteBuffer;", 266 },
	{ "getBufferAddress", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_getBufferAddress_java_nio_Buffer_R_long, 0, "(Ljava/nio/Buffer;)J", 266 },
	{ "clear", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_clear_java_nio_ByteBuffer_int, 0, "(Ljava/nio/ByteBuffer;I)V", 265 },
	{ "copyJni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_float_java_nio_Buffer_int_int, 0, "([FLjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_byte_int_java_nio_Buffer_int_int, 0, "([BILjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_char_int_java_nio_Buffer_int_int, 0, "([CILjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_short_int_java_nio_Buffer_int_int, 0, "([SILjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_int_int_java_nio_Buffer_int_int, 0, "([IILjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_long_int_java_nio_Buffer_int_int, 0, "([JILjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_float_int_java_nio_Buffer_int_int, 0, "([FILjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_double_int_java_nio_Buffer_int_int, 0, "([DILjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_copyJni_java_nio_Buffer_int_java_nio_Buffer_int_int, 0, "(Ljava/nio/Buffer;ILjava/nio/Buffer;II)V", 266 },
	{ "transformV4M4Jni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transformV4M4Jni_java_nio_Buffer_int_int_Array1_float_int, 0, "(Ljava/nio/Buffer;II[FI)V", 266 },
	{ "transformV4M4Jni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transformV4M4Jni_Array1_float_int_int_Array1_float_int, 0, "([FII[FI)V", 266 },
	{ "transformV3M4Jni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transformV3M4Jni_java_nio_Buffer_int_int_Array1_float_int, 0, "(Ljava/nio/Buffer;II[FI)V", 266 },
	{ "transformV3M4Jni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transformV3M4Jni_Array1_float_int_int_Array1_float_int, 0, "([FII[FI)V", 266 },
	{ "transformV2M4Jni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transformV2M4Jni_java_nio_Buffer_int_int_Array1_float_int, 0, "(Ljava/nio/Buffer;II[FI)V", 266 },
	{ "transformV2M4Jni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transformV2M4Jni_Array1_float_int_int_Array1_float_int, 0, "([FII[FI)V", 266 },
	{ "transformV3M3Jni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transformV3M3Jni_java_nio_Buffer_int_int_Array1_float_int, 0, "(Ljava/nio/Buffer;II[FI)V", 266 },
	{ "transformV3M3Jni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transformV3M3Jni_Array1_float_int_int_Array1_float_int, 0, "([FII[FI)V", 266 },
	{ "transformV2M3Jni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transformV2M3Jni_java_nio_Buffer_int_int_Array1_float_int, 0, "(Ljava/nio/Buffer;II[FI)V", 266 },
	{ "transformV2M3Jni", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_transformV2M3Jni_Array1_float_int_int_Array1_float_int, 0, "([FII[FI)V", 266 },
	{ "find", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_java_nio_Buffer_int_int_R_long, 0, "(Ljava/nio/Buffer;IILjava/nio/Buffer;II)J", 266 },
	{ "find", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_java_nio_Buffer_int_int_R_long, 0, "([FIILjava/nio/Buffer;II)J", 266 },
	{ "find", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_Array1_float_int_int_R_long, 0, "(Ljava/nio/Buffer;II[FII)J", 266 },
	{ "find", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_Array1_float_int_int_R_long, 0, "([FII[FII)J", 266 },
	{ "find", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_java_nio_Buffer_int_int_float_R_long, 0, "(Ljava/nio/Buffer;IILjava/nio/Buffer;IIF)J", 266 },
	{ "find", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_java_nio_Buffer_int_int_float_R_long, 0, "([FIILjava/nio/Buffer;IIF)J", 266 },
	{ "find", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_Array1_float_int_int_float_R_long, 0, "(Ljava/nio/Buffer;II[FIIF)J", 266 },
	{ "find", (intptr_t) SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_Array1_float_int_int_float_R_long, 0, "([FII[FIIF)J", 266 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_BufferUtils, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_BufferUtils{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/BufferUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_BufferUtils),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_BufferUtils,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_BufferUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_BufferUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 79,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_BufferUtils = registerClass(&class_com_badlogic_gdx_utils_BufferUtils);

}

