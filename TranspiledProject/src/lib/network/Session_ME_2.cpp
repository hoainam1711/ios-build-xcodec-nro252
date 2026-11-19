#include "lib/network/Session_ME_2.h"
#include "java/lang/Object.h"
#include "lib/network/Session_ME.h"
#include "lib/network/Session_ME_2.h"
#include "nro/IMessageHandler.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_lib_network_Session_ME$2(jobject object, jint mark, jint depth) {
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
	auto self = (lib_network_Session_ME$2 *) object;
	if (self->F_val$self)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$self)->clazz)->markFunction)((jobject) self->F_val$self, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_lib_network_Session_ME$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_network_Session_ME$2_lib_network_Session_ME_int_lib_network_Session_ME(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$2:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(662);
	((lib_network_Session_ME$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((lib_network_Session_ME$2 *) NULL_CHECK((frame[0].o)))->F_val$gen = (frame[2].i);
	((lib_network_Session_ME$2 *) NULL_CHECK((frame[0].o)))->F_val$self = (jref) (frame[3].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME$2_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME$2:run", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(665);
	jint temp0 = (jint)((lib_network_Session_ME$2 *) NULL_CHECK((frame[0].o)))->F_val$gen;
	sp[0].o = (jobject)((lib_network_Session_ME$2 *) NULL_CHECK((frame[0].o)))->F_val$self;
	jint temp1 = (jint)SM_lib_network_Session_ME_access$000_lib_network_Session_ME_R_int(ctx, sp[0].o);
	if (temp0 == temp1) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((lib_network_Session_ME$2 *) NULL_CHECK((frame[0].o)))->F_val$self;
	SM_lib_network_Session_ME_access$600_lib_network_Session_ME(ctx, sp[0].o);
	LINE_NUMBER(667);
	sp[0].o = (jobject)((lib_network_Session_ME$2 *) NULL_CHECK((frame[0].o)))->F_val$self;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(668);
	sp[0].o = (jobject)((lib_network_Session_ME$2 *) NULL_CHECK((frame[0].o)))->F_val$self;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	sp[1].o = (jobject)((lib_network_Session_ME$2 *) NULL_CHECK((frame[0].o)))->F_val$self;
	((func_nro_IMessageHandler_onDisconnected_boolean) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onDisconnected_boolean, sp[0].o))(ctx, sp[0].o, ((jint)((lib_network_Session_ME *) NULL_CHECK(sp[1].o))->F_isMainSession));
	}
label_3:;
	LINE_NUMBER(670);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_lib_network_Session_ME$2[] {
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
	(void *) M_lib_network_Session_ME$2_run,
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
	{ "val$gen", &class_int, offsetof(lib_network_Session_ME$2, F_val$gen), "I", 4112 },
	{ "val$self", &class_lib_network_Session_ME, offsetof(lib_network_Session_ME$2, F_val$self), "Llib/network/Session_ME;", 4112 },
	{ "this$0", &class_lib_network_Session_ME, offsetof(lib_network_Session_ME$2, F_this$0), "Llib/network/Session_ME;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_Session_ME$2_lib_network_Session_ME_int_lib_network_Session_ME, 0, "(Llib/network/Session_ME;ILlib/network/Session_ME;)V", 0 },
	{ "run", (intptr_t) M_lib_network_Session_ME$2_run, VTABLE_lib_network_Session_ME$2_run, "()V", 1 },
};

Class class_lib_network_Session_ME$2{
		.nativeName = (intptr_t) "lib/network/Session_ME$2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_Session_ME$2),
		.classVtable = (intptr_t) vtable_lib_network_Session_ME$2,
		.staticInitializer = (intptr_t) clinit_lib_network_Session_ME$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_Session_ME$2,
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
static bool registered_lib_network_Session_ME$2 = registerClass(&class_lib_network_Session_ME$2);

}

