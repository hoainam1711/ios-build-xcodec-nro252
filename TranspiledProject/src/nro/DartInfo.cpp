#include "nro/DartInfo.h"
#include "java/lang/Object.h"

extern "C" {


void mark_nro_DartInfo(jobject object, jint mark, jint depth) {
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
	auto self = (nro_DartInfo *) object;
	if (self->F_head)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_head)->clazz)->markFunction)((jobject) self->F_head, mark, depth + 1);
	if (self->F_headBorder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_headBorder)->clazz)->markFunction)((jobject) self->F_headBorder, mark, depth + 1);
	if (self->F_tail)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tail)->clazz)->markFunction)((jobject) self->F_tail, mark, depth + 1);
	if (self->F_tailBorder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tailBorder)->clazz)->markFunction)((jobject) self->F_tailBorder, mark, depth + 1);
	if (self->F_xd1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xd1)->clazz)->markFunction)((jobject) self->F_xd1, mark, depth + 1);
	if (self->F_xd2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xd2)->clazz)->markFunction)((jobject) self->F_xd2, mark, depth + 1);
}

void clinit_nro_DartInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_DartInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/DartInfo:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_DartInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_DartInfo[] {
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
	{ "head", getArrayClass(&class_short, 2), offsetof(nro_DartInfo, F_head), "[[S", 1 },
	{ "headBorder", getArrayClass(&class_short, 2), offsetof(nro_DartInfo, F_headBorder), "[[S", 1 },
	{ "tail", getArrayClass(&class_short, 1), offsetof(nro_DartInfo, F_tail), "[S", 1 },
	{ "tailBorder", getArrayClass(&class_short, 1), offsetof(nro_DartInfo, F_tailBorder), "[S", 1 },
	{ "xd1", getArrayClass(&class_short, 1), offsetof(nro_DartInfo, F_xd1), "[S", 1 },
	{ "xd2", getArrayClass(&class_short, 1), offsetof(nro_DartInfo, F_xd2), "[S", 1 },
	{ "id", &class_short, offsetof(nro_DartInfo, F_id), "S", 1 },
	{ "xdPercent", &class_short, offsetof(nro_DartInfo, F_xdPercent), "S", 1 },
	{ "va", &class_int, offsetof(nro_DartInfo, F_va), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_DartInfo, 0, "()V", 1 },
};

Class class_nro_DartInfo{
		.nativeName = (intptr_t) "nro/DartInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_DartInfo),
		.classVtable = (intptr_t) vtable_nro_DartInfo,
		.staticInitializer = (intptr_t) clinit_nro_DartInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_DartInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_DartInfo = registerClass(&class_nro_DartInfo);

}

