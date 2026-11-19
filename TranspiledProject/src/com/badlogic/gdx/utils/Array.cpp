#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/Predicate.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/utils/Array_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/utils/Collections.h"
#include "com/badlogic/gdx/utils/Select.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/utils/Predicate_PredicateIterable.h"
#include "java/lang/reflect/Field.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/utils/reflect/ArrayReflection.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterable.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/Sort.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "java/lang/System.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Array(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Array *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_iterable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterable)->clazz)->markFunction)((jobject) self->F_iterable, mark, depth + 1);
	if (self->F_predicateIterable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_predicateIterable)->clazz)->markFunction)((jobject) self->F_predicateIterable, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Array(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(43);
	init_com_badlogic_gdx_utils_Array_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Array_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(48);
	init_com_badlogic_gdx_utils_Array_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Array_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_ArraySupplier_object_R_com_badlogic_gdx_utils_ArraySupplier(ctx);
	init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(62);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(63);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_ArraySupplier, INDEX_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[2].i));
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, (frame[0].o), (jint(1)), (16), (frame[1].o));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Array_boolean_int_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_utils_Array_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_utils_Array_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Array_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	init_com_badlogic_gdx_utils_Array_boolean_int_java_lang_Class(ctx, (frame[0].o), (jint(1)), (16), (frame[1].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size));
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(96);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_ordered = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(97);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Array_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	init_com_badlogic_gdx_utils_Array_boolean_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Array_boolean_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(111);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_R_Array1_java_lang_Object(ctx, (frame[2].o), (frame[3].i), ((frame[3].i) + (frame[4].i)));
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(113);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(114);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(119);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size;
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[1].o);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(125);
	if ((((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(126);
	ARRAY_ACCESS(jobject, (frame[3].o), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].o);
	LINE_NUMBER(127);
	ARRAY_ACCESS(jobject, (frame[3].o), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].o);
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) + (jint(2)));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(133);
	if ((((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2))) < (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(134);
	ARRAY_ACCESS(jobject, (frame[4].o), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].o);
	LINE_NUMBER(135);
	ARRAY_ACCESS(jobject, (frame[4].o), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].o);
	LINE_NUMBER(136);
	ARRAY_ACCESS(jobject, (frame[4].o), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].o);
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) + (jint(3)));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(142);
	if ((((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3))) < (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.8f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(143);
	ARRAY_ACCESS(jobject, (frame[5].o), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].o);
	LINE_NUMBER(144);
	ARRAY_ACCESS(jobject, (frame[5].o), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].o);
	LINE_NUMBER(145);
	ARRAY_ACCESS(jobject, (frame[5].o), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].o);
	LINE_NUMBER(146);
	ARRAY_ACCESS(jobject, (frame[5].o), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3)))) = (frame[4].o);
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) + (jint(4)));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(155);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(156);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start + count must be <= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" + "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" <= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	((func_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:addAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(166);
	frame[5].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i));
	LINE_NUMBER(167);
	if ((frame[5].i) <= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[5].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jfloat(((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp1);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(168);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (frame[2].i), (frame[4].o), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(169);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size = (frame[5].i);
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(173);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_set_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(178);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(183);
	if ((frame[1].i) <= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be > size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(185);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(186);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(187);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (frame[1].i), (frame[3].o), ((frame[1].i) + (jint(1))), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(189);
	ARRAY_ACCESS(jobject, (frame[3].o), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(191);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:insertRange", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(197);
	if ((frame[1].i) <= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be > size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(198);
	frame[3].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (frame[2].i));
	LINE_NUMBER(199);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[3].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jfloat(((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object])(ctx, sp[1].o, temp1);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (frame[2].i)), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(201);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size = (frame[3].i);
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(205);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"first can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(206);
	if ((frame[2].i) < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"second can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(208);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(209);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(210);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = (frame[4].o);
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Array_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:replaceFirst", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(220);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(221);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(222);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))) != (frame[1].o)) goto label_8;
	}
	{
	LINE_NUMBER(223);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)) = (frame[3].o);
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(221);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	goto label_11;
label_3:;
	{
	LINE_NUMBER(228);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_13:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_11;
	}
	{
	LINE_NUMBER(229);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(230);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)) = (frame[3].o);
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(228);
	INST_IINC(5, 1);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_Array_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:replaceAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(245);
	frame[5].i = (jint(0));
	LINE_NUMBER(246);
	if ((frame[2].i) != 0) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(247);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_7;
	}
	{
	LINE_NUMBER(248);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i))) != (frame[1].o)) goto label_9;
	}
	{
	LINE_NUMBER(249);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)) = (frame[3].o);
	LINE_NUMBER(250);
	INST_IINC(5, 1);
	}
label_9:;
	{
	LINE_NUMBER(247);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	goto label_12;
label_4:;
	{
	LINE_NUMBER(254);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_14:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_12;
	}
	{
	LINE_NUMBER(255);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i))));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(256);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)) = (frame[3].o);
	LINE_NUMBER(257);
	INST_IINC(5, 1);
	}
label_16:;
	{
	LINE_NUMBER(254);
	INST_IINC(6, 1);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:contains", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(269);
	frame[4].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(270);
	if ((frame[2].i) != 0) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(271);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)) != (frame[1].o)) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(274);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	jint temp1 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)));
	if (temp1 == 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Array_containsAll_com_badlogic_gdx_utils_Array_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:containsAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(285);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))), (frame[2].i));
	if (temp0 != 0) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(285);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Array_containsAny_com_badlogic_gdx_utils_Array_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:containsAny", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(295);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(296);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))), (frame[2].i));
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(295);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:indexOf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(306);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(307);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(308);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_8;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(307);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	goto label_9;
label_3:;
	{
	LINE_NUMBER(310);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_13;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(310);
	INST_IINC(4, 1);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_Array_lastIndexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:lastIndexOf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(323);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(324);
	frame[4].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_4:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(325);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_7;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(324);
	INST_IINC(4, -1);
	goto label_4;
	}
label_5:;
	goto label_8;
label_3:;
	{
	LINE_NUMBER(327);
	frame[4].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_9:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(328);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_11;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(327);
	INST_IINC(4, -1);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:removeValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(339);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(340);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(341);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_8;
	}
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(340);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	goto label_11;
label_3:;
	{
	LINE_NUMBER(347);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_13:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(348);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(347);
	INST_IINC(4, 1);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:removeIndex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(359);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(361);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(363);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(364);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(366);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(367);
	ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) = (jobject(nullptr));
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:removeRange", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(373);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(374);
	if ((frame[2].i) < (frame[3].i)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"end can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(375);
	if ((frame[1].i) <= (frame[2].i)) goto label_3;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start can't be > end: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(377);
	frame[5].i = (((frame[2].i) - (frame[1].i)) + (jint(1)));
	frame[6].i = ((frame[3].i) - (frame[5].i));
	LINE_NUMBER(378);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_7;
	}
	{
	LINE_NUMBER(379);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), ((frame[1].i) + (frame[5].i)), (frame[4].o), (frame[1].i), ((frame[3].i) - ((frame[1].i) + (frame[5].i))));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(381);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[6].i), ((frame[2].i) + (jint(1))));
	frame[7].i = temp0;
	LINE_NUMBER(382);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (frame[7].i), (frame[4].o), (frame[1].i), ((frame[3].i) - (frame[7].i)));
	}
label_9:;
	{
	LINE_NUMBER(384);
	frame[7].i = (frame[6].i);
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(385);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i)) = (jobject(nullptr));
	LINE_NUMBER(384);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(386);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size = ((frame[3].i) - (frame[5].i));
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Array_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:removeAll", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(393);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(394);
	frame[4].i = (frame[3].i);
	LINE_NUMBER(395);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(396);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(397);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_8;
	}
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(399);
	frame[9].i = (jint(0));
	}
label_11:;
	{
	if ((frame[9].i) >= (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(400);
	if ((frame[8].o) != ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i)))) goto label_14;
	}
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[9].i));
	LINE_NUMBER(402);
	INST_IINC(3, -1);
	LINE_NUMBER(403);
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(399);
	INST_IINC(9, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(397);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	goto label_18;
label_4:;
	{
	LINE_NUMBER(408);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_20:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_18;
	}
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(410);
	frame[9].i = (jint(0));
	}
label_23:;
	{
	if ((frame[9].i) >= (frame[3].i)) goto label_24;
	}
	{
	LINE_NUMBER(411);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[8].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i))));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[9].i));
	LINE_NUMBER(413);
	INST_IINC(3, -1);
	LINE_NUMBER(414);
	goto label_24;
	}
label_26:;
	{
	LINE_NUMBER(410);
	INST_IINC(9, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(408);
	INST_IINC(6, 1);
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(419);
	if ((frame[3].i) == (frame[4].i)) goto label_30;
	}
	INST_ICONST(1);
	goto label_31;
label_30:;
	INST_ICONST(0);
label_31:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(424);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(425);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(426);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)));
	LINE_NUMBER(427);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) = (jobject(nullptr));
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:peek", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(433);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(439);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Array_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(445);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_Array_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(450);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_com_badlogic_gdx_utils_Array_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size), (jobject(nullptr)));
	LINE_NUMBER(455);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_shrink_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(470);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"additionalCapacity must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(471);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(472);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[2].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jfloat(((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp1);
	}
label_3:;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_setSize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:setSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(479);
	((func_com_badlogic_gdx_utils_Array_truncate_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_truncate_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(480);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(481);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(482);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:resize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(487);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[1].o, (frame[1].i));
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(488);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:sort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Sort_instance_R_com_badlogic_gdx_utils_Sort(ctx);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:sort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Sort_instance_R_com_badlogic_gdx_utils_Sort(ctx);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int])(ctx, sp[0].o, sp[1].o, (frame[1].o), (jint(0)), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_selectRanked_java_util_Comparator_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:selectRanked", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(510);
	if ((frame[2].i) >= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(511);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nth_lowest must be greater than 0, 1 = first, 2 = second..."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Select_instance_R_com_badlogic_gdx_utils_Select(ctx);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].i), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_Array_selectRankedIndex_java_util_Comparator_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:selectRankedIndex", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(522);
	if ((frame[2].i) >= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(523);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nth_lowest must be greater than 0, 1 = first, 2 = second..."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Select_instance_R_com_badlogic_gdx_utils_Select(ctx);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].i), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:reverse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(530);
	frame[2].i = (jint(0));
	frame[3].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[4].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(531);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(532);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(533);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(534);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)) = (frame[6].o);
	LINE_NUMBER(530);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(536);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:shuffle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(540);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(541);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_random_int_R_int(ctx, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(542);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(543);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(544);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)) = (frame[4].o);
	LINE_NUMBER(540);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(546);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(553);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_Array$ArrayIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterator);
	init_com_badlogic_gdx_utils_Array$ArrayIterator_com_badlogic_gdx_utils_Array_boolean(ctx, sp[0].o, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_iterable;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array$ArrayIterable(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterable);
	init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_iterable = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(555);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_iterable;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_select_com_badlogic_gdx_utils_Predicate_R_java_lang_Iterable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:select", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(563);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_Predicate$PredicateIterable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Predicate$PredicateIterable);
	init_com_badlogic_gdx_utils_Predicate$PredicateIterable_java_lang_Iterable_com_badlogic_gdx_utils_Predicate(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_predicateIterable;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Predicate$PredicateIterable(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Predicate$PredicateIterable);
	init_com_badlogic_gdx_utils_Predicate$PredicateIterable_java_lang_Iterable_com_badlogic_gdx_utils_Predicate(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_predicateIterable = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_predicateIterable;
	((func_com_badlogic_gdx_utils_Predicate$PredicateIterable_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_predicateIterable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Array_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:truncate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(574);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"newSize must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(575);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) > (frame[1].i)) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(576);
	frame[2].i = (frame[1].i);
	}
label_3:;
	{
	if ((frame[2].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(576);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(578);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_random_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:random", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(583);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_random_int_int_R_int(ctx, (jint(0)), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:toArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:toArray", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_ArraySupplier, INDEX_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(595);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(596);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_toArray_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:toArray", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ArrayReflection_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[1].o), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(603);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(604);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_Array_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(608);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(610);
	frame[2].i = (jint(1));
	LINE_NUMBER(611);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(612);
	frame[2].i = ((frame[2].i) * (31));
	LINE_NUMBER(613);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(614);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[5].o));
	frame[2].i = (temp0 + temp1);
	}
label_10:;
	{
	LINE_NUMBER(611);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Array_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:equals", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(621);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(622);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(623);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_Array)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(624);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, (frame[1].o)));
	LINE_NUMBER(625);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_ordered) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(626);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(627);
	if ((frame[3].i) == ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(629);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(630);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(631);
	if ((frame[7].o) != nullptr) goto label_15;
	}
	INST_ALOAD(8);
	if ((--sp)->o != nullptr) goto label_16;
	goto label_17;
label_15:;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (frame[8].o));
	if (temp0 != 0) goto label_17;
	}
label_16:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(629);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Array_equalsIdentity_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:equalsIdentity", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(638);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(639);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(640);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_Array)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(641);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, (frame[1].o)));
	LINE_NUMBER(642);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_ordered) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(643);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(644);
	if ((frame[3].i) == ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(646);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(647);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i))) == ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)))) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(646);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(652);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(653);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(654);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(655);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	LINE_NUMBER(656);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(657);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(659);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(657);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(666);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(668);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(669);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	LINE_NUMBER(670);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(672);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(670);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Array_of_com_badlogic_gdx_utils_ArraySupplier_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:of", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(679);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Array_of_boolean_int_com_badlogic_gdx_utils_ArraySupplier_R_com_badlogic_gdx_utils_Array(jcontext ctx, jbool param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:of", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(684);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Array_of_java_lang_Class_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:of", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(692);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_java_lang_Class(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Array_of_boolean_int_java_lang_Class_R_com_badlogic_gdx_utils_Array(jcontext ctx, jbool param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:of", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(700);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_boolean_int_java_lang_Class(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Array_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(705);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Array_lambda$new$0_java_lang_Class_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ArrayReflection_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_utils_Array;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[4])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method <init>
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[5])->F_method)->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method <init>
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[6])->F_method)->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[7])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[8])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[9])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method toArray
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[46]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method of
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[54]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method of
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[55]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_utils_Array[] {
	(void *) M_com_badlogic_gdx_utils_Array_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_Array_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Array_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_Array_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_Array_add_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array_int_int,
	(void *) M_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int,
	(void *) M_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_set_int_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_insertRange_int_int,
	(void *) M_com_badlogic_gdx_utils_Array_swap_int_int,
	(void *) M_com_badlogic_gdx_utils_Array_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_containsAll_com_badlogic_gdx_utils_Array_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_containsAny_com_badlogic_gdx_utils_Array_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int,
	(void *) M_com_badlogic_gdx_utils_Array_lastIndexOf_java_lang_Object_boolean_R_int,
	(void *) M_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_removeRange_int_int,
	(void *) M_com_badlogic_gdx_utils_Array_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_first_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_clear,
	(void *) M_com_badlogic_gdx_utils_Array_shrink_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_setSize_int_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_sort,
	(void *) M_com_badlogic_gdx_utils_Array_sort_java_util_Comparator,
	(void *) M_com_badlogic_gdx_utils_Array_selectRanked_java_util_Comparator_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_selectRankedIndex_java_util_Comparator_int_R_int,
	(void *) M_com_badlogic_gdx_utils_Array_reverse,
	(void *) M_com_badlogic_gdx_utils_Array_shuffle,
	(void *) M_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator,
	(void *) M_com_badlogic_gdx_utils_Array_select_com_badlogic_gdx_utils_Predicate_R_java_lang_Iterable,
	(void *) M_com_badlogic_gdx_utils_Array_truncate_int,
	(void *) M_com_badlogic_gdx_utils_Array_random_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_toArray_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_toArray_java_lang_Class_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_equalsIdentity_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_toString_java_lang_String_R_java_lang_String,
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
	{ "add", "(Ljava/lang/Object;)V" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/Array;II)V" },
	{ "addAll", "([Ljava/lang/Object;)V" },
	{ "addAll", "([Ljava/lang/Object;II)V" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "set", "(ILjava/lang/Object;)V" },
	{ "insert", "(ILjava/lang/Object;)V" },
	{ "insertRange", "(II)V" },
	{ "swap", "(II)V" },
	{ "replaceFirst", "(Ljava/lang/Object;ZLjava/lang/Object;)Z" },
	{ "replaceAll", "(Ljava/lang/Object;ZLjava/lang/Object;)I" },
	{ "contains", "(Ljava/lang/Object;Z)Z" },
	{ "containsAll", "(Lcom/badlogic/gdx/utils/Array;Z)Z" },
	{ "containsAny", "(Lcom/badlogic/gdx/utils/Array;Z)Z" },
	{ "indexOf", "(Ljava/lang/Object;Z)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;Z)I" },
	{ "removeValue", "(Ljava/lang/Object;Z)Z" },
	{ "removeIndex", "(I)Ljava/lang/Object;" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Lcom/badlogic/gdx/utils/Array;Z)Z" },
	{ "pop", "()Ljava/lang/Object;" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "clear", "()V" },
	{ "shrink", "()[Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)[Ljava/lang/Object;" },
	{ "setSize", "(I)[Ljava/lang/Object;" },
	{ "resize", "(I)[Ljava/lang/Object;" },
	{ "sort", "()V" },
	{ "sort", "(Ljava/util/Comparator;)V" },
	{ "selectRanked", "(Ljava/util/Comparator;I)Ljava/lang/Object;" },
	{ "selectRankedIndex", "(Ljava/util/Comparator;I)I" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/Array$ArrayIterator;" },
	{ "select", "(Lcom/badlogic/gdx/utils/Predicate;)Ljava/lang/Iterable;" },
	{ "truncate", "(I)V" },
	{ "random", "()Ljava/lang/Object;" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "(Lcom/badlogic/gdx/utils/ArraySupplier;)[Ljava/lang/Object;" },
	{ "toArray", "(Ljava/lang/Class;)[Ljava/lang/Object;" },
	{ "equalsIdentity", "(Ljava/lang/Object;)Z" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_Array$ArrayIterator,
	&class_com_badlogic_gdx_utils_Array$ArrayIterable,
};

static FieldMetadata fields[] {
	{ "items", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_Array, F_items), "[Ljava/lang/Object;", 1 },
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_Array, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(com_badlogic_gdx_utils_Array, F_ordered), "Z", 1 },
	{ "iterable", &class_com_badlogic_gdx_utils_Array$ArrayIterable, offsetof(com_badlogic_gdx_utils_Array, F_iterable), "Lcom/badlogic/gdx/utils/Array$ArrayIterable;", 130 },
	{ "predicateIterable", &class_com_badlogic_gdx_utils_Predicate$PredicateIterable, offsetof(com_badlogic_gdx_utils_Array, F_predicateIterable), "Lcom/badlogic/gdx/utils/Predicate$PredicateIterable;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier, 0, "(ZILcom/badlogic/gdx/utils/ArraySupplier;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_ArraySupplier, 0, "(Lcom/badlogic/gdx/utils/ArraySupplier;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array_boolean_int_java_lang_Class, 0, "(ZILjava/lang/Class;)V", 131073 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array_java_lang_Class, 0, "(Ljava/lang/Class;)V", 131073 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array_boolean_Array1_java_lang_Object_int_int, 0, "(Z[Ljava/lang/Object;II)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_Array_add_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array_int_int, VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array_int_int, "(Lcom/badlogic/gdx/utils/Array;II)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 129 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int, VTABLE_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int, "([Ljava/lang/Object;II)V", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_Array_set_int_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_set_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "insertRange", (intptr_t) M_com_badlogic_gdx_utils_Array_insertRange_int_int, VTABLE_com_badlogic_gdx_utils_Array_insertRange_int_int, "(II)V", 1 },
	{ "swap", (intptr_t) M_com_badlogic_gdx_utils_Array_swap_int_int, VTABLE_com_badlogic_gdx_utils_Array_swap_int_int, "(II)V", 1 },
	{ "replaceFirst", (intptr_t) M_com_badlogic_gdx_utils_Array_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_Array_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean, "(Ljava/lang/Object;ZLjava/lang/Object;)Z", 1 },
	{ "replaceAll", (intptr_t) M_com_badlogic_gdx_utils_Array_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_Array_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int, "(Ljava/lang/Object;ZLjava/lang/Object;)I", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "containsAll", (intptr_t) M_com_badlogic_gdx_utils_Array_containsAll_com_badlogic_gdx_utils_Array_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_Array_containsAll_com_badlogic_gdx_utils_Array_boolean_R_boolean, "(Lcom/badlogic/gdx/utils/Array;Z)Z", 1 },
	{ "containsAny", (intptr_t) M_com_badlogic_gdx_utils_Array_containsAny_com_badlogic_gdx_utils_Array_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_Array_containsAny_com_badlogic_gdx_utils_Array_boolean_R_boolean, "(Lcom/badlogic/gdx/utils/Array;Z)Z", 1 },
	{ "indexOf", (intptr_t) M_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int, VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int, "(Ljava/lang/Object;Z)I", 1 },
	{ "lastIndexOf", (intptr_t) M_com_badlogic_gdx_utils_Array_lastIndexOf_java_lang_Object_boolean_R_int, VTABLE_com_badlogic_gdx_utils_Array_lastIndexOf_java_lang_Object_boolean_R_int, "(Ljava/lang/Object;Z)I", 1 },
	{ "removeValue", (intptr_t) M_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "removeIndex", (intptr_t) M_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "removeRange", (intptr_t) M_com_badlogic_gdx_utils_Array_removeRange_int_int, VTABLE_com_badlogic_gdx_utils_Array_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_com_badlogic_gdx_utils_Array_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_Array_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean, "(Lcom/badlogic/gdx/utils/Array;Z)Z", 1 },
	{ "pop", (intptr_t) M_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peek", (intptr_t) M_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "first", (intptr_t) M_com_badlogic_gdx_utils_Array_first_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_Array_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_Array_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_Array_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_Array_isEmpty_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_Array_clear, VTABLE_com_badlogic_gdx_utils_Array_clear, "()V", 1 },
	{ "shrink", (intptr_t) M_com_badlogic_gdx_utils_Array_shrink_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_shrink_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 1 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_utils_Array_setSize_int_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_setSize_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 1 },
	{ "resize", (intptr_t) M_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 4 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_Array_sort, VTABLE_com_badlogic_gdx_utils_Array_sort, "()V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_Array_sort_java_util_Comparator, VTABLE_com_badlogic_gdx_utils_Array_sort_java_util_Comparator, "(Ljava/util/Comparator;)V", 1 },
	{ "selectRanked", (intptr_t) M_com_badlogic_gdx_utils_Array_selectRanked_java_util_Comparator_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_selectRanked_java_util_Comparator_int_R_java_lang_Object, "(Ljava/util/Comparator;I)Ljava/lang/Object;", 1 },
	{ "selectRankedIndex", (intptr_t) M_com_badlogic_gdx_utils_Array_selectRankedIndex_java_util_Comparator_int_R_int, VTABLE_com_badlogic_gdx_utils_Array_selectRankedIndex_java_util_Comparator_int_R_int, "(Ljava/util/Comparator;I)I", 1 },
	{ "reverse", (intptr_t) M_com_badlogic_gdx_utils_Array_reverse, VTABLE_com_badlogic_gdx_utils_Array_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_com_badlogic_gdx_utils_Array_shuffle, VTABLE_com_badlogic_gdx_utils_Array_shuffle, "()V", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator, VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator, "()Lcom/badlogic/gdx/utils/Array$ArrayIterator;", 1 },
	{ "select", (intptr_t) M_com_badlogic_gdx_utils_Array_select_com_badlogic_gdx_utils_Predicate_R_java_lang_Iterable, VTABLE_com_badlogic_gdx_utils_Array_select_com_badlogic_gdx_utils_Predicate_R_java_lang_Iterable, "(Lcom/badlogic/gdx/utils/Predicate;)Ljava/lang/Iterable;", 1 },
	{ "truncate", (intptr_t) M_com_badlogic_gdx_utils_Array_truncate_int, VTABLE_com_badlogic_gdx_utils_Array_truncate_int, "(I)V", 1 },
	{ "random", (intptr_t) M_com_badlogic_gdx_utils_Array_random_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_random_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_Array_toArray_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object, "(Lcom/badlogic/gdx/utils/ArraySupplier;)[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_Array_toArray_java_lang_Class_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Array_toArray_java_lang_Class_R_Array1_java_lang_Object, "(Ljava/lang/Class;)[Ljava/lang/Object;", 131073 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_Array_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_Array_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_Array_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_Array_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equalsIdentity", (intptr_t) M_com_badlogic_gdx_utils_Array_equalsIdentity_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_Array_equalsIdentity_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_Array_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Array_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_Array_toString_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Array_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "of", (intptr_t) SM_com_badlogic_gdx_utils_Array_of_com_badlogic_gdx_utils_ArraySupplier_R_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/utils/ArraySupplier;)Lcom/badlogic/gdx/utils/Array;", 9 },
	{ "of", (intptr_t) SM_com_badlogic_gdx_utils_Array_of_boolean_int_com_badlogic_gdx_utils_ArraySupplier_R_com_badlogic_gdx_utils_Array, 0, "(ZILcom/badlogic/gdx/utils/ArraySupplier;)Lcom/badlogic/gdx/utils/Array;", 9 },
	{ "of", (intptr_t) SM_com_badlogic_gdx_utils_Array_of_java_lang_Class_R_com_badlogic_gdx_utils_Array, 0, "(Ljava/lang/Class;)Lcom/badlogic/gdx/utils/Array;", 131081 },
	{ "of", (intptr_t) SM_com_badlogic_gdx_utils_Array_of_boolean_int_java_lang_Class_R_com_badlogic_gdx_utils_Array, 0, "(ZILjava/lang/Class;)Lcom/badlogic/gdx/utils/Array;", 131081 },
	{ "with", (intptr_t) SM_com_badlogic_gdx_utils_Array_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_Array, 0, "([Ljava/lang/Object;)Lcom/badlogic/gdx/utils/Array;", 137 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_Array_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_Array_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
	{ "lambda$new$0", (intptr_t) SM_com_badlogic_gdx_utils_Array_lambda$new$0_java_lang_Class_int_R_Array1_java_lang_Object, 0, "(Ljava/lang/Class;I)[Ljava/lang/Object;", 4106 },
};

Class class_com_badlogic_gdx_utils_Array{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Array",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Array),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Array,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Array,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Array,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 69,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Array = registerClass(&class_com_badlogic_gdx_utils_Array);

}

