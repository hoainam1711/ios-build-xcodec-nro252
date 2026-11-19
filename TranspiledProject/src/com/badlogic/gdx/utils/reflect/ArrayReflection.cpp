#include "com/badlogic/gdx/utils/reflect/ArrayReflection.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/Class.h"

extern "C" {


void mark_com_badlogic_gdx_utils_reflect_ArrayReflection(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_reflect_ArrayReflection *) object;
}

void clinit_com_badlogic_gdx_utils_reflect_ArrayReflection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_reflect_ArrayReflection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ArrayReflection:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ArrayReflection(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ArrayReflection_newInstance_java_lang_Class_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ArrayReflection:newInstance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ArrayReflection(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_reflect_ArrayReflection_getLength_java_lang_Object_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ArrayReflection:getLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ArrayReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(30);
	jint temp0 = (jint)SM_java_lang_reflect_Array_getLength_java_lang_Object_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ArrayReflection_get_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ArrayReflection:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ArrayReflection(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_get_java_lang_Object_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_reflect_ArrayReflection_set_java_lang_Object_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ArrayReflection:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ArrayReflection(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(40);
	SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_reflect_ArrayReflection[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_reflect_ArrayReflection, 0, "()V", 1 },
	{ "newInstance", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ArrayReflection_newInstance_java_lang_Class_int_R_java_lang_Object, 0, "(Ljava/lang/Class;I)Ljava/lang/Object;", 9 },
	{ "getLength", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ArrayReflection_getLength_java_lang_Object_R_int, 0, "(Ljava/lang/Object;)I", 9 },
	{ "get", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ArrayReflection_get_java_lang_Object_int_R_java_lang_Object, 0, "(Ljava/lang/Object;I)Ljava/lang/Object;", 9 },
	{ "set", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ArrayReflection_set_java_lang_Object_int_java_lang_Object, 0, "(Ljava/lang/Object;ILjava/lang/Object;)V", 9 },
};

Class class_com_badlogic_gdx_utils_reflect_ArrayReflection{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/reflect/ArrayReflection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_reflect_ArrayReflection),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_reflect_ArrayReflection,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_reflect_ArrayReflection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_reflect_ArrayReflection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_reflect_ArrayReflection = registerClass(&class_com_badlogic_gdx_utils_reflect_ArrayReflection);

}

