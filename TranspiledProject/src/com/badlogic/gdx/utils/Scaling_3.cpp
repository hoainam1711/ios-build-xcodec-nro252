#include "com/badlogic/gdx/utils/Scaling_3.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Scaling_3.h"
#include "com/badlogic/gdx/utils/Scaling.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Scaling$3(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Scaling$3 *) object;
}

void clinit_com_badlogic_gdx_utils_Scaling$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
}

void init_com_badlogic_gdx_utils_Scaling$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Scaling$3:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Scaling$3(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(59);
	init_com_badlogic_gdx_utils_Scaling(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Scaling$3_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Scaling$3:apply", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(61);
	frame[5].f = ((frame[4].f) / (frame[3].f));
	LINE_NUMBER(62);
	frame[6].f = ((frame[2].f) / (frame[1].f));
	LINE_NUMBER(63);
	if ((floatCompare((frame[5].f), (frame[6].f), 1)) >= 0) goto label_3;
	}
	{
	jfloat temp0 = (frame[3].f) / (frame[1].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	jfloat temp0 = (frame[4].f) / (frame[2].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_utils_Scaling$3(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_temp;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = ((frame[1].f) * (frame[7].f));
	LINE_NUMBER(65);
	clinit_com_badlogic_gdx_utils_Scaling$3(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_temp;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = ((frame[2].f) * (frame[7].f));
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_utils_Scaling$3(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_temp;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Scaling$3[] {
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
	(void *) M_com_badlogic_gdx_utils_Scaling$3_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2,
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
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Scaling$3, 0, "()V", 0 },
	{ "apply", (intptr_t) M_com_badlogic_gdx_utils_Scaling$3_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_utils_Scaling$3_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2, "(FFFF)Lcom/badlogic/gdx/math/Vector2;", 1 },
};

Class class_com_badlogic_gdx_utils_Scaling$3{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Scaling$3",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Scaling,
		.size = sizeof(com_badlogic_gdx_utils_Scaling$3),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Scaling$3,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Scaling$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Scaling$3,
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
static bool registered_com_badlogic_gdx_utils_Scaling$3 = registerClass(&class_com_badlogic_gdx_utils_Scaling$3);

}

