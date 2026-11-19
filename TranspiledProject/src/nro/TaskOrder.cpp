#include "nro/TaskOrder.h"
#include "nro/TaskOrder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"

extern "C" {


void mark_nro_TaskOrder(jobject object, jint mark, jint depth) {
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
	auto self = (nro_TaskOrder *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
}

void clinit_nro_TaskOrder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_TaskOrder_byte_short_short_java_lang_String_java_lang_String_byte_byte(jcontext ctx, jobject self, jbyte param0, jshort param1, jshort param2, jobject param3, jobject param4, jbyte param5, jbyte param6) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TaskOrder:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TaskOrder(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((nro_TaskOrder *) NULL_CHECK((frame[0].o)))->F_count = (frame[2].i);
	LINE_NUMBER(13);
	((nro_TaskOrder *) NULL_CHECK((frame[0].o)))->F_maxCount = (frame[3].i);
	LINE_NUMBER(14);
	((nro_TaskOrder *) NULL_CHECK((frame[0].o)))->F_taskId = (frame[1].i);
	LINE_NUMBER(15);
	((nro_TaskOrder *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[4].o);
	LINE_NUMBER(16);
	((nro_TaskOrder *) NULL_CHECK((frame[0].o)))->F_description = (jref) (frame[5].o);
	LINE_NUMBER(17);
	((nro_TaskOrder *) NULL_CHECK((frame[0].o)))->F_f = (frame[6].i);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_TaskOrder[] {
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
};

static FieldMetadata fields[] {
	{ "taskId", &class_int, offsetof(nro_TaskOrder, F_taskId), "I", 1 },
	{ "count", &class_int, offsetof(nro_TaskOrder, F_count), "I", 1 },
	{ "maxCount", &class_short, offsetof(nro_TaskOrder, F_maxCount), "S", 1 },
	{ "name", &class_java_lang_String, offsetof(nro_TaskOrder, F_name), "Ljava/lang/String;", 1 },
	{ "description", &class_java_lang_String, offsetof(nro_TaskOrder, F_description), "Ljava/lang/String;", 1 },
	{ "f", &class_int, offsetof(nro_TaskOrder, F_f), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_TaskOrder_byte_short_short_java_lang_String_java_lang_String_byte_byte, 0, "(BSSLjava/lang/String;Ljava/lang/String;BB)V", 1 },
};

Class class_nro_TaskOrder{
		.nativeName = (intptr_t) "nro/TaskOrder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_TaskOrder),
		.classVtable = (intptr_t) vtable_nro_TaskOrder,
		.staticInitializer = (intptr_t) clinit_nro_TaskOrder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_TaskOrder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_TaskOrder = registerClass(&class_nro_TaskOrder);

}

