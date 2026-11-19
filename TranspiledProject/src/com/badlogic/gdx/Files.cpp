#include "com/badlogic/gdx/Files.h"
#include "com/badlogic/gdx/Files_FileType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/Files.h"

extern "C" {


void mark_com_badlogic_gdx_Files(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_Files *) object;
}

void clinit_com_badlogic_gdx_Files(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_Files[] {
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
	{ "getFileHandle", "(Ljava/lang/String;Lcom/badlogic/gdx/Files$FileType;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "classpath", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "internal", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "external", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "absolute", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "local", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "getExternalStoragePath", "()Ljava/lang/String;" },
	{ "isExternalStorageAvailable", "()Z" },
	{ "getLocalStoragePath", "()Ljava/lang/String;" },
	{ "isLocalStorageAvailable", "()Z" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_Files$FileType,
};

static MethodMetadata methods[] {
	{ "getFileHandle", 0, INDEX_com_badlogic_gdx_Files_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;Lcom/badlogic/gdx/Files$FileType;)Lcom/badlogic/gdx/files/FileHandle;", 1025 },
	{ "classpath", 0, INDEX_com_badlogic_gdx_Files_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1025 },
	{ "internal", 0, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1025 },
	{ "external", 0, INDEX_com_badlogic_gdx_Files_external_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1025 },
	{ "absolute", 0, INDEX_com_badlogic_gdx_Files_absolute_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1025 },
	{ "local", 0, INDEX_com_badlogic_gdx_Files_local_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1025 },
	{ "getExternalStoragePath", 0, INDEX_com_badlogic_gdx_Files_getExternalStoragePath_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "isExternalStorageAvailable", 0, INDEX_com_badlogic_gdx_Files_isExternalStorageAvailable_R_boolean, "()Z", 1025 },
	{ "getLocalStoragePath", 0, INDEX_com_badlogic_gdx_Files_getLocalStoragePath_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "isLocalStorageAvailable", 0, INDEX_com_badlogic_gdx_Files_isLocalStorageAvailable_R_boolean, "()Z", 1025 },
};

Class class_com_badlogic_gdx_Files{
		.nativeName = (intptr_t) "com/badlogic/gdx/Files",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Files),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Files,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Files,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Files,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Files = registerClass(&class_com_badlogic_gdx_Files);

}

