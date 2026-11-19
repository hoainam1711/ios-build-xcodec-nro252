#include "lib/network/ByteStreamBuffer.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "nro/Message.h"
#include "java/lang/System.h"
#include "lib/network/ByteStreamBuffer.h"

extern "C" {


void mark_lib_network_ByteStreamBuffer(jobject object, jint mark, jint depth) {
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
	auto self = (lib_network_ByteStreamBuffer *) object;
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
}

void clinit_lib_network_ByteStreamBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_network_ByteStreamBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/ByteStreamBuffer:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_ByteStreamBuffer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(4);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (8192));
	((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(5);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos = (jint(0));
	LINE_NUMBER(6);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_ByteStreamBuffer_write_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/ByteStreamBuffer:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(9);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx, self);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(10);
	M_lib_network_ByteStreamBuffer_ensureCapacity_int(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(11);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_writePos = (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_writePos) + (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(13);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_lib_network_ByteStreamBuffer_pollMessage_R_nro_Message(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/ByteStreamBuffer:pollMessage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message])(ctx, (frame[0].o), (jint(0)), (jobject(nullptr)), (jint(0)), (jobject(nullptr)));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/ByteStreamBuffer:pollMessage", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(20);
	frame[5].i = (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos) - ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos));
	LINE_NUMBER(21);
	if ((frame[5].i) >= (jint(3))) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx, self);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(23);
	if ((frame[1].i) == 0) goto label_3;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	frame[6].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos)));
	LINE_NUMBER(25);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	frame[7].i = (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) + (jint(1))))) & (255));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	frame[8].i = (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) + (jint(2))))) & (255));
	LINE_NUMBER(27);
	frame[9].i = (((frame[7].i) << (8)) | (frame[8].i));
	LINE_NUMBER(28);
	if ((frame[5].i) >= ((jint(3)) + (frame[9].i))) goto label_9;
	}
	{
	LINE_NUMBER(29);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_readPos = (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_readPos) + (jint(3)));
	LINE_NUMBER(32);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(33);
	if ((frame[9].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos), (frame[10].o), (jint(0)), (frame[9].i));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_readPos = (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_readPos) + (frame[9].i));
	}
label_13:;
	{
	LINE_NUMBER(37);
	if (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) < ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos)) goto label_16;
	}
	{
	LINE_NUMBER(38);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos = (jint(0));
	LINE_NUMBER(39);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(41);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte_Array1_byte(ctx, sp[0].o, (frame[6].i), (frame[10].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(44);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(45);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	frame[7].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos)));
	LINE_NUMBER(46);
	frame[8].i = (jbyte(((((jint)ARRAY_ACCESS(jbyte, (frame[2].o), ((frame[3].i) % (frame[6].i)))) & (255)) ^ ((frame[7].i) & (255)))));
	LINE_NUMBER(48);
	if ((frame[8].i) == (-32)) goto label_22;
	}
	{
	if ((frame[8].i) == (-66)) goto label_22;
	}
	{
	if ((frame[8].i) == (11)) goto label_22;
	}
	{
	if ((frame[8].i) == (-67)) goto label_22;
	}
	{
	if ((frame[8].i) == (-74)) goto label_22;
	}
	{
	if ((frame[8].i) == (-87)) goto label_22;
	}
	{
	if ((frame[8].i) == (66)) goto label_22;
	}
	{
	if ((frame[8].i) != (12)) goto label_23;
	}
label_22:;
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(49);
	if ((frame[9].i) == 0) goto label_26;
	}
	INST_ICONST(4);
	goto label_27;
label_26:;
	INST_ICONST(3);
label_27:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(50);
	if ((frame[5].i) >= (frame[10].i)) goto label_29;
	}
	{
	LINE_NUMBER(51);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}
label_29:;
	{
	LINE_NUMBER(55);
	if ((frame[9].i) == 0) goto label_31;
	}
	{
	LINE_NUMBER(56);
	jint temp0 = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (((frame[3].i) + (jint(1))) % (frame[6].i)))) & (255);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	frame[12].i = ((jbyte((temp0 ^ (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) + (jint(1))))) & (255))))) + (128));
	LINE_NUMBER(57);
	jint temp1 = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (((frame[3].i) + (jint(2))) % (frame[6].i)))) & (255);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	frame[13].i = ((jbyte((temp1 ^ (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) + (jint(2))))) & (255))))) + (128));
	LINE_NUMBER(58);
	jint temp2 = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (((frame[3].i) + (jint(3))) % (frame[6].i)))) & (255);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	frame[14].i = ((jbyte((temp2 ^ (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) + (jint(3))))) & (255))))) + (128));
	LINE_NUMBER(59);
	frame[11].i = (((((frame[14].i) * (256)) + (frame[13].i)) * (256)) + (frame[12].i));
	LINE_NUMBER(60);
	goto label_37;
	}
label_31:;
	{
	LINE_NUMBER(61);
	jint temp0 = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (((frame[3].i) + (jint(1))) % (frame[6].i)))) & (255);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	frame[12].i = ((temp0 ^ (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) + (jint(1))))) & (255))) & (255));
	LINE_NUMBER(62);
	jint temp1 = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (((frame[3].i) + (jint(2))) % (frame[6].i)))) & (255);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	frame[13].i = ((temp1 ^ (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) + (jint(2))))) & (255))) & (255));
	LINE_NUMBER(63);
	frame[11].i = (((frame[12].i) << (8)) | (frame[13].i));
	}
label_37:;
	{
	LINE_NUMBER(66);
	frame[12].i = ((frame[10].i) + (frame[11].i));
	LINE_NUMBER(67);
	if ((frame[11].i) < 0) goto label_41;
	}
	{
	if ((frame[5].i) >= (frame[12].i)) goto label_42;
	}
label_41:;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}
label_42:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_readPos = (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_readPos) + (frame[10].i));
	LINE_NUMBER(72);
	frame[13].i = (((frame[3].i) + (frame[10].i)) % (frame[6].i));
	LINE_NUMBER(73);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[11].i));
	frame[14].o = sp[0].o;
	LINE_NUMBER(74);
	frame[15].i = (jint(0));
	}
label_46:;
	{
	if ((frame[15].i) >= (frame[11].i)) goto label_47;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[14].o;
	jint temp0 = frame[15].i;
	jint temp1 = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[13].i))) & (255);
	sp[1].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[2].o = frame[0].o;
	jint temp2 = (jint)((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[2].o))->F_readPos;
	((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[2].o))->F_readPos = (temp2 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((temp1 ^ (((jint)ARRAY_ACCESS(jbyte, sp[1].o, temp2)) & (255)))));
	LINE_NUMBER(76);
	frame[13].i = (((frame[13].i) + (jint(1))) % (frame[6].i));
	LINE_NUMBER(74);
	INST_IINC(15, 1);
	goto label_46;
	}
label_47:;
	{
	LINE_NUMBER(78);
	if ((frame[4].o) == nullptr) goto label_51;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= 0) goto label_51;
	}
	{
	LINE_NUMBER(79);
	ARRAY_ACCESS(jint, (frame[4].o), (jint(0))) = (frame[13].i);
	}
label_51:;
	{
	LINE_NUMBER(82);
	if (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) < ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos)) goto label_53;
	}
	{
	LINE_NUMBER(83);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos = (jint(0));
	LINE_NUMBER(84);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos = (jint(0));
	}
label_53:;
	{
	LINE_NUMBER(87);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte_Array1_byte(ctx, sp[0].o, (frame[8].i), (frame[14].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_lib_network_ByteStreamBuffer_available_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/ByteStreamBuffer:available", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx, self);
	return (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos) - ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos));
	}

	popStackFrame(ctx);
}

jbyte M_lib_network_ByteStreamBuffer_peek_int_R_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/ByteStreamBuffer:peek", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	popStackFrame(ctx, self);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) + (frame[1].i))));
	}

	popStackFrame(ctx);
}

void M_lib_network_ByteStreamBuffer_skip_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/ByteStreamBuffer:skip", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_readPos = (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_readPos) + (frame[1].i));
	LINE_NUMBER(100);
	if (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) < ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos)) goto label_2;
	}
	{
	LINE_NUMBER(101);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos = (jint(0));
	LINE_NUMBER(102);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos = (jint(0));
	}
label_2:;
	LINE_NUMBER(104);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_ByteStreamBuffer_read_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/ByteStreamBuffer:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos), (frame[1].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_readPos = (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK(sp[0].o))->F_readPos) + (frame[2].i));
	LINE_NUMBER(109);
	if (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos) < ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos)) goto label_3;
	}
	{
	LINE_NUMBER(110);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos = (jint(0));
	LINE_NUMBER(111);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos = (jint(0));
	}
label_3:;
	LINE_NUMBER(113);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_ByteStreamBuffer_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/ByteStreamBuffer:ensureCapacity", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(116);
	jint temp0 = ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos) + (frame[1].i);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(117);
	frame[2].i = (((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos) - ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos));
	LINE_NUMBER(118);
	jint temp0 = (frame[2].i) + (frame[1].i);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 > (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(119);
	if ((frame[2].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos;
	sp[1].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[2].i));
	}
label_6:;
	{
	LINE_NUMBER(122);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos = (jint(0));
	LINE_NUMBER(123);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos = (frame[2].i);
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2))), (((frame[2].i) + (frame[1].i)) + (4096)));
	frame[3].i = temp0;
	LINE_NUMBER(126);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(127);
	if ((frame[2].i) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos), (frame[4].o), (jint(0)), (frame[2].i));
	}
label_11:;
	{
	LINE_NUMBER(130);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos = (jint(0));
	LINE_NUMBER(131);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos = (frame[2].i);
	LINE_NUMBER(132);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (frame[4].o);
	}
label_1:;
	LINE_NUMBER(135);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_ByteStreamBuffer_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/ByteStreamBuffer:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_readPos = (jint(0));
	LINE_NUMBER(139);
	((lib_network_ByteStreamBuffer *) NULL_CHECK((frame[0].o)))->F_writePos = (jint(0));
	LINE_NUMBER(140);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_network_ByteStreamBuffer[] {
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
	(void *) M_lib_network_ByteStreamBuffer_write_Array1_byte,
	(void *) M_lib_network_ByteStreamBuffer_pollMessage_R_nro_Message,
	(void *) M_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message,
	(void *) M_lib_network_ByteStreamBuffer_available_R_int,
	(void *) M_lib_network_ByteStreamBuffer_peek_int_R_byte,
	(void *) M_lib_network_ByteStreamBuffer_skip_int,
	(void *) M_lib_network_ByteStreamBuffer_read_Array1_byte_int,
	(void *) M_lib_network_ByteStreamBuffer_ensureCapacity_int,
	(void *) M_lib_network_ByteStreamBuffer_clear,
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
	{ "write", "([B)V" },
	{ "pollMessage", "()Lnro/Message;" },
	{ "pollMessage", "(Z[BI[I)Lnro/Message;" },
	{ "available", "()I" },
	{ "peek", "(I)B" },
	{ "skip", "(I)V" },
	{ "read", "([BI)V" },
	{ "ensureCapacity", "(I)V" },
	{ "clear", "()V" },
};

static FieldMetadata fields[] {
	{ "buf", getArrayClass(&class_byte, 1), offsetof(lib_network_ByteStreamBuffer, F_buf), "[B", 2 },
	{ "readPos", &class_int, offsetof(lib_network_ByteStreamBuffer, F_readPos), "I", 2 },
	{ "writePos", &class_int, offsetof(lib_network_ByteStreamBuffer, F_writePos), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_ByteStreamBuffer, 0, "()V", 1 },
	{ "write", (intptr_t) M_lib_network_ByteStreamBuffer_write_Array1_byte, VTABLE_lib_network_ByteStreamBuffer_write_Array1_byte, "([B)V", 33 },
	{ "pollMessage", (intptr_t) M_lib_network_ByteStreamBuffer_pollMessage_R_nro_Message, VTABLE_lib_network_ByteStreamBuffer_pollMessage_R_nro_Message, "()Lnro/Message;", 33 },
	{ "pollMessage", (intptr_t) M_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message, VTABLE_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message, "(Z[BI[I)Lnro/Message;", 33 },
	{ "available", (intptr_t) M_lib_network_ByteStreamBuffer_available_R_int, VTABLE_lib_network_ByteStreamBuffer_available_R_int, "()I", 33 },
	{ "peek", (intptr_t) M_lib_network_ByteStreamBuffer_peek_int_R_byte, VTABLE_lib_network_ByteStreamBuffer_peek_int_R_byte, "(I)B", 33 },
	{ "skip", (intptr_t) M_lib_network_ByteStreamBuffer_skip_int, VTABLE_lib_network_ByteStreamBuffer_skip_int, "(I)V", 33 },
	{ "read", (intptr_t) M_lib_network_ByteStreamBuffer_read_Array1_byte_int, VTABLE_lib_network_ByteStreamBuffer_read_Array1_byte_int, "([BI)V", 33 },
	{ "ensureCapacity", (intptr_t) M_lib_network_ByteStreamBuffer_ensureCapacity_int, VTABLE_lib_network_ByteStreamBuffer_ensureCapacity_int, "(I)V", 2 },
	{ "clear", (intptr_t) M_lib_network_ByteStreamBuffer_clear, VTABLE_lib_network_ByteStreamBuffer_clear, "()V", 33 },
};

Class class_lib_network_ByteStreamBuffer{
		.nativeName = (intptr_t) "lib/network/ByteStreamBuffer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_ByteStreamBuffer),
		.classVtable = (intptr_t) vtable_lib_network_ByteStreamBuffer,
		.staticInitializer = (intptr_t) clinit_lib_network_ByteStreamBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_ByteStreamBuffer,
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
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_network_ByteStreamBuffer = registerClass(&class_lib_network_ByteStreamBuffer);

}

