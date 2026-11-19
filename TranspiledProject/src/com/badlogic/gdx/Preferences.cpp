#include "com/badlogic/gdx/Preferences.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Preferences.h"
#include "java/util/Map.h"

extern "C" {


void mark_com_badlogic_gdx_Preferences(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_Preferences *) object;
}

void clinit_com_badlogic_gdx_Preferences(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_Preferences[] {
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
	{ "putBoolean", "(Ljava/lang/String;Z)Lcom/badlogic/gdx/Preferences;" },
	{ "putInteger", "(Ljava/lang/String;I)Lcom/badlogic/gdx/Preferences;" },
	{ "putLong", "(Ljava/lang/String;J)Lcom/badlogic/gdx/Preferences;" },
	{ "putFloat", "(Ljava/lang/String;F)Lcom/badlogic/gdx/Preferences;" },
	{ "putString", "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/Preferences;" },
	{ "put", "(Ljava/util/Map;)Lcom/badlogic/gdx/Preferences;" },
	{ "getBoolean", "(Ljava/lang/String;)Z" },
	{ "getInteger", "(Ljava/lang/String;)I" },
	{ "getLong", "(Ljava/lang/String;)J" },
	{ "getFloat", "(Ljava/lang/String;)F" },
	{ "getString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getBoolean", "(Ljava/lang/String;Z)Z" },
	{ "getInteger", "(Ljava/lang/String;I)I" },
	{ "getLong", "(Ljava/lang/String;J)J" },
	{ "getFloat", "(Ljava/lang/String;F)F" },
	{ "getString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "get", "()Ljava/util/Map;" },
	{ "contains", "(Ljava/lang/String;)Z" },
	{ "clear", "()V" },
	{ "remove", "(Ljava/lang/String;)V" },
	{ "flush", "()V" },
};

static MethodMetadata methods[] {
	{ "putBoolean", 0, INDEX_com_badlogic_gdx_Preferences_putBoolean_java_lang_String_boolean_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;Z)Lcom/badlogic/gdx/Preferences;", 1025 },
	{ "putInteger", 0, INDEX_com_badlogic_gdx_Preferences_putInteger_java_lang_String_int_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;I)Lcom/badlogic/gdx/Preferences;", 1025 },
	{ "putLong", 0, INDEX_com_badlogic_gdx_Preferences_putLong_java_lang_String_long_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;J)Lcom/badlogic/gdx/Preferences;", 1025 },
	{ "putFloat", 0, INDEX_com_badlogic_gdx_Preferences_putFloat_java_lang_String_float_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;F)Lcom/badlogic/gdx/Preferences;", 1025 },
	{ "putString", 0, INDEX_com_badlogic_gdx_Preferences_putString_java_lang_String_java_lang_String_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/Preferences;", 1025 },
	{ "put", 0, INDEX_com_badlogic_gdx_Preferences_put_java_util_Map_R_com_badlogic_gdx_Preferences, "(Ljava/util/Map;)Lcom/badlogic/gdx/Preferences;", 1025 },
	{ "getBoolean", 0, INDEX_com_badlogic_gdx_Preferences_getBoolean_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1025 },
	{ "getInteger", 0, INDEX_com_badlogic_gdx_Preferences_getInteger_java_lang_String_R_int, "(Ljava/lang/String;)I", 1025 },
	{ "getLong", 0, INDEX_com_badlogic_gdx_Preferences_getLong_java_lang_String_R_long, "(Ljava/lang/String;)J", 1025 },
	{ "getFloat", 0, INDEX_com_badlogic_gdx_Preferences_getFloat_java_lang_String_R_float, "(Ljava/lang/String;)F", 1025 },
	{ "getString", 0, INDEX_com_badlogic_gdx_Preferences_getString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1025 },
	{ "getBoolean", 0, INDEX_com_badlogic_gdx_Preferences_getBoolean_java_lang_String_boolean_R_boolean, "(Ljava/lang/String;Z)Z", 1025 },
	{ "getInteger", 0, INDEX_com_badlogic_gdx_Preferences_getInteger_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1025 },
	{ "getLong", 0, INDEX_com_badlogic_gdx_Preferences_getLong_java_lang_String_long_R_long, "(Ljava/lang/String;J)J", 1025 },
	{ "getFloat", 0, INDEX_com_badlogic_gdx_Preferences_getFloat_java_lang_String_float_R_float, "(Ljava/lang/String;F)F", 1025 },
	{ "getString", 0, INDEX_com_badlogic_gdx_Preferences_getString_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1025 },
	{ "get", 0, INDEX_com_badlogic_gdx_Preferences_get_R_java_util_Map, "()Ljava/util/Map;", 1025 },
	{ "contains", 0, INDEX_com_badlogic_gdx_Preferences_contains_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1025 },
	{ "clear", 0, INDEX_com_badlogic_gdx_Preferences_clear, "()V", 1025 },
	{ "remove", 0, INDEX_com_badlogic_gdx_Preferences_remove_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "flush", 0, INDEX_com_badlogic_gdx_Preferences_flush, "()V", 1025 },
};

Class class_com_badlogic_gdx_Preferences{
		.nativeName = (intptr_t) "com/badlogic/gdx/Preferences",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Preferences),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Preferences,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Preferences,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Preferences,
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
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Preferences = registerClass(&class_com_badlogic_gdx_Preferences);

}

