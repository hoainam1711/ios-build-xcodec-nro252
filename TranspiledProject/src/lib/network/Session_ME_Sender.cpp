#include "lib/network/Session_ME_Sender.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "lib/network/Session_ME.h"
#include "nro/Message.h"
#include "java/util/Vector.h"
#include "lib/network/Session_ME_Sender.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Runnable.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_lib_network_Session_ME$Sender(jobject object, jint mark, jint depth) {
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
	auto self = (lib_network_Session_ME$Sender *) object;
	if (self->F_sendingMessage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sendingMessage)->clazz)->markFunction)((jobject) self->F_sendingMessage, mark, depth + 1);
	if (self->F_sessionmeInstance)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sessionmeInstance)->clazz)->markFunction)((jobject) self->F_sessionmeInstance, mark, depth + 1);
}

void clinit_lib_network_Session_ME$Sender(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_network_Session_ME$Sender_lib_network_Session_ME(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$Sender:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME$Sender(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1038);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1039);
	((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sessionmeInstance = (jref) (frame[1].o);
	LINE_NUMBER(1040);
	sp[0].o = frame[0].o;
	clinit_java_util_Vector(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[1].o);
	((lib_network_Session_ME$Sender *) NULL_CHECK(sp[0].o))->F_sendingMessage = (jref) sp[1].o;
	LINE_NUMBER(1041);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME$Sender_AddMessage_nro_Message(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$Sender:AddMessage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1044);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	LINE_NUMBER(1045);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1048);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1049);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, sp[0].o);
	LINE_NUMBER(1050);
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
	LINE_NUMBER(1051);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_Session_ME$Sender_wakeUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$Sender:wakeUp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1054);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1055);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, sp[0].o);
	LINE_NUMBER(1056);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
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
	label_8:;
	LINE_NUMBER(1057);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_Session_ME$Sender_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$Sender:run", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
label_23:;
	{
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sessionmeInstance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connected) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	jint temp0 = (jint)((func_java_lang_Thread_isInterrupted_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_isInterrupted_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_24;
	}
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_20; }
	}
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_16; }
	}
	{
	LINE_NUMBER(1063);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sessionmeInstance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_getKeyComplete) == 0) goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(1064);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sessionmeInstance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connected) == 0) goto label_25;
	}
	{
	LINE_NUMBER(1065);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(1066);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_29;
	}
	{
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	frame[1].o = (checkCast(ctx, &class_nro_Message, sp[0].o));
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	}
label_29:;
	{
	LINE_NUMBER(1071);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_32;
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
	label_32:;
	{
	LINE_NUMBER(1072);
	if ((frame[1].o) != nullptr) goto label_33;
	}
	LINE_NUMBER(1073);
	goto label_25;
label_33:;
	{
	LINE_NUMBER(1075);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sessionmeInstance;
	SM_lib_network_Session_ME_sendMessage_lib_network_Session_ME_nro_Message(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1076);
	goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); bypasses[0] = true; goto label_22; } // goto label_8
	}
	{
	LINE_NUMBER(1080);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sessionmeInstance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connected) != 0) { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	LINE_NUMBER(1081);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	goto label_24;
label_10:;
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	if (bypasses[0]) { goto label_19; }
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_16; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(1083);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sessionmeInstance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_getKeyComplete) == 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	jint temp0 = (jint)((func_java_util_Vector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_38;
	}
label_37:;
	{
	LINE_NUMBER(1084);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	((func_java_lang_Object_wait_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_wait_long])(ctx, sp[0].o, (jlong(50ll)));
	}
label_38:;
	{
	LINE_NUMBER(1086);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_18;
label_8:;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_18:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(1091);
	goto label_23;
label_16:;
	{
	sp -= 1;
	LINE_NUMBER(1087);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1088);
	goto label_24;
	}
label_20:;
	{
	sp -= 1;
	LINE_NUMBER(1089);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1090);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	LINE_NUMBER(1091);
	goto label_23;
	}
label_24:;
	LINE_NUMBER(1093);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME$Sender_a_lib_network_Session_ME$Sender_R_java_util_Vector(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$Sender:a", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME$Sender(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1096);
	sp[0].o = (jobject)((lib_network_Session_ME$Sender *) NULL_CHECK((frame[0].o)))->F_sendingMessage;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_lib_network_Session_ME$Sender[] {
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
	(void *) M_lib_network_Session_ME$Sender_run,
	(void *) M_lib_network_Session_ME$Sender_AddMessage_nro_Message,
	(void *) M_lib_network_Session_ME$Sender_wakeUp,
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
	{ "AddMessage", "(Lnro/Message;)V" },
	{ "wakeUp", "()V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "sendingMessage", &class_java_util_Vector, offsetof(lib_network_Session_ME$Sender, F_sendingMessage), "Ljava/util/Vector;", 18 },
	{ "sessionmeInstance", &class_lib_network_Session_ME, offsetof(lib_network_Session_ME$Sender, F_sessionmeInstance), "Llib/network/Session_ME;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_Session_ME$Sender_lib_network_Session_ME, 0, "(Llib/network/Session_ME;)V", 1 },
	{ "AddMessage", (intptr_t) M_lib_network_Session_ME$Sender_AddMessage_nro_Message, VTABLE_lib_network_Session_ME$Sender_AddMessage_nro_Message, "(Lnro/Message;)V", 17 },
	{ "wakeUp", (intptr_t) M_lib_network_Session_ME$Sender_wakeUp, VTABLE_lib_network_Session_ME$Sender_wakeUp, "()V", 17 },
	{ "run", (intptr_t) M_lib_network_Session_ME$Sender_run, VTABLE_lib_network_Session_ME$Sender_run, "()V", 17 },
	{ "a", (intptr_t) SM_lib_network_Session_ME$Sender_a_lib_network_Session_ME$Sender_R_java_util_Vector, 0, "(Llib/network/Session_ME$Sender;)Ljava/util/Vector;", 9 },
};

Class class_lib_network_Session_ME$Sender{
		.nativeName = (intptr_t) "lib/network/Session_ME$Sender",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_Session_ME$Sender),
		.classVtable = (intptr_t) vtable_lib_network_Session_ME$Sender,
		.staticInitializer = (intptr_t) clinit_lib_network_Session_ME$Sender,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_Session_ME$Sender,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_lib_network_Session_ME,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_network_Session_ME$Sender = registerClass(&class_lib_network_Session_ME$Sender);

}

