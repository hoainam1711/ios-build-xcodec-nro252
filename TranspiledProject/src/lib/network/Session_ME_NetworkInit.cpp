#include "lib/network/Session_ME_NetworkInit.h"
#include "java/lang/Exception.h"
#include "lib/network/Session_ME.h"
#include "java/lang/StringBuilder.h"
#include "nro/Message.h"
#include "java/io/DataInputStream.h"
#include "lib/network/Session_ME_Sender.h"
#include "nro/ClientDiagLogger_LogEntry.h"
#include "lib/network/Session_ME_NetworkInit_SessionME2.h"
#include "lib/mSocket.h"
#include "java/lang/Runnable.h"
#include "lib/network/Session_ME_NetworkInit.h"
#include "nro/ClientDiagLogger.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/DataOutputStream.h"
#include "lib/network/Session_ME_NetworkInit_1.h"
#include "nro/IMessageHandler.h"
#include "lib/network/Session_ME_NetworkInit_2.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_lib_network_Session_ME$NetworkInit(jobject object, jint mark, jint depth) {
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
	auto self = (lib_network_Session_ME$NetworkInit *) object;
	if (self->F_b)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b)->clazz)->markFunction)((jobject) self->F_b, mark, depth + 1);
	if (self->F_session_me)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_session_me)->clazz)->markFunction)((jobject) self->F_session_me, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_lib_network_Session_ME$NetworkInit(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_network_Session_ME$NetworkInit_lib_network_Session_ME_lib_network_Session_ME_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$NetworkInit:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME$NetworkInit(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(804);
	((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(805);
	((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me = (jref) (frame[2].o);
	LINE_NUMBER(806);
	((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_b = (jref) (frame[3].o);
	LINE_NUMBER(807);
	((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_c = (frame[4].i);
	LINE_NUMBER(808);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_lib_network_Session_ME_access$000_lib_network_Session_ME_R_int(ctx, (frame[2].o));
	((lib_network_Session_ME$NetworkInit *) NULL_CHECK(sp[0].o))->F_gen = temp0;
	LINE_NUMBER(809);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME$NetworkInit_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$NetworkInit:run", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(813);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_isCancel = (jint(0));
	LINE_NUMBER(814);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(817);
	clinit_lib_mSocket(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mSocket);
	sp[1].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_b;
	init_lib_mSocket_java_lang_String_int(ctx, sp[0].o, sp[1].o, ((jint)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_c));
	frame[1].o = sp[0].o;
	LINE_NUMBER(818);
	jint temp0 = (jint)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_gen;
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	jint temp1 = (jint)SM_lib_network_Session_ME_access$000_lib_network_Session_ME_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_10;
	}
	clinit_lib_network_Session_ME(ctx);
	(sp++)->i = SF_lib_network_Session_ME_isCancel;
	if ((--sp)->i == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
label_10:;
	{
	LINE_NUMBER(819);
	((func_lib_mSocket_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mSocket_close])(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(820);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(822);
	sp[0].o = (jobject)((func_lib_mSocket_getOutputStream_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mSocket_getOutputStream_R_java_io_DataOutputStream])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(823);
	sp[0].o = (jobject)((func_lib_mSocket_getInputStream_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mSocket_getInputStream_R_java_io_DataInputStream])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(825);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	SM_lib_network_Session_ME_a_lib_network_Session_ME_lib_mSocket(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(826);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	SM_lib_network_Session_ME_a_lib_network_Session_ME_java_io_DataOutputStream(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(827);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_dis = (jref) (frame[3].o);
	LINE_NUMBER(829);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[4].l = temp0;
	LINE_NUMBER(830);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_timeConnected = (frame[4].l);
	LINE_NUMBER(831);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	jlong temp1 = (jlong)SM_lib_network_Session_ME_access$202_lib_network_Session_ME_long_R_long(ctx, sp[0].o, (frame[4].l));
	LINE_NUMBER(832);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	jlong temp2 = (jlong)SM_lib_network_Session_ME_access$102_lib_network_Session_ME_long_R_long(ctx, sp[0].o, (jlong(0)));
	LINE_NUMBER(833);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPacketTime = (frame[4].l);
	LINE_NUMBER(834);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connected = (jint(1));
	LINE_NUMBER(835);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting = (jint(0));
	LINE_NUMBER(837);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	clinit_java_lang_Thread(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Thread);
	sp[2].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	sp[2].o = (jobject)SM_lib_network_Session_ME_b_lib_network_Session_ME_R_lib_network_Session_ME$Sender(ctx, sp[2].o);
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"NRO-TCP-Sender"_j))));
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_collectorThread = (jref) sp[1].o;
	LINE_NUMBER(838);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_collectorThread;
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_start])(ctx, sp[0].o);
	LINE_NUMBER(839);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	clinit_java_lang_Thread(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Thread);
	clinit_lib_network_Session_ME$NetworkInit$SessionME2(ctx);
	sp[2].o = gcAlloc(ctx, &class_lib_network_Session_ME$NetworkInit$SessionME2);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	init_lib_network_Session_ME$NetworkInit$SessionME2_lib_network_Session_ME$NetworkInit_lib_network_Session_ME_int(ctx, sp[2].o, sp[3].o, sp[4].o, ((jint)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_gen));
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"NRO-TCP-Reader"_j))));
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_sendThread = (jref) sp[1].o;
	LINE_NUMBER(840);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_sendThread;
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_start])(ctx, sp[0].o);
	LINE_NUMBER(842);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	clinit_nro_Message(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[1].o, (-27));
	SM_lib_network_Session_ME_access$300_lib_network_Session_ME_nro_Message(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(844);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	frame[6].o = sp[0].o;
	LINE_NUMBER(845);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	frame[7].i = ((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_isMainSession);
	LINE_NUMBER(846);
	clinit_lib_network_Session_ME$NetworkInit$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME$NetworkInit$1);
	init_lib_network_Session_ME$NetworkInit$1_lib_network_Session_ME$NetworkInit_nro_IMessageHandler_boolean(ctx, sp[0].o, (frame[0].o), (frame[6].o), (frame[7].i));
	SM_lib_network_Session_ME_access$400_java_lang_Runnable(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(880);
	goto label_30;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(855);
	frame[1].o = sp[0].o;
	LINE_NUMBER(856);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting = (jint(0));
	LINE_NUMBER(857);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connected = (jint(0));
	LINE_NUMBER(858);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	jlong temp0 = (jlong)SM_lib_network_Session_ME_access$102_lib_network_Session_ME_long_R_long(ctx, sp[0].o, (jlong(0)));
	LINE_NUMBER(859);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"SESSION_ME_CONNECT"_j));
	LINE_NUMBER(861);
	sp[1].o = (jobject)SM_nro_ClientDiagLogger_getLastActiveRequestId_R_java_lang_String(ctx);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ERR_TCP_CONNECT_FAIL"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"host="_j))));
	sp[4].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_b;
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, sp[4].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[3].o, ((jint)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_c));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[3].o);
	sp[4].o = frame[1].o;
	LINE_NUMBER(859);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logException_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Throwable_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(866);
	if ((clinit_lib_network_Session_ME(ctx), (jint)SF_lib_network_Session_ME_isCancel) != 0) goto label_30;
	}
	{
	jint temp0 = (jint)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_gen;
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	jint temp1 = (jint)SM_lib_network_Session_ME_access$000_lib_network_Session_ME_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_30;
	}
	{
	LINE_NUMBER(867);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	frame[2].o = sp[0].o;
	LINE_NUMBER(868);
	sp[0].o = (jobject)((lib_network_Session_ME$NetworkInit *) NULL_CHECK((frame[0].o)))->F_session_me;
	frame[3].i = ((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_isMainSession);
	LINE_NUMBER(869);
	clinit_lib_network_Session_ME$NetworkInit$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME$NetworkInit$2);
	init_lib_network_Session_ME$NetworkInit$2_lib_network_Session_ME$NetworkInit_nro_IMessageHandler_boolean(ctx, sp[0].o, (frame[0].o), (frame[2].o), (frame[3].i));
	SM_lib_network_Session_ME_access$400_java_lang_Runnable(ctx, sp[0].o);
	}
label_30:;
	LINE_NUMBER(881);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_lib_network_Session_ME$NetworkInit[] {
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
	(void *) M_lib_network_Session_ME$NetworkInit_run,
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
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static jclass innerClasses[] {
	&class_lib_network_Session_ME$NetworkInit$SessionME2,
};

static FieldMetadata fields[] {
	{ "b", &class_java_lang_String, offsetof(lib_network_Session_ME$NetworkInit, F_b), "Ljava/lang/String;", 18 },
	{ "c", &class_int, offsetof(lib_network_Session_ME$NetworkInit, F_c), "I", 18 },
	{ "session_me", &class_lib_network_Session_ME, offsetof(lib_network_Session_ME$NetworkInit, F_session_me), "Llib/network/Session_ME;", 16 },
	{ "gen", &class_int, offsetof(lib_network_Session_ME$NetworkInit, F_gen), "I", 16 },
	{ "this$0", &class_lib_network_Session_ME, offsetof(lib_network_Session_ME$NetworkInit, F_this$0), "Llib/network/Session_ME;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_Session_ME$NetworkInit_lib_network_Session_ME_lib_network_Session_ME_java_lang_String_int, 0, "(Llib/network/Session_ME;Llib/network/Session_ME;Ljava/lang/String;I)V", 0 },
	{ "run", (intptr_t) M_lib_network_Session_ME$NetworkInit_run, VTABLE_lib_network_Session_ME$NetworkInit_run, "()V", 17 },
};

Class class_lib_network_Session_ME$NetworkInit{
		.nativeName = (intptr_t) "lib/network/Session_ME$NetworkInit",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_Session_ME$NetworkInit),
		.classVtable = (intptr_t) vtable_lib_network_Session_ME$NetworkInit,
		.staticInitializer = (intptr_t) clinit_lib_network_Session_ME$NetworkInit,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_Session_ME$NetworkInit,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_lib_network_Session_ME,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_network_Session_ME$NetworkInit = registerClass(&class_lib_network_Session_ME$NetworkInit);

}

