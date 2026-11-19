#include "com/badlogic/gdx/utils/DefaultPool_PoolSupplier.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/DefaultPool.h"
#include "com/badlogic/gdx/utils/DefaultPool_PoolSupplier.h"

extern "C" {


void mark_com_badlogic_gdx_utils_DefaultPool$PoolSupplier(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_DefaultPool$PoolSupplier *) object;
}

void clinit_com_badlogic_gdx_utils_DefaultPool$PoolSupplier(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_utils_DefaultPool$PoolSupplier[] {
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
	{ "get", "()Ljava/lang/Object;" },
};

static MethodMetadata methods[] {
	{ "get", 0, INDEX_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_get_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
};

Class class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/DefaultPool$PoolSupplier",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_DefaultPool$PoolSupplier),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_DefaultPool$PoolSupplier,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_DefaultPool$PoolSupplier,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_DefaultPool$PoolSupplier,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_DefaultPool,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_DefaultPool$PoolSupplier = registerClass(&class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier);

}

