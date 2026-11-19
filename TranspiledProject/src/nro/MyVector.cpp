#include "nro/MyVector.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "nro/MyVector.h"
#include "java/util/Vector.h"
#include "nro/Res.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"

extern "C" {


void mark_nro_MyVector(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Vector(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_MyVector *) object;
}

void clinit_nro_MyVector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Vector(ctx);
}

void init_nro_MyVector_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MyVector:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MyVector(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(7);
	init_java_util_Vector(ctx, (frame[0].o));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_MyVector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MyVector:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MyVector(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_util_Vector(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MyVector_removeAllElements(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MyVector:removeAllElements", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	M_java_util_Vector_removeAllElements(ctx, (frame[0].o));
	LINE_NUMBER(16);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_nro_MyVector_removeElement_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MyVector:removeElement", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	jint temp0 = (jint)M_java_util_Vector_removeElement_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_nro_MyVector_removeElementAt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MyVector:removeElementAt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(23);
	M_java_util_Vector_removeElementAt_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(24);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MyVector_addElement_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MyVector:addElement", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[0].o));
	if (temp0 <= (1000)) goto label_1;
	}
	{
	LINE_NUMBER(28);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|||||||||||||||||||||||||||||||||||||||||||| num= "_j))));
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(31);
	M_java_util_Vector_addElement_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(32);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MyVector_insertElementAt_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MyVector:insertElementAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(35);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[0].o));
	if (temp0 <= (1000)) goto label_1;
	}
	{
	LINE_NUMBER(36);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|||||||||||||||||||||||||||||||||||||||||||| num= "_j))));
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(39);
	M_java_util_Vector_insertElementAt_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(40);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_MyVector[] {
	(void *) M_java_util_Vector_hashCode_R_int,
	(void *) M_java_util_Vector_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Vector_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_AbstractList_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_Vector_add_java_lang_Object_R_boolean,
	(void *) M_java_util_Vector_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_clear,
	(void *) M_java_util_Vector_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Vector_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_isEmpty_R_boolean,
	(void *) M_java_util_Vector_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_Vector_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_size_R_int,
	(void *) M_java_util_Vector_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Vector_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_Vector_add_int_java_lang_Object,
	(void *) M_java_util_Vector_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_get_int_R_java_lang_Object,
	(void *) M_java_util_Vector_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_Vector_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_AbstractList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_java_util_Vector_remove_int_R_java_lang_Object,
	(void *) M_java_util_Vector_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Vector_subList_int_int_R_java_util_List,
	(void *) M_java_util_Vector_removeRange_int_int,
	(void *) M_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object,
	(void *) M_nro_MyVector_addElement_java_lang_Object,
	(void *) M_java_util_Vector_capacity_R_int,
	(void *) M_java_util_Vector_copyInto_Array1_java_lang_Object,
	(void *) M_java_util_Vector_elementAt_int_R_java_lang_Object,
	(void *) M_java_util_Vector_elements_R_java_util_Enumeration,
	(void *) M_java_util_Vector_ensureCapacity_int,
	(void *) M_java_util_Vector_firstElement_R_java_lang_Object,
	(void *) M_java_util_Vector_grow_int,
	(void *) M_java_util_Vector_growByOne,
	(void *) M_java_util_Vector_growBy_int,
	(void *) M_java_util_Vector_indexOf_java_lang_Object_int_R_int,
	(void *) M_nro_MyVector_insertElementAt_java_lang_Object_int,
	(void *) M_java_util_Vector_lastElement_R_java_lang_Object,
	(void *) M_java_util_Vector_lastIndexOf_java_lang_Object_int_R_int,
	(void *) M_nro_MyVector_removeAllElements,
	(void *) M_nro_MyVector_removeElement_java_lang_Object_R_boolean,
	(void *) M_nro_MyVector_removeElementAt_int,
	(void *) M_java_util_Vector_setElementAt_java_lang_Object_int,
	(void *) M_java_util_Vector_setSize_int,
	(void *) M_java_util_Vector_trimToSize,
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
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Ljava/util/Collection;)Z" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "containsAll", "(Ljava/util/Collection;)Z" },
	{ "isEmpty", "()Z" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "removeAll", "(Ljava/util/Collection;)Z" },
	{ "retainAll", "(Ljava/util/Collection;)Z" },
	{ "size", "()I" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;" },
	{ "add", "(ILjava/lang/Object;)V" },
	{ "addAll", "(ILjava/util/Collection;)Z" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "indexOf", "(Ljava/lang/Object;)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;)I" },
	{ "listIterator", "()Ljava/util/ListIterator;" },
	{ "listIterator", "(I)Ljava/util/ListIterator;" },
	{ "sort", "(Ljava/util/Comparator;)V" },
	{ "remove", "(I)Ljava/lang/Object;" },
	{ "set", "(ILjava/lang/Object;)Ljava/lang/Object;" },
	{ "subList", "(II)Ljava/util/List;" },
	{ "removeRange", "(II)V" },
	{ "newElementArray", "(I)[Ljava/lang/Object;" },
	{ "addElement", "(Ljava/lang/Object;)V" },
	{ "capacity", "()I" },
	{ "copyInto", "([Ljava/lang/Object;)V" },
	{ "elementAt", "(I)Ljava/lang/Object;" },
	{ "elements", "()Ljava/util/Enumeration;" },
	{ "ensureCapacity", "(I)V" },
	{ "firstElement", "()Ljava/lang/Object;" },
	{ "grow", "(I)V" },
	{ "growByOne", "()V" },
	{ "growBy", "(I)V" },
	{ "indexOf", "(Ljava/lang/Object;I)I" },
	{ "insertElementAt", "(Ljava/lang/Object;I)V" },
	{ "lastElement", "()Ljava/lang/Object;" },
	{ "lastIndexOf", "(Ljava/lang/Object;I)I" },
	{ "removeAllElements", "()V" },
	{ "removeElement", "(Ljava/lang/Object;)Z" },
	{ "removeElementAt", "(I)V" },
	{ "setElementAt", "(Ljava/lang/Object;I)V" },
	{ "setSize", "(I)V" },
	{ "trimToSize", "()V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_MyVector_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_nro_MyVector, 0, "()V", 2 },
	{ "removeAllElements", (intptr_t) M_nro_MyVector_removeAllElements, VTABLE_nro_MyVector_removeAllElements, "()V", 33 },
	{ "removeElement", (intptr_t) M_nro_MyVector_removeElement_java_lang_Object_R_boolean, VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "removeElementAt", (intptr_t) M_nro_MyVector_removeElementAt_int, VTABLE_nro_MyVector_removeElementAt_int, "(I)V", 33 },
	{ "addElement", (intptr_t) M_nro_MyVector_addElement_java_lang_Object, VTABLE_nro_MyVector_addElement_java_lang_Object, "(Ljava/lang/Object;)V", 33 },
	{ "insertElementAt", (intptr_t) M_nro_MyVector_insertElementAt_java_lang_Object_int, VTABLE_nro_MyVector_insertElementAt_java_lang_Object_int, "(Ljava/lang/Object;I)V", 33 },
};

Class class_nro_MyVector{
		.nativeName = (intptr_t) "nro/MyVector",
		.parentClass = (intptr_t) &class_java_util_Vector,
		.size = sizeof(nro_MyVector),
		.classVtable = (intptr_t) vtable_nro_MyVector,
		.staticInitializer = (intptr_t) clinit_nro_MyVector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_MyVector,
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
		.vtableSize = 59,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_MyVector = registerClass(&class_nro_MyVector);

}

