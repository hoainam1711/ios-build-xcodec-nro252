#include "lib/network/Session_ME2_NetworkInit2.h"
#include "java/lang/Exception.h"
#include "lib/network/Session_ME2_SessionME2Collector.h"
#include "lib/network/Session_ME2_Sender2.h"
#include "nro/Message.h"
#include "lib/network/Session_ME2_NetworkInit2_2.h"
#include "java/io/DataInputStream.h"
#include "lib/network/Session_ME2_NetworkInit2.h"
#include "lib/mSocket.h"
#include "java/lang/Runnable.h"
#include "java/lang/Object.h"
#include "lib/network/Session_ME2.h"
#include "java/lang/String.h"
#include "java/io/DataOutputStream.h"
#include "nro/IMessageHandler.h"
#include "lib/network/Session_ME2_NetworkInit2_1.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_lib_network_Session_ME2$NetworkInit2(jobject object, jint mark, jint depth) {
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
	auto self = (lib_network_Session_ME2$NetworkInit2 *) object;
	if (self->F_b)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b)->clazz)->markFunction)((jobject) self->F_b, mark, depth + 1);
	if (self->F_session_me)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_session_me)->clazz)->markFunction)((jobject) self->F_session_me, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_lib_network_Session_ME2$NetworkInit2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_network_Session_ME2$NetworkInit2_lib_network_Session_ME2_lib_network_Session_ME2_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$NetworkInit2:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2$NetworkInit2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(517);
	((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(518);
	((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me = (jref) (frame[2].o);
	LINE_NUMBER(519);
	((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_b = (jref) (frame[3].o);
	LINE_NUMBER(520);
	((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_c = (frame[4].i);
	LINE_NUMBER(521);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(ctx, (frame[2].o));
	((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK(sp[0].o))->F_gen = temp0;
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2$NetworkInit2_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$NetworkInit2:run", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(526);
	clinit_lib_network_Session_ME2(ctx);
	SF_lib_network_Session_ME2_isCancel = (jint(0));
	LINE_NUMBER(527);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connecting = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(530);
	clinit_lib_mSocket(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mSocket);
	sp[1].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_b;
	init_lib_mSocket_java_lang_String_int(ctx, sp[0].o, sp[1].o, ((jint)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_c));
	frame[1].o = sp[0].o;
	LINE_NUMBER(531);
	jint temp0 = (jint)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_gen;
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	jint temp1 = (jint)SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_10;
	}
	clinit_lib_network_Session_ME2(ctx);
	(sp++)->i = SF_lib_network_Session_ME2_isCancel;
	if ((--sp)->i == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
label_10:;
	{
	LINE_NUMBER(532);
	((func_lib_mSocket_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mSocket_close])(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(533);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((func_lib_mSocket_getOutputStream_R_java_io_DataOutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mSocket_getOutputStream_R_java_io_DataOutputStream])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(536);
	sp[0].o = (jobject)((func_lib_mSocket_getInputStream_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mSocket_getInputStream_R_java_io_DataInputStream])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(538);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	SM_lib_network_Session_ME2_setSocket_lib_network_Session_ME2_lib_mSocket(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(539);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	SM_lib_network_Session_ME2_setDataOutputStream_lib_network_Session_ME2_java_io_DataOutputStream(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(540);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_dis = (jref) (frame[3].o);
	LINE_NUMBER(541);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_timeConnected = temp0;
	LINE_NUMBER(542);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	jlong temp1 = (jlong)SM_lib_network_Session_ME2_access$102_lib_network_Session_ME2_long_R_long(ctx, sp[0].o, (jlong(0)));
	LINE_NUMBER(543);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connected = (jint(1));
	LINE_NUMBER(544);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connecting = (jint(0));
	LINE_NUMBER(546);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	clinit_java_lang_Thread(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Thread);
	clinit_lib_network_Session_ME2$SessionME2Collector(ctx);
	sp[2].o = gcAlloc(ctx, &class_lib_network_Session_ME2$SessionME2Collector);
	sp[3].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[4].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	init_lib_network_Session_ME2$SessionME2Collector_lib_network_Session_ME2_lib_network_Session_ME2_int(ctx, sp[2].o, sp[3].o, sp[4].o, ((jint)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_gen));
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"NRO-TCP2-Reader"_j))));
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_collectorThread = (jref) sp[1].o;
	LINE_NUMBER(547);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_collectorThread;
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_start])(ctx, sp[0].o);
	LINE_NUMBER(548);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	clinit_java_lang_Thread(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Thread);
	sp[2].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	sp[2].o = (jobject)SM_lib_network_Session_ME2_b_lib_network_Session_ME2_R_lib_network_Session_ME2$Sender2(ctx, sp[2].o);
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"NRO-TCP2-Sender"_j))));
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_sendThread = (jref) sp[1].o;
	LINE_NUMBER(549);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_sendThread;
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_start])(ctx, sp[0].o);
	LINE_NUMBER(551);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	clinit_nro_Message(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[1].o, (-27));
	SM_lib_network_Session_ME2_sendMessage_lib_network_Session_ME2_nro_Message(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(553);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_messageHandler;
	frame[4].o = sp[0].o;
	LINE_NUMBER(554);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	frame[5].i = ((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_isMainSession);
	LINE_NUMBER(555);
	clinit_lib_network_Session_ME2$NetworkInit2$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME2$NetworkInit2$1);
	init_lib_network_Session_ME2$NetworkInit2$1_lib_network_Session_ME2$NetworkInit2_nro_IMessageHandler_boolean(ctx, sp[0].o, (frame[0].o), (frame[4].o), (frame[5].i));
	SM_lib_network_Session_ME2_access$300_java_lang_Runnable(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(583);
	goto label_27;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(564);
	frame[1].o = sp[0].o;
	LINE_NUMBER(565);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connecting = (jint(0));
	LINE_NUMBER(566);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connected = (jint(0));
	LINE_NUMBER(567);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	jlong temp0 = (jlong)SM_lib_network_Session_ME2_access$102_lib_network_Session_ME2_long_R_long(ctx, sp[0].o, (jlong(0)));
	LINE_NUMBER(569);
	if ((clinit_lib_network_Session_ME2(ctx), (jint)SF_lib_network_Session_ME2_isCancel) != 0) goto label_27;
	}
	{
	jint temp0 = (jint)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_gen;
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	jint temp1 = (jint)SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_27;
	}
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_messageHandler;
	frame[2].o = sp[0].o;
	LINE_NUMBER(571);
	sp[0].o = (jobject)((lib_network_Session_ME2$NetworkInit2 *) NULL_CHECK((frame[0].o)))->F_session_me;
	frame[3].i = ((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_isMainSession);
	LINE_NUMBER(572);
	clinit_lib_network_Session_ME2$NetworkInit2$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME2$NetworkInit2$2);
	init_lib_network_Session_ME2$NetworkInit2$2_lib_network_Session_ME2$NetworkInit2_nro_IMessageHandler_boolean(ctx, sp[0].o, (frame[0].o), (frame[2].o), (frame[3].i));
	SM_lib_network_Session_ME2_access$300_java_lang_Runnable(ctx, sp[0].o);
	}
label_27:;
	LINE_NUMBER(584);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_lib_network_Session_ME2$NetworkInit2[] {
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
	(void *) M_lib_network_Session_ME2$NetworkInit2_run,
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

static FieldMetadata fields[] {
	{ "b", &class_java_lang_String, offsetof(lib_network_Session_ME2$NetworkInit2, F_b), "Ljava/lang/String;", 18 },
	{ "c", &class_int, offsetof(lib_network_Session_ME2$NetworkInit2, F_c), "I", 18 },
	{ "session_me", &class_lib_network_Session_ME2, offsetof(lib_network_Session_ME2$NetworkInit2, F_session_me), "Llib/network/Session_ME2;", 16 },
	{ "gen", &class_int, offsetof(lib_network_Session_ME2$NetworkInit2, F_gen), "I", 16 },
	{ "this$0", &class_lib_network_Session_ME2, offsetof(lib_network_Session_ME2$NetworkInit2, F_this$0), "Llib/network/Session_ME2;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_Session_ME2$NetworkInit2_lib_network_Session_ME2_lib_network_Session_ME2_java_lang_String_int, 0, "(Llib/network/Session_ME2;Llib/network/Session_ME2;Ljava/lang/String;I)V", 0 },
	{ "run", (intptr_t) M_lib_network_Session_ME2$NetworkInit2_run, VTABLE_lib_network_Session_ME2$NetworkInit2_run, "()V", 17 },
};

Class class_lib_network_Session_ME2$NetworkInit2{
		.nativeName = (intptr_t) "lib/network/Session_ME2$NetworkInit2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_Session_ME2$NetworkInit2),
		.classVtable = (intptr_t) vtable_lib_network_Session_ME2$NetworkInit2,
		.staticInitializer = (intptr_t) clinit_lib_network_Session_ME2$NetworkInit2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_Session_ME2$NetworkInit2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_lib_network_Session_ME2,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
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
static bool registered_lib_network_Session_ME2$NetworkInit2 = registerClass(&class_lib_network_Session_ME2$NetworkInit2);

}

