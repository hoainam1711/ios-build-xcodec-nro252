#include "lib/network/Session_ME_NetworkInit_SessionME2.h"
#include "java/lang/Exception.h"
#include "nro/ServerListScreen.h"
#include "lib/network/Session_ME.h"
#include "java/lang/StringBuilder.h"
#include "nro/Message.h"
#include "java/io/DataInputStream.h"
#include "nro/ClientDiagLogger_LogEntry.h"
#include "lib/network/Session_ME_Sender.h"
#include "main/GameCanvas.h"
#include "lib/network/Session_ME_NetworkInit_SessionME2.h"
#include "lib/network/Session_ME_NetworkInit_SessionME2_1.h"
#include "java/lang/Runnable.h"
#include "lib/network/Session_ME_NetworkInit.h"
#include "nro/ClientDiagLogger.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/FilterInputStream.h"
#include "main/GameMidlet.h"
#include "nro/IMessageHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {


void mark_lib_network_Session_ME$NetworkInit$SessionME2(jobject object, jint mark, jint depth) {
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
	auto self = (lib_network_Session_ME$NetworkInit$SessionME2 *) object;
	if (self->F_smInstance)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_smInstance)->clazz)->markFunction)((jobject) self->F_smInstance, mark, depth + 1);
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_lib_network_Session_ME$NetworkInit$SessionME2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_network_Session_ME$NetworkInit$SessionME2_lib_network_Session_ME$NetworkInit_lib_network_Session_ME_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$NetworkInit$SessionME2:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME$NetworkInit$SessionME2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(887);
	((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(888);
	((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance = (jref) (frame[2].o);
	LINE_NUMBER(889);
	((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_readerGen = (frame[3].i);
	LINE_NUMBER(890);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME$NetworkInit$SessionME2_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$NetworkInit$SessionME2:run", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(895);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_readerGen;
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp1 = (jint)SM_lib_network_Session_ME_access$000_lib_network_Session_ME_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_5;
	}
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_dis;
	frame[1].o = sp[0].o;
	LINE_NUMBER(897);
	if ((frame[1].o) != nullptr) goto label_10;
	}
	goto label_5;
label_10:;
	{
	LINE_NUMBER(899);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(900);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_getKeyComplete) == 0) goto label_12;
	}
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp0 = (jint)SM_lib_network_Session_ME_readKey_lib_network_Session_ME_byte_R_byte(ctx, sp[0].o, (frame[2].i));
	frame[2].i = temp0;
	}
label_12:;
	{
	LINE_NUMBER(905);
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
	LINE_NUMBER(906);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_getKeyComplete) == 0) goto label_16;
	}
	{
	LINE_NUMBER(907);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(908);
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[5].i = temp1;
	LINE_NUMBER(909);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp2 = (jint)SM_lib_network_Session_ME_readKey_lib_network_Session_ME_byte_R_byte(ctx, sp[0].o, (frame[4].i));
	jint temp3 = (temp2 & (255)) << (8);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp4 = frame[5].i;
	LINE_NUMBER(910);
	jint temp5 = (jint)SM_lib_network_Session_ME_readKey_lib_network_Session_ME_byte_R_byte(ctx, sp[0].o, temp4);
	frame[3].i = (temp3 | (temp5 & (255)));
	LINE_NUMBER(911);
	goto label_22;
	}
label_16:;
	{
	LINE_NUMBER(912);
	jint temp0 = (jint)((func_java_io_DataInputStream_readUnsignedShort_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedShort_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	goto label_22;
	}
label_14:;
	{
	LINE_NUMBER(915);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	jint temp1 = (jint)SM_lib_network_Session_ME_readKey_lib_network_Session_ME_byte_R_byte(ctx, sp[0].o, temp0);
	frame[4].i = (temp1 + (128));
	LINE_NUMBER(916);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp2 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	jint temp3 = (jint)SM_lib_network_Session_ME_readKey_lib_network_Session_ME_byte_R_byte(ctx, sp[0].o, temp2);
	frame[5].i = (temp3 + (128));
	LINE_NUMBER(917);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp4 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	jint temp5 = (jint)SM_lib_network_Session_ME_readKey_lib_network_Session_ME_byte_R_byte(ctx, sp[0].o, temp4);
	frame[6].i = (temp5 + (128));
	LINE_NUMBER(918);
	frame[3].i = (((((frame[6].i) * (256)) + (frame[5].i)) * (256)) + (frame[4].i));
	}
label_22:;
	{
	LINE_NUMBER(921);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(922);
	((func_java_io_DataInputStream_readFully_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(923);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_recvByteCount = (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_recvByteCount) + ((jint(5)) + (frame[3].i)));
	LINE_NUMBER(924);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp0 = (jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_recvByteCount;
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	frame[5].i = (temp0 + ((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_sendByteCount));
	LINE_NUMBER(925);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[5].i) / (1024)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((frame[5].i) % (1024)) / (102)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Kb"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_strRecvByteCount = (jref) sp[1].o;
	LINE_NUMBER(927);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_getKeyComplete) == 0) goto label_32;
	}
	{
	LINE_NUMBER(928);
	frame[6].i = (jint(0));
	}
label_34:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_32;
	}
	{
	LINE_NUMBER(929);
	sp[0].o = frame[4].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp1 = (jint)SM_lib_network_Session_ME_readKey_lib_network_Session_ME_byte_R_byte(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[6].i))));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(928);
	INST_IINC(6, 1);
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(933);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[6].l = temp0;
	LINE_NUMBER(934);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jlong temp1 = (jlong)SM_lib_network_Session_ME_access$202_lib_network_Session_ME_long_R_long(ctx, sp[0].o, (frame[6].l));
	LINE_NUMBER(935);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPacketTime = (frame[6].l);
	LINE_NUMBER(937);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte_Array1_byte(ctx, sp[0].o, (frame[2].i), (frame[4].o));
	frame[8].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(939);
	if (((jint)((nro_Message *) NULL_CHECK((frame[8].o)))->F_command) != (-27)) goto label_40;
	}
	{
	LINE_NUMBER(940);
	M_lib_network_Session_ME$NetworkInit$SessionME2_handleKeyHandshake_nro_Message(ctx, (frame[0].o), (frame[8].o));
	goto label_1;
	}
label_40:;
	{
	LINE_NUMBER(942);
	SM_lib_network_Session_ME_onRecieveMsg_nro_Message(ctx, (frame[8].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(946);
	goto label_42;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(944);
	frame[9].o = sp[0].o;
	LINE_NUMBER(945);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[9].o));
	}
label_42:;
	LINE_NUMBER(947);
	{ popExceptionFrames(frameRef, 1); goto label_4; }
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(949);
	goto label_44;
label_6:;
	LINE_NUMBER(948);
	INST_ASTORE(1);
label_44:;
	{
	LINE_NUMBER(951);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connected) == 0) goto label_45;
	}
	{
	jint temp0 = (jint)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_readerGen;
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp1 = (jint)SM_lib_network_Session_ME_access$000_lib_network_Session_ME_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_45;
	}
	{
	LINE_NUMBER(952);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	frame[1].o = sp[0].o;
	LINE_NUMBER(953);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[1].o)))->F_messageHandler;
	frame[2].o = sp[0].o;
	LINE_NUMBER(954);
	frame[3].i = ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[1].o)))->F_isMainSession);
	LINE_NUMBER(955);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[1].o)))->F_timeConnected)), (jlong(500ll)))) <= 0) goto label_50;
	}
	INST_ICONST(1);
	goto label_51;
label_50:;
	INST_ICONST(0);
label_51:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(956);
	frame[5].i = ((jint)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_readerGen);
	LINE_NUMBER(957);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"SESSION_READER_DISCONNECTED"_j));
	LINE_NUMBER(959);
	sp[1].o = (jobject)SM_nro_ClientDiagLogger_getLastActiveRequestId_R_java_lang_String(ctx);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"SESSION_ME_READER"_j));
	jint temp0 = 503;
	LINE_NUMBER(962);
	sp[3].i = temp0;
	sp += 4;
	if ((frame[4].i) == 0) goto label_56;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"ERR_SOCKET_EOF"_j));
	goto label_57;
label_56:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"ERR_CONNECT_HANDSHAKE_EOF"_j));
label_57:;
	{
	LINE_NUMBER(963);
	if ((frame[4].i) == 0) goto label_58;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"SOCKET_READ_EOF_OR_CLOSED"_j));
	goto label_59;
label_58:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"CONNECT_FAIL"_j));
label_59:;
	{
	sp -= 6;
	clinit_java_lang_StringBuilder(ctx);
	sp[6].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[6].o);
	sp[6].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[6].o, (((jobject) createStringLiteral(ctx, u8"isMain="_j))));
	sp[6].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[6].o, (frame[3].i));
	sp[6].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[6].o, (((jobject) createStringLiteral(ctx, u8",uptimeMs="_j))));
	LINE_NUMBER(964);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	sp[6].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[6].o, (temp0 - ((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[1].o)))->F_timeConnected)));
	sp[6].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[6].o);
	LINE_NUMBER(957);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(965);
	SM_lib_network_Session_ME_c_lib_network_Session_ME(ctx, (frame[1].o));
	LINE_NUMBER(966);
	if ((frame[2].o) == nullptr) goto label_45;
	}
	{
	LINE_NUMBER(967);
	clinit_lib_network_Session_ME$NetworkInit$SessionME2$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME$NetworkInit$SessionME2$1);
	init_lib_network_Session_ME$NetworkInit$SessionME2$1_lib_network_Session_ME$NetworkInit$SessionME2_int_lib_network_Session_ME_boolean_nro_IMessageHandler_boolean(ctx, sp[0].o, (frame[0].o), (frame[5].i), (frame[1].o), (frame[4].i), (frame[2].o), (frame[3].i));
	SM_lib_network_Session_ME_access$400_java_lang_Runnable(ctx, sp[0].o);
	}
label_45:;
	LINE_NUMBER(980);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_Session_ME$NetworkInit$SessionME2_handleKeyHandshake_nro_Message(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$NetworkInit$SessionME2:handleKeyHandshake", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(983);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(984);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(985);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(986);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(985);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(988);
	frame[4].i = (jint(0));
	}
label_11:;
	{
	if ((frame[4].i) >= ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)))) goto label_12;
	}
	{
	LINE_NUMBER(989);
	sp[0].o = frame[3].o;
	jint temp0 = (frame[4].i) + (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) ^ ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[4].i))))));
	LINE_NUMBER(988);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp0 = (jint)SM_lib_network_Session_ME_access$702_lib_network_Session_ME_int_R_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(993);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jint temp1 = (jint)SM_lib_network_Session_ME_access$802_lib_network_Session_ME_int_R_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(994);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_key = (jref) (frame[3].o);
	LINE_NUMBER(995);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_getKeyComplete = (jint(1));
	LINE_NUMBER(996);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	sp[0].o = (jobject)SM_lib_network_Session_ME_access$900_lib_network_Session_ME_R_lib_network_Session_ME$Sender(ctx, sp[0].o);
	((func_lib_network_Session_ME$Sender_wakeUp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME$Sender_wakeUp])(ctx, sp[0].o);
	LINE_NUMBER(998);
	jlong temp2 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[4].l = temp2;
	LINE_NUMBER(999);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_isMainSession) == 0) goto label_21;
	}
	{
	if ((longCompare((clinit_lib_network_Session_ME(ctx), (jlong)SF_lib_network_Session_ME_timeConnectStarted), (jlong(0)))) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(1000);
	frame[6].i = (jint(((frame[4].l) - (clinit_lib_network_Session_ME(ctx), (jlong)SF_lib_network_Session_ME_timeConnectStarted))));
	LINE_NUMBER(1001);
	if ((frame[6].i) < 0) goto label_24;
	}
	{
	if ((frame[6].i) > (999)) goto label_24;
	}
	{
	LINE_NUMBER(1002);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_currentPing = (frame[6].i);
	}
label_24:;
	LINE_NUMBER(1004);
	goto label_26;
label_21:;
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_IS_LOCAL;
	if ((--sp)->i == 0) goto label_26;
	{
	LINE_NUMBER(1005);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_currentPing = (jint(1));
	}
label_26:;
	{
	LINE_NUMBER(1007);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jlong temp0 = (jlong)SM_lib_network_Session_ME_access$202_lib_network_Session_ME_long_R_long(ctx, sp[0].o, (frame[4].l));
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	jlong temp1 = (jlong)SM_lib_network_Session_ME_access$1002_lib_network_Session_ME_long_R_long(ctx, sp[0].o, (frame[4].l));
	LINE_NUMBER(1009);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPingReceiveTime = (frame[4].l);
	LINE_NUMBER(1010);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPacketTime = (frame[4].l);
	LINE_NUMBER(1011);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"SESSION_KEY_REFRESH"_j));
	LINE_NUMBER(1013);
	sp[1].o = (jobject)SM_nro_ClientDiagLogger_getLastActiveRequestId_R_java_lang_String(ctx);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"CMD_-27_GET_SESSION_ID"_j));
	jint temp2 = 200;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[5].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[5].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8"transport=TCP,isMain="_j))));
	sp[6].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[5].o, ((jint)((lib_network_Session_ME *) NULL_CHECK(sp[6].o))->F_isMainSession));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[5].o);
	LINE_NUMBER(1011);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, temp2, sp[3].o, sp[4].o, sp[5].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1021);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_IP2 = sp[0].o;
	LINE_NUMBER(1022);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_PORT2 = temp0;
	LINE_NUMBER(1023);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	if (temp1 == 0) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 1;
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_isBackWindowsPhone = sp[0].i;
	LINE_NUMBER(1024);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit$SessionME2 *) NULL_CHECK((frame[0].o)))->F_smInstance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_isMainSession) == 0) goto label_1;
	}
	clinit_main_GameMidlet(ctx);
	(sp++)->i = SF_main_GameMidlet_isBackWindowsPhone;
	if ((--sp)->i == 0) goto label_1;
	LINE_NUMBER(1025);
	SM_main_GameCanvas_connect2(ctx);
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1029);
	goto label_41;
label_2:;
	LINE_NUMBER(1028);
	INST_ASTORE(6);
label_41:;
	LINE_NUMBER(1030);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_lib_network_Session_ME$NetworkInit$SessionME2[] {
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
	(void *) M_lib_network_Session_ME$NetworkInit$SessionME2_run,
	(void *) M_lib_network_Session_ME$NetworkInit$SessionME2_handleKeyHandshake_nro_Message,
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
	{ "smInstance", &class_lib_network_Session_ME, offsetof(lib_network_Session_ME$NetworkInit$SessionME2, F_smInstance), "Llib/network/Session_ME;", 18 },
	{ "readerGen", &class_int, offsetof(lib_network_Session_ME$NetworkInit$SessionME2, F_readerGen), "I", 18 },
	{ "this$1", &class_lib_network_Session_ME$NetworkInit, offsetof(lib_network_Session_ME$NetworkInit$SessionME2, F_this$1), "Llib/network/Session_ME$NetworkInit;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_Session_ME$NetworkInit$SessionME2_lib_network_Session_ME$NetworkInit_lib_network_Session_ME_int, 0, "(Llib/network/Session_ME$NetworkInit;Llib/network/Session_ME;I)V", 0 },
	{ "run", (intptr_t) M_lib_network_Session_ME$NetworkInit$SessionME2_run, VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_run, "()V", 17 },
	{ "handleKeyHandshake", (intptr_t) M_lib_network_Session_ME$NetworkInit$SessionME2_handleKeyHandshake_nro_Message, VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_handleKeyHandshake_nro_Message, "(Lnro/Message;)V", 2 },
};

Class class_lib_network_Session_ME$NetworkInit$SessionME2{
		.nativeName = (intptr_t) "lib/network/Session_ME$NetworkInit$SessionME2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_Session_ME$NetworkInit$SessionME2),
		.classVtable = (intptr_t) vtable_lib_network_Session_ME$NetworkInit$SessionME2,
		.staticInitializer = (intptr_t) clinit_lib_network_Session_ME$NetworkInit$SessionME2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_Session_ME$NetworkInit$SessionME2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_lib_network_Session_ME$NetworkInit,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
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
static bool registered_lib_network_Session_ME$NetworkInit$SessionME2 = registerClass(&class_lib_network_Session_ME$NetworkInit$SessionME2);

}

