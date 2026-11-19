#include "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "java/util/Iterator.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"
#include "com/badlogic/gdx/utils/OrderedSet.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/UIUtils.h"
#include "com/badlogic/gdx/utils/OrderedSet_OrderedSetIterator.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_utils_Selection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
	if (self->F_rangeStart)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rangeStart)->clazz)->markFunction)((jobject) self->F_rangeStart, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_Selection(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	init_com_badlogic_gdx_scenes_scene2d_utils_Selection(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_rangeSelect = (jint(1));
	LINE_NUMBER(16);
	((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[1].o);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_choose_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection:choose", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(21);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_isDisabled) == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(23);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_rangeSelect) == 0) goto label_3;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_multiple) != 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(24);
	M_com_badlogic_gdx_scenes_scene2d_utils_Selection_choose_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_6;
	}
	sp->i = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_shift_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) goto label_6;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_rangeStart;
	if (sp[0].o != nullptr) goto label_8;
	}
	INST_ICONST(-1);
	goto label_9;
label_8:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_rangeStart;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(30);
	if ((frame[2].i) == (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_rangeStart;
	frame[3].o = sp[0].o;
	LINE_NUMBER(32);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_snapshot])(ctx, (frame[0].o));
	LINE_NUMBER(34);
	frame[4].i = (frame[2].i);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	frame[5].i = temp0;
	LINE_NUMBER(35);
	if ((frame[4].i) <= (frame[5].i)) goto label_16;
	}
	{
	LINE_NUMBER(36);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(37);
	frame[5].i = (frame[4].i);
	LINE_NUMBER(38);
	frame[4].i = (frame[6].i);
	}
label_16:;
	{
	LINE_NUMBER(40);
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_ctrl_R_boolean(ctx);
	if (temp0 != 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_com_badlogic_gdx_utils_OrderedSet_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_clear_int])(ctx, sp[0].o, (8));
	}
label_20:;
	{
	LINE_NUMBER(41);
	frame[6].i = (frame[4].i);
	}
label_21:;
	{
	if ((frame[6].i) > (frame[5].i)) goto label_22;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[6].i));
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(41);
	INST_IINC(6, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(43);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(44);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_revert])(ctx, (frame[0].o));
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(46);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_changed])(ctx, (frame[0].o));
	}
label_27:;
	{
	LINE_NUMBER(47);
	((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_rangeStart = (jref) (frame[3].o);
	LINE_NUMBER(48);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(52);
	M_com_badlogic_gdx_scenes_scene2d_utils_Selection_choose_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(53);
	((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_rangeStart = (jref) (frame[1].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_changed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection:changed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_rangeStart = (jref) (jobject(nullptr));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_getRangeSelect_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection:getRangeSelect", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_rangeSelect);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setRangeSelect_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection:setRangeSelect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(66);
	((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_rangeSelect = (frame[1].i);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection:validate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ArraySelection *) NULL_CHECK((frame[0].o)))->F_array;
	frame[1].o = sp[0].o;
	LINE_NUMBER(73);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size) != 0) goto label_2;
	}
	{
	LINE_NUMBER(74);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear])(ctx, (frame[0].o));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(77);
	frame[2].i = (jint(0));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_items_R_com_badlogic_gdx_utils_OrderedSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_items_R_com_badlogic_gdx_utils_OrderedSet])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean])(ctx, (frame[1].o), (frame[4].o), (jint(0)));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(81);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(82);
	frame[2].i = (jint(1));
	}
label_10:;
	LINE_NUMBER(84);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(85);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_required) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_13;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(87);
	if ((frame[2].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(88);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_changed])(ctx, (frame[0].o));
	}
label_15:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setDisabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_isDisabled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_choose_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_hasItems_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_size_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_items_R_com_badlogic_gdx_utils_OrderedSet,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_first_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_set_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_add_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_addAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_remove_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_removeAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_changed,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_contains_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getLastSelected_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toArray_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getToggle_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setToggle_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getMultiple_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setMultiple_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getRequired_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setRequired_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setProgrammaticChangeEvents_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getProgrammaticChangeEvents_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_getRangeSelect_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setRangeSelect_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate,
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
	{ "setDisabled", "(Z)V" },
	{ "isDisabled", "()Z" },
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "setActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "choose", "(Ljava/lang/Object;)V" },
	{ "hasItems", "()Z" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "size", "()I" },
	{ "items", "()Lcom/badlogic/gdx/utils/OrderedSet;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "snapshot", "()V" },
	{ "revert", "()V" },
	{ "cleanup", "()V" },
	{ "set", "(Ljava/lang/Object;)V" },
	{ "setAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "add", "(Ljava/lang/Object;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "remove", "(Ljava/lang/Object;)V" },
	{ "removeAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "clear", "()V" },
	{ "changed", "()V" },
	{ "fireChangeEvent", "()Z" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "getLastSelected", "()Ljava/lang/Object;" },
	{ "toArray", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "toArray", "(Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/utils/Array;" },
	{ "getToggle", "()Z" },
	{ "setToggle", "(Z)V" },
	{ "getMultiple", "()Z" },
	{ "setMultiple", "(Z)V" },
	{ "getRequired", "()Z" },
	{ "setRequired", "(Z)V" },
	{ "setProgrammaticChangeEvents", "(Z)V" },
	{ "getProgrammaticChangeEvents", "()Z" },
	{ "getRangeSelect", "()Z" },
	{ "setRangeSelect", "(Z)V" },
	{ "validate", "()V" },
};

static FieldMetadata fields[] {
	{ "array", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ArraySelection, F_array), "Lcom/badlogic/gdx/utils/Array;", 2 },
	{ "rangeSelect", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ArraySelection, F_rangeSelect), "Z", 2 },
	{ "rangeStart", &class_java_lang_Object, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ArraySelection, F_rangeStart), "Ljava/lang/Object;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "choose", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_choose_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_choose_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "changed", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_changed, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_changed, "()V", 4 },
	{ "getRangeSelect", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_getRangeSelect_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_getRangeSelect_R_boolean, "()Z", 1 },
	{ "setRangeSelect", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setRangeSelect_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setRangeSelect_boolean, "(Z)V", 1 },
	{ "validate", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate, "()V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_utils_Selection,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_ArraySelection),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 51,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection);

}

