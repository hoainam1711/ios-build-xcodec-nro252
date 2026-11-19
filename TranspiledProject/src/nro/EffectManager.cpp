#include "nro/EffectManager.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "nro/Effect_End.h"
#include "nro/EffectManager.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"

extern "C" {

jobject SF_nro_EffectManager_lowEffects;
jobject SF_nro_EffectManager_midEffects;
jobject SF_nro_EffectManager_mid_2Effects;
jobject SF_nro_EffectManager_high_2Effects;

void mark_nro_EffectManager(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_EffectManager_lowEffects)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_EffectManager_lowEffects)->clazz)->markFunction)((jobject) SF_nro_EffectManager_lowEffects, mark, depth + 1);
		if (SF_nro_EffectManager_midEffects)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_EffectManager_midEffects)->clazz)->markFunction)((jobject) SF_nro_EffectManager_midEffects, mark, depth + 1);
		if (SF_nro_EffectManager_mid_2Effects)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_EffectManager_mid_2Effects)->clazz)->markFunction)((jobject) SF_nro_EffectManager_mid_2Effects, mark, depth + 1);
		if (SF_nro_EffectManager_high_2Effects)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_EffectManager_high_2Effects)->clazz)->markFunction)((jobject) SF_nro_EffectManager_high_2Effects, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_MyVector(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_EffectManager *) object;
}

void M_nro_EffectManager_updateAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectManager:updateAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(12);
	jint temp0 = (jint)((func_nro_EffectManager_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_EffectManager_size_R_int])(ctx, (frame[0].o));
	frame[1].i = (temp0 - (jint(1)));
	}
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)((func_nro_EffectManager_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_EffectManager_elementAt_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_Effect_End, sp[0].o);
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(15);
	((func_nro_Effect_End_upd_End_Rock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Effect_End_upd_End_Rock])(ctx, (frame[2].o));
	LINE_NUMBER(16);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[2].o)))->F_isRemove) == 0) goto label_5;
	}
	{
	LINE_NUMBER(17);
	((func_nro_EffectManager_removeElementAt_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_EffectManager_removeElementAt_int])(ctx, (frame[0].o), (frame[1].i));
	}
label_5:;
	{
	LINE_NUMBER(12);
	INST_IINC(1, -1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_EffectManager_update(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectManager:update", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectManager(ctx);
	{
	LINE_NUMBER(25);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_high_2Effects;
	M_nro_EffectManager_updateAll(ctx, sp[0].o);
	LINE_NUMBER(26);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_midEffects;
	M_nro_EffectManager_updateAll(ctx, sp[0].o);
	LINE_NUMBER(27);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_mid_2Effects;
	M_nro_EffectManager_updateAll(ctx, sp[0].o);
	LINE_NUMBER(28);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_lowEffects;
	M_nro_EffectManager_updateAll(ctx, sp[0].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_EffectManager_paintAll_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectManager:paintAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_nro_EffectManager_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_EffectManager_size_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_nro_EffectManager_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_EffectManager_elementAt_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Effect_End, sp[0].o);
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[3].o)))->F_isRemove) != 0) goto label_5;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_nro_EffectManager_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_EffectManager_elementAt_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].i));
	((func_nro_Effect_End_pnt_End_Rock_lib_mGraphics) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Effect_End, sp[0].o)))->vtable)[VTABLE_nro_Effect_End_pnt_End_Rock_lib_mGraphics])(ctx, (checkCast(ctx, &class_nro_Effect_End, sp[0].o)), (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(32);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_EffectManager_d(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectManager:d", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	jint temp0 = (jint)((func_nro_EffectManager_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_EffectManager_size_R_int])(ctx, (frame[0].o));
	frame[1].i = (temp0 - (jint(1)));
	}
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_nro_EffectManager_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_EffectManager_elementAt_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_Effect_End, sp[0].o);
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(45);
	((nro_Effect_End *) NULL_CHECK((frame[2].o)))->F_isRemove = (jint(1));
	LINE_NUMBER(46);
	((func_nro_EffectManager_removeElementAt_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_EffectManager_removeElementAt_int])(ctx, (frame[0].o), (frame[1].i));
	}
label_5:;
	{
	LINE_NUMBER(42);
	INST_IINC(1, -1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_EffectManager_remove(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectManager:remove", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectManager(ctx);
	{
	LINE_NUMBER(53);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_high_2Effects;
	M_nro_EffectManager_d(ctx, sp[0].o);
	LINE_NUMBER(54);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_lowEffects;
	M_nro_EffectManager_d(ctx, sp[0].o);
	LINE_NUMBER(55);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_midEffects;
	M_nro_EffectManager_d(ctx, sp[0].o);
	LINE_NUMBER(56);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_mid_2Effects;
	M_nro_EffectManager_d(ctx, sp[0].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_EffectManager_addHiEffect_nro_Effect_End(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectManager:addHiEffect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectManager(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(60);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_high_2Effects;
	((func_nro_EffectManager_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectManager_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_EffectManager_addMidEffects_nro_Effect_End(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectManager:addMidEffects", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectManager(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(64);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_midEffects;
	((func_nro_EffectManager_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectManager_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_EffectManager_addMid_2Effects_nro_Effect_End(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectManager:addMid_2Effects", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectManager(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_mid_2Effects;
	((func_nro_EffectManager_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectManager_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_EffectManager_addLowEffect_nro_Effect_End(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectManager:addLowEffect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectManager(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(72);
	clinit_nro_EffectManager(ctx);
	sp[0].o = (jobject)SF_nro_EffectManager_lowEffects;
	((func_nro_EffectManager_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectManager_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_EffectManager_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectManager:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectManager(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	init_nro_MyVector_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_EffectManager(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_MyVector(ctx);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectManager:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectManager(ctx);
	{
	LINE_NUMBER(6);
	clinit_nro_EffectManager(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectManager);
	init_nro_EffectManager_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"low"_j))));
	clinit_nro_EffectManager(ctx);
	SF_nro_EffectManager_lowEffects = sp[0].o;
	LINE_NUMBER(7);
	clinit_nro_EffectManager(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectManager);
	init_nro_EffectManager_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mid"_j))));
	clinit_nro_EffectManager(ctx);
	SF_nro_EffectManager_midEffects = sp[0].o;
	LINE_NUMBER(8);
	clinit_nro_EffectManager(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectManager);
	init_nro_EffectManager_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mid2"_j))));
	clinit_nro_EffectManager(ctx);
	SF_nro_EffectManager_mid_2Effects = sp[0].o;
	LINE_NUMBER(9);
	clinit_nro_EffectManager(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectManager);
	init_nro_EffectManager_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hi"_j))));
	clinit_nro_EffectManager(ctx);
	SF_nro_EffectManager_high_2Effects = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_EffectManager[] {
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
	(void *) M_nro_EffectManager_updateAll,
	(void *) M_nro_EffectManager_paintAll_lib_mGraphics,
	(void *) M_nro_EffectManager_d,
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
	{ "updateAll", "()V" },
	{ "paintAll", "(Llib/mGraphics;)V" },
	{ "d", "()V" },
};

static FieldMetadata fields[] {
	{ "lowEffects", &class_nro_EffectManager, (intptr_t) &SF_nro_EffectManager_lowEffects, "Lnro/EffectManager;", 9 },
	{ "midEffects", &class_nro_EffectManager, (intptr_t) &SF_nro_EffectManager_midEffects, "Lnro/EffectManager;", 9 },
	{ "mid_2Effects", &class_nro_EffectManager, (intptr_t) &SF_nro_EffectManager_mid_2Effects, "Lnro/EffectManager;", 9 },
	{ "high_2Effects", &class_nro_EffectManager, (intptr_t) &SF_nro_EffectManager_high_2Effects, "Lnro/EffectManager;", 9 },
};

static MethodMetadata methods[] {
	{ "updateAll", (intptr_t) M_nro_EffectManager_updateAll, VTABLE_nro_EffectManager_updateAll, "()V", 2 },
	{ "update", (intptr_t) SM_nro_EffectManager_update, 0, "()V", 9 },
	{ "paintAll", (intptr_t) M_nro_EffectManager_paintAll_lib_mGraphics, VTABLE_nro_EffectManager_paintAll_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "d", (intptr_t) M_nro_EffectManager_d, VTABLE_nro_EffectManager_d, "()V", 2 },
	{ "remove", (intptr_t) SM_nro_EffectManager_remove, 0, "()V", 9 },
	{ "addHiEffect", (intptr_t) SM_nro_EffectManager_addHiEffect_nro_Effect_End, 0, "(Lnro/Effect_End;)V", 9 },
	{ "addMidEffects", (intptr_t) SM_nro_EffectManager_addMidEffects_nro_Effect_End, 0, "(Lnro/Effect_End;)V", 9 },
	{ "addMid_2Effects", (intptr_t) SM_nro_EffectManager_addMid_2Effects_nro_Effect_End, 0, "(Lnro/Effect_End;)V", 9 },
	{ "addLowEffect", (intptr_t) SM_nro_EffectManager_addLowEffect_nro_Effect_End, 0, "(Lnro/Effect_End;)V", 9 },
	{ "<init>", (intptr_t) init_nro_EffectManager_java_lang_String, 0, "(Ljava/lang/String;)V", 2 },
	{ "<clinit>", (intptr_t) clinit_nro_EffectManager, 0, "()V", 8 },
};

Class class_nro_EffectManager{
		.nativeName = (intptr_t) "nro/EffectManager",
		.parentClass = (intptr_t) &class_nro_MyVector,
		.size = sizeof(nro_EffectManager),
		.classVtable = (intptr_t) vtable_nro_EffectManager,
		.staticInitializer = (intptr_t) clinit_nro_EffectManager,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_EffectManager,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 62,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_EffectManager = registerClass(&class_nro_EffectManager);

}

