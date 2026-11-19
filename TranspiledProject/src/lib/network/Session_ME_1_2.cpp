#include "lib/network/Session_ME_1_2.h"
#include "java/lang/Object.h"
#include "lib/network/Session_ME.h"
#include "lib/network/Session_ME_1_2.h"
#include "lib/network/Session_ME_1.h"
#include "nro/IMessageHandler.h"
#include "java/lang/Runnable.h"
#include "lib/mSystem.h"

extern "C" {


void mark_lib_network_Session_ME$1$2(jobject object, jint mark, jint depth) {
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
	auto self = (lib_network_Session_ME$1$2 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_lib_network_Session_ME$1$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_network_Session_ME$1$2_lib_network_Session_ME$1_boolean_long(jcontext ctx, jobject self, jobject param0, jbool param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$1$2:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME$1$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(249);
	((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_val$wasConnected = (frame[2].i);
	((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_val$connectedAt = (frame[3].l);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME$1$2_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$1$2:run", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_this$1;
	jint temp0 = (jint)((lib_network_Session_ME$1 *) NULL_CHECK(sp[0].o))->F_val$currentGen;
	sp[0].o = (jobject)((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((lib_network_Session_ME$1 *) NULL_CHECK(sp[0].o))->F_val$self;
	jint temp1 = (jint)SM_lib_network_Session_ME_access$000_lib_network_Session_ME_R_int(ctx, sp[0].o);
	if (temp0 == temp1) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((lib_network_Session_ME$1 *) NULL_CHECK(sp[0].o))->F_val$self;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(254);
	if (((jint)((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_val$wasConnected) == 0) goto label_4;
	}
	{
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_val$connectedAt)), (jlong(500ll)))) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((lib_network_Session_ME$1 *) NULL_CHECK(sp[0].o))->F_val$self;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	sp[1].o = (jobject)((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((lib_network_Session_ME$1 *) NULL_CHECK(sp[1].o))->F_val$self;
	((func_nro_IMessageHandler_onDisconnected_boolean) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onDisconnected_boolean, sp[0].o))(ctx, sp[0].o, ((jint)((lib_network_Session_ME *) NULL_CHECK(sp[1].o))->F_isMainSession));
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((lib_network_Session_ME$1 *) NULL_CHECK(sp[0].o))->F_val$self;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	sp[1].o = (jobject)((lib_network_Session_ME$1$2 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((lib_network_Session_ME$1 *) NULL_CHECK(sp[1].o))->F_val$self;
	((func_nro_IMessageHandler_onConnectionFail_boolean) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onConnectionFail_boolean, sp[0].o))(ctx, sp[0].o, ((jint)((lib_network_Session_ME *) NULL_CHECK(sp[1].o))->F_isMainSession));
	}
label_2:;
	LINE_NUMBER(260);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_lib_network_Session_ME$1$2[] {
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
	(void *) M_lib_network_Session_ME$1$2_run,
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
	{ "val$wasConnected", &class_boolean, offsetof(lib_network_Session_ME$1$2, F_val$wasConnected), "Z", 4112 },
	{ "val$connectedAt", &class_long, offsetof(lib_network_Session_ME$1$2, F_val$connectedAt), "J", 4112 },
	{ "this$1", &class_lib_network_Session_ME$1, offsetof(lib_network_Session_ME$1$2, F_this$1), "Llib/network/Session_ME$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_Session_ME$1$2_lib_network_Session_ME$1_boolean_long, 0, "(Llib/network/Session_ME$1;ZJ)V", 0 },
	{ "run", (intptr_t) M_lib_network_Session_ME$1$2_run, VTABLE_lib_network_Session_ME$1$2_run, "()V", 1 },
};

Class class_lib_network_Session_ME$1$2{
		.nativeName = (intptr_t) "lib/network/Session_ME$1$2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_Session_ME$1$2),
		.classVtable = (intptr_t) vtable_lib_network_Session_ME$1$2,
		.staticInitializer = (intptr_t) clinit_lib_network_Session_ME$1$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_Session_ME$1$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_lib_network_Session_ME$1$2 = registerClass(&class_lib_network_Session_ME$1$2);

}

