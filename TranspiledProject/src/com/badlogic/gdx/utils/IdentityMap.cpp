#include "com/badlogic/gdx/utils/IdentityMap.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/utils/IdentityMap.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/lang/Iterable.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_utils_IdentityMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_ObjectMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_IdentityMap *) object;
}

void clinit_com_badlogic_gdx_utils_IdentityMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
}

void init_com_badlogic_gdx_utils_IdentityMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IdentityMap:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IdentityMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, (frame[0].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IdentityMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IdentityMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IdentityMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(42);
	init_com_badlogic_gdx_utils_ObjectMap_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IdentityMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IdentityMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IdentityMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(49);
	init_com_badlogic_gdx_utils_ObjectMap_int_float(ctx, (frame[0].o), (frame[1].i), (frame[2].f));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IdentityMap_com_badlogic_gdx_utils_IdentityMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IdentityMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IdentityMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	init_com_badlogic_gdx_utils_ObjectMap_com_badlogic_gdx_utils_ObjectMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IdentityMap_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IdentityMap:place", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	jint temp0 = (jint)SM_java_lang_System_identityHashCode_java_lang_Object_R_int(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>(temp0) >> ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_shift)));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IdentityMap_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IdentityMap:locateKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"key cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(64);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IdentityMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IdentityMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(65);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(66);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_5:;
	{
	LINE_NUMBER(67);
	if ((frame[4].o) != (frame[1].o)) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(64);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_3;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IdentityMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IdentityMap:hashCode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(74);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(75);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(76);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(77);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(78);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_lang_System_identityHashCode_java_lang_Object_R_int(ctx, (frame[6].o));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(79);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(80);
	if ((frame[7].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[7].o));
	frame[1].i = (temp0 + temp1);
	}
label_9:;
	{
	LINE_NUMBER(75);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_IdentityMap[] {
	(void *) M_com_badlogic_gdx_utils_IdentityMap_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_IdentityMap_place_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_IdentityMap_locateKey_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_putAll_com_badlogic_gdx_utils_ObjectMap,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_putResize_java_lang_Object_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_shrink_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_clear_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_clear,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_ensureCapacity_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_resize_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_equalsIdentity_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "place", "(Ljava/lang/Object;)I" },
	{ "locateKey", "(Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putMissing", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Lcom/badlogic/gdx/utils/ObjectMap;)V" },
	{ "putResize", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(Ljava/lang/Object;Z)Z" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "findKey", "(Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "equalsIdentity", "(Ljava/lang/Object;)Z" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/ObjectMap$Entries;" },
	{ "entries", "()Lcom/badlogic/gdx/utils/ObjectMap$Entries;" },
	{ "values", "()Lcom/badlogic/gdx/utils/ObjectMap$Values;" },
	{ "keys", "()Lcom/badlogic/gdx/utils/ObjectMap$Keys;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IdentityMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IdentityMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IdentityMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IdentityMap_com_badlogic_gdx_utils_IdentityMap, 0, "(Lcom/badlogic/gdx/utils/IdentityMap;)V", 1 },
	{ "place", (intptr_t) M_com_badlogic_gdx_utils_IdentityMap_place_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_IdentityMap_place_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4 },
	{ "locateKey", (intptr_t) M_com_badlogic_gdx_utils_IdentityMap_locateKey_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_IdentityMap_locateKey_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 0 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_IdentityMap_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_IdentityMap_hashCode_R_int, "()I", 1 },
};

Class class_com_badlogic_gdx_utils_IdentityMap{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/IdentityMap",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_ObjectMap,
		.size = sizeof(com_badlogic_gdx_utils_IdentityMap),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_IdentityMap,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_IdentityMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_IdentityMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_IdentityMap = registerClass(&class_com_badlogic_gdx_utils_IdentityMap);

}

