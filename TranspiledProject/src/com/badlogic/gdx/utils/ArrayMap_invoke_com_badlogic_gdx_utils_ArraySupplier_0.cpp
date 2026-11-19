#include "com/badlogic/gdx/utils/ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/ArrayMap.h"
#include "com/badlogic/gdx/utils/ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "java/lang/Class.h"

extern "C" {


void mark_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) self;
	auto object = SM_com_badlogic_gdx_utils_ArrayMap_lambda$new$0_java_lang_Class_int_R_Array1_java_lang_Object(ctx, (jobject) proxy->F_field0, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0[] {
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
	(void *) M_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0_get_int_R_java_lang_Object,
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
	{ "get", "(I)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_ArraySupplier, };

static FieldMetadata fields[] {
	{ "field0", &class_java_lang_Class, offsetof(com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0, F_field0), "Ljava/lang/Class;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0_get_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 0 },
};

Class class_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0 = registerClass(&class_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0);

}

