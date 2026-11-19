#include "lib/network/Session_ME2_1.h"
#include "java/lang/StringBuilder.h"
#include "nro/Message.h"
#include "lib/network/Session_ME2_1.h"
#include "lib/network/IWebSocketBridge.h"
#include "lib/network/IWebSocketBridge_IWebSocketListener.h"
#include "java/lang/Runnable.h"
#include "lib/network/Session_ME2_1_2.h"
#include "lib/network/Session_ME2_1_1.h"
#include "java/lang/Object.h"
#include "lib/network/Session_ME2.h"
#include "java/lang/String.h"
#include "lib/network/Session_ME2_1_3.h"
#include "nro/Res.h"
#include "lib/mSystem.h"
#include "lib/network/ByteStreamBuffer.h"

extern "C" {


void mark_lib_network_Session_ME2$1(jobject object, jint mark, jint depth) {
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
	auto self = (lib_network_Session_ME2$1 *) object;
	if (self->F_val$self)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$self)->clazz)->markFunction)((jobject) self->F_val$self, mark, depth + 1);
	if (self->F_val$bridgeInstance)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$bridgeInstance)->clazz)->markFunction)((jobject) self->F_val$bridgeInstance, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_lib_network_Session_ME2$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_network_Session_ME2$1_lib_network_Session_ME2_int_lib_network_Session_ME2_lib_network_IWebSocketBridge(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$1:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(106);
	((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$currentGen = (frame[2].i);
	((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self = (jref) (frame[3].o);
	((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$bridgeInstance = (jref) (frame[4].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2$1_onOpen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$1:onOpen", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	jint temp0 = (jint)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$currentGen;
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	jint temp1 = (jint)SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_1;
	}
	{
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_myWsBridge;
	sp[1].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$bridgeInstance;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connected = (jint(1));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connecting = (jint(0));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	jlong temp0 = (jlong)SM_lib_network_Session_ME2_access$102_lib_network_Session_ME2_long_R_long(ctx, sp[0].o, (jlong(0)));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	jlong temp1 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_timeConnected = temp1;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_getKeyComplete = (jint(0));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_key = (jref) (jobject(nullptr));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	clinit_nro_Message(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[1].o, (-27));
	SM_lib_network_Session_ME2_access$200_lib_network_Session_ME2_nro_Message(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(117);
	clinit_lib_network_Session_ME2$1$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME2$1$1);
	init_lib_network_Session_ME2$1$1_lib_network_Session_ME2$1(ctx, sp[0].o, (frame[0].o));
	SM_lib_network_Session_ME2_access$300_java_lang_Runnable(ctx, sp[0].o);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2$1_onMessage_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$1:onMessage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	jint temp0 = (jint)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$currentGen;
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	jint temp1 = (jint)SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_1;
	}
	{
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_myWsBridge;
	sp[1].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$bridgeInstance;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	sp[0].o = (jobject)SM_lib_network_Session_ME2_access$400_lib_network_Session_ME2_R_lib_network_ByteStreamBuffer(ctx, sp[0].o);
	((func_lib_network_ByteStreamBuffer_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_ByteStreamBuffer_write_Array1_byte])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2$1_onClose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$1:onClose", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$currentGen;
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	jint temp1 = (jint)SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_1;
	}
	{
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_myWsBridge;
	sp[1].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$bridgeInstance;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	frame[1].i = ((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connected);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	frame[2].l = ((jlong)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_timeConnected);
	LINE_NUMBER(139);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connected = (jint(0));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connecting = (jint(0));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	jlong temp0 = (jlong)SM_lib_network_Session_ME2_access$102_lib_network_Session_ME2_long_R_long(ctx, sp[0].o, (jlong(0)));
	LINE_NUMBER(142);
	clinit_lib_network_Session_ME2$1$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME2$1$2);
	init_lib_network_Session_ME2$1$2_lib_network_Session_ME2$1_boolean_long(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].l));
	SM_lib_network_Session_ME2_access$300_java_lang_Runnable(ctx, sp[0].o);
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2$1_onError_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$1:onError", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(159);
	jint temp0 = (jint)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$currentGen;
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	jint temp1 = (jint)SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_1;
	}
	{
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_myWsBridge;
	sp[1].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$bridgeInstance;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(160);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Session_ME2] WebSocket error: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connected = (jint(0));
	LINE_NUMBER(162);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connecting = (jint(0));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((lib_network_Session_ME2$1 *) NULL_CHECK((frame[0].o)))->F_val$self;
	jlong temp0 = (jlong)SM_lib_network_Session_ME2_access$102_lib_network_Session_ME2_long_R_long(ctx, sp[0].o, (jlong(0)));
	LINE_NUMBER(164);
	clinit_lib_network_Session_ME2$1$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME2$1$3);
	init_lib_network_Session_ME2$1$3_lib_network_Session_ME2$1(ctx, sp[0].o, (frame[0].o));
	SM_lib_network_Session_ME2_access$300_java_lang_Runnable(ctx, sp[0].o);
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_network_Session_ME2$1[] {
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
	(void *) M_lib_network_Session_ME2$1_onOpen,
	(void *) M_lib_network_Session_ME2$1_onMessage_Array1_byte,
	(void *) M_lib_network_Session_ME2$1_onClose,
	(void *) M_lib_network_Session_ME2$1_onError_java_lang_String,
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
	{ "onOpen", "()V" },
	{ "onMessage", "([B)V" },
	{ "onClose", "()V" },
	{ "onError", "(Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_lib_network_IWebSocketBridge$IWebSocketListener, };

static FieldMetadata fields[] {
	{ "val$currentGen", &class_int, offsetof(lib_network_Session_ME2$1, F_val$currentGen), "I", 4112 },
	{ "val$self", &class_lib_network_Session_ME2, offsetof(lib_network_Session_ME2$1, F_val$self), "Llib/network/Session_ME2;", 4112 },
	{ "val$bridgeInstance", &class_lib_network_IWebSocketBridge, offsetof(lib_network_Session_ME2$1, F_val$bridgeInstance), "Llib/network/IWebSocketBridge;", 4112 },
	{ "this$0", &class_lib_network_Session_ME2, offsetof(lib_network_Session_ME2$1, F_this$0), "Llib/network/Session_ME2;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_Session_ME2$1_lib_network_Session_ME2_int_lib_network_Session_ME2_lib_network_IWebSocketBridge, 0, "(Llib/network/Session_ME2;ILlib/network/Session_ME2;Llib/network/IWebSocketBridge;)V", 0 },
	{ "onOpen", (intptr_t) M_lib_network_Session_ME2$1_onOpen, VTABLE_lib_network_Session_ME2$1_onOpen, "()V", 1 },
	{ "onMessage", (intptr_t) M_lib_network_Session_ME2$1_onMessage_Array1_byte, VTABLE_lib_network_Session_ME2$1_onMessage_Array1_byte, "([B)V", 1 },
	{ "onClose", (intptr_t) M_lib_network_Session_ME2$1_onClose, VTABLE_lib_network_Session_ME2$1_onClose, "()V", 1 },
	{ "onError", (intptr_t) M_lib_network_Session_ME2$1_onError_java_lang_String, VTABLE_lib_network_Session_ME2$1_onError_java_lang_String, "(Ljava/lang/String;)V", 1 },
};

Class class_lib_network_Session_ME2$1{
		.nativeName = (intptr_t) "lib/network/Session_ME2$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_Session_ME2$1),
		.classVtable = (intptr_t) vtable_lib_network_Session_ME2$1,
		.staticInitializer = (intptr_t) clinit_lib_network_Session_ME2$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_Session_ME2$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_lib_network_Session_ME2$1 = registerClass(&class_lib_network_Session_ME2$1);

}

