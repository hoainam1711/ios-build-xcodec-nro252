#include "nro/IMapObject.h"
#include "java/lang/Object.h"
#include "nro/IMapObject.h"

extern "C" {


void mark_nro_IMapObject(jobject object, jint mark, jint depth) {
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
	auto self = (nro_IMapObject *) object;
}

void clinit_nro_IMapObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_nro_IMapObject[] {
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
	{ "getX", "()I" },
	{ "getY", "()I" },
	{ "getW", "()I" },
	{ "getH", "()I" },
	{ "stopMoving", "()V" },
	{ "isInvisible", "()Z" },
};

static MethodMetadata methods[] {
	{ "getX", 0, INDEX_nro_IMapObject_getX_R_int, "()I", 1025 },
	{ "getY", 0, INDEX_nro_IMapObject_getY_R_int, "()I", 1025 },
	{ "getW", 0, INDEX_nro_IMapObject_getW_R_int, "()I", 1025 },
	{ "getH", 0, INDEX_nro_IMapObject_getH_R_int, "()I", 1025 },
	{ "stopMoving", 0, INDEX_nro_IMapObject_stopMoving, "()V", 1025 },
	{ "isInvisible", 0, INDEX_nro_IMapObject_isInvisible_R_boolean, "()Z", 1025 },
};

Class class_nro_IMapObject{
		.nativeName = (intptr_t) "nro/IMapObject",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_IMapObject),
		.classVtable = (intptr_t) vtable_nro_IMapObject,
		.staticInitializer = (intptr_t) clinit_nro_IMapObject,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_IMapObject,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_IMapObject = registerClass(&class_nro_IMapObject);

}

