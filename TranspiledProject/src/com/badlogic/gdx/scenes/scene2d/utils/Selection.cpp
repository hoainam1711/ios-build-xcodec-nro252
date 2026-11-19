#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/UIUtils.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/utils/PoolManager.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Disableable.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/utils/OrderedSet.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/Deprecated.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ChangeListener_ChangeEvent.h"
#include "com/badlogic/gdx/utils/OrderedSet_OrderedSetIterator.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_Selection(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_Selection *) object;
	if (self->F_actor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actor)->clazz)->markFunction)((jobject) self->F_actor, mark, depth + 1);
	if (self->F_selected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selected)->clazz)->markFunction)((jobject) self->F_selected, mark, depth + 1);
	if (self->F_old)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_old)->clazz)->markFunction)((jobject) self->F_old, mark, depth + 1);
	if (self->F_lastSelected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastSelected)->clazz)->markFunction)((jobject) self->F_lastSelected, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_Selection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_utils_Selection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_Selection(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_OrderedSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedSet);
	init_com_badlogic_gdx_utils_OrderedSet(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK(sp[0].o))->F_selected = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_OrderedSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedSet);
	init_com_badlogic_gdx_utils_OrderedSet(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK(sp[0].o))->F_old = (jref) sp[1].o;
	LINE_NUMBER(23);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:setActor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (frame[1].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_choose_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:choose", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[5]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	if ((frame[1].o) != nullptr) goto label_14;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(35);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_isDisabled) == 0) goto label_15;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(36);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot])(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(38);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_toggle) != 0) goto label_16;
	}
	sp->i = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_ctrl_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_17
label_16:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_6; } // goto label_17
	}
	{
	LINE_NUMBER(39);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_required) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(57);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_17; }
	if (bypasses[1]) { bypasses[1] = false; goto label_17; }
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(41);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (jobject(nullptr));
	{ popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_12; } // goto label_21
	}
label_17:;
	{
	LINE_NUMBER(43);
	frame[2].i = (jint(0));
	LINE_NUMBER(44);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_multiple) == 0) goto label_23;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_toggle) != 0) { popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_9; } // goto label_24
	}
	sp->i = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_ctrl_R_boolean(ctx);
	sp++;
	if ((--sp)->i != 0) { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_9; } // goto label_24
label_23:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(57);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[3]) { bypasses[3] = false; goto label_24; }
	if (bypasses[4]) { bypasses[4] = false; goto label_24; }
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_26;
	}
	INST_ICONST(1);
	goto label_27;
label_26:;
	INST_ICONST(0);
label_27:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(47);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_com_badlogic_gdx_utils_OrderedSet_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_clear_int])(ctx, sp[0].o, (8));
	}
label_24:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(57);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_21; }
	{
	LINE_NUMBER(50);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (frame[1].o);
	}
label_21:;
	{
	LINE_NUMBER(52);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(53);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_11;
	}
label_30:;
	{
	LINE_NUMBER(55);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_11:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(57);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(58);
	goto label_33;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(57);
	frame[3].o = sp[0].o;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(58);
	throwException(ctx, (frame[3].o));	}
label_33:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_Selection_hasItems_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:hasItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_Selection_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_Selection_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_utils_Selection_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_Selection_items_R_com_badlogic_gdx_utils_OrderedSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:items", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_Selection_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:first", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_first_R_java_lang_Object])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:snapshot", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_old;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_com_badlogic_gdx_utils_OrderedSet_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_clear_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_old;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_com_badlogic_gdx_utils_OrderedSet_addAll_com_badlogic_gdx_utils_OrderedSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_addAll_com_badlogic_gdx_utils_OrderedSet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:revert", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_old;
	((func_com_badlogic_gdx_utils_OrderedSet_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_clear_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_old;
	((func_com_badlogic_gdx_utils_OrderedSet_addAll_com_badlogic_gdx_utils_OrderedSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_addAll_com_badlogic_gdx_utils_OrderedSet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:cleanup", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_old;
	((func_com_badlogic_gdx_utils_OrderedSet_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_clear_int])(ctx, sp[0].o, (32));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_first_R_java_lang_Object])(ctx, sp[0].o);
	if (sp[0].o != (frame[1].o)) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(106);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot])(ctx, (frame[0].o));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_com_badlogic_gdx_utils_OrderedSet_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_clear_int])(ctx, sp[0].o, (8));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(109);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(110);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(112);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (frame[1].o);
	LINE_NUMBER(113);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(115);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:setAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	frame[2].i = (jint(0));
	LINE_NUMBER(120);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot])(ctx, (frame[0].o));
	LINE_NUMBER(121);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (jobject(nullptr));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_com_badlogic_gdx_utils_OrderedSet_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_clear_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(123);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(125);
	if ((frame[5].o) != nullptr) goto label_10;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_11;
	}
	INST_ICONST(1);
	INST_ISTORE(2);
label_11:;
	{
	LINE_NUMBER(123);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(128);
	if ((frame[2].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(129);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(130);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(131);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK(sp[0].o))->F_lastSelected = (jref) sp[1].o;
	LINE_NUMBER(133);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_12:;
	{
	LINE_NUMBER(136);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(143);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(146);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (frame[1].o);
	LINE_NUMBER(147);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_addAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:addAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	frame[2].i = (jint(0));
	LINE_NUMBER(153);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot])(ctx, (frame[0].o));
	LINE_NUMBER(154);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(156);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	INST_ICONST(1);
	INST_ISTORE(2);
label_9:;
	{
	LINE_NUMBER(154);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(159);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(160);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(161);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK(sp[0].o))->F_lastSelected = (jref) sp[1].o;
	LINE_NUMBER(164);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(167);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_remove_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(173);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(176);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (jobject(nullptr));
	LINE_NUMBER(177);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_removeAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:removeAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	frame[2].i = (jint(0));
	LINE_NUMBER(183);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot])(ctx, (frame[0].o));
	LINE_NUMBER(184);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(186);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	INST_ICONST(1);
	INST_ISTORE(2);
label_9:;
	{
	LINE_NUMBER(184);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(189);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(190);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(191);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(193);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (jobject(nullptr));
	LINE_NUMBER(194);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(197);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(202);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (jobject(nullptr));
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(205);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot])(ctx, (frame[0].o));
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	((func_com_badlogic_gdx_utils_OrderedSet_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_clear_int])(ctx, sp[0].o, (8));
	LINE_NUMBER(207);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(208);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert])(ctx, (frame[0].o));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(210);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected = (jref) (jobject(nullptr));
	LINE_NUMBER(211);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed])(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(213);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup])(ctx, (frame[0].o));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:changed", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:fireChangeEvent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(225);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent)));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, sp[0].o, (frame[1].o));
	frame[2].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(229);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(229);
	frame[3].o = sp[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(230);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_Selection_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getLastSelected_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:getLastSelected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_lastSelected;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_Selection_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toArray_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:toArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator_toArray_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator_toArray_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setDisabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:setDisabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(263);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_isDisabled = (frame[1].i);
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_Selection_isDisabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:isDisabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_isDisabled);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getToggle_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:getToggle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_toggle);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setToggle_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:setToggle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(276);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_toggle = (frame[1].i);
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getMultiple_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:getMultiple", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_multiple);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setMultiple_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:setMultiple", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(285);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_multiple = (frame[1].i);
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getRequired_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:getRequired", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_required);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setRequired_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:setRequired", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(294);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_required = (frame[1].i);
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setProgrammaticChangeEvents_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:setProgrammaticChangeEvents", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(299);
	((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents = (frame[1].i);
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getProgrammaticChangeEvents_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:getProgrammaticChangeEvents", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Selection:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_Selection *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_scenes_scene2d_utils_Selection;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method hasItems
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_Selection[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_choose_java_lang_Object,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed,
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
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_Disableable, &class_java_lang_Iterable, };

static FieldMetadata fields[] {
	{ "actor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_utils_Selection, F_actor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "selected", &class_com_badlogic_gdx_utils_OrderedSet, offsetof(com_badlogic_gdx_scenes_scene2d_utils_Selection, F_selected), "Lcom/badlogic/gdx/utils/OrderedSet;", 16 },
	{ "old", &class_com_badlogic_gdx_utils_OrderedSet, offsetof(com_badlogic_gdx_scenes_scene2d_utils_Selection, F_old), "Lcom/badlogic/gdx/utils/OrderedSet;", 18 },
	{ "isDisabled", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_utils_Selection, F_isDisabled), "Z", 0 },
	{ "toggle", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_utils_Selection, F_toggle), "Z", 2 },
	{ "multiple", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_utils_Selection, F_multiple), "Z", 0 },
	{ "required", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_utils_Selection, F_required), "Z", 0 },
	{ "programmaticChangeEvents", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_utils_Selection, F_programmaticChangeEvents), "Z", 2 },
	{ "lastSelected", &class_java_lang_Object, offsetof(com_badlogic_gdx_scenes_scene2d_utils_Selection, F_lastSelected), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_Selection, 0, "()V", 1 },
	{ "setActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_setActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "choose", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_choose_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_choose_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "hasItems", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_hasItems_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_hasItems_R_boolean, "()Z", 131073 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_isEmpty_R_boolean, "()Z", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_size_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_size_R_int, "()I", 1 },
	{ "items", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_items_R_com_badlogic_gdx_utils_OrderedSet, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_items_R_com_badlogic_gdx_utils_OrderedSet, "()Lcom/badlogic/gdx/utils/OrderedSet;", 1 },
	{ "first", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_first_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "snapshot", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot, "()V", 0 },
	{ "revert", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert, "()V", 0 },
	{ "cleanup", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup, "()V", 0 },
	{ "set", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_set_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_set_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "setAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setAll_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_setAll_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_add_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_addAll_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_addAll_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_remove_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_remove_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "removeAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_removeAll_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_removeAll_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_clear, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_clear, "()V", 1 },
	{ "changed", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_changed, "()V", 4 },
	{ "fireChangeEvent", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean, "()Z", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_contains_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "getLastSelected", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getLastSelected_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_getLastSelected_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toArray_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_toArray_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "setDisabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setDisabled_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_setDisabled_boolean, "(Z)V", 1 },
	{ "isDisabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_isDisabled_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_isDisabled_R_boolean, "()Z", 1 },
	{ "getToggle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getToggle_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_getToggle_R_boolean, "()Z", 1 },
	{ "setToggle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setToggle_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_setToggle_boolean, "(Z)V", 1 },
	{ "getMultiple", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getMultiple_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_getMultiple_R_boolean, "()Z", 1 },
	{ "setMultiple", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setMultiple_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_setMultiple_boolean, "(Z)V", 1 },
	{ "getRequired", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getRequired_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_getRequired_R_boolean, "()Z", 1 },
	{ "setRequired", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setRequired_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_setRequired_boolean, "(Z)V", 1 },
	{ "setProgrammaticChangeEvents", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setProgrammaticChangeEvents_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_setProgrammaticChangeEvents_boolean, "(Z)V", 1 },
	{ "getProgrammaticChangeEvents", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getProgrammaticChangeEvents_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_getProgrammaticChangeEvents_R_boolean, "()Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_Selection{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/Selection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_Selection),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_Selection,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_Selection,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_Selection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_Selection = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_Selection);

}

