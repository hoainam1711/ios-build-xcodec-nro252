#include "com/badlogic/gdx/math/Interpolation_3.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Interpolation_3.h"
#include "com/badlogic/gdx/math/Interpolation.h"

extern "C" {


void mark_com_badlogic_gdx_math_Interpolation$3(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_math_Interpolation(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_math_Interpolation$3 *) object;
}

void clinit_com_badlogic_gdx_math_Interpolation$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
}

void init_com_badlogic_gdx_math_Interpolation$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation$3:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Interpolation$3(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(46);
	init_com_badlogic_gdx_math_Interpolation(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Interpolation$3_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation$3:apply", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(48);
	frame[1].f = (((frame[1].f) * (frame[1].f)) * ((jfloat(3.0f)) - ((jfloat(2)) * (frame[1].f))));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (((frame[1].f) * (frame[1].f)) * ((jfloat(3.0f)) - ((jfloat(2)) * (frame[1].f))));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Interpolation$3[] {
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
	(void *) M_com_badlogic_gdx_math_Interpolation$3_apply_float_R_float,
	(void *) M_com_badlogic_gdx_math_Interpolation_apply_float_float_float_R_float,
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
	{ "apply", "(F)F" },
	{ "apply", "(FFF)F" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Interpolation$3, 0, "()V", 0 },
	{ "apply", (intptr_t) M_com_badlogic_gdx_math_Interpolation$3_apply_float_R_float, VTABLE_com_badlogic_gdx_math_Interpolation$3_apply_float_R_float, "(F)F", 1 },
};

Class class_com_badlogic_gdx_math_Interpolation$3{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Interpolation$3",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_math_Interpolation,
		.size = sizeof(com_badlogic_gdx_math_Interpolation$3),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Interpolation$3,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Interpolation$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Interpolation$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Interpolation$3 = registerClass(&class_com_badlogic_gdx_math_Interpolation$3);

}

