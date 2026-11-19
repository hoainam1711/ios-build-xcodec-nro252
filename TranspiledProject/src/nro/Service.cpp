#include "nro/Service.h"
#include "nro/GameScr.h"
#include "lib/network/Session_ME.h"
#include "java/lang/StringBuilder.h"
#include "lib/input/TField.h"
#include "java/util/Vector.h"
#include "nro/ClientDiagLogger_LogEntry.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "java/io/DataOutput.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "nro/ImageSource.h"
#include "java/io/IOException.h"
#include "nro/Controller.h"
#include "java/lang/Throwable.h"
#include "lib/mSystem.h"
#include "nro/TileMap.h"
#include "java/lang/Exception.h"
#include "nro/ISession.h"
#include "nro/Message.h"
#include "lib/mGraphics.h"
#include "nro/ClientDiagLogger.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "java/io/DataOutputStream.h"
#include "nro/MsgDlg.h"
#include "nro/Rms.h"
#include "java/lang/Class.h"
#include "nro/Item.h"
#include "nro/Char.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_nro_Service_instance;
jlong SF_nro_Service_curCheckController;
jlong SF_nro_Service_curCheckMap;
jlong SF_nro_Service_logController;
jlong SF_nro_Service_logMap;
jbool SF_nro_Service_reciveFromMainSession;

void mark_nro_Service(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Service_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Service_instance)->clazz)->markFunction)((jobject) SF_nro_Service_instance, mark, depth + 1);
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
	auto self = (nro_Service *) object;
	if (self->F_session)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_session)->clazz)->markFunction)((jobject) self->F_session, mark, depth + 1);
}

void clinit_nro_Service(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Service(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Service(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_Service_gI_R_nro_Service(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Service(ctx);
	{
	LINE_NUMBER(22);
	clinit_nro_Service(ctx);
	sp[0].o = (jobject)SF_nro_Service_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(23);
	clinit_nro_Service(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Service);
	init_nro_Service(ctx, sp[0].o);
	clinit_nro_Service(ctx);
	SF_nro_Service_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(26);
	clinit_nro_Service(ctx);
	sp[0].o = (jobject)SF_nro_Service_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_nro_Service_gotoPlayer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:gotoPlayer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(33);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (18));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(39);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(36);
	frame[3].o = sp[0].o;
	LINE_NUMBER(37);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(39);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(40);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(39);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(40);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_charInfo_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:charInfo", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(45);
	frame[10].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(48);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (42));
	frame[10].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[10].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[10].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[10].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[10].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[10].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[10].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[10].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[10].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[10].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(62);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[10].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(59);
	frame[11].o = sp[0].o;
	LINE_NUMBER(60);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[11].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(62);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[10].o));
	LINE_NUMBER(63);
	goto label_23;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(62);
	INST_ASTORE(12);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[10].o));
	LINE_NUMBER(63);
	throwException(ctx, (frame[12].o));	}
label_23:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_combine_byte_nro_MyVector(jcontext ctx, jobject self, jbyte param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:combine", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(68);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"combine"_j))));
	LINE_NUMBER(69);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(72);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-81));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(75);
	frame[4].i = (jint(0));
	}
label_14:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_15;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[4].i));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)((nro_Item *) NULL_CHECK((checkCast(ctx, &class_nro_Item, sp[1].o))))->F_indexUI));
	LINE_NUMBER(77);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"gui id "_j))));
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Item *) NULL_CHECK((checkCast(ctx, &class_nro_Item, sp[1].o))))->F_indexUI));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(75);
	INST_IINC(4, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(85);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(82);
	frame[4].o = sp[0].o;
	LINE_NUMBER(83);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(85);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(86);
	goto label_22;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(85);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(86);
	throwException(ctx, (frame[5].o));	}
label_22:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_giaodich_byte_int_byte_int(jcontext ctx, jobject self, jbyte param0, jint param1, jbyte param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:giaodich", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(91);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"giao dich action = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(92);
	frame[5].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(95);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-86));
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(96);
	if ((frame[1].i) == 0) goto label_13;
	}
	{
	if ((frame[1].i) != (jint(1))) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[2].i));
	}
label_14:;
	{
	LINE_NUMBER(100);
	if ((frame[1].i) != (jint(2))) goto label_15;
	}
	{
	LINE_NUMBER(101);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"gui len indxe ="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" num= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[4].i));
	}
label_15:;
	{
	LINE_NUMBER(106);
	if ((frame[1].i) != (jint(4))) goto label_19;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[3].i));
	}
label_19:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(115);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(112);
	frame[6].o = sp[0].o;
	LINE_NUMBER(113);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(115);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	LINE_NUMBER(116);
	goto label_24;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(115);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	LINE_NUMBER(116);
	throwException(ctx, (frame[7].o));	}
label_24:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_sendClientInput_Array1_lib_input_TField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:sendClientInput", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(124);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-125));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(126);
	frame[3].i = (jint(0));
	}
label_12:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_13;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))))->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(126);
	INST_IINC(3, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(135);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(132);
	frame[3].o = sp[0].o;
	LINE_NUMBER(133);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(135);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(136);
	goto label_19;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(135);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(136);
	throwException(ctx, (frame[4].o));	}
label_19:;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_speacialSkill_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:speacialSkill", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(141);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(144);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (112));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(150);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(147);
	frame[3].o = sp[0].o;
	LINE_NUMBER(148);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(150);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(151);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(150);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(151);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_mobCapcha_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:mobCapcha", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(156);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cap char c= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(157);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(160);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-85));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeChar_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeChar_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(161);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(166);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(163);
	frame[3].o = sp[0].o;
	LINE_NUMBER(164);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(166);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(167);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(166);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(167);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(169);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_friend_byte_int(jcontext ctx, jobject self, jbyte param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:friend", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(172);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"add friend"_j))));
	LINE_NUMBER(173);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(176);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-80));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(177);
	if ((frame[2].i) == (jint(-1))) goto label_13;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[2].i));
	}
label_13:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(186);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(183);
	frame[4].o = sp[0].o;
	LINE_NUMBER(184);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(186);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(187);
	goto label_18;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(186);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(187);
	throwException(ctx, (frame[5].o));	}
label_18:;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_getArchivemnt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:getArchivemnt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(192);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"get ngoc"_j))));
	LINE_NUMBER(193);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(196);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-76));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(202);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(199);
	frame[3].o = sp[0].o;
	LINE_NUMBER(200);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(202);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(203);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(202);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(203);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(205);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_getPlayerMenu_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:getPlayerMenu", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(208);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(211);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-79));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(212);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(217);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(214);
	frame[3].o = sp[0].o;
	LINE_NUMBER(215);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(217);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(218);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(217);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(218);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_clanImage_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:clanImage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(223);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(226);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-62));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jbyte((frame[1].i))));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(232);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(233);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	}
label_12:;
	LINE_NUMBER(228);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(229);
	frame[3].o = sp[0].o;
	LINE_NUMBER(230);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(232);
	if ((frame[2].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(233);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(232);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_17;
	{
	LINE_NUMBER(233);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	}
label_17:;
	{
	LINE_NUMBER(235);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_skill_not_focus_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:skill_not_focus", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(240);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Skill not focus so "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(241);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(244);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-45));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(250);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(247);
	frame[3].o = sp[0].o;
	LINE_NUMBER(248);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(250);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(251);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(250);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(251);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_clanDonate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:clanDonate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(256);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(259);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"CLAN DONATE"_j))));
	LINE_NUMBER(260);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-54));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(266);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(263);
	frame[3].o = sp[0].o;
	LINE_NUMBER(264);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(266);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(267);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(266);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(267);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(269);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_clanMessage_int_java_lang_String_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:clanMessage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(272);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(275);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"CLAN MESSAGE"_j))));
	LINE_NUMBER(276);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-51));
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(277);
	if ((frame[1].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	}
label_13:;
	{
	LINE_NUMBER(281);
	if ((frame[1].i) != (jint(2))) goto label_15;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[3].i));
	}
label_15:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(290);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(287);
	frame[5].o = sp[0].o;
	LINE_NUMBER(288);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(290);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(291);
	goto label_20;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(290);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(291);
	throwException(ctx, (frame[6].o));	}
label_20:;
	LINE_NUMBER(293);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_useItem_byte_byte_byte_short(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2, jshort param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:useItem", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (14)) goto label_11;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_nextRequestId_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"USE"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(298);
	if ((frame[3].i) < (jint(-1))) goto label_14;
	}
	{
	if ((frame[3].i) != (jint(-1))) goto label_15;
	}
	INST_ILOAD(4);
	if ((--sp)->i >= 0) goto label_15;
label_14:;
	{
	LINE_NUMBER(299);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"USE_ITEM_REJECTED_BY_SERVICE"_j));
	sp[1].o = frame[5].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"CMD_-43_USE_ITEM"_j));
	jint temp0 = 400;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"ERR_INVALID_SLOT"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[5].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[5].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8"type="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[1].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",where="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[2].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",index="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[3].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",template="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[4].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[5].o);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}
label_15:;
	{
	LINE_NUMBER(309);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"USE_ITEM_SEND"_j));
	sp[1].o = frame[5].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"CMD_-43_USE_ITEM"_j));
	jint temp0 = 200;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[5].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[5].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8"type="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[1].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",where="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[2].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",index="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[3].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",template="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[4].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[5].o);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(317);
	frame[6].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(320);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-43));
	frame[6].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(323);
	if ((frame[3].i) != (jint(-1))) goto label_21;
	}
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[4].i));
	}
label_21:;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(333);
	if ((frame[6].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(334);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[6].o));
	}
label_23:;
	LINE_NUMBER(328);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(329);
	frame[7].o = sp[0].o;
	LINE_NUMBER(330);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"CMD_-43_USE_ITEM"_j));
	sp[1].o = frame[5].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ERR_USE_ITEM_SEND"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"index="_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[3].o, (frame[3].i));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[3].o);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logException_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Throwable_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[7].o));
	LINE_NUMBER(331);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(333);
	if ((frame[6].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(334);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[6].o));
	goto label_11;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(333);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_28;
	{
	LINE_NUMBER(334);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[6].o));
	}
label_28:;
	{
	LINE_NUMBER(336);
	throwException(ctx, (frame[8].o));	}
label_11:;
	LINE_NUMBER(339);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_joinClan_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:joinClan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(342);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"JOIN CLAN "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(343);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(346);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-49));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(348);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(353);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(350);
	frame[4].o = sp[0].o;
	LINE_NUMBER(351);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(353);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(354);
	goto label_17;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(353);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(354);
	throwException(ctx, (frame[5].o));	}
label_17:;
	LINE_NUMBER(356);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_clanMember_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:clanMember", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(359);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MEMBER CLAN "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(360);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(363);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-50));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(364);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(369);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(366);
	frame[3].o = sp[0].o;
	LINE_NUMBER(367);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(369);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(370);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(369);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(370);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(372);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_searchClan_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:searchClan", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(375);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"send SEARCH CLAN "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(376);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(379);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-47));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(380);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(385);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(382);
	frame[3].o = sp[0].o;
	LINE_NUMBER(383);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(385);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(386);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(385);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(386);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_clanRemote_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:clanRemote", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(391);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"REMOTE CLAN id = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" role= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(392);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(395);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-56));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(397);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(402);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(399);
	frame[4].o = sp[0].o;
	LINE_NUMBER(400);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(402);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(403);
	goto label_17;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(402);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(403);
	throwException(ctx, (frame[5].o));	}
label_17:;
	LINE_NUMBER(405);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_leaveClan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:leaveClan", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"LEAVE CLAN"_j))));
	LINE_NUMBER(409);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(412);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-55));
	frame[1].o = sp[0].o;
	LINE_NUMBER(413);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(418);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(415);
	frame[2].o = sp[0].o;
	LINE_NUMBER(416);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(418);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(419);
	goto label_14;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(418);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(419);
	throwException(ctx, (frame[3].o));	}
label_14:;
	LINE_NUMBER(421);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_clanInvite_byte_int_int_int(jcontext ctx, jobject self, jbyte param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:clanInvite", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(424);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invite action = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"layerid= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" clanID= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" code= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(425);
	frame[5].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(428);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-57));
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(429);
	if ((frame[1].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[2].i));
	}
label_13:;
	{
	LINE_NUMBER(433);
	if ((frame[1].i) == (jint(1))) goto label_15;
	}
	{
	if ((frame[1].i) != (jint(2))) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(435);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[4].i));
	}
label_16:;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(443);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(440);
	frame[6].o = sp[0].o;
	LINE_NUMBER(441);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(443);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	LINE_NUMBER(444);
	goto label_21;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(443);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	LINE_NUMBER(444);
	throwException(ctx, (frame[7].o));	}
label_21:;
	LINE_NUMBER(446);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_getClan_byte_int_java_lang_String(jcontext ctx, jobject self, jbyte param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:getClan", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(449);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(452);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-46));
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(453);
	if ((frame[1].i) == (jint(2))) goto label_12;
	}
	{
	if ((frame[1].i) != (jint(4))) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (jshort((frame[2].i))));
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(456);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SEND SLOGAN= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
label_13:;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(464);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(461);
	frame[5].o = sp[0].o;
	LINE_NUMBER(462);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(464);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(465);
	goto label_19;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(464);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(465);
	throwException(ctx, (frame[6].o));	}
label_19:;
	LINE_NUMBER(467);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_getItem_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:getItem", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(470);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(473);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-40));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(474);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(475);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(480);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(477);
	frame[4].o = sp[0].o;
	LINE_NUMBER(478);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(480);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(481);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(480);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(481);
	throwException(ctx, (frame[5].o));	}
label_16:;
	LINE_NUMBER(483);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_nro_Service_messageNotLogin_byte_R_nro_Message(jcontext ctx, jbyte param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:messageNotLogin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Service(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(487);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-29));
	frame[1].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_nro_Service_messageNotMap_byte_R_nro_Message(jcontext ctx, jbyte param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:messageNotMap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Service(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(493);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-28));
	frame[1].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_nro_Service_setClientType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:setClientType", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(498);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"clienttype"_j))));
	if (temp0 == (jint(-1))) goto label_0;
	}
	{
	LINE_NUMBER(499);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"clienttype"_j))));
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_clientTypec = temp0;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(503);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"setType"_j))));
	LINE_NUMBER(505);
	sp[0].o = (jobject)SM_nro_Service_messageNotLogin_byte_R_nro_Message(ctx, (jint(2)));
	frame[1].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec));
	LINE_NUMBER(506);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeBoolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeBoolean_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(508);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w));
	LINE_NUMBER(509);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(510);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeBoolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeBoolean_boolean])(ctx, sp[0].o, (clinit_lib_input_TField(ctx), (jint)SF_lib_input_TField_isQwerty));
	LINE_NUMBER(511);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeBoolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeBoolean_boolean])(ctx, sp[0].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch));
	LINE_NUMBER(512);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"microedition.platform"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(513);
	if ((frame[2].o) == nullptr) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(514);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"win"_j)));
	}
label_17:;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[1].o));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"|2.5.2"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(518);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"res\\info"_j))));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(519);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[3].o), (checkCast(ctx, getArrayClass(&class_byte, 1), (jobject(nullptr)))));
	LINE_NUMBER(520);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (jobject(nullptr))))))->length));
	LINE_NUMBER(521);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_byte, 1), (jobject(nullptr)))));
	LINE_NUMBER(522);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"write "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (jobject(nullptr))))))->length));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|2.5.2"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	}
label_20:;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(526);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(529);
	goto label_26;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(527);
	frame[1].o = sp[0].o;
	LINE_NUMBER(528);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[1].o));
	}
label_26:;
	LINE_NUMBER(530);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_sendCheckController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:sendCheckController", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(533);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(536);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-120));
	frame[1].o = sp[0].o;
	LINE_NUMBER(537);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(541);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_Service(ctx);
	SF_nro_Service_curCheckController = temp0;
	LINE_NUMBER(542);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(539);
	frame[2].o = sp[0].o;
	LINE_NUMBER(541);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_Service(ctx);
	SF_nro_Service_curCheckController = temp0;
	LINE_NUMBER(542);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(543);
	goto label_13;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(541);
	frame[3].o = sp[0].o;
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_Service(ctx);
	SF_nro_Service_curCheckController = temp0;
	LINE_NUMBER(542);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(543);
	throwException(ctx, (frame[3].o));	}
label_13:;
	LINE_NUMBER(545);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_sendCheckMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:sendCheckMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(548);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(551);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-121));
	frame[1].o = sp[0].o;
	LINE_NUMBER(552);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(556);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_Service(ctx);
	SF_nro_Service_curCheckMap = temp0;
	LINE_NUMBER(557);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(554);
	frame[2].o = sp[0].o;
	LINE_NUMBER(556);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_Service(ctx);
	SF_nro_Service_curCheckMap = temp0;
	LINE_NUMBER(557);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(558);
	goto label_13;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(556);
	frame[3].o = sp[0].o;
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_Service(ctx);
	SF_nro_Service_curCheckMap = temp0;
	LINE_NUMBER(557);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(558);
	throwException(ctx, (frame[3].o));	}
label_13:;
	LINE_NUMBER(560);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbyte param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:login", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)SM_nro_Service_messageNotLogin_byte_R_nro_Message(ctx, (jint(0)));
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(569);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[4].i));
	LINE_NUMBER(571);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(572);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(575);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(573);
	frame[5].o = sp[0].o;
	LINE_NUMBER(574);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[5].o));
	}
label_10:;
	LINE_NUMBER(576);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_requestRegister_java_lang_String_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:requestRegister", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(579);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Request Register "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)SM_nro_Service_messageNotLogin_byte_R_nro_Message(ctx, (jint(1)));
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(584);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(585);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(587);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"a"_j))));
	}
label_8:;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(591);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(594);
	goto label_12;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(592);
	frame[5].o = sp[0].o;
	LINE_NUMBER(593);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[5].o));
	}
label_12:;
	LINE_NUMBER(595);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_requestChangeMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:requestChangeMap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(598);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-23));
	frame[1].o = sp[0].o;
	LINE_NUMBER(599);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(600);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Service_magicTree_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:magicTree", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(604);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-34));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(607);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[2].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(608);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(609);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(611);
	goto label_7;
label_2:;
	LINE_NUMBER(610);
	INST_ASTORE(3);
label_7:;
	LINE_NUMBER(612);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_requestChangeZone_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:requestChangeZone", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(615);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (21));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[2].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(619);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(620);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(622);
	goto label_7;
label_2:;
	LINE_NUMBER(621);
	INST_ASTORE(3);
label_7:;
	LINE_NUMBER(623);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_checkMMove_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:checkMMove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(626);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-78));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[2].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(630);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(631);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(633);
	goto label_7;
label_2:;
	LINE_NUMBER(632);
	INST_ASTORE(3);
label_7:;
	LINE_NUMBER(634);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_charMove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:charMove", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(637);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[1].i = (temp0 - ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cxSend));
	LINE_NUMBER(638);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[2].i = (temp1 - ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cySend));
	LINE_NUMBER(639);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_ischangingMap) != 0) goto label_7;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_8;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_7;
label_8:;
	clinit_nro_Controller(ctx);
	(sp++)->i = SF_nro_Controller_isStopReadMessage;
	if ((--sp)->i != 0) goto label_7;
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) <= 0) goto label_7;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_telePortSkill) != 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(641);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-7));
	frame[3].o = sp[0].o;
	LINE_NUMBER(642);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cxSend = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(643);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cySend = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy);
	LINE_NUMBER(644);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdirSend = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir);
	LINE_NUMBER(645);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cactFirst = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_statusMe);
	LINE_NUMBER(646);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, temp0, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)));
	if (temp1 != 0) goto label_14;
	}
	{
	LINE_NUMBER(647);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(648);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_canFly) == 0) goto label_17;
	}
	{
	LINE_NUMBER(649);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isHaveMount) != 0) goto label_17;
	}
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jlong temp0 = (jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jlong temp1 = ((jlong)((nro_Char *) NULL_CHECK(sp[1].o))->F_cMPGoc) / (jlong(100ll));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jobject temp2 = sp[1].o;
	sp[1].l = temp0;
	sp[2].l = temp1;
	sp += 3;
	if (((jint)((nro_Char *) NULL_CHECK(temp2))->F_isMonkey) == (jint(1))) goto label_20;
	}
	INST_LCONST(1);
	goto label_21;
label_20:;
	(sp++)->l = jlong(2ll);
label_21:;
	{
	sp -= 4;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP = (sp[1].l - (sp[2].l * sp[3].l));
	LINE_NUMBER(651);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP), (jlong(0)))) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(652);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP = (jlong(0));
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jint(0)));
	}
label_17:;
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx));
	LINE_NUMBER(661);
	if ((frame[2].i) == 0) goto label_25;
	}
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy));
	}
label_25:;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(666);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_indexMenu1 = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_indexMenu1) + (jint(1)));
	LINE_NUMBER(667);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(670);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(668);
	frame[3].o = sp[0].o;
	LINE_NUMBER(669);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
label_7:;
	LINE_NUMBER(672);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_selectCharToPlay_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:selectCharToPlay", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(675);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-28));
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(679);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(680);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(681);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(682);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" gender= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" hair="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(685);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(683);
	frame[5].o = sp[0].o;
	LINE_NUMBER(684);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
label_9:;
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(688);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Service_requestModTemplate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:requestModTemplate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(691);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(694);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (11));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (jshort((frame[1].i))));
	LINE_NUMBER(695);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(700);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(696);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(697);
	frame[3].o = sp[0].o;
	LINE_NUMBER(698);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(700);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(701);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(700);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(701);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(703);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_saleItem_byte_byte_short(jcontext ctx, jobject self, jbyte param0, jbyte param1, jshort param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:saleItem", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(706);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_nextRequestId_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"SALE"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(707);
	if ((frame[3].i) < 0) goto label_12;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_13;
	{
	if ((frame[2].i) == (jint(1))) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(708);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"SALE_ITEM_REJECTED_BY_SERVICE"_j));
	sp[1].o = frame[4].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"CMD_7_SALE_ITEM"_j));
	jint temp0 = 400;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"ERR_INVALID_SLOT"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[5].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[5].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8"action="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[1].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",type="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[2].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",slot="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[3].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[5].o);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(716);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(718);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"SALE_ITEM_SEND"_j));
	sp[1].o = frame[4].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"CMD_7_SALE_ITEM"_j));
	jint temp0 = 200;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[5].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[5].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8"action="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[1].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",type="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[2].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",slot="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[3].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[5].o);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(726);
	frame[5].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(729);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (7));
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(730);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(731);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(732);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(738);
	if ((frame[5].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(739);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	}
label_19:;
	LINE_NUMBER(733);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(734);
	frame[6].o = sp[0].o;
	LINE_NUMBER(735);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"CMD_7_SALE_ITEM"_j));
	sp[1].o = frame[4].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ERR_SALE_ITEM_SEND"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"slot="_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[3].o, (frame[3].i));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[3].o);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logException_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Throwable_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[6].o));
	LINE_NUMBER(736);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(738);
	if ((frame[5].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(739);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	goto label_23;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(738);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_25;
	{
	LINE_NUMBER(739);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	}
label_25:;
	{
	LINE_NUMBER(741);
	throwException(ctx, (frame[7].o));	}
label_23:;
	LINE_NUMBER(743);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_buyItem_byte_int_int(jcontext ctx, jobject self, jbyte param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:buyItem", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(746);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(749);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (6));
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(750);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(751);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(756);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(752);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(753);
	frame[5].o = sp[0].o;
	LINE_NUMBER(754);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(756);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(757);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(756);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(757);
	throwException(ctx, (frame[6].o));	}
label_16:;
	LINE_NUMBER(759);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_selectSkill_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:selectSkill", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(762);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_cName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" SELECT SKILL "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(763);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(766);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (34));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(767);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(772);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(768);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(769);
	frame[3].o = sp[0].o;
	LINE_NUMBER(770);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(772);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(773);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(772);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(773);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(775);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_getEffData_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:getEffData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(778);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(781);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-66));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(782);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(787);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(783);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(784);
	frame[3].o = sp[0].o;
	LINE_NUMBER(785);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(787);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(788);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(787);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(788);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(790);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_openUIZone(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:openUIZone", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(793);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(796);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (29));
	frame[1].o = sp[0].o;
	LINE_NUMBER(797);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(802);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(798);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(799);
	frame[2].o = sp[0].o;
	LINE_NUMBER(800);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(802);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(803);
	goto label_13;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(802);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(803);
	throwException(ctx, (frame[3].o));	}
label_13:;
	LINE_NUMBER(805);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_confirmMenu_short_byte(jcontext ctx, jobject self, jshort param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:confirmMenu", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(808);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"confirme menu="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" npc= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(809);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(812);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(813);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(814);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(819);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(815);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(816);
	frame[4].o = sp[0].o;
	LINE_NUMBER(817);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(819);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(820);
	goto label_17;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(819);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(820);
	throwException(ctx, (frame[5].o));	}
label_17:;
	LINE_NUMBER(822);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_openMenu_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:openMenu", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(825);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"npc id"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(826);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(829);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (33));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(830);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(835);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(831);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(832);
	frame[3].o = sp[0].o;
	LINE_NUMBER(833);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(835);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(836);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(835);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(836);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(838);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_menu_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:menu", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(841);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(844);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (22));
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(845);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(846);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(847);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(852);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(848);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(849);
	frame[5].o = sp[0].o;
	LINE_NUMBER(850);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(852);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(853);
	goto label_17;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(852);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(853);
	throwException(ctx, (frame[6].o));	}
label_17:;
	LINE_NUMBER(855);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_menuId_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:menuId", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(858);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(861);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (27));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(862);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(867);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(863);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(864);
	frame[3].o = sp[0].o;
	LINE_NUMBER(865);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(867);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(868);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(867);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(868);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(870);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_textBoxId_short_java_lang_String(jcontext ctx, jobject self, jshort param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:textBoxId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(873);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(876);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (88));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(877);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(878);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(883);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(879);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(880);
	frame[4].o = sp[0].o;
	LINE_NUMBER(881);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(883);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(884);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(883);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(884);
	throwException(ctx, (frame[5].o));	}
label_16:;
	LINE_NUMBER(886);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_crystalCollectLock_Array1_nro_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:crystalCollectLock", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(889);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	((func_nro_MsgDlg_pleasewait) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_pleasewait])(ctx, sp[0].o);
	LINE_NUMBER(890);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(893);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (13));
	frame[2].o = sp[0].o;
	LINE_NUMBER(895);
	frame[3].i = (jint(0));
	}
label_13:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_14;
	}
	{
	LINE_NUMBER(896);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(897);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[2].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)))))->F_indexUI));
	}
label_16:;
	{
	LINE_NUMBER(895);
	INST_IINC(3, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(906);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(902);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(903);
	frame[3].o = sp[0].o;
	LINE_NUMBER(904);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(906);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(907);
	goto label_21;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(906);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(907);
	throwException(ctx, (frame[4].o));	}
label_21:;
	LINE_NUMBER(909);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_acceptInviteTrade_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:acceptInviteTrade", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(912);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(915);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (37));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(916);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(921);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(917);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(918);
	frame[3].o = sp[0].o;
	LINE_NUMBER(919);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(921);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(922);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(921);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(922);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(924);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_cancelInviteTrade(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:cancelInviteTrade", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(927);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(930);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (50));
	frame[1].o = sp[0].o;
	LINE_NUMBER(931);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(936);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(932);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(933);
	frame[2].o = sp[0].o;
	LINE_NUMBER(934);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(936);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(937);
	goto label_13;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(936);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(937);
	throwException(ctx, (frame[3].o));	}
label_13:;
	LINE_NUMBER(939);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:sendPlayerAttack", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(943);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SEND ATTACT vChar=  "_j))));
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(944);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(945);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(948);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	if (temp0 <= 0) goto label_7;
	}
	{
	LINE_NUMBER(949);
	if ((frame[3].i) != (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(950);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-4));
	frame[4].o = sp[0].o;
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(951);
	if ((frame[3].i) != (jint(2))) goto label_11;
	}
	{
	LINE_NUMBER(952);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (67));
	frame[4].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(955);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(957);
	frame[3].i = (jint(0));
	}
label_14:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_15;
	}
	{
	LINE_NUMBER(958);
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_nro_Mob, sp[0].o));
	LINE_NUMBER(959);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[5].o)))->F_y1));
	LINE_NUMBER(957);
	INST_IINC(3, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(962);
	frame[3].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_20;
	}
	{
	LINE_NUMBER(963);
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	sp[0].o = checkCast(ctx, &class_nro_Char, sp[0].o);
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[6].o)))->F_charID));
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(966);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (jint(-1)));
	}
label_25:;
	{
	LINE_NUMBER(962);
	INST_IINC(3, 1);
	goto label_19;
	}
label_7:;
	{
	LINE_NUMBER(969);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_26;
	}
	{
	LINE_NUMBER(970);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"PLAYER ATTACK NPC"_j))));
	LINE_NUMBER(971);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (54));
	frame[4].o = sp[0].o;
	LINE_NUMBER(973);
	frame[3].i = (jint(0));
	}
label_30:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_20;
	}
	{
	LINE_NUMBER(974);
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	sp[0].o = checkCast(ctx, &class_nro_Mob, sp[0].o);
	frame[5].o = sp[0].o;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_isMobMe) != 0) goto label_33;
	}
	{
	LINE_NUMBER(975);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[5].o)))->F_y1));
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jint(-1)));
	LINE_NUMBER(978);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[5].o)))->F_y1));
	}
label_35:;
	{
	LINE_NUMBER(973);
	INST_IINC(3, 1);
	goto label_30;
	}
label_26:;
	{
	LINE_NUMBER(981);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	if (temp0 <= 0) goto label_20;
	}
	{
	LINE_NUMBER(982);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"player attack player "_j))));
	LINE_NUMBER(983);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-60));
	frame[4].o = sp[0].o;
	LINE_NUMBER(985);
	frame[3].i = (jint(0));
	}
label_40:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_20;
	}
	{
	LINE_NUMBER(986);
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[6].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	LINE_NUMBER(987);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[6].o)))->F_charID));
	LINE_NUMBER(985);
	INST_IINC(3, 1);
	goto label_40;
	}
label_20:;
	{
	LINE_NUMBER(991);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jbyte(((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir))));
	LINE_NUMBER(992);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(993);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(997);
	goto label_46;
label_2:;
	LINE_NUMBER(996);
	INST_ASTORE(4);
label_46:;
	LINE_NUMBER(998);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_pickItem_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:pickItem", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1001);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1004);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-20));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1005);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1010);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1006);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1007);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1008);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1010);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1011);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1010);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1011);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1013);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_returnTownFromDead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:returnTownFromDead", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1016);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1019);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-15));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1025);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1021);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1022);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1023);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1025);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1026);
	goto label_13;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1025);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1026);
	throwException(ctx, (frame[3].o));	}
label_13:;
	LINE_NUMBER(1028);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_wakeUpFromDead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:wakeUpFromDead", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1031);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1034);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-16));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1035);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1040);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1036);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1037);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1038);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1040);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1041);
	goto label_13;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1040);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1041);
	throwException(ctx, (frame[3].o));	}
label_13:;
	LINE_NUMBER(1043);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_chat_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:chat", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1046);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1049);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Send chat "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1050);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (44));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1056);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1052);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1053);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1054);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1056);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1057);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1056);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1057);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(1059);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_updateData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:updateData", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1062);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1065);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-87));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1066);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) != 0) goto label_10;
	}
	{
	LINE_NUMBER(1067);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(1069);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1073);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1078);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1074);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1075);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1076);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1078);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1079);
	goto label_17;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1078);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1079);
	throwException(ctx, (frame[3].o));	}
label_17:;
	LINE_NUMBER(1081);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_updateMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:updateMap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1084);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1087);
	sp[0].o = (jobject)SM_nro_Service_messageNotMap_byte_R_nro_Message(ctx, (6));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1088);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) != 0) goto label_10;
	}
	{
	LINE_NUMBER(1089);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(1091);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(1094);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1095);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1100);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1096);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1097);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1098);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1100);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1101);
	goto label_17;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1100);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1101);
	throwException(ctx, (frame[3].o));	}
label_17:;
	LINE_NUMBER(1103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_updateSkill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:updateSkill", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1106);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1109);
	sp[0].o = (jobject)SM_nro_Service_messageNotMap_byte_R_nro_Message(ctx, (7));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1110);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) != 0) goto label_10;
	}
	{
	LINE_NUMBER(1111);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(1113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1117);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1122);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1118);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1119);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1120);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1122);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1123);
	goto label_17;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1122);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1123);
	throwException(ctx, (frame[3].o));	}
label_17:;
	LINE_NUMBER(1125);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_updateItem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:updateItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1128);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1131);
	sp[0].o = (jobject)SM_nro_Service_messageNotMap_byte_R_nro_Message(ctx, (8));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1132);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) != 0) goto label_10;
	}
	{
	LINE_NUMBER(1133);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(1135);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(1138);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1139);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1144);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1140);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1141);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1142);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1144);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1145);
	goto label_17;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1144);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1145);
	throwException(ctx, (frame[3].o));	}
label_17:;
	LINE_NUMBER(1147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_clientOk(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:clientOk", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1150);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1153);
	sp[0].o = (jobject)SM_nro_Service_messageNotMap_byte_R_nro_Message(ctx, (13));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1154);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1159);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1155);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1156);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1157);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1159);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1160);
	goto label_13;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1159);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1160);
	throwException(ctx, (frame[3].o));	}
label_13:;
	LINE_NUMBER(1162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_addFriend_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:addFriend", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1165);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1168);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (53));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1169);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1174);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1170);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1171);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1172);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1174);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1175);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1174);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1175);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1177);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_addPartyAccept_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:addPartyAccept", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1180);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1183);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (76));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1184);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1189);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1185);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1186);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1187);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1189);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1190);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1189);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1190);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1192);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_addPartyCancel_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:addPartyCancel", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1195);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1198);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (77));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1199);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1204);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1200);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1201);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1202);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1204);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1205);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1204);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1205);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1207);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_player_vs_player_byte_byte_int(jcontext ctx, jobject self, jbyte param0, jbyte param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:player_vs_player", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1210);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"PLAYER VS PLAYER"_j))));
	LINE_NUMBER(1211);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1214);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-59));
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1215);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1216);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(1217);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1222);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(1218);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1219);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1220);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1222);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(1223);
	goto label_18;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1222);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(1223);
	throwException(ctx, (frame[6].o));	}
label_18:;
	LINE_NUMBER(1225);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_requestMaptemplate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:requestMaptemplate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1228);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1231);
	sp[0].o = (jobject)SM_nro_Service_messageNotMap_byte_R_nro_Message(ctx, (10));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1232);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1237);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1233);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1234);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1235);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1237);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1238);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1237);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1238);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1240);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_acceptPleaseParty_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:acceptPleaseParty", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1243);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1246);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (17));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1247);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1252);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1248);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1249);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1250);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1252);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1253);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1252);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1253);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1255);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_chatPlayer_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:chatPlayer", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1258);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1261);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-72));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1262);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1263);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1268);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1264);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1265);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1266);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1268);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1269);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1268);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1269);
	throwException(ctx, (frame[5].o));	}
label_16:;
	LINE_NUMBER(1271);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_chatGlobal_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:chatGlobal", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1274);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1277);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-71));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1278);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1283);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1279);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1280);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1281);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1283);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1284);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1283);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1284);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1286);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_sendCardInfo_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:sendCardInfo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1289);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1292);
	sp[0].o = (jobject)SM_nro_Service_messageNotMap_byte_R_nro_Message(ctx, (16));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1293);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(1294);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1299);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1295);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1296);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1297);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1299);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1300);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1299);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1300);
	throwException(ctx, (frame[5].o));	}
label_16:;
	LINE_NUMBER(1302);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_changeName_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:changeName", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1305);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1308);
	sp[0].o = (jobject)SM_nro_Service_messageNotMap_byte_R_nro_Message(ctx, (18));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1309);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1310);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1315);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1311);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1312);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1313);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1315);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1316);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1315);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1316);
	throwException(ctx, (frame[5].o));	}
label_16:;
	LINE_NUMBER(1318);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_requestIcon_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:requestIcon", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1321);
	SM_main_GameCanvas_connect(ctx);
	LINE_NUMBER(1322);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1325);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"REQUEST ICON "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1326);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-67));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1327);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) != 0) goto label_14;
	}
	{
	LINE_NUMBER(1328);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(1330);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(1333);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(1334);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1339);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1335);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1336);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1337);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1339);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1340);
	goto label_21;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1339);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1340);
	throwException(ctx, (frame[4].o));	}
label_21:;
	LINE_NUMBER(1342);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_activeAccProtect_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:activeAccProtect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1345);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1348);
	sp[0].o = (jobject)SM_nro_Service_messageNotMap_byte_R_nro_Message(ctx, (37));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1349);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1354);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1350);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1351);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1352);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1354);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1355);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1354);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1355);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1357);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_clearAccProtect_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:clearAccProtect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1360);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1363);
	sp[0].o = (jobject)SM_nro_Service_messageNotMap_byte_R_nro_Message(ctx, (41));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1364);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1369);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1365);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1366);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1367);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1369);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1370);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1369);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1370);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1372);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_openLockAccProtect_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:openLockAccProtect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1375);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1378);
	sp[0].o = (jobject)SM_nro_Service_messageNotMap_byte_R_nro_Message(ctx, (39));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1379);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1384);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1380);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1381);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1382);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1384);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1385);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1384);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1385);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1387);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_getBgTemplate_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:getBgTemplate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1390);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"get image id= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1391);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1394);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-32));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1395);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) != 0) goto label_13;
	}
	{
	LINE_NUMBER(1396);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(1398);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
label_15:;
	{
	LINE_NUMBER(1401);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(1402);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1407);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1403);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1404);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1405);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1407);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1408);
	goto label_20;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1407);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1408);
	throwException(ctx, (frame[4].o));	}
label_20:;
	LINE_NUMBER(1410);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_getMapOffline(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:getMapOffline", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1413);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"send map offline"_j))));
	LINE_NUMBER(1414);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1417);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-33));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1418);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1423);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1419);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1420);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1421);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1423);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1424);
	goto label_14;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1423);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1424);
	throwException(ctx, (frame[3].o));	}
label_14:;
	LINE_NUMBER(1426);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_finishUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:finishUpdate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1429);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1432);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-38));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1433);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1438);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1434);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1435);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1436);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1438);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1439);
	goto label_13;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1438);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1439);
	throwException(ctx, (frame[3].o));	}
label_13:;
	LINE_NUMBER(1441);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_finishUpdate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:finishUpdate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1444);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1447);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-38));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1448);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1452);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1449);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1450);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1452);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1453);
	goto label_13;
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1452);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1453);
	throwException(ctx, (frame[4].o));	}
label_13:;
	LINE_NUMBER(1455);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_finishLoadMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:finishLoadMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1458);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"finishLoadMap"_j))));
	LINE_NUMBER(1459);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1462);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-39));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1463);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1468);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1464);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1465);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1466);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1468);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1469);
	goto label_14;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1468);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1469);
	throwException(ctx, (frame[3].o));	}
label_14:;
	LINE_NUMBER(1471);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_requestBagImage_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:requestBagImage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1474);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"request bag image"_j))));
	LINE_NUMBER(1475);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1478);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-63));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1479);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1484);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1480);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1481);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1482);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1484);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1485);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1484);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1485);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(1487);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_login2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:login2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1490);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Login 2"_j))));
	LINE_NUMBER(1491);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1494);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-101));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1495);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[2].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(1496);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1501);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1497);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1498);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1499);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1501);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1502);
	goto label_17;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1501);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1502);
	throwException(ctx, (frame[4].o));	}
label_17:;
	LINE_NUMBER(1504);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_getMagicTree_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:getMagicTree", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1507);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"request magic tree"_j))));
	LINE_NUMBER(1508);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1511);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-34));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(1512);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1517);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1513);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1514);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1515);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1517);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1518);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1517);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1518);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(1520);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_upPotential_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:upPotential", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1523);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1526);
	frame[4].i = (jint(1));
	LINE_NUMBER(1528);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-30));
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (16));
	LINE_NUMBER(1529);
	frame[3].o = (frame[5].o);
	LINE_NUMBER(1530);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1531);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1532);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"g\u1eedi t\u0103ng ti\u1ec1m n\u0103ng NUM= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" type= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1533);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1538);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1534);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1535);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1536);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1538);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1539);
	goto label_21;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1538);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1539);
	throwException(ctx, (frame[6].o));	}
label_21:;
	LINE_NUMBER(1541);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_getResource_byte_nro_MyVector(jcontext ctx, jobject self, jbyte param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:getResource", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1544);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"request resource action= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1545);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1548);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-74));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1549);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) != 0) goto label_13;
	}
	{
	LINE_NUMBER(1550);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(1552);
	clinit_nro_Service(ctx);
	SF_nro_Service_reciveFromMainSession = (jint(1));
	LINE_NUMBER(1553);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
label_15:;
	{
	LINE_NUMBER(1556);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(1557);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1562);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1558);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1559);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1560);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1562);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1563);
	goto label_21;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1562);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1563);
	throwException(ctx, (frame[5].o));	}
label_21:;
	LINE_NUMBER(1565);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_requestMapSelect_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:requestMapSelect", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1568);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"request magic tree"_j))));
	LINE_NUMBER(1569);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1572);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-91));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1573);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1578);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1574);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1575);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1576);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1578);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1579);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1578);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1579);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(1581);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_petInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:petInfo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1584);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1587);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-107));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1593);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1589);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1590);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1591);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1593);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1594);
	goto label_13;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1593);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1594);
	throwException(ctx, (frame[3].o));	}
label_13:;
	LINE_NUMBER(1596);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_sendTop_java_lang_String_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:sendTop", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1599);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1602);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-96));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1603);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1604);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1609);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1605);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1606);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1607);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1609);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1610);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1609);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1610);
	throwException(ctx, (frame[5].o));	}
label_16:;
	LINE_NUMBER(1612);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_sendThachDau_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:sendThachDau", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1615);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"GUI THACH DAUA"_j))));
	LINE_NUMBER(1616);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1619);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-118));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1620);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1625);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1621);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1622);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1623);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1625);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1626);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1625);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1626);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(1628);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_enemy_byte_int(jcontext ctx, jobject self, jbyte param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:enemy", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1631);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"add friend"_j))));
	LINE_NUMBER(1632);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1635);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-99));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1636);
	if ((frame[1].i) == (jint(1))) goto label_13;
	}
	{
	if ((frame[1].i) != (jint(2))) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(1637);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[2].i));
	}
label_14:;
	{
	LINE_NUMBER(1640);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1645);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1641);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1642);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1643);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1645);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1646);
	goto label_18;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1645);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1646);
	throwException(ctx, (frame[5].o));	}
label_18:;
	LINE_NUMBER(1648);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_kigui_byte_int_byte_int_int(jcontext ctx, jobject self, jbyte param0, jint param1, jbyte param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:kigui", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1651);
	frame[6].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1654);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ki gui action= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" item id= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1655);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-100));
	frame[6].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1656);
	if ((frame[1].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(1657);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1658);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(1659);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[4].i));
	LINE_NUMBER(1660);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(1661);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ki gui so luong "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
label_13:;
	{
	LINE_NUMBER(1664);
	if ((frame[1].i) == (jint(1))) goto label_19;
	}
	{
	if ((frame[1].i) != (jint(2))) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(1665);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[2].i));
	}
label_20:;
	{
	LINE_NUMBER(1668);
	if ((frame[1].i) != (jint(3))) goto label_21;
	}
	{
	LINE_NUMBER(1669);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1670);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(1671);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[4].i));
	}
label_21:;
	{
	LINE_NUMBER(1674);
	if ((frame[1].i) != (jint(4))) goto label_25;
	}
	{
	LINE_NUMBER(1675);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(1676);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[4].i));
	LINE_NUMBER(1677);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"currTab= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" page= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
label_25:;
	{
	LINE_NUMBER(1680);
	if ((frame[1].i) != (jint(5))) goto label_29;
	}
	{
	LINE_NUMBER(1681);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[6].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[2].i));
	}
label_29:;
	{
	LINE_NUMBER(1684);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1689);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[6].o));
	LINE_NUMBER(1685);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1686);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1687);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1689);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[6].o));
	LINE_NUMBER(1690);
	goto label_34;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1689);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[6].o));
	LINE_NUMBER(1690);
	throwException(ctx, (frame[8].o));	}
label_34:;
	LINE_NUMBER(1692);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_getFlag_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:getFlag", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1695);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1698);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-103));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1699);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"------------service--  "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"   "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1700);
	if ((frame[1].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1701);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	}
label_13:;
	{
	LINE_NUMBER(1704);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1709);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1705);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1706);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1707);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1709);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1710);
	goto label_18;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1709);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1710);
	throwException(ctx, (frame[5].o));	}
label_18:;
	LINE_NUMBER(1712);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_setLockInventory_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:setLockInventory", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1715);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1718);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-104));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1719);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1724);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1720);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1721);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1722);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1724);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1725);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1724);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1725);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1727);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_petStatus_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:petStatus", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1730);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1733);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-108));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1734);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1739);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1735);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1736);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1737);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1739);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1740);
	goto label_15;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1739);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1740);
	throwException(ctx, (frame[4].o));	}
label_15:;
	LINE_NUMBER(1742);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_transportNow(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:transportNow", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1745);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1748);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-105));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1749);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1754);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1750);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1751);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1752);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1754);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1755);
	goto label_13;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1754);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1755);
	throwException(ctx, (frame[3].o));	}
label_13:;
	LINE_NUMBER(1757);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_funsion_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:funsion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1760);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1763);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"FUNSION"_j))));
	LINE_NUMBER(1764);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (125));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1765);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1770);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1766);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1767);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1768);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1770);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1771);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1770);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1771);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(1773);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_imageSource_nro_MyVector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:imageSource", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1776);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1779);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"IMAGE SOURCE size= "_j))));
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1780);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-111));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, temp1);
	LINE_NUMBER(1781);
	jint temp2 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp2 <= 0) goto label_13;
	}
	{
	LINE_NUMBER(1782);
	frame[3].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_13;
	}
	{
	LINE_NUMBER(1783);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"gui len str "_j))));
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	sp[1].o = (jobject)((nro_ImageSource *) NULL_CHECK((checkCast(ctx, &class_nro_ImageSource, sp[1].o))))->F_id;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1784);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	sp[1].o = (jobject)((nro_ImageSource *) NULL_CHECK((checkCast(ctx, &class_nro_ImageSource, sp[1].o))))->F_id;
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1782);
	INST_IINC(3, 1);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(1788);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) != 0) goto label_19;
	}
	{
	LINE_NUMBER(1789);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(1791);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	LINE_NUMBER(1792);
	clinit_nro_Service(ctx);
	SF_nro_Service_reciveFromMainSession = (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(1795);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(1796);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((nro_Service *) NULL_CHECK(sp[0].o))->F_session = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1801);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1797);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1798);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1799);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1801);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1802);
	goto label_27;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1801);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1802);
	throwException(ctx, (frame[4].o));	}
label_27:;
	LINE_NUMBER(1804);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_sendServerData_byte_int_Array1_byte(jcontext ctx, jobject self, jbyte param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:sendServerData", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1807);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1810);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"SERVER DATA"_j))));
	LINE_NUMBER(1811);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-110));
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(1812);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1813);
	if ((frame[3].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1814);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(1815);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1816);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[4].o));
	((func_java_io_DataOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, (frame[3].o), (jint(0)), (frame[2].i));
	}
label_14:;
	{
	LINE_NUMBER(1819);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1824);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(1820);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1821);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1822);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1824);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(1825);
	goto label_21;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1824);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[4].o));
	LINE_NUMBER(1825);
	throwException(ctx, (frame[6].o));	}
label_21:;
	LINE_NUMBER(1827);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_changeOnKeyScr_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:changeOnKeyScr", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1830);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1833);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-113));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1835);
	frame[3].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[3].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_onScreenSkill;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_13;
	}
	{
	LINE_NUMBER(1836);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[2].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(1835);
	INST_IINC(3, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1839);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1844);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1840);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1841);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1842);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1844);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1845);
	goto label_19;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1844);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1845);
	throwException(ctx, (frame[4].o));	}
label_19:;
	LINE_NUMBER(1847);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_requestPean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:requestPean", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1850);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1853);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-114));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1854);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1859);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1855);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1856);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1857);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1859);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1860);
	goto label_13;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1859);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1860);
	throwException(ctx, (frame[3].o));	}
label_13:;
	LINE_NUMBER(1862);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_messagePlayerMenu_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:messagePlayerMenu", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1865);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1868);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-30));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (63));
	LINE_NUMBER(1869);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[2].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1870);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1875);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1871);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1872);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1873);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1875);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1876);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1875);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1876);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(1878);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_playerMenuAction_int_short(jcontext ctx, jobject self, jint param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:playerMenuAction", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1881);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1884);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-30));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (64));
	LINE_NUMBER(1885);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1886);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1887);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1892);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1888);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1889);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1890);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1892);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1893);
	goto label_17;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1892);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1893);
	throwException(ctx, (frame[5].o));	}
label_17:;
	LINE_NUMBER(1895);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_getImgByName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:getImgByName", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1898);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1901);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (66));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1902);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8">>>getGetImgByName = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1903);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1908);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1904);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1905);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1906);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1908);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1909);
	goto label_16;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1908);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[2].o));
	LINE_NUMBER(1909);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(1911);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_SendCrackBall_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:SendCrackBall", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1914);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-127));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1917);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1918);
	if ((frame[2].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(1919);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	}
label_12:;
	{
	LINE_NUMBER(1922);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1927);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1923);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1924);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1925);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1927);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1928);
	goto label_17;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1927);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1928);
	throwException(ctx, (frame[5].o));	}
label_17:;
	LINE_NUMBER(1930);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_SendRada_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:SendRada", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1933);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (127));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1936);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1937);
	if ((frame[2].i) == (jint(-1))) goto label_12;
	}
	{
	LINE_NUMBER(1938);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[2].i));
	}
label_12:;
	{
	LINE_NUMBER(1941);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1946);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1942);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1943);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1944);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1946);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1947);
	goto label_17;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1946);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[3].o));
	LINE_NUMBER(1947);
	throwException(ctx, (frame[5].o));	}
label_17:;
	LINE_NUMBER(1949);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_sendDelAcc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:sendDelAcc", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1952);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (69));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1955);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1959);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1956);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1957);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1959);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1960);
	goto label_10;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1959);
	frame[3].o = sp[0].o;
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[1].o));
	LINE_NUMBER(1960);
	throwException(ctx, (frame[3].o));	}
label_10:;
	LINE_NUMBER(1962);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Service_new_skill_not_focus_byte_byte_short_short(jcontext ctx, jobject self, jbyte param0, jbyte param1, jshort param2, jshort param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Service:new_skill_not_focus", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1965);
	frame[5].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1968);
	clinit_nro_Message(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[0].o, (-45));
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, sp[0].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (20));
	LINE_NUMBER(1969);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1970);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx));
	LINE_NUMBER(1971);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy));
	LINE_NUMBER(1972);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1973);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(1974);
	sp[0].o = (jobject)((func_nro_Message_writer_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_writer_R_java_io_DataOutputStream])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, (frame[4].i));
	LINE_NUMBER(1975);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK((frame[0].o)))->F_session;
	((func_nro_ISession_sendMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_ISession, INDEX_nro_ISession_sendMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1979);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	LINE_NUMBER(1976);
	popStackFrame(ctx);
	return;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1977);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1979);
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	LINE_NUMBER(1980);
	goto label_20;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1979);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	((func_nro_Message_cleanUp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Message_cleanUp])(ctx, (frame[5].o));
	LINE_NUMBER(1980);
	throwException(ctx, (frame[7].o));	}
label_20:;
	LINE_NUMBER(1982);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_Service[] {
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
	(void *) M_nro_Service_gotoPlayer_int,
	(void *) M_nro_Service_charInfo_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String,
	(void *) M_nro_Service_combine_byte_nro_MyVector,
	(void *) M_nro_Service_giaodich_byte_int_byte_int,
	(void *) M_nro_Service_sendClientInput_Array1_lib_input_TField,
	(void *) M_nro_Service_speacialSkill_byte,
	(void *) M_nro_Service_mobCapcha_char,
	(void *) M_nro_Service_friend_byte_int,
	(void *) M_nro_Service_getArchivemnt_int,
	(void *) M_nro_Service_getPlayerMenu_int,
	(void *) M_nro_Service_clanImage_short,
	(void *) M_nro_Service_skill_not_focus_byte,
	(void *) M_nro_Service_clanDonate_int,
	(void *) M_nro_Service_clanMessage_int_java_lang_String_int,
	(void *) M_nro_Service_useItem_byte_byte_byte_short,
	(void *) M_nro_Service_joinClan_int_byte,
	(void *) M_nro_Service_clanMember_int,
	(void *) M_nro_Service_searchClan_java_lang_String,
	(void *) M_nro_Service_clanRemote_int_byte,
	(void *) M_nro_Service_leaveClan,
	(void *) M_nro_Service_clanInvite_byte_int_int_int,
	(void *) M_nro_Service_getClan_byte_int_java_lang_String,
	(void *) M_nro_Service_getItem_byte_byte,
	(void *) M_nro_Service_setClientType,
	(void *) M_nro_Service_sendCheckController,
	(void *) M_nro_Service_sendCheckMap,
	(void *) M_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte,
	(void *) M_nro_Service_requestRegister_java_lang_String_java_lang_String_java_lang_String_java_lang_String,
	(void *) M_nro_Service_requestChangeMap,
	(void *) M_nro_Service_magicTree_byte,
	(void *) M_nro_Service_requestChangeZone_int,
	(void *) M_nro_Service_checkMMove_int,
	(void *) M_nro_Service_charMove,
	(void *) M_nro_Service_selectCharToPlay_java_lang_String_int_int,
	(void *) M_nro_Service_requestModTemplate_int,
	(void *) M_nro_Service_saleItem_byte_byte_short,
	(void *) M_nro_Service_buyItem_byte_int_int,
	(void *) M_nro_Service_selectSkill_int,
	(void *) M_nro_Service_getEffData_short,
	(void *) M_nro_Service_openUIZone,
	(void *) M_nro_Service_confirmMenu_short_byte,
	(void *) M_nro_Service_openMenu_int,
	(void *) M_nro_Service_menu_int_int_int,
	(void *) M_nro_Service_menuId_short,
	(void *) M_nro_Service_textBoxId_short_java_lang_String,
	(void *) M_nro_Service_crystalCollectLock_Array1_nro_Item,
	(void *) M_nro_Service_acceptInviteTrade_int,
	(void *) M_nro_Service_cancelInviteTrade,
	(void *) M_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int,
	(void *) M_nro_Service_pickItem_int,
	(void *) M_nro_Service_returnTownFromDead,
	(void *) M_nro_Service_wakeUpFromDead,
	(void *) M_nro_Service_chat_java_lang_String,
	(void *) M_nro_Service_updateData,
	(void *) M_nro_Service_updateMap,
	(void *) M_nro_Service_updateSkill,
	(void *) M_nro_Service_updateItem,
	(void *) M_nro_Service_clientOk,
	(void *) M_nro_Service_addFriend_java_lang_String,
	(void *) M_nro_Service_addPartyAccept_int,
	(void *) M_nro_Service_addPartyCancel_int,
	(void *) M_nro_Service_player_vs_player_byte_byte_int,
	(void *) M_nro_Service_requestMaptemplate_int,
	(void *) M_nro_Service_acceptPleaseParty_java_lang_String,
	(void *) M_nro_Service_chatPlayer_java_lang_String_int,
	(void *) M_nro_Service_chatGlobal_java_lang_String,
	(void *) M_nro_Service_sendCardInfo_java_lang_String_java_lang_String,
	(void *) M_nro_Service_changeName_java_lang_String_int,
	(void *) M_nro_Service_requestIcon_int,
	(void *) M_nro_Service_activeAccProtect_int,
	(void *) M_nro_Service_clearAccProtect_int,
	(void *) M_nro_Service_openLockAccProtect_int,
	(void *) M_nro_Service_getBgTemplate_short,
	(void *) M_nro_Service_getMapOffline,
	(void *) M_nro_Service_finishUpdate,
	(void *) M_nro_Service_finishUpdate_int,
	(void *) M_nro_Service_finishLoadMap,
	(void *) M_nro_Service_requestBagImage_int,
	(void *) M_nro_Service_login2_java_lang_String,
	(void *) M_nro_Service_getMagicTree_byte,
	(void *) M_nro_Service_upPotential_int_int,
	(void *) M_nro_Service_getResource_byte_nro_MyVector,
	(void *) M_nro_Service_requestMapSelect_int,
	(void *) M_nro_Service_petInfo,
	(void *) M_nro_Service_sendTop_java_lang_String_byte,
	(void *) M_nro_Service_sendThachDau_int,
	(void *) M_nro_Service_enemy_byte_int,
	(void *) M_nro_Service_kigui_byte_int_byte_int_int,
	(void *) M_nro_Service_getFlag_byte_byte,
	(void *) M_nro_Service_setLockInventory_int,
	(void *) M_nro_Service_petStatus_byte,
	(void *) M_nro_Service_transportNow,
	(void *) M_nro_Service_funsion_byte,
	(void *) M_nro_Service_imageSource_nro_MyVector,
	(void *) M_nro_Service_sendServerData_byte_int_Array1_byte,
	(void *) M_nro_Service_changeOnKeyScr_Array1_byte,
	(void *) M_nro_Service_requestPean,
	(void *) M_nro_Service_messagePlayerMenu_int,
	(void *) M_nro_Service_playerMenuAction_int_short,
	(void *) M_nro_Service_getImgByName_java_lang_String,
	(void *) M_nro_Service_SendCrackBall_byte_byte,
	(void *) M_nro_Service_SendRada_int_int,
	(void *) M_nro_Service_sendDelAcc,
	(void *) M_nro_Service_new_skill_not_focus_byte_byte_short_short,
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
	{ "gotoPlayer", "(I)V" },
	{ "charInfo", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "combine", "(BLnro/MyVector;)V" },
	{ "giaodich", "(BIBI)V" },
	{ "sendClientInput", "([Llib/input/TField;)V" },
	{ "speacialSkill", "(B)V" },
	{ "mobCapcha", "(C)V" },
	{ "friend", "(BI)V" },
	{ "getArchivemnt", "(I)V" },
	{ "getPlayerMenu", "(I)V" },
	{ "clanImage", "(S)V" },
	{ "skill_not_focus", "(B)V" },
	{ "clanDonate", "(I)V" },
	{ "clanMessage", "(ILjava/lang/String;I)V" },
	{ "useItem", "(BBBS)V" },
	{ "joinClan", "(IB)V" },
	{ "clanMember", "(I)V" },
	{ "searchClan", "(Ljava/lang/String;)V" },
	{ "clanRemote", "(IB)V" },
	{ "leaveClan", "()V" },
	{ "clanInvite", "(BIII)V" },
	{ "getClan", "(BILjava/lang/String;)V" },
	{ "getItem", "(BB)V" },
	{ "setClientType", "()V" },
	{ "sendCheckController", "()V" },
	{ "sendCheckMap", "()V" },
	{ "login", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;B)V" },
	{ "requestRegister", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "requestChangeMap", "()V" },
	{ "magicTree", "(B)V" },
	{ "requestChangeZone", "(I)V" },
	{ "checkMMove", "(I)V" },
	{ "charMove", "()V" },
	{ "selectCharToPlay", "(Ljava/lang/String;II)V" },
	{ "requestModTemplate", "(I)V" },
	{ "saleItem", "(BBS)V" },
	{ "buyItem", "(BII)V" },
	{ "selectSkill", "(I)V" },
	{ "getEffData", "(S)V" },
	{ "openUIZone", "()V" },
	{ "confirmMenu", "(SB)V" },
	{ "openMenu", "(I)V" },
	{ "menu", "(III)V" },
	{ "menuId", "(S)V" },
	{ "textBoxId", "(SLjava/lang/String;)V" },
	{ "crystalCollectLock", "([Lnro/Item;)V" },
	{ "acceptInviteTrade", "(I)V" },
	{ "cancelInviteTrade", "()V" },
	{ "sendPlayerAttack", "(Lnro/MyVector;Lnro/MyVector;I)V" },
	{ "pickItem", "(I)V" },
	{ "returnTownFromDead", "()V" },
	{ "wakeUpFromDead", "()V" },
	{ "chat", "(Ljava/lang/String;)V" },
	{ "updateData", "()V" },
	{ "updateMap", "()V" },
	{ "updateSkill", "()V" },
	{ "updateItem", "()V" },
	{ "clientOk", "()V" },
	{ "addFriend", "(Ljava/lang/String;)V" },
	{ "addPartyAccept", "(I)V" },
	{ "addPartyCancel", "(I)V" },
	{ "player_vs_player", "(BBI)V" },
	{ "requestMaptemplate", "(I)V" },
	{ "acceptPleaseParty", "(Ljava/lang/String;)V" },
	{ "chatPlayer", "(Ljava/lang/String;I)V" },
	{ "chatGlobal", "(Ljava/lang/String;)V" },
	{ "sendCardInfo", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "changeName", "(Ljava/lang/String;I)V" },
	{ "requestIcon", "(I)V" },
	{ "activeAccProtect", "(I)V" },
	{ "clearAccProtect", "(I)V" },
	{ "openLockAccProtect", "(I)V" },
	{ "getBgTemplate", "(S)V" },
	{ "getMapOffline", "()V" },
	{ "finishUpdate", "()V" },
	{ "finishUpdate", "(I)V" },
	{ "finishLoadMap", "()V" },
	{ "requestBagImage", "(I)V" },
	{ "login2", "(Ljava/lang/String;)V" },
	{ "getMagicTree", "(B)V" },
	{ "upPotential", "(II)V" },
	{ "getResource", "(BLnro/MyVector;)V" },
	{ "requestMapSelect", "(I)V" },
	{ "petInfo", "()V" },
	{ "sendTop", "(Ljava/lang/String;B)V" },
	{ "sendThachDau", "(I)V" },
	{ "enemy", "(BI)V" },
	{ "kigui", "(BIBII)V" },
	{ "getFlag", "(BB)V" },
	{ "setLockInventory", "(I)V" },
	{ "petStatus", "(B)V" },
	{ "transportNow", "()V" },
	{ "funsion", "(B)V" },
	{ "imageSource", "(Lnro/MyVector;)V" },
	{ "sendServerData", "(BI[B)V" },
	{ "changeOnKeyScr", "([B)V" },
	{ "requestPean", "()V" },
	{ "messagePlayerMenu", "(I)V" },
	{ "playerMenuAction", "(IS)V" },
	{ "getImgByName", "(Ljava/lang/String;)V" },
	{ "SendCrackBall", "(BB)V" },
	{ "SendRada", "(II)V" },
	{ "sendDelAcc", "()V" },
	{ "new_skill_not_focus", "(BBSS)V" },
};

static FieldMetadata fields[] {
	{ "session", &class_nro_ISession, offsetof(nro_Service, F_session), "Lnro/ISession;", 0 },
	{ "instance", &class_nro_Service, (intptr_t) &SF_nro_Service_instance, "Lnro/Service;", 10 },
	{ "curCheckController", &class_long, (intptr_t) &SF_nro_Service_curCheckController, "J", 9 },
	{ "curCheckMap", &class_long, (intptr_t) &SF_nro_Service_curCheckMap, "J", 9 },
	{ "logController", &class_long, (intptr_t) &SF_nro_Service_logController, "J", 9 },
	{ "logMap", &class_long, (intptr_t) &SF_nro_Service_logMap, "J", 9 },
	{ "reciveFromMainSession", &class_boolean, (intptr_t) &SF_nro_Service_reciveFromMainSession, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Service, 0, "()V", 1 },
	{ "gI", (intptr_t) SM_nro_Service_gI_R_nro_Service, 0, "()Lnro/Service;", 9 },
	{ "gotoPlayer", (intptr_t) M_nro_Service_gotoPlayer_int, VTABLE_nro_Service_gotoPlayer_int, "(I)V", 17 },
	{ "charInfo", (intptr_t) M_nro_Service_charInfo_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String, VTABLE_nro_Service_charInfo_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 17 },
	{ "combine", (intptr_t) M_nro_Service_combine_byte_nro_MyVector, VTABLE_nro_Service_combine_byte_nro_MyVector, "(BLnro/MyVector;)V", 17 },
	{ "giaodich", (intptr_t) M_nro_Service_giaodich_byte_int_byte_int, VTABLE_nro_Service_giaodich_byte_int_byte_int, "(BIBI)V", 17 },
	{ "sendClientInput", (intptr_t) M_nro_Service_sendClientInput_Array1_lib_input_TField, VTABLE_nro_Service_sendClientInput_Array1_lib_input_TField, "([Llib/input/TField;)V", 17 },
	{ "speacialSkill", (intptr_t) M_nro_Service_speacialSkill_byte, VTABLE_nro_Service_speacialSkill_byte, "(B)V", 17 },
	{ "mobCapcha", (intptr_t) M_nro_Service_mobCapcha_char, VTABLE_nro_Service_mobCapcha_char, "(C)V", 17 },
	{ "friend", (intptr_t) M_nro_Service_friend_byte_int, VTABLE_nro_Service_friend_byte_int, "(BI)V", 17 },
	{ "getArchivemnt", (intptr_t) M_nro_Service_getArchivemnt_int, VTABLE_nro_Service_getArchivemnt_int, "(I)V", 17 },
	{ "getPlayerMenu", (intptr_t) M_nro_Service_getPlayerMenu_int, VTABLE_nro_Service_getPlayerMenu_int, "(I)V", 17 },
	{ "clanImage", (intptr_t) M_nro_Service_clanImage_short, VTABLE_nro_Service_clanImage_short, "(S)V", 17 },
	{ "skill_not_focus", (intptr_t) M_nro_Service_skill_not_focus_byte, VTABLE_nro_Service_skill_not_focus_byte, "(B)V", 17 },
	{ "clanDonate", (intptr_t) M_nro_Service_clanDonate_int, VTABLE_nro_Service_clanDonate_int, "(I)V", 17 },
	{ "clanMessage", (intptr_t) M_nro_Service_clanMessage_int_java_lang_String_int, VTABLE_nro_Service_clanMessage_int_java_lang_String_int, "(ILjava/lang/String;I)V", 17 },
	{ "useItem", (intptr_t) M_nro_Service_useItem_byte_byte_byte_short, VTABLE_nro_Service_useItem_byte_byte_byte_short, "(BBBS)V", 17 },
	{ "joinClan", (intptr_t) M_nro_Service_joinClan_int_byte, VTABLE_nro_Service_joinClan_int_byte, "(IB)V", 17 },
	{ "clanMember", (intptr_t) M_nro_Service_clanMember_int, VTABLE_nro_Service_clanMember_int, "(I)V", 17 },
	{ "searchClan", (intptr_t) M_nro_Service_searchClan_java_lang_String, VTABLE_nro_Service_searchClan_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "clanRemote", (intptr_t) M_nro_Service_clanRemote_int_byte, VTABLE_nro_Service_clanRemote_int_byte, "(IB)V", 17 },
	{ "leaveClan", (intptr_t) M_nro_Service_leaveClan, VTABLE_nro_Service_leaveClan, "()V", 17 },
	{ "clanInvite", (intptr_t) M_nro_Service_clanInvite_byte_int_int_int, VTABLE_nro_Service_clanInvite_byte_int_int_int, "(BIII)V", 17 },
	{ "getClan", (intptr_t) M_nro_Service_getClan_byte_int_java_lang_String, VTABLE_nro_Service_getClan_byte_int_java_lang_String, "(BILjava/lang/String;)V", 17 },
	{ "getItem", (intptr_t) M_nro_Service_getItem_byte_byte, VTABLE_nro_Service_getItem_byte_byte, "(BB)V", 17 },
	{ "messageNotLogin", (intptr_t) SM_nro_Service_messageNotLogin_byte_R_nro_Message, 0, "(B)Lnro/Message;", 9 },
	{ "messageNotMap", (intptr_t) SM_nro_Service_messageNotMap_byte_R_nro_Message, 0, "(B)Lnro/Message;", 10 },
	{ "setClientType", (intptr_t) M_nro_Service_setClientType, VTABLE_nro_Service_setClientType, "()V", 17 },
	{ "sendCheckController", (intptr_t) M_nro_Service_sendCheckController, VTABLE_nro_Service_sendCheckController, "()V", 17 },
	{ "sendCheckMap", (intptr_t) M_nro_Service_sendCheckMap, VTABLE_nro_Service_sendCheckMap, "()V", 17 },
	{ "login", (intptr_t) M_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte, VTABLE_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;B)V", 17 },
	{ "requestRegister", (intptr_t) M_nro_Service_requestRegister_java_lang_String_java_lang_String_java_lang_String_java_lang_String, VTABLE_nro_Service_requestRegister_java_lang_String_java_lang_String_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 17 },
	{ "requestChangeMap", (intptr_t) M_nro_Service_requestChangeMap, VTABLE_nro_Service_requestChangeMap, "()V", 17 },
	{ "magicTree", (intptr_t) M_nro_Service_magicTree_byte, VTABLE_nro_Service_magicTree_byte, "(B)V", 17 },
	{ "requestChangeZone", (intptr_t) M_nro_Service_requestChangeZone_int, VTABLE_nro_Service_requestChangeZone_int, "(I)V", 17 },
	{ "checkMMove", (intptr_t) M_nro_Service_checkMMove_int, VTABLE_nro_Service_checkMMove_int, "(I)V", 17 },
	{ "charMove", (intptr_t) M_nro_Service_charMove, VTABLE_nro_Service_charMove, "()V", 17 },
	{ "selectCharToPlay", (intptr_t) M_nro_Service_selectCharToPlay_java_lang_String_int_int, VTABLE_nro_Service_selectCharToPlay_java_lang_String_int_int, "(Ljava/lang/String;II)V", 17 },
	{ "requestModTemplate", (intptr_t) M_nro_Service_requestModTemplate_int, VTABLE_nro_Service_requestModTemplate_int, "(I)V", 17 },
	{ "saleItem", (intptr_t) M_nro_Service_saleItem_byte_byte_short, VTABLE_nro_Service_saleItem_byte_byte_short, "(BBS)V", 17 },
	{ "buyItem", (intptr_t) M_nro_Service_buyItem_byte_int_int, VTABLE_nro_Service_buyItem_byte_int_int, "(BII)V", 17 },
	{ "selectSkill", (intptr_t) M_nro_Service_selectSkill_int, VTABLE_nro_Service_selectSkill_int, "(I)V", 17 },
	{ "getEffData", (intptr_t) M_nro_Service_getEffData_short, VTABLE_nro_Service_getEffData_short, "(S)V", 17 },
	{ "openUIZone", (intptr_t) M_nro_Service_openUIZone, VTABLE_nro_Service_openUIZone, "()V", 17 },
	{ "confirmMenu", (intptr_t) M_nro_Service_confirmMenu_short_byte, VTABLE_nro_Service_confirmMenu_short_byte, "(SB)V", 17 },
	{ "openMenu", (intptr_t) M_nro_Service_openMenu_int, VTABLE_nro_Service_openMenu_int, "(I)V", 17 },
	{ "menu", (intptr_t) M_nro_Service_menu_int_int_int, VTABLE_nro_Service_menu_int_int_int, "(III)V", 17 },
	{ "menuId", (intptr_t) M_nro_Service_menuId_short, VTABLE_nro_Service_menuId_short, "(S)V", 17 },
	{ "textBoxId", (intptr_t) M_nro_Service_textBoxId_short_java_lang_String, VTABLE_nro_Service_textBoxId_short_java_lang_String, "(SLjava/lang/String;)V", 17 },
	{ "crystalCollectLock", (intptr_t) M_nro_Service_crystalCollectLock_Array1_nro_Item, VTABLE_nro_Service_crystalCollectLock_Array1_nro_Item, "([Lnro/Item;)V", 17 },
	{ "acceptInviteTrade", (intptr_t) M_nro_Service_acceptInviteTrade_int, VTABLE_nro_Service_acceptInviteTrade_int, "(I)V", 17 },
	{ "cancelInviteTrade", (intptr_t) M_nro_Service_cancelInviteTrade, VTABLE_nro_Service_cancelInviteTrade, "()V", 17 },
	{ "sendPlayerAttack", (intptr_t) M_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int, VTABLE_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int, "(Lnro/MyVector;Lnro/MyVector;I)V", 17 },
	{ "pickItem", (intptr_t) M_nro_Service_pickItem_int, VTABLE_nro_Service_pickItem_int, "(I)V", 17 },
	{ "returnTownFromDead", (intptr_t) M_nro_Service_returnTownFromDead, VTABLE_nro_Service_returnTownFromDead, "()V", 17 },
	{ "wakeUpFromDead", (intptr_t) M_nro_Service_wakeUpFromDead, VTABLE_nro_Service_wakeUpFromDead, "()V", 17 },
	{ "chat", (intptr_t) M_nro_Service_chat_java_lang_String, VTABLE_nro_Service_chat_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "updateData", (intptr_t) M_nro_Service_updateData, VTABLE_nro_Service_updateData, "()V", 17 },
	{ "updateMap", (intptr_t) M_nro_Service_updateMap, VTABLE_nro_Service_updateMap, "()V", 17 },
	{ "updateSkill", (intptr_t) M_nro_Service_updateSkill, VTABLE_nro_Service_updateSkill, "()V", 17 },
	{ "updateItem", (intptr_t) M_nro_Service_updateItem, VTABLE_nro_Service_updateItem, "()V", 17 },
	{ "clientOk", (intptr_t) M_nro_Service_clientOk, VTABLE_nro_Service_clientOk, "()V", 17 },
	{ "addFriend", (intptr_t) M_nro_Service_addFriend_java_lang_String, VTABLE_nro_Service_addFriend_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "addPartyAccept", (intptr_t) M_nro_Service_addPartyAccept_int, VTABLE_nro_Service_addPartyAccept_int, "(I)V", 17 },
	{ "addPartyCancel", (intptr_t) M_nro_Service_addPartyCancel_int, VTABLE_nro_Service_addPartyCancel_int, "(I)V", 17 },
	{ "player_vs_player", (intptr_t) M_nro_Service_player_vs_player_byte_byte_int, VTABLE_nro_Service_player_vs_player_byte_byte_int, "(BBI)V", 17 },
	{ "requestMaptemplate", (intptr_t) M_nro_Service_requestMaptemplate_int, VTABLE_nro_Service_requestMaptemplate_int, "(I)V", 17 },
	{ "acceptPleaseParty", (intptr_t) M_nro_Service_acceptPleaseParty_java_lang_String, VTABLE_nro_Service_acceptPleaseParty_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "chatPlayer", (intptr_t) M_nro_Service_chatPlayer_java_lang_String_int, VTABLE_nro_Service_chatPlayer_java_lang_String_int, "(Ljava/lang/String;I)V", 17 },
	{ "chatGlobal", (intptr_t) M_nro_Service_chatGlobal_java_lang_String, VTABLE_nro_Service_chatGlobal_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "sendCardInfo", (intptr_t) M_nro_Service_sendCardInfo_java_lang_String_java_lang_String, VTABLE_nro_Service_sendCardInfo_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 17 },
	{ "changeName", (intptr_t) M_nro_Service_changeName_java_lang_String_int, VTABLE_nro_Service_changeName_java_lang_String_int, "(Ljava/lang/String;I)V", 17 },
	{ "requestIcon", (intptr_t) M_nro_Service_requestIcon_int, VTABLE_nro_Service_requestIcon_int, "(I)V", 17 },
	{ "activeAccProtect", (intptr_t) M_nro_Service_activeAccProtect_int, VTABLE_nro_Service_activeAccProtect_int, "(I)V", 17 },
	{ "clearAccProtect", (intptr_t) M_nro_Service_clearAccProtect_int, VTABLE_nro_Service_clearAccProtect_int, "(I)V", 17 },
	{ "openLockAccProtect", (intptr_t) M_nro_Service_openLockAccProtect_int, VTABLE_nro_Service_openLockAccProtect_int, "(I)V", 17 },
	{ "getBgTemplate", (intptr_t) M_nro_Service_getBgTemplate_short, VTABLE_nro_Service_getBgTemplate_short, "(S)V", 17 },
	{ "getMapOffline", (intptr_t) M_nro_Service_getMapOffline, VTABLE_nro_Service_getMapOffline, "()V", 17 },
	{ "finishUpdate", (intptr_t) M_nro_Service_finishUpdate, VTABLE_nro_Service_finishUpdate, "()V", 17 },
	{ "finishUpdate", (intptr_t) M_nro_Service_finishUpdate_int, VTABLE_nro_Service_finishUpdate_int, "(I)V", 17 },
	{ "finishLoadMap", (intptr_t) M_nro_Service_finishLoadMap, VTABLE_nro_Service_finishLoadMap, "()V", 17 },
	{ "requestBagImage", (intptr_t) M_nro_Service_requestBagImage_int, VTABLE_nro_Service_requestBagImage_int, "(I)V", 17 },
	{ "login2", (intptr_t) M_nro_Service_login2_java_lang_String, VTABLE_nro_Service_login2_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "getMagicTree", (intptr_t) M_nro_Service_getMagicTree_byte, VTABLE_nro_Service_getMagicTree_byte, "(B)V", 17 },
	{ "upPotential", (intptr_t) M_nro_Service_upPotential_int_int, VTABLE_nro_Service_upPotential_int_int, "(II)V", 17 },
	{ "getResource", (intptr_t) M_nro_Service_getResource_byte_nro_MyVector, VTABLE_nro_Service_getResource_byte_nro_MyVector, "(BLnro/MyVector;)V", 17 },
	{ "requestMapSelect", (intptr_t) M_nro_Service_requestMapSelect_int, VTABLE_nro_Service_requestMapSelect_int, "(I)V", 17 },
	{ "petInfo", (intptr_t) M_nro_Service_petInfo, VTABLE_nro_Service_petInfo, "()V", 17 },
	{ "sendTop", (intptr_t) M_nro_Service_sendTop_java_lang_String_byte, VTABLE_nro_Service_sendTop_java_lang_String_byte, "(Ljava/lang/String;B)V", 17 },
	{ "sendThachDau", (intptr_t) M_nro_Service_sendThachDau_int, VTABLE_nro_Service_sendThachDau_int, "(I)V", 17 },
	{ "enemy", (intptr_t) M_nro_Service_enemy_byte_int, VTABLE_nro_Service_enemy_byte_int, "(BI)V", 17 },
	{ "kigui", (intptr_t) M_nro_Service_kigui_byte_int_byte_int_int, VTABLE_nro_Service_kigui_byte_int_byte_int_int, "(BIBII)V", 17 },
	{ "getFlag", (intptr_t) M_nro_Service_getFlag_byte_byte, VTABLE_nro_Service_getFlag_byte_byte, "(BB)V", 17 },
	{ "setLockInventory", (intptr_t) M_nro_Service_setLockInventory_int, VTABLE_nro_Service_setLockInventory_int, "(I)V", 17 },
	{ "petStatus", (intptr_t) M_nro_Service_petStatus_byte, VTABLE_nro_Service_petStatus_byte, "(B)V", 17 },
	{ "transportNow", (intptr_t) M_nro_Service_transportNow, VTABLE_nro_Service_transportNow, "()V", 17 },
	{ "funsion", (intptr_t) M_nro_Service_funsion_byte, VTABLE_nro_Service_funsion_byte, "(B)V", 17 },
	{ "imageSource", (intptr_t) M_nro_Service_imageSource_nro_MyVector, VTABLE_nro_Service_imageSource_nro_MyVector, "(Lnro/MyVector;)V", 17 },
	{ "sendServerData", (intptr_t) M_nro_Service_sendServerData_byte_int_Array1_byte, VTABLE_nro_Service_sendServerData_byte_int_Array1_byte, "(BI[B)V", 17 },
	{ "changeOnKeyScr", (intptr_t) M_nro_Service_changeOnKeyScr_Array1_byte, VTABLE_nro_Service_changeOnKeyScr_Array1_byte, "([B)V", 17 },
	{ "requestPean", (intptr_t) M_nro_Service_requestPean, VTABLE_nro_Service_requestPean, "()V", 17 },
	{ "messagePlayerMenu", (intptr_t) M_nro_Service_messagePlayerMenu_int, VTABLE_nro_Service_messagePlayerMenu_int, "(I)V", 17 },
	{ "playerMenuAction", (intptr_t) M_nro_Service_playerMenuAction_int_short, VTABLE_nro_Service_playerMenuAction_int_short, "(IS)V", 17 },
	{ "getImgByName", (intptr_t) M_nro_Service_getImgByName_java_lang_String, VTABLE_nro_Service_getImgByName_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "SendCrackBall", (intptr_t) M_nro_Service_SendCrackBall_byte_byte, VTABLE_nro_Service_SendCrackBall_byte_byte, "(BB)V", 17 },
	{ "SendRada", (intptr_t) M_nro_Service_SendRada_int_int, VTABLE_nro_Service_SendRada_int_int, "(II)V", 17 },
	{ "sendDelAcc", (intptr_t) M_nro_Service_sendDelAcc, VTABLE_nro_Service_sendDelAcc, "()V", 17 },
	{ "new_skill_not_focus", (intptr_t) M_nro_Service_new_skill_not_focus_byte_byte_short_short, VTABLE_nro_Service_new_skill_not_focus_byte_byte_short_short, "(BBSS)V", 17 },
};

Class class_nro_Service{
		.nativeName = (intptr_t) "nro/Service",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Service),
		.classVtable = (intptr_t) vtable_nro_Service,
		.staticInitializer = (intptr_t) clinit_nro_Service,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Service,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 108,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 115,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Service = registerClass(&class_nro_Service);

}

