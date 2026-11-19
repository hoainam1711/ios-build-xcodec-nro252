#include "com/badlogic/gdx/Net_HttpMethods.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Net.h"

extern "C" {

jobject SF_com_badlogic_gdx_Net$HttpMethods_HEAD;
jobject SF_com_badlogic_gdx_Net$HttpMethods_GET;
jobject SF_com_badlogic_gdx_Net$HttpMethods_POST;
jobject SF_com_badlogic_gdx_Net$HttpMethods_PUT;
jobject SF_com_badlogic_gdx_Net$HttpMethods_PATCH;
jobject SF_com_badlogic_gdx_Net$HttpMethods_DELETE;

void mark_com_badlogic_gdx_Net$HttpMethods(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_Net$HttpMethods_HEAD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Net$HttpMethods_HEAD)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Net$HttpMethods_HEAD, mark, depth + 1);
		if (SF_com_badlogic_gdx_Net$HttpMethods_GET)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Net$HttpMethods_GET)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Net$HttpMethods_GET, mark, depth + 1);
		if (SF_com_badlogic_gdx_Net$HttpMethods_POST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Net$HttpMethods_POST)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Net$HttpMethods_POST, mark, depth + 1);
		if (SF_com_badlogic_gdx_Net$HttpMethods_PUT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Net$HttpMethods_PUT)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Net$HttpMethods_PUT, mark, depth + 1);
		if (SF_com_badlogic_gdx_Net$HttpMethods_PATCH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Net$HttpMethods_PATCH)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Net$HttpMethods_PATCH, mark, depth + 1);
		if (SF_com_badlogic_gdx_Net$HttpMethods_DELETE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Net$HttpMethods_DELETE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Net$HttpMethods_DELETE, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_Net$HttpMethods *) object;
}

void clinit_com_badlogic_gdx_Net$HttpMethods(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_Net$HttpMethods_HEAD = ((jobject) createStringLiteral(ctx, u8"HEAD"_j));
	SF_com_badlogic_gdx_Net$HttpMethods_GET = ((jobject) createStringLiteral(ctx, u8"GET"_j));
	SF_com_badlogic_gdx_Net$HttpMethods_POST = ((jobject) createStringLiteral(ctx, u8"POST"_j));
	SF_com_badlogic_gdx_Net$HttpMethods_PUT = ((jobject) createStringLiteral(ctx, u8"PUT"_j));
	SF_com_badlogic_gdx_Net$HttpMethods_PATCH = ((jobject) createStringLiteral(ctx, u8"PATCH"_j));
	SF_com_badlogic_gdx_Net$HttpMethods_DELETE = ((jobject) createStringLiteral(ctx, u8"DELETE"_j));
}

void *vtable_com_badlogic_gdx_Net$HttpMethods[] {
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
	{ "HEAD", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_Net$HttpMethods_HEAD, "Ljava/lang/String;", 25 },
	{ "GET", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_Net$HttpMethods_GET, "Ljava/lang/String;", 25 },
	{ "POST", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_Net$HttpMethods_POST, "Ljava/lang/String;", 25 },
	{ "PUT", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_Net$HttpMethods_PUT, "Ljava/lang/String;", 25 },
	{ "PATCH", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_Net$HttpMethods_PATCH, "Ljava/lang/String;", 25 },
	{ "DELETE", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_Net$HttpMethods_DELETE, "Ljava/lang/String;", 25 },
};

Class class_com_badlogic_gdx_Net$HttpMethods{
		.nativeName = (intptr_t) "com/badlogic/gdx/Net$HttpMethods",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Net$HttpMethods),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Net$HttpMethods,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Net$HttpMethods,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Net$HttpMethods,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_Net,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 0,
		.nativeMethods = (intptr_t) nullptr,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Net$HttpMethods = registerClass(&class_com_badlogic_gdx_Net$HttpMethods);

}

