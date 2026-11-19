#include "lib/network/Session_ME2_SessionME2Collector_1.h"
#include "lib/network/Session_ME2_SessionME2Collector_1.h"
#include "java/lang/Object.h"
#include "lib/network/Session_ME2_SessionME2Collector.h"
#include "lib/network/Session_ME2.h"
#include "nro/IMessageHandler.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_lib_network_Session_ME2$SessionME2Collector$1(jobject object, jint mark, jint depth) {
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
	auto self = (lib_network_Session_ME2$SessionME2Collector$1 *) object;
	if (self->F_val$inst)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$inst)->clazz)->markFunction)((jobject) self->F_val$inst, mark, depth + 1);
	if (self->F_val$handler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$handler)->clazz)->markFunction)((jobject) self->F_val$handler, mark, depth + 1);
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_lib_network_Session_ME2$SessionME2Collector$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_network_Session_ME2$SessionME2Collector$1_lib_network_Session_ME2$SessionME2Collector_int_lib_network_Session_ME2_boolean_nro_IMessageHandler_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3, jobject param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$SessionME2Collector$1:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2$SessionME2Collector$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(725);
	((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$expectedGen = (frame[2].i);
	((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$inst = (jref) (frame[3].o);
	((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$wasEstablished = (frame[4].i);
	((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$handler = (jref) (frame[5].o);
	((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$isMain = (frame[6].i);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2$SessionME2Collector$1_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2$SessionME2Collector$1:run", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(728);
	jint temp0 = ((jint)((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$expectedGen) + (jint(1));
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$inst;
	jint temp1 = (jint)SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(ctx, sp[0].o);
	if (temp0 == temp1) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(729);
	if (((jint)((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$wasEstablished) == 0) goto label_2;
	}
	{
	LINE_NUMBER(730);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$handler;
	((func_nro_IMessageHandler_onDisconnected_boolean) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onDisconnected_boolean, sp[0].o))(ctx, sp[0].o, ((jint)((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$isMain));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(732);
	sp[0].o = (jobject)((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$handler;
	((func_nro_IMessageHandler_onConnectionFail_boolean) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onConnectionFail_boolean, sp[0].o))(ctx, sp[0].o, ((jint)((lib_network_Session_ME2$SessionME2Collector$1 *) NULL_CHECK((frame[0].o)))->F_val$isMain));
	}
label_4:;
	LINE_NUMBER(734);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_lib_network_Session_ME2$SessionME2Collector$1[] {
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
	(void *) M_lib_network_Session_ME2$SessionME2Collector$1_run,
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
	{ "val$expectedGen", &class_int, offsetof(lib_network_Session_ME2$SessionME2Collector$1, F_val$expectedGen), "I", 4112 },
	{ "val$inst", &class_lib_network_Session_ME2, offsetof(lib_network_Session_ME2$SessionME2Collector$1, F_val$inst), "Llib/network/Session_ME2;", 4112 },
	{ "val$wasEstablished", &class_boolean, offsetof(lib_network_Session_ME2$SessionME2Collector$1, F_val$wasEstablished), "Z", 4112 },
	{ "val$handler", &class_nro_IMessageHandler, offsetof(lib_network_Session_ME2$SessionME2Collector$1, F_val$handler), "Lnro/IMessageHandler;", 4112 },
	{ "val$isMain", &class_boolean, offsetof(lib_network_Session_ME2$SessionME2Collector$1, F_val$isMain), "Z", 4112 },
	{ "this$1", &class_lib_network_Session_ME2$SessionME2Collector, offsetof(lib_network_Session_ME2$SessionME2Collector$1, F_this$1), "Llib/network/Session_ME2$SessionME2Collector;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_Session_ME2$SessionME2Collector$1_lib_network_Session_ME2$SessionME2Collector_int_lib_network_Session_ME2_boolean_nro_IMessageHandler_boolean, 0, "(Llib/network/Session_ME2$SessionME2Collector;ILlib/network/Session_ME2;ZLnro/IMessageHandler;Z)V", 0 },
	{ "run", (intptr_t) M_lib_network_Session_ME2$SessionME2Collector$1_run, VTABLE_lib_network_Session_ME2$SessionME2Collector$1_run, "()V", 1 },
};

Class class_lib_network_Session_ME2$SessionME2Collector$1{
		.nativeName = (intptr_t) "lib/network/Session_ME2$SessionME2Collector$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_Session_ME2$SessionME2Collector$1),
		.classVtable = (intptr_t) vtable_lib_network_Session_ME2$SessionME2Collector$1,
		.staticInitializer = (intptr_t) clinit_lib_network_Session_ME2$SessionME2Collector$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_Session_ME2$SessionME2Collector$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_lib_network_Session_ME2$SessionME2Collector$1 = registerClass(&class_lib_network_Session_ME2$SessionME2Collector$1);

}

