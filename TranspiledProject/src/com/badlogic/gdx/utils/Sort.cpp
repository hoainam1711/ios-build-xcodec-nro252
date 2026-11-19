#include "com/badlogic/gdx/utils/Sort.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/ComparableTimSort.h"
#include "com/badlogic/gdx/utils/TimSort.h"
#include "java/util/Comparator.h"
#include "com/badlogic/gdx/utils/Sort.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_Sort_instance;

void mark_com_badlogic_gdx_utils_Sort(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_Sort_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Sort_instance)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Sort_instance, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_Sort *) object;
	if (self->F_timSort)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timSort)->clazz)->markFunction)((jobject) self->F_timSort, mark, depth + 1);
	if (self->F_comparableTimSort)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comparableTimSort)->clazz)->markFunction)((jobject) self->F_comparableTimSort, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Sort(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_Sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Sort:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Sort(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Sort:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ComparableTimSort);
	init_com_badlogic_gdx_utils_ComparableTimSort(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Sort *) NULL_CHECK(sp[0].o))->F_comparableTimSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Sort:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ComparableTimSort);
	init_com_badlogic_gdx_utils_ComparableTimSort(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Sort *) NULL_CHECK(sp[0].o))->F_comparableTimSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	((func_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int])(ctx, sp[0].o, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Sort:sort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ComparableTimSort);
	init_com_badlogic_gdx_utils_ComparableTimSort(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Sort *) NULL_CHECK(sp[0].o))->F_comparableTimSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	((func_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Sort:sort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_TimSort);
	init_com_badlogic_gdx_utils_TimSort(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Sort *) NULL_CHECK(sp[0].o))->F_timSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].o), (jint(0)), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Sort:sort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_TimSort);
	init_com_badlogic_gdx_utils_TimSort(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Sort *) NULL_CHECK(sp[0].o))->F_timSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	((func_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Sort:sort", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_TimSort);
	init_com_badlogic_gdx_utils_TimSort(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Sort *) NULL_CHECK(sp[0].o))->F_timSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	((func_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Sort_instance_R_com_badlogic_gdx_utils_Sort(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Sort:instance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Sort(ctx);
	{
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_utils_Sort(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Sort_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_Sort(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Sort);
	init_com_badlogic_gdx_utils_Sort(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Sort(ctx);
	SF_com_badlogic_gdx_utils_Sort_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(65);
	clinit_com_badlogic_gdx_utils_Sort(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Sort_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Sort[] {
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
	(void *) M_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_int_int,
	(void *) M_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array_java_util_Comparator,
	(void *) M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator,
	(void *) M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int,
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
	{ "sort", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "sort", "([Ljava/lang/Object;)V" },
	{ "sort", "([Ljava/lang/Object;II)V" },
	{ "sort", "(Lcom/badlogic/gdx/utils/Array;Ljava/util/Comparator;)V" },
	{ "sort", "([Ljava/lang/Object;Ljava/util/Comparator;)V" },
	{ "sort", "([Ljava/lang/Object;Ljava/util/Comparator;II)V" },
};

static FieldMetadata fields[] {
	{ "instance", &class_com_badlogic_gdx_utils_Sort, (intptr_t) &SF_com_badlogic_gdx_utils_Sort_instance, "Lcom/badlogic/gdx/utils/Sort;", 10 },
	{ "timSort", &class_com_badlogic_gdx_utils_TimSort, offsetof(com_badlogic_gdx_utils_Sort, F_timSort), "Lcom/badlogic/gdx/utils/TimSort;", 2 },
	{ "comparableTimSort", &class_com_badlogic_gdx_utils_ComparableTimSort, offsetof(com_badlogic_gdx_utils_Sort, F_comparableTimSort), "Lcom/badlogic/gdx/utils/ComparableTimSort;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Sort, 0, "()V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_int_int, VTABLE_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_int_int, "([Ljava/lang/Object;II)V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array_java_util_Comparator, VTABLE_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array_java_util_Comparator, "(Lcom/badlogic/gdx/utils/Array;Ljava/util/Comparator;)V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator, VTABLE_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator, "([Ljava/lang/Object;Ljava/util/Comparator;)V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int, VTABLE_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int, "([Ljava/lang/Object;Ljava/util/Comparator;II)V", 1 },
	{ "instance", (intptr_t) SM_com_badlogic_gdx_utils_Sort_instance_R_com_badlogic_gdx_utils_Sort, 0, "()Lcom/badlogic/gdx/utils/Sort;", 9 },
};

Class class_com_badlogic_gdx_utils_Sort{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Sort",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Sort),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Sort,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Sort,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Sort,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Sort = registerClass(&class_com_badlogic_gdx_utils_Sort);

}

