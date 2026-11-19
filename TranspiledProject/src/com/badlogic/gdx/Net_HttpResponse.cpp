#include "com/badlogic/gdx/Net_HttpResponse.h"
#include "java/io/InputStream.h"
#include "com/badlogic/gdx/net/HttpStatus.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Net_HttpResponse.h"
#include "com/badlogic/gdx/Net.h"
#include "java/util/Map.h"

extern "C" {


void mark_com_badlogic_gdx_Net$HttpResponse(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_Net$HttpResponse *) object;
}

void clinit_com_badlogic_gdx_Net$HttpResponse(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_Net$HttpResponse[] {
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
	{ "getResult", "()[B" },
	{ "getResultAsString", "()Ljava/lang/String;" },
	{ "getResultAsStream", "()Ljava/io/InputStream;" },
	{ "getStatus", "()Lcom/badlogic/gdx/net/HttpStatus;" },
	{ "getHeader", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getHeaders", "()Ljava/util/Map;" },
};

static MethodMetadata methods[] {
	{ "getResult", 0, INDEX_com_badlogic_gdx_Net$HttpResponse_getResult_R_Array1_byte, "()[B", 1025 },
	{ "getResultAsString", 0, INDEX_com_badlogic_gdx_Net$HttpResponse_getResultAsString_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "getResultAsStream", 0, INDEX_com_badlogic_gdx_Net$HttpResponse_getResultAsStream_R_java_io_InputStream, "()Ljava/io/InputStream;", 1025 },
	{ "getStatus", 0, INDEX_com_badlogic_gdx_Net$HttpResponse_getStatus_R_com_badlogic_gdx_net_HttpStatus, "()Lcom/badlogic/gdx/net/HttpStatus;", 1025 },
	{ "getHeader", 0, INDEX_com_badlogic_gdx_Net$HttpResponse_getHeader_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1025 },
	{ "getHeaders", 0, INDEX_com_badlogic_gdx_Net$HttpResponse_getHeaders_R_java_util_Map, "()Ljava/util/Map;", 1025 },
};

Class class_com_badlogic_gdx_Net$HttpResponse{
		.nativeName = (intptr_t) "com/badlogic/gdx/Net$HttpResponse",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Net$HttpResponse),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Net$HttpResponse,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Net$HttpResponse,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Net$HttpResponse,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_Net,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
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
static bool registered_com_badlogic_gdx_Net$HttpResponse = registerClass(&class_com_badlogic_gdx_Net$HttpResponse);

}

