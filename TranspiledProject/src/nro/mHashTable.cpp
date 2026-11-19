#include "nro/mHashTable.h"
#include "java/lang/Object.h"
#include "java/util/Hashtable.h"
#include "java/lang/String.h"
#include "nro/mHashTable.h"
#include "java/util/Map.h"

extern "C" {


void mark_nro_mHashTable(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Hashtable(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_mHashTable *) object;
}

void clinit_nro_mHashTable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Hashtable(ctx);
}

void init_nro_mHashTable_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mHashTable:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_mHashTable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(6);
	init_java_util_Hashtable(ctx, (frame[0].o));
	LINE_NUMBER(7);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_mHashTable_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mHashTable:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(10);
	M_java_util_Hashtable_clear(ctx, (frame[0].o));
	LINE_NUMBER(11);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mHashTable:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)M_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mHashTable:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)M_java_util_Hashtable_remove_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_nro_mHashTable[] {
	(void *) M_java_util_Hashtable_hashCode_R_int,
	(void *) M_java_util_Hashtable_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Hashtable_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Hashtable_elements_R_java_util_Enumeration,
	(void *) M_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Hashtable_isEmpty_R_boolean,
	(void *) M_java_util_Hashtable_keys_R_java_util_Enumeration,
	(void *) M_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Hashtable_size_R_int,
	(void *) M_nro_mHashTable_clear,
	(void *) M_java_util_Hashtable_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_Hashtable_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_Hashtable_entrySet_R_java_util_Set,
	(void *) M_java_util_Hashtable_keySet_R_java_util_Set,
	(void *) M_java_util_Hashtable_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_Map_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Hashtable_values_R_java_util_Collection,
	(void *) M_java_util_Hashtable_newElementArray_int_R_Array1_java_util_Hashtable$Entry,
	(void *) M_java_util_Hashtable_computeMaxSize,
	(void *) M_java_util_Hashtable_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Hashtable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry,
	(void *) M_java_util_Hashtable_rehash,
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
	{ "elements", "()Ljava/util/Enumeration;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "keys", "()Ljava/util/Enumeration;" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "size", "()I" },
	{ "clear", "()V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;)Z" },
	{ "entrySet", "()Ljava/util/Set;" },
	{ "keySet", "()Ljava/util/Set;" },
	{ "putAll", "(Ljava/util/Map;)V" },
	{ "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "forEach", "(Ljava/util/function/BiConsumer;)V" },
	{ "replaceAll", "(Ljava/util/function/BiFunction;)V" },
	{ "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" },
	{ "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "values", "()Ljava/util/Collection;" },
	{ "newElementArray", "(I)[Ljava/util/Hashtable$Entry;" },
	{ "computeMaxSize", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "getEntry", "(Ljava/lang/Object;)Ljava/util/Hashtable$Entry;" },
	{ "rehash", "()V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_mHashTable_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "clear", (intptr_t) M_nro_mHashTable_clear, VTABLE_nro_mHashTable_clear, "()V", 49 },
	{ "put", (intptr_t) M_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 49 },
	{ "remove", (intptr_t) M_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object, VTABLE_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 49 },
};

Class class_nro_mHashTable{
		.nativeName = (intptr_t) "nro/mHashTable",
		.parentClass = (intptr_t) &class_java_util_Hashtable,
		.size = sizeof(nro_mHashTable),
		.classVtable = (intptr_t) vtable_nro_mHashTable,
		.staticInitializer = (intptr_t) clinit_nro_mHashTable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_mHashTable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_mHashTable = registerClass(&class_nro_mHashTable);

}

