#include "com/badlogic/gdx/utils/Scaling_7.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Scaling.h"
#include "com/badlogic/gdx/utils/Scaling_7.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Scaling$7(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_Scaling(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_Scaling$7 *) object;
}

void clinit_com_badlogic_gdx_utils_Scaling$7(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
}

void init_com_badlogic_gdx_utils_Scaling$7(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Scaling$7:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Scaling$7(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(103);
	init_com_badlogic_gdx_utils_Scaling(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Scaling$7_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Scaling$7:apply", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(105);
	clinit_com_badlogic_gdx_utils_Scaling$7(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_temp;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (frame[3].f);
	LINE_NUMBER(106);
	clinit_com_badlogic_gdx_utils_Scaling$7(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_temp;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (frame[2].f);
	LINE_NUMBER(107);
	clinit_com_badlogic_gdx_utils_Scaling$7(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_temp;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Scaling$7[] {
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
	(void *) M_com_badlogic_gdx_utils_Scaling$7_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2,
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
	{ "apply", "(FFFF)Lcom/badlogic/gdx/math/Vector2;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Scaling$7, 0, "()V", 0 },
	{ "apply", (intptr_t) M_com_badlogic_gdx_utils_Scaling$7_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_utils_Scaling$7_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2, "(FFFF)Lcom/badlogic/gdx/math/Vector2;", 1 },
};

Class class_com_badlogic_gdx_utils_Scaling$7{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Scaling$7",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Scaling,
		.size = sizeof(com_badlogic_gdx_utils_Scaling$7),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Scaling$7,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Scaling$7,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Scaling$7,
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
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Scaling$7 = registerClass(&class_com_badlogic_gdx_utils_Scaling$7);

}

