#include "lib/network/Session_ME2_SessionME2Collector.h"
#include "java/lang/Exception.h"
#include "lib/network/Session_ME2_SessionME2Collector.h"
#include "java/lang/StringBuilder.h"
#include "nro/Message.h"
#include "lib/network/Session_ME2_Sender2.h"
#include "java/io/DataInputStream.h"
#include "main/GameCanvas.h"
#include "java/lang/Runnable.h"
#include "lib/network/Session_ME2_SessionME2Collector_1.h"
#include "java/lang/Object.h"
#include "lib/network/Session_ME2.h"
#include "java/lang/String.h"
#include "java/io/FilterInputStream.h"
#include "main/GameMidlet.h"
#include "nro/IMessageHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {


void mark_lib_network_Session_ME2$SessionME2Collector(jobject object, jint mark, jint depth) {
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
	auto self = (lib_network_Session_ME2$SessionME2Collector *) object;
	if (self->F_smInstance)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_smInstance)->clazz)->markFunction)((jobject) self->F_smInstance, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_lib_network_Session_ME2$SessionME2Collector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_network_Session_ME2$SessionME2Collector_lib_network_Session_ME2_lib_network_Session_ME2_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$SessionME2Collector:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2$SessionME2Collector(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(657);
	((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(658);
	((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance = (jref) (frame[2].o);
	LINE_NUMBER(659);
	((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_readerGen = (frame[3].i);
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2$SessionME2Collector_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$SessionME2Collector:run", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp0 = (jint)((func_lib_network_Session_ME2_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME2_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_readerGen;
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp1 = (jint)SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_5;
	}
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_dis;
	frame[1].o = sp[0].o;
	LINE_NUMBER(667);
	if ((frame[1].o) != nullptr) goto label_10;
	}
	goto label_5;
label_10:;
	{
	LINE_NUMBER(669);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(670);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_getKeyComplete) == 0) goto label_12;
	}
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp0 = (jint)SM_lib_network_Session_ME2_readKey_lib_network_Session_ME2_byte_R_byte(ctx, sp[0].o, (frame[2].i));
	frame[2].i = temp0;
	}
label_12:;
	{
	LINE_NUMBER(675);
	if ((frame[2].i) == (-32)) goto label_14;
	}
	{
	if ((frame[2].i) == (-66)) goto label_14;
	}
	{
	if ((frame[2].i) == (11)) goto label_14;
	}
	{
	if ((frame[2].i) == (-67)) goto label_14;
	}
	{
	if ((frame[2].i) == (-74)) goto label_14;
	}
	{
	if ((frame[2].i) == (-87)) goto label_14;
	}
	{
	if ((frame[2].i) == (66)) goto label_14;
	}
	{
	if ((frame[2].i) == (12)) goto label_14;
	}
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_getKeyComplete) == 0) goto label_16;
	}
	{
	LINE_NUMBER(677);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(678);
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[5].i = temp1;
	LINE_NUMBER(679);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp2 = (jint)SM_lib_network_Session_ME2_readKey_lib_network_Session_ME2_byte_R_byte(ctx, sp[0].o, (frame[4].i));
	jint temp3 = (temp2 & (255)) << (8);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp4 = frame[5].i;
	LINE_NUMBER(680);
	jint temp5 = (jint)SM_lib_network_Session_ME2_readKey_lib_network_Session_ME2_byte_R_byte(ctx, sp[0].o, temp4);
	frame[3].i = (temp3 | (temp5 & (255)));
	LINE_NUMBER(681);
	goto label_22;
	}
label_16:;
	{
	LINE_NUMBER(682);
	jint temp0 = (jint)((func_java_io_DataInputStream_readUnsignedShort_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedShort_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	goto label_22;
	}
label_14:;
	{
	LINE_NUMBER(685);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	jint temp1 = (jint)SM_lib_network_Session_ME2_readKey_lib_network_Session_ME2_byte_R_byte(ctx, sp[0].o, temp0);
	frame[4].i = (temp1 + (128));
	LINE_NUMBER(686);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp2 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	jint temp3 = (jint)SM_lib_network_Session_ME2_readKey_lib_network_Session_ME2_byte_R_byte(ctx, sp[0].o, temp2);
	frame[5].i = (temp3 + (128));
	LINE_NUMBER(687);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp4 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	jint temp5 = (jint)SM_lib_network_Session_ME2_readKey_lib_network_Session_ME2_byte_R_byte(ctx, sp[0].o, temp4);
	frame[6].i = (temp5 + (128));
	LINE_NUMBER(688);
	frame[3].i = (((((frame[6].i) * (256)) + (frame[5].i)) * (256)) + (frame[4].i));
	}
label_22:;
	{
	LINE_NUMBER(691);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(692);
	((func_java_io_DataInputStream_readFully_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(693);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_recvByteCount = (((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_recvByteCount) + ((jint(5)) + (frame[3].i)));
	LINE_NUMBER(694);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp0 = (jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_recvByteCount;
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	frame[5].i = (temp0 + ((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_sendByteCount));
	LINE_NUMBER(695);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[5].i) / (1024)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((frame[5].i) % (1024)) / (102)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Kb"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_strRecvByteCount = (jref) sp[1].o;
	LINE_NUMBER(697);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_getKeyComplete) == 0) goto label_32;
	}
	{
	LINE_NUMBER(698);
	frame[6].i = (jint(0));
	}
label_34:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_32;
	}
	{
	LINE_NUMBER(699);
	sp[0].o = frame[4].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp1 = (jint)SM_lib_network_Session_ME2_readKey_lib_network_Session_ME2_byte_R_byte(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[6].i))));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(698);
	INST_IINC(6, 1);
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(703);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte_Array1_byte(ctx, sp[0].o, (frame[2].i), (frame[4].o));
	frame[6].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(705);
	if (((jint)((nro_Message *) NULL_CHECK((frame[6].o)))->F_command) != (-27)) goto label_37;
	}
	{
	LINE_NUMBER(706);
	M_lib_network_Session_ME2$SessionME2Collector_handleKeyHandshake_nro_Message(ctx, (frame[0].o), (frame[6].o));
	goto label_1;
	}
label_37:;
	{
	LINE_NUMBER(708);
	SM_lib_network_Session_ME2_onRecieveMsg_nro_Message(ctx, (frame[6].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(712);
	goto label_39;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(710);
	frame[7].o = sp[0].o;
	LINE_NUMBER(711);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[7].o));
	}
label_39:;
	LINE_NUMBER(713);
	{ popExceptionFrames(frameRef, 1); goto label_4; }
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(715);
	goto label_41;
label_6:;
	LINE_NUMBER(714);
	INST_ASTORE(1);
label_41:;
	{
	LINE_NUMBER(717);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connected) == 0) goto label_42;
	}
	{
	jint temp0 = (jint)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_readerGen;
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp1 = (jint)SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_42;
	}
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	frame[1].o = sp[0].o;
	LINE_NUMBER(719);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[1].o)))->F_messageHandler;
	frame[2].o = sp[0].o;
	LINE_NUMBER(720);
	frame[3].i = ((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[1].o)))->F_isMainSession);
	LINE_NUMBER(721);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((lib_network_Session_ME2 *) NULL_CHECK((frame[1].o)))->F_timeConnected)), (jlong(500ll)))) <= 0) goto label_47;
	}
	INST_ICONST(1);
	goto label_48;
label_47:;
	INST_ICONST(0);
label_48:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(722);
	frame[5].i = ((jint)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_readerGen);
	LINE_NUMBER(723);
	SM_lib_network_Session_ME2_c_lib_network_Session_ME2(ctx, (frame[1].o));
	LINE_NUMBER(724);
	if ((frame[2].o) == nullptr) goto label_42;
	}
	{
	LINE_NUMBER(725);
	clinit_lib_network_Session_ME2$SessionME2Collector$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME2$SessionME2Collector$1);
	init_lib_network_Session_ME2$SessionME2Collector$1_lib_network_Session_ME2$SessionME2Collector_int_lib_network_Session_ME2_boolean_nro_IMessageHandler_boolean(ctx, sp[0].o, (frame[0].o), (frame[5].i), (frame[1].o), (frame[4].i), (frame[2].o), (frame[3].i));
	SM_lib_network_Session_ME2_access$300_java_lang_Runnable(ctx, sp[0].o);
	}
label_42:;
	LINE_NUMBER(738);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2$SessionME2Collector_handleKeyHandshake_nro_Message(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$SessionME2Collector:handleKeyHandshake", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(741);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(742);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(743);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(744);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(743);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(746);
	frame[4].i = (jint(0));
	}
label_11:;
	{
	if ((frame[4].i) >= ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)))) goto label_12;
	}
	{
	LINE_NUMBER(747);
	sp[0].o = frame[3].o;
	jint temp0 = (frame[4].i) + (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) ^ ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[4].i))))));
	LINE_NUMBER(746);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp0 = (jint)SM_lib_network_Session_ME2_access$602_lib_network_Session_ME2_int_R_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(751);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp1 = (jint)SM_lib_network_Session_ME2_access$702_lib_network_Session_ME2_int_R_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(752);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_key = (jref) (frame[3].o);
	LINE_NUMBER(753);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_getKeyComplete = (jint(1));
	LINE_NUMBER(754);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	sp[0].o = (jobject)SM_lib_network_Session_ME2_access$800_lib_network_Session_ME2_R_lib_network_Session_ME2$Sender2(ctx, sp[0].o);
	((func_lib_network_Session_ME2$Sender2_wakeUp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME2$Sender2_wakeUp])(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(757);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_IP2 = sp[0].o;
	LINE_NUMBER(758);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_PORT2 = temp0;
	LINE_NUMBER(759);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	if (temp1 == 0) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 1;
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_isBackWindowsPhone = sp[0].i;
	LINE_NUMBER(760);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector *) NULL_CHECK((frame[0].o)))->F_smInstance;
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_isMainSession) == 0) goto label_1;
	}
	clinit_main_GameMidlet(ctx);
	(sp++)->i = SF_main_GameMidlet_isBackWindowsPhone;
	if ((--sp)->i == 0) goto label_1;
	LINE_NUMBER(761);
	SM_main_GameCanvas_connect2(ctx);
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(765);
	goto label_26;
label_2:;
	LINE_NUMBER(764);
	INST_ASTORE(4);
label_26:;
	LINE_NUMBER(766);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_lib_network_Session_ME2$SessionME2Collector[] {
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
	(void *) M_lib_network_Session_ME2$SessionME2Collector_run,
	(void *) M_lib_network_Session_ME2$SessionME2Collector_handleKeyHandshake_nro_Message,
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
	{ "run", "()V" },
	{ "handleKeyHandshake", "(Lnro/Message;)V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "smInstance", &class_lib_network_Session_ME2, offsetof(lib_network_Session_ME2$SessionME2Collector, F_smInstance), "Llib/network/Session_ME2;", 18 },
	{ "readerGen", &class_int, offsetof(lib_network_Session_ME2$SessionME2Collector, F_readerGen), "I", 18 },
	{ "this$0", &class_lib_network_Session_ME2, offsetof(lib_network_Session_ME2$SessionME2Collector, F_this$0), "Llib/network/Session_ME2;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_Session_ME2$SessionME2Collector_lib_network_Session_ME2_lib_network_Session_ME2_int, 0, "(Llib/network/Session_ME2;Llib/network/Session_ME2;I)V", 0 },
	{ "run", (intptr_t) M_lib_network_Session_ME2$SessionME2Collector_run, VTABLE_lib_network_Session_ME2$SessionME2Collector_run, "()V", 17 },
	{ "handleKeyHandshake", (intptr_t) M_lib_network_Session_ME2$SessionME2Collector_handleKeyHandshake_nro_Message, VTABLE_lib_network_Session_ME2$SessionME2Collector_handleKeyHandshake_nro_Message, "(Lnro/Message;)V", 2 },
};

Class class_lib_network_Session_ME2$SessionME2Collector{
		.nativeName = (intptr_t) "lib/network/Session_ME2$SessionME2Collector",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_Session_ME2$SessionME2Collector),
		.classVtable = (intptr_t) vtable_lib_network_Session_ME2$SessionME2Collector,
		.staticInitializer = (intptr_t) clinit_lib_network_Session_ME2$SessionME2Collector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_Session_ME2$SessionME2Collector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_lib_network_Session_ME2,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_network_Session_ME2$SessionME2Collector = registerClass(&class_lib_network_Session_ME2$SessionME2Collector);

}

