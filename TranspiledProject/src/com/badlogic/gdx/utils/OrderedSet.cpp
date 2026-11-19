#include "com/badlogic/gdx/utils/OrderedSet.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "com/badlogic/gdx/utils/ObjectSet_ObjectSetIterator.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/OrderedSet.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/utils/OrderedSet_OrderedSetIterator.h"
#include "com/badlogic/gdx/utils/Collections.h"

extern "C" {


void mark_com_badlogic_gdx_utils_OrderedSet(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_ObjectSet(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_OrderedSet *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_iterator1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator1)->clazz)->markFunction)((jobject) self->F_iterator1, mark, depth + 1);
	if (self->F_iterator2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator2)->clazz)->markFunction)((jobject) self->F_iterator2, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_OrderedSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_ObjectSet(ctx);
}

void init_com_badlogic_gdx_utils_OrderedSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_OrderedSet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(47);
	init_com_badlogic_gdx_utils_ObjectSet(ctx, (frame[0].o));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_OrderedSet_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_OrderedSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(52);
	init_com_badlogic_gdx_utils_ObjectSet_int_float(ctx, (frame[0].o), (frame[1].i), (frame[2].f));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (frame[1].i));
	((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_OrderedSet_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_OrderedSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(57);
	init_com_badlogic_gdx_utils_ObjectSet_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (frame[1].i));
	((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_OrderedSet_com_badlogic_gdx_utils_OrderedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_OrderedSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_com_badlogic_gdx_utils_ObjectSet_com_badlogic_gdx_utils_ObjectSet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[1].o)))->F_items;
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(77);
	if ((frame[3].i) == (frame[2].i)) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	((func_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[2].i), (frame[1].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_OrderedSet_addAll_com_badlogic_gdx_utils_OrderedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	((func_com_badlogic_gdx_utils_OrderedSet_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[1].o)))->F_items;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(87);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[1].o)))->F_items;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	LINE_NUMBER(87);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_OrderedSet_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:ensureCapacity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(92);
	M_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_ObjectSet_remove_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedSet_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:removeIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(104);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_ObjectSet_remove_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_OrderedSet_alter_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:alter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_contains_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_ObjectSet_remove_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[1].o, (frame[1].o), (jint(0)));
	((func_com_badlogic_gdx_utils_Array_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_set_int_java_lang_Object])(ctx, sp[0].o, temp1, (frame[2].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_OrderedSet_alterIndex_int_java_lang_Object_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:alterIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(130);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_contains_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	jint temp0 = (jint)M_com_badlogic_gdx_utils_ObjectSet_remove_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	jint temp1 = (jint)M_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_set_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_OrderedSet_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(139);
	M_com_badlogic_gdx_utils_ObjectSet_clear_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_OrderedSet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(144);
	M_com_badlogic_gdx_utils_ObjectSet_clear(ctx, (frame[0].o));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedSet_orderedItems_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:orderedItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedSet_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:first", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_OrderedSet_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(158);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(159);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(160);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[5].o));
	frame[1].i = (temp0 + temp1);
	}
label_8:;
	{
	LINE_NUMBER(158);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_OrderedSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:equals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ObjectSet)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(167);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectSet, (frame[1].o)));
	LINE_NUMBER(168);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(170);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(171);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 != 0) goto label_9;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(170);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator);
	init_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator_com_badlogic_gdx_utils_OrderedSet(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator);
	init_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator_com_badlogic_gdx_utils_OrderedSet(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK(sp[0].o))->F_iterator1 = (jref) sp[1].o;
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator);
	init_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator_com_badlogic_gdx_utils_OrderedSet(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK(sp[0].o))->F_iterator2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((func_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator_reset])(ctx, sp[0].o);
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((func_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator_reset])(ctx, sp[0].o);
	LINE_NUMBER(188);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(189);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(190);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedSet_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{}"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(196);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (123));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(199);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(199);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (125));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedSet_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedSet *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_toString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_toString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_OrderedSet_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_OrderedSet(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_OrderedSet(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(252);
	clinit_com_badlogic_gdx_utils_OrderedSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedSet);
	init_com_badlogic_gdx_utils_OrderedSet(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedSet_addAll_Array1_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_addAll_Array1_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedSet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedSet:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_OrderedSet[] {
	(void *) M_com_badlogic_gdx_utils_OrderedSet_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array_int_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_ObjectSet,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addResize_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_shrink_int,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_clear_int,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_clear,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_get_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_first_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_ensureCapacity_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_resize_int,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_toString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_addAll_com_badlogic_gdx_utils_OrderedSet,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_removeIndex_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_alter_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_alterIndex_int_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_orderedItems_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator,
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
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/Array;II)V" },
	{ "addAll", "([Ljava/lang/Object;)Z" },
	{ "addAll", "([Ljava/lang/Object;II)Z" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/ObjectSet;)V" },
	{ "addResize", "(Ljava/lang/Object;)V" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/ObjectSet$ObjectSetIterator;" },
	{ "add", "(Ljava/lang/Object;I)Z" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/OrderedSet;)V" },
	{ "removeIndex", "(I)Ljava/lang/Object;" },
	{ "alter", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "alterIndex", "(ILjava/lang/Object;)Z" },
	{ "orderedItems", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/OrderedSet$OrderedSetIterator;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator,
};

static FieldMetadata fields[] {
	{ "items", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_utils_OrderedSet, F_items), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "iterator1", &class_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator, offsetof(com_badlogic_gdx_utils_OrderedSet, F_iterator1), "Lcom/badlogic/gdx/utils/OrderedSet$OrderedSetIterator;", 128 },
	{ "iterator2", &class_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator, offsetof(com_badlogic_gdx_utils_OrderedSet, F_iterator2), "Lcom/badlogic/gdx/utils/OrderedSet$OrderedSetIterator;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_OrderedSet, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_OrderedSet_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_OrderedSet_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_OrderedSet_com_badlogic_gdx_utils_OrderedSet, 0, "(Lcom/badlogic/gdx/utils/OrderedSet;)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_int_R_boolean, VTABLE_com_badlogic_gdx_utils_OrderedSet_add_java_lang_Object_int_R_boolean, "(Ljava/lang/Object;I)Z", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_addAll_com_badlogic_gdx_utils_OrderedSet, VTABLE_com_badlogic_gdx_utils_OrderedSet_addAll_com_badlogic_gdx_utils_OrderedSet, "(Lcom/badlogic/gdx/utils/OrderedSet;)V", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_ensureCapacity_int, VTABLE_com_badlogic_gdx_utils_OrderedSet_ensureCapacity_int, "(I)V", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_OrderedSet_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeIndex", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_removeIndex_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_OrderedSet_removeIndex_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "alter", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_alter_java_lang_Object_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_OrderedSet_alter_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 1 },
	{ "alterIndex", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_alterIndex_int_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_OrderedSet_alterIndex_int_java_lang_Object_R_boolean, "(ILjava/lang/Object;)Z", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_clear_int, VTABLE_com_badlogic_gdx_utils_OrderedSet_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_clear, VTABLE_com_badlogic_gdx_utils_OrderedSet_clear, "()V", 1 },
	{ "orderedItems", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_orderedItems_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_utils_OrderedSet_orderedItems_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "first", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_first_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_OrderedSet_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_OrderedSet_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_OrderedSet_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator, VTABLE_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_OrderedSet$OrderedSetIterator, "()Lcom/badlogic/gdx/utils/OrderedSet$OrderedSetIterator;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_OrderedSet_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_toString_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_OrderedSet_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "with", (intptr_t) SM_com_badlogic_gdx_utils_OrderedSet_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_OrderedSet, 0, "([Ljava/lang/Object;)Lcom/badlogic/gdx/utils/OrderedSet;", 137 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, VTABLE_com_badlogic_gdx_utils_OrderedSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, "()Lcom/badlogic/gdx/utils/ObjectSet$ObjectSetIterator;", 4161 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_OrderedSet_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_OrderedSet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_com_badlogic_gdx_utils_OrderedSet{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/OrderedSet",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_ObjectSet,
		.size = sizeof(com_badlogic_gdx_utils_OrderedSet),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_OrderedSet,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_OrderedSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_OrderedSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_OrderedSet = registerClass(&class_com_badlogic_gdx_utils_OrderedSet);

}

