#include "com/badlogic/gdx/math/Intersector_MinimumTranslationVector.h"
#include "com/badlogic/gdx/math/Intersector.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Intersector_MinimumTranslationVector.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_math_Intersector$MinimumTranslationVector(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) object;
	if (self->F_normal)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_normal)->clazz)->markFunction)((jobject) self->F_normal, mark, depth + 1);
}

void clinit_com_badlogic_gdx_math_Intersector$MinimumTranslationVector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_math_Intersector$MinimumTranslationVector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector$MinimumTranslationVector:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector$MinimumTranslationVector(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1501);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1503);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK(sp[0].o))->F_normal = (jref) sp[1].o;
	LINE_NUMBER(1505);
	((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[0].o)))->F_depth = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Intersector$MinimumTranslationVector[] {
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
	{ "normal", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_math_Intersector$MinimumTranslationVector, F_normal), "Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "depth", &class_float, offsetof(com_badlogic_gdx_math_Intersector$MinimumTranslationVector, F_depth), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Intersector$MinimumTranslationVector, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_math_Intersector$MinimumTranslationVector{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Intersector$MinimumTranslationVector",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Intersector$MinimumTranslationVector),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Intersector$MinimumTranslationVector,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Intersector$MinimumTranslationVector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Intersector$MinimumTranslationVector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_math_Intersector,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Intersector$MinimumTranslationVector = registerClass(&class_com_badlogic_gdx_math_Intersector$MinimumTranslationVector);

}

