#include "nro/ScrollResult.h"
#include "java/lang/Object.h"
#include "nro/ScrollResult.h"

extern "C" {


void mark_nro_ScrollResult(jobject object, jint mark, jint depth) {
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
	auto self = (nro_ScrollResult *) object;
}

void clinit_nro_ScrollResult(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_ScrollResult(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ScrollResult:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ScrollResult(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(5);
	((nro_ScrollResult *) NULL_CHECK((frame[0].o)))->F_selected = (jint(-1));
	LINE_NUMBER(6);
	((nro_ScrollResult *) NULL_CHECK((frame[0].o)))->F_isFinish = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ScrollResult[] {
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
	{ "isDowning", &class_boolean, offsetof(nro_ScrollResult, F_isDowning), "Z", 1 },
	{ "selected", &class_int, offsetof(nro_ScrollResult, F_selected), "I", 1 },
	{ "isFinish", &class_boolean, offsetof(nro_ScrollResult, F_isFinish), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ScrollResult, 0, "()V", 1 },
};

Class class_nro_ScrollResult{
		.nativeName = (intptr_t) "nro/ScrollResult",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ScrollResult),
		.classVtable = (intptr_t) vtable_nro_ScrollResult,
		.staticInitializer = (intptr_t) clinit_nro_ScrollResult,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ScrollResult,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ScrollResult = registerClass(&class_nro_ScrollResult);

}

