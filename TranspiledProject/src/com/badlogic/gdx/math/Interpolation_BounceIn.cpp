#include "com/badlogic/gdx/math/Interpolation_BounceIn.h"
#include "com/badlogic/gdx/math/Interpolation_BounceOut.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/math/Interpolation_BounceIn.h"

extern "C" {


void mark_com_badlogic_gdx_math_Interpolation$BounceIn(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_math_Interpolation$BounceOut(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_math_Interpolation$BounceIn *) object;
}

void clinit_com_badlogic_gdx_math_Interpolation$BounceIn(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_math_Interpolation$BounceOut(ctx);
}

void init_com_badlogic_gdx_math_Interpolation$BounceIn_Array1_float_Array1_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation$BounceIn:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Interpolation$BounceIn(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(383);
	init_com_badlogic_gdx_math_Interpolation$BounceOut_Array1_float_Array1_float(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Interpolation$BounceIn_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation$BounceIn:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Interpolation$BounceIn(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(387);
	init_com_badlogic_gdx_math_Interpolation$BounceOut_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Interpolation$BounceIn_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation$BounceIn:apply", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(391);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)M_com_badlogic_gdx_math_Interpolation$BounceOut_apply_float_R_float(ctx, (frame[0].o), ((jfloat(1)) - (frame[1].f)));
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Interpolation$BounceIn[] {
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
	(void *) M_com_badlogic_gdx_math_Interpolation$BounceIn_apply_float_R_float,
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
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Interpolation$BounceIn_Array1_float_Array1_float, 0, "([F[F)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Interpolation$BounceIn_int, 0, "(I)V", 1 },
	{ "apply", (intptr_t) M_com_badlogic_gdx_math_Interpolation$BounceIn_apply_float_R_float, VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_apply_float_R_float, "(F)F", 1 },
};

Class class_com_badlogic_gdx_math_Interpolation$BounceIn{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Interpolation$BounceIn",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_math_Interpolation$BounceOut,
		.size = sizeof(com_badlogic_gdx_math_Interpolation$BounceIn),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Interpolation$BounceIn,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Interpolation$BounceIn,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Interpolation$BounceIn,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_math_Interpolation,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Interpolation$BounceIn = registerClass(&class_com_badlogic_gdx_math_Interpolation$BounceIn);

}

