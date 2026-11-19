#include "com/badlogic/gdx/math/Interpolation_Swing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/math/Interpolation_Swing.h"

extern "C" {


void mark_com_badlogic_gdx_math_Interpolation$Swing(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_math_Interpolation$Swing *) object;
}

void clinit_com_badlogic_gdx_math_Interpolation$Swing(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
}

void init_com_badlogic_gdx_math_Interpolation$Swing_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation$Swing:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Interpolation$Swing(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(400);
	init_com_badlogic_gdx_math_Interpolation(ctx, (frame[0].o));
	LINE_NUMBER(401);
	((com_badlogic_gdx_math_Interpolation$Swing *) NULL_CHECK((frame[0].o)))->F_scale = ((frame[1].f) * (jfloat(2)));
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Interpolation$Swing_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation$Swing:apply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(405);
	if ((floatCompare((frame[1].f), (jfloat(0.5f)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(406);
	frame[1].f = ((frame[1].f) * (jfloat(2)));
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return ((((frame[1].f) * (frame[1].f)) * (((((jfloat)((com_badlogic_gdx_math_Interpolation$Swing *) NULL_CHECK((frame[0].o)))->F_scale) + (jfloat(1))) * (frame[1].f)) - ((jfloat)((com_badlogic_gdx_math_Interpolation$Swing *) NULL_CHECK((frame[0].o)))->F_scale))) / (jfloat(2)));
	}
label_1:;
	{
	LINE_NUMBER(409);
	frame[1].f = ((frame[1].f) - (jfloat(1)));
	LINE_NUMBER(410);
	frame[1].f = ((frame[1].f) * (jfloat(2)));
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (((((frame[1].f) * (frame[1].f)) * (((((jfloat)((com_badlogic_gdx_math_Interpolation$Swing *) NULL_CHECK((frame[0].o)))->F_scale) + (jfloat(1))) * (frame[1].f)) + ((jfloat)((com_badlogic_gdx_math_Interpolation$Swing *) NULL_CHECK((frame[0].o)))->F_scale))) / (jfloat(2))) + (jfloat(1)));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Interpolation$Swing[] {
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
	(void *) M_com_badlogic_gdx_math_Interpolation$Swing_apply_float_R_float,
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

static FieldMetadata fields[] {
	{ "scale", &class_float, offsetof(com_badlogic_gdx_math_Interpolation$Swing, F_scale), "F", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Interpolation$Swing_float, 0, "(F)V", 1 },
	{ "apply", (intptr_t) M_com_badlogic_gdx_math_Interpolation$Swing_apply_float_R_float, VTABLE_com_badlogic_gdx_math_Interpolation$Swing_apply_float_R_float, "(F)F", 1 },
};

Class class_com_badlogic_gdx_math_Interpolation$Swing{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Interpolation$Swing",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_math_Interpolation,
		.size = sizeof(com_badlogic_gdx_math_Interpolation$Swing),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Interpolation$Swing,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Interpolation$Swing,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Interpolation$Swing,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_math_Interpolation,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Interpolation$Swing = registerClass(&class_com_badlogic_gdx_math_Interpolation$Swing);

}

