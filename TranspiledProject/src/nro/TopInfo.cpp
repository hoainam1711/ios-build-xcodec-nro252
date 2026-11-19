#include "nro/TopInfo.h"
#include "nro/TopInfo.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"

extern "C" {


void mark_nro_TopInfo(jobject object, jint mark, jint depth) {
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
	auto self = (nro_TopInfo *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
	if (self->F_info2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info2)->clazz)->markFunction)((jobject) self->F_info2, mark, depth + 1);
}

void clinit_nro_TopInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_TopInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TopInfo:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TopInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(5);
	((nro_TopInfo *) NULL_CHECK((frame[0].o)))->F_headICON = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_TopInfo[] {
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
	{ "headID", &class_int, offsetof(nro_TopInfo, F_headID), "I", 1 },
	{ "headICON", &class_int, offsetof(nro_TopInfo, F_headICON), "I", 1 },
	{ "body", &class_short, offsetof(nro_TopInfo, F_body), "S", 1 },
	{ "leg", &class_short, offsetof(nro_TopInfo, F_leg), "S", 1 },
	{ "name", &class_java_lang_String, offsetof(nro_TopInfo, F_name), "Ljava/lang/String;", 1 },
	{ "info", &class_java_lang_String, offsetof(nro_TopInfo, F_info), "Ljava/lang/String;", 1 },
	{ "pId", &class_int, offsetof(nro_TopInfo, F_pId), "I", 1 },
	{ "rank", &class_int, offsetof(nro_TopInfo, F_rank), "I", 1 },
	{ "info2", &class_java_lang_String, offsetof(nro_TopInfo, F_info2), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_TopInfo, 0, "()V", 1 },
};

Class class_nro_TopInfo{
		.nativeName = (intptr_t) "nro/TopInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_TopInfo),
		.classVtable = (intptr_t) vtable_nro_TopInfo,
		.staticInitializer = (intptr_t) clinit_nro_TopInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_TopInfo,
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
static bool registered_nro_TopInfo = registerClass(&class_nro_TopInfo);

}

