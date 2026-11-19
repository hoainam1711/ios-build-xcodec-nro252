#include "lib/Time.h"
#include "lib/Time.h"
#include "java/lang/Object.h"

extern "C" {

jfloat SF_lib_Time_timeScale;

void mark_lib_Time(jobject object, jint mark, jint depth) {
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
	auto self = (lib_Time *) object;
}

void init_lib_Time(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/Time:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_Time(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_Time_setTimeScale_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/Time:setTimeScale", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_Time(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(7);
	if ((floatCompare((frame[0].f), (jfloat(0.1f)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(8);
	frame[0].f = (jfloat(0.1f));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(9);
	if ((floatCompare((frame[0].f), (jfloat(10.0f)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(10);
	frame[0].f = (jfloat(10.0f));
	}
label_3:;
	{
	LINE_NUMBER(12);
	clinit_lib_Time(ctx);
	SF_lib_Time_timeScale = (frame[0].f);
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_lib_Time_getTimeScale_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/Time:getTimeScale", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_Time(ctx);
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return (clinit_lib_Time(ctx), (jfloat)SF_lib_Time_timeScale);
	}

	popStackFrame(ctx);
}

void clinit_lib_Time(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/Time:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_Time(ctx);
	{
	LINE_NUMBER(4);
	clinit_lib_Time(ctx);
	SF_lib_Time_timeScale = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_Time[] {
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
	{ "timeScale", &class_float, (intptr_t) &SF_lib_Time_timeScale, "F", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_Time, 0, "()V", 1 },
	{ "setTimeScale", (intptr_t) SM_lib_Time_setTimeScale_float, 0, "(F)V", 9 },
	{ "getTimeScale", (intptr_t) SM_lib_Time_getTimeScale_R_float, 0, "()F", 9 },
	{ "<clinit>", (intptr_t) clinit_lib_Time, 0, "()V", 8 },
};

Class class_lib_Time{
		.nativeName = (intptr_t) "lib/Time",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_Time),
		.classVtable = (intptr_t) vtable_lib_Time,
		.staticInitializer = (intptr_t) clinit_lib_Time,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_Time,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_Time = registerClass(&class_lib_Time);

}

