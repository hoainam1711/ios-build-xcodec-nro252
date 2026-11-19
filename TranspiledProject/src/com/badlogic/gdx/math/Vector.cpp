#include "com/badlogic/gdx/math/Vector.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/math/Vector.h"

extern "C" {


void mark_com_badlogic_gdx_math_Vector(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_math_Vector *) object;
}

void clinit_com_badlogic_gdx_math_Vector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_math_Vector[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "cpy", "()Lcom/badlogic/gdx/math/Vector;" },
	{ "len", "()F" },
	{ "len2", "()F" },
	{ "limit", "(F)Lcom/badlogic/gdx/math/Vector;" },
	{ "limit2", "(F)Lcom/badlogic/gdx/math/Vector;" },
	{ "setLength", "(F)Lcom/badlogic/gdx/math/Vector;" },
	{ "setLength2", "(F)Lcom/badlogic/gdx/math/Vector;" },
	{ "clamp", "(FF)Lcom/badlogic/gdx/math/Vector;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;" },
	{ "sub", "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;" },
	{ "nor", "()Lcom/badlogic/gdx/math/Vector;" },
	{ "add", "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;" },
	{ "dot", "(Lcom/badlogic/gdx/math/Vector;)F" },
	{ "scl", "(F)Lcom/badlogic/gdx/math/Vector;" },
	{ "scl", "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;" },
	{ "dst", "(Lcom/badlogic/gdx/math/Vector;)F" },
	{ "dst2", "(Lcom/badlogic/gdx/math/Vector;)F" },
	{ "lerp", "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;" },
	{ "interpolate", "(Lcom/badlogic/gdx/math/Vector;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector;" },
	{ "setToRandomDirection", "()Lcom/badlogic/gdx/math/Vector;" },
	{ "isUnit", "()Z" },
	{ "isUnit", "(F)Z" },
	{ "isZero", "()Z" },
	{ "isZero", "(F)Z" },
	{ "isOnLine", "(Lcom/badlogic/gdx/math/Vector;F)Z" },
	{ "isOnLine", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "isCollinear", "(Lcom/badlogic/gdx/math/Vector;F)Z" },
	{ "isCollinear", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "isCollinearOpposite", "(Lcom/badlogic/gdx/math/Vector;F)Z" },
	{ "isCollinearOpposite", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "isPerpendicular", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "isPerpendicular", "(Lcom/badlogic/gdx/math/Vector;F)Z" },
	{ "hasSameDirection", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "hasOppositeDirection", "(Lcom/badlogic/gdx/math/Vector;)Z" },
	{ "epsilonEquals", "(Lcom/badlogic/gdx/math/Vector;F)Z" },
	{ "mulAdd", "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;" },
	{ "mulAdd", "(Lcom/badlogic/gdx/math/Vector;Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;" },
	{ "setZero", "()Lcom/badlogic/gdx/math/Vector;" },
};

static MethodMetadata methods[] {
	{ "cpy", 0, INDEX_com_badlogic_gdx_math_Vector_cpy_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "len", 0, INDEX_com_badlogic_gdx_math_Vector_len_R_float, "()F", 1025 },
	{ "len2", 0, INDEX_com_badlogic_gdx_math_Vector_len2_R_float, "()F", 1025 },
	{ "limit", 0, INDEX_com_badlogic_gdx_math_Vector_limit_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "limit2", 0, INDEX_com_badlogic_gdx_math_Vector_limit2_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "setLength", 0, INDEX_com_badlogic_gdx_math_Vector_setLength_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "setLength2", 0, INDEX_com_badlogic_gdx_math_Vector_setLength2_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "clamp", 0, INDEX_com_badlogic_gdx_math_Vector_clamp_float_float_R_com_badlogic_gdx_math_Vector, "(FF)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "set", 0, INDEX_com_badlogic_gdx_math_Vector_set_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "sub", 0, INDEX_com_badlogic_gdx_math_Vector_sub_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "nor", 0, INDEX_com_badlogic_gdx_math_Vector_nor_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "add", 0, INDEX_com_badlogic_gdx_math_Vector_add_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "dot", 0, INDEX_com_badlogic_gdx_math_Vector_dot_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 1025 },
	{ "scl", 0, INDEX_com_badlogic_gdx_math_Vector_scl_float_R_com_badlogic_gdx_math_Vector, "(F)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "scl", 0, INDEX_com_badlogic_gdx_math_Vector_scl_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "dst", 0, INDEX_com_badlogic_gdx_math_Vector_dst_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 1025 },
	{ "dst2", 0, INDEX_com_badlogic_gdx_math_Vector_dst2_com_badlogic_gdx_math_Vector_R_float, "(Lcom/badlogic/gdx/math/Vector;)F", 1025 },
	{ "lerp", 0, INDEX_com_badlogic_gdx_math_Vector_lerp_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "interpolate", 0, INDEX_com_badlogic_gdx_math_Vector_interpolate_com_badlogic_gdx_math_Vector_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;FLcom/badlogic/gdx/math/Interpolation;)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "setToRandomDirection", 0, INDEX_com_badlogic_gdx_math_Vector_setToRandomDirection_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "isUnit", 0, INDEX_com_badlogic_gdx_math_Vector_isUnit_R_boolean, "()Z", 1025 },
	{ "isUnit", 0, INDEX_com_badlogic_gdx_math_Vector_isUnit_float_R_boolean, "(F)Z", 1025 },
	{ "isZero", 0, INDEX_com_badlogic_gdx_math_Vector_isZero_R_boolean, "()Z", 1025 },
	{ "isZero", 0, INDEX_com_badlogic_gdx_math_Vector_isZero_float_R_boolean, "(F)Z", 1025 },
	{ "isOnLine", 0, INDEX_com_badlogic_gdx_math_Vector_isOnLine_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 1025 },
	{ "isOnLine", 0, INDEX_com_badlogic_gdx_math_Vector_isOnLine_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 1025 },
	{ "isCollinear", 0, INDEX_com_badlogic_gdx_math_Vector_isCollinear_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 1025 },
	{ "isCollinear", 0, INDEX_com_badlogic_gdx_math_Vector_isCollinear_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 1025 },
	{ "isCollinearOpposite", 0, INDEX_com_badlogic_gdx_math_Vector_isCollinearOpposite_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 1025 },
	{ "isCollinearOpposite", 0, INDEX_com_badlogic_gdx_math_Vector_isCollinearOpposite_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 1025 },
	{ "isPerpendicular", 0, INDEX_com_badlogic_gdx_math_Vector_isPerpendicular_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 1025 },
	{ "isPerpendicular", 0, INDEX_com_badlogic_gdx_math_Vector_isPerpendicular_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 1025 },
	{ "hasSameDirection", 0, INDEX_com_badlogic_gdx_math_Vector_hasSameDirection_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 1025 },
	{ "hasOppositeDirection", 0, INDEX_com_badlogic_gdx_math_Vector_hasOppositeDirection_com_badlogic_gdx_math_Vector_R_boolean, "(Lcom/badlogic/gdx/math/Vector;)Z", 1025 },
	{ "epsilonEquals", 0, INDEX_com_badlogic_gdx_math_Vector_epsilonEquals_com_badlogic_gdx_math_Vector_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector;F)Z", 1025 },
	{ "mulAdd", 0, INDEX_com_badlogic_gdx_math_Vector_mulAdd_com_badlogic_gdx_math_Vector_float_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;F)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "mulAdd", 0, INDEX_com_badlogic_gdx_math_Vector_mulAdd_com_badlogic_gdx_math_Vector_com_badlogic_gdx_math_Vector_R_com_badlogic_gdx_math_Vector, "(Lcom/badlogic/gdx/math/Vector;Lcom/badlogic/gdx/math/Vector;)Lcom/badlogic/gdx/math/Vector;", 1025 },
	{ "setZero", 0, INDEX_com_badlogic_gdx_math_Vector_setZero_R_com_badlogic_gdx_math_Vector, "()Lcom/badlogic/gdx/math/Vector;", 1025 },
};

Class class_com_badlogic_gdx_math_Vector{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Vector",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Vector),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Vector,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Vector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Vector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Vector = registerClass(&class_com_badlogic_gdx_math_Vector);

}

