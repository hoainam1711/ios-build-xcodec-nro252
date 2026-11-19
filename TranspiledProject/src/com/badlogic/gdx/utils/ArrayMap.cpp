#include "com/badlogic/gdx/utils/ArrayMap.h"
#include "com/badlogic/gdx/utils/ArrayMap_Values.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_1.h"
#include "com/badlogic/gdx/utils/ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "java/lang/Iterable.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/utils/Collections.h"
#include "com/badlogic/gdx/utils/ArrayMap_Keys.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/utils/ArrayMap_Entries.h"
#include "java/lang/reflect/Field.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ArrayMap.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/lang/Object.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/utils/reflect/ArrayReflection.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_utils_ArrayMap(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_ArrayMap *) object;
	if (self->F_keys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys)->clazz)->markFunction)((jobject) self->F_keys, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
	if (self->F_entries1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries1)->clazz)->markFunction)((jobject) self->F_entries1, mark, depth + 1);
	if (self->F_entries2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries2)->clazz)->markFunction)((jobject) self->F_entries2, mark, depth + 1);
	if (self->F_values1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values1)->clazz)->markFunction)((jobject) self->F_values1, mark, depth + 1);
	if (self->F_values2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values2)->clazz)->markFunction)((jobject) self->F_values2, mark, depth + 1);
	if (self->F_keys1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys1)->clazz)->markFunction)((jobject) self->F_keys1, mark, depth + 1);
	if (self->F_keys2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys2)->clazz)->markFunction)((jobject) self->F_keys2, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_ArrayMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_ArrayMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(45);
	init_com_badlogic_gdx_utils_ArrayMap_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ArrayMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(50);
	init_com_badlogic_gdx_utils_ArrayMap_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ArrayMap_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_ArraySupplier_object_R_com_badlogic_gdx_utils_ArraySupplier(ctx);
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_ArraySupplier_object_R_com_badlogic_gdx_utils_ArraySupplier(ctx);
	init_com_badlogic_gdx_utils_ArrayMap_boolean_int_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ArrayMap_boolean_int_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(64);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(65);
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_ArraySupplier, INDEX_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[2].i));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_ArraySupplier, INDEX_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[2].i));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_values = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ArrayMap_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(72);
	init_com_badlogic_gdx_utils_ArrayMap_boolean_int_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier(ctx, (frame[0].o), (jint(0)), (16), (frame[1].o), (frame[2].o));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ArrayMap_boolean_int_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_1(ctx);
		auto proxy = (com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_1 *) gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap_invoke_com_badlogic_gdx_utils_ArraySupplier_1);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_ArrayMap_boolean_int_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ArrayMap_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(92);
	init_com_badlogic_gdx_utils_ArrayMap_boolean_int_java_lang_Class_java_lang_Class(ctx, (frame[0].o), (jint(0)), (16), (frame[1].o), (frame[2].o));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ArrayMap_com_badlogic_gdx_utils_ArrayMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(99);
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_ordered = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[1].o)))->F_values;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[1].o)))->F_values;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(102);
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(107);
	if ((frame[3].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	((func_com_badlogic_gdx_utils_ArrayMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_resize_int])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size;
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size = (temp0 + (jint(1)));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:put", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(118);
	if ((frame[4].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(119);
	((func_com_badlogic_gdx_utils_ArrayMap_removeIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_removeIndex_int])(ctx, (frame[0].o), (frame[4].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	((func_com_badlogic_gdx_utils_ArrayMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_resize_int])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[3].i) + (jint(1))), (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[3].i)));
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((frame[3].i) + (jint(1))), (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[3].i)));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:putMissing", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(132);
	if ((frame[3].i) == (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	}
label_2:;
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	((func_com_badlogic_gdx_utils_ArrayMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_resize_int])(ctx, sp[0].o, temp0);
	}
label_3:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].o);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[1].o))->F_size;
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[2].o);
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:putAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	((func_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:putAll", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(144);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(145);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"offset + length must be <= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" + "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" <= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(146);
	frame[4].i = ((((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i)) - (frame[2].i));
	LINE_NUMBER(147);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat((frame[4].i))) * (jfloat(1.75f))))));
	((func_com_badlogic_gdx_utils_ArrayMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_resize_int])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[3].o = sp[0].o;
	LINE_NUMBER(163);
	frame[4].i = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(164);
	if ((frame[1].o) != nullptr) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(165);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(166);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_7:;
	{
	LINE_NUMBER(165);
	INST_IINC(4, -1);
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(168);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_9:;
	{
	LINE_NUMBER(168);
	INST_IINC(4, -1);
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:getKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(179);
	frame[4].i = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(180);
	if ((frame[2].i) != 0) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(181);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(182);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_7:;
	{
	LINE_NUMBER(181);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(184);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_9:;
	{
	LINE_NUMBER(184);
	INST_IINC(4, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_getKeyAt_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:getKeyAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(191);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_getValueAt_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:getValueAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(196);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_firstKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:firstKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	if (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Map is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_firstValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:firstValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	if (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Map is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_setKey_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:setKey", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(211);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_setValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:setValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(216);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_insert_int_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(221);
	if ((frame[1].i) <= ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(222);
	jint temp0 = (jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	((func_com_badlogic_gdx_utils_ArrayMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_resize_int])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(223);
	if (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_3;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (jint(1))), (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(225);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp1 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((frame[1].i) + (jint(1))), (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = (jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)));
	LINE_NUMBER(228);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp1 = (jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(231);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(232);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[3].o);
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ArrayMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:containsKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(237);
	frame[3].i = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(238);
	if ((frame[1].o) != nullptr) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(239);
	if ((frame[3].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, -1);
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)) != (frame[1].o)) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(242);
	if ((frame[3].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, -1);
	jint temp1 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)));
	if (temp1 == 0) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:containsValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(251);
	frame[4].i = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(252);
	if ((frame[2].i) != 0) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(253);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(254);
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
	LINE_NUMBER(256);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(257);
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
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:indexOfKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(264);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(265);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(266);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))) != (frame[1].o)) goto label_8;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(265);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(268);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(269);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	if (temp0 == 0) goto label_13;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(268);
	INST_IINC(3, 1);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:indexOfValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(276);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(277);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(278);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_8;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(277);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	goto label_9;
label_3:;
	{
	LINE_NUMBER(280);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(281);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_13;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(280);
	INST_IINC(4, 1);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:removeKey", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(288);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(289);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(290);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))) != (frame[1].o)) goto label_8;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(292);
	((func_com_badlogic_gdx_utils_ArrayMap_removeIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_removeIndex_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_8:;
	{
	LINE_NUMBER(289);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	goto label_12;
label_2:;
	{
	LINE_NUMBER(297);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_14:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(298);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(300);
	((func_com_badlogic_gdx_utils_ArrayMap_removeIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_removeIndex_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_16:;
	{
	LINE_NUMBER(297);
	INST_IINC(3, 1);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:removeValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(310);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(311);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(312);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_8;
	}
	{
	LINE_NUMBER(313);
	((func_com_badlogic_gdx_utils_ArrayMap_removeIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_removeIndex_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(311);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	goto label_11;
label_3:;
	{
	LINE_NUMBER(318);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_13:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(319);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(320);
	((func_com_badlogic_gdx_utils_ArrayMap_removeIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_removeIndex_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(318);
	INST_IINC(4, 1);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_removeIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:removeIndex", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(330);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(333);
	if (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(334);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(335);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(337);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)));
	LINE_NUMBER(338);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(340);
	ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) = (jobject(nullptr));
	LINE_NUMBER(341);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) = (jobject(nullptr));
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ArrayMap_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	if (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_ArrayMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(351);
	if (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jobject M_com_badlogic_gdx_utils_ArrayMap_peekKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:peekKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_peekValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:peekValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(367);
	((func_com_badlogic_gdx_utils_ArrayMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(370);
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(371);
	((func_com_badlogic_gdx_utils_ArrayMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_resize_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size), (jobject(nullptr)));
	LINE_NUMBER(376);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size), (jobject(nullptr)));
	LINE_NUMBER(377);
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_shrink(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(384);
	((func_com_badlogic_gdx_utils_ArrayMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_resize_int])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(390);
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
	LINE_NUMBER(391);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(392);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[2].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jfloat(((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	((func_com_badlogic_gdx_utils_ArrayMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_resize_int])(ctx, sp[0].o, temp1);
	}
label_3:;
	LINE_NUMBER(393);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:resize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(396);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[1].o, (frame[1].i));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(397);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[1].o, (frame[1].i));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:reverse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(401);
	frame[1].i = (jint(0));
	frame[2].i = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[3].i = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_3:;
	{
	if ((frame[1].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(402);
	frame[4].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(403);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(404);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	LINE_NUMBER(405);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[5].o);
	LINE_NUMBER(407);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(408);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp1 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	LINE_NUMBER(409);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[6].o);
	LINE_NUMBER(401);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(411);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:shuffle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(414);
	frame[1].i = (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(415);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_random_int_R_int(ctx, (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(416);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(417);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp1 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(418);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[3].o);
	LINE_NUMBER(420);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(421);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp2 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(422);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[4].o);
	LINE_NUMBER(414);
	INST_IINC(1, -1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(424);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ArrayMap_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:truncate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(429);
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
	LINE_NUMBER(430);
	if (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) > (frame[1].i)) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(431);
	frame[2].i = (frame[1].i);
	}
label_3:;
	{
	if ((frame[2].i) >= ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(433);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(431);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(435);
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ArrayMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:hashCode", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[1].o = sp[0].o;
	LINE_NUMBER(440);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(441);
	frame[3].i = (jint(0));
	LINE_NUMBER(442);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(443);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)));
	LINE_NUMBER(444);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(445);
	if ((frame[6].o) == nullptr) goto label_10;
	}
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[6].o));
	frame[3].i = (temp0 + (temp1 * (31)));
	}
label_10:;
	{
	LINE_NUMBER(446);
	if ((frame[7].o) == nullptr) goto label_11;
	}
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[7].o));
	frame[3].i = (temp0 + temp1);
	}
label_11:;
	{
	LINE_NUMBER(442);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ArrayMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(452);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(453);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ArrayMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(454);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ArrayMap, (frame[1].o)));
	LINE_NUMBER(455);
	if (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[3].o = sp[0].o;
	LINE_NUMBER(457);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[4].o = sp[0].o;
	LINE_NUMBER(458);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(459);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(460);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	LINE_NUMBER(461);
	if ((frame[8].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(462);
	sp[0].o = frame[2].o;
	sp[1].o = frame[7].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_utils_ObjectMap_dummy;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (sp[0].o == nullptr) goto label_15;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(464);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[7].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_15;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(458);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ArrayMap_equalsIdentity_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:equalsIdentity", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(472);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(473);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ArrayMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(474);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ArrayMap, (frame[1].o)));
	LINE_NUMBER(475);
	if (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[3].o = sp[0].o;
	LINE_NUMBER(477);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[4].o = sp[0].o;
	LINE_NUMBER(478);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i));
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i));
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_utils_ObjectMap_dummy;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	if (sp[0].o == sp[1].o) goto label_11;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(478);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(484);
	if (((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{}"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[1].o = sp[0].o;
	LINE_NUMBER(486);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(487);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(488);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (123));
	LINE_NUMBER(489);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(490);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	LINE_NUMBER(492);
	frame[4].i = (jint(1));
	}
label_9:;
	{
	if ((frame[4].i) >= ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(494);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(496);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(492);
	INST_IINC(4, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (125));
	LINE_NUMBER(499);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(503);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ArrayMap_entries_R_com_badlogic_gdx_utils_ArrayMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_entries_R_com_badlogic_gdx_utils_ArrayMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_entries_R_com_badlogic_gdx_utils_ArrayMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:entries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(512);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_ArrayMap$Entries(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap$Entries);
	init_com_badlogic_gdx_utils_ArrayMap$Entries_com_badlogic_gdx_utils_ArrayMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ArrayMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap$Entries);
	init_com_badlogic_gdx_utils_ArrayMap$Entries_com_badlogic_gdx_utils_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_entries1 = (jref) sp[1].o;
	LINE_NUMBER(515);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ArrayMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap$Entries);
	init_com_badlogic_gdx_utils_ArrayMap$Entries_com_badlogic_gdx_utils_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_entries2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (((jint)((com_badlogic_gdx_utils_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((com_badlogic_gdx_utils_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(519);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((com_badlogic_gdx_utils_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(520);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((com_badlogic_gdx_utils_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(521);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((com_badlogic_gdx_utils_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((com_badlogic_gdx_utils_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(525);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((com_badlogic_gdx_utils_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(526);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_values_R_com_badlogic_gdx_utils_ArrayMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(535);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_ArrayMap$Values(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap$Values);
	init_com_badlogic_gdx_utils_ArrayMap$Values_com_badlogic_gdx_utils_ArrayMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ArrayMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap$Values);
	init_com_badlogic_gdx_utils_ArrayMap$Values_com_badlogic_gdx_utils_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_values1 = (jref) sp[1].o;
	LINE_NUMBER(538);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ArrayMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap$Values);
	init_com_badlogic_gdx_utils_ArrayMap$Values_com_badlogic_gdx_utils_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_values2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (((jint)((com_badlogic_gdx_utils_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(541);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((com_badlogic_gdx_utils_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(542);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((com_badlogic_gdx_utils_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(543);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((com_badlogic_gdx_utils_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(544);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(546);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((com_badlogic_gdx_utils_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(547);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((com_badlogic_gdx_utils_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(548);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((com_badlogic_gdx_utils_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(549);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ArrayMap_keys_R_com_badlogic_gdx_utils_ArrayMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:keys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(558);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_ArrayMap$Keys(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap$Keys);
	init_com_badlogic_gdx_utils_ArrayMap$Keys_com_badlogic_gdx_utils_ArrayMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(560);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ArrayMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap$Keys);
	init_com_badlogic_gdx_utils_ArrayMap$Keys_com_badlogic_gdx_utils_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_keys1 = (jref) sp[1].o;
	LINE_NUMBER(561);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ArrayMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap$Keys);
	init_com_badlogic_gdx_utils_ArrayMap$Keys_com_badlogic_gdx_utils_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_keys2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (((jint)((com_badlogic_gdx_utils_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((com_badlogic_gdx_utils_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(565);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((com_badlogic_gdx_utils_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(566);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((com_badlogic_gdx_utils_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(567);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((com_badlogic_gdx_utils_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(570);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((com_badlogic_gdx_utils_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(571);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((com_badlogic_gdx_utils_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(572);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_ArrayMap_lambda$new$1_java_lang_Class_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ArrayReflection_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_ArrayMap_lambda$new$0_java_lang_Class_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArrayMap:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ArrayReflection_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_utils_ArrayMap;
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

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_com_badlogic_gdx_utils_ArrayMap[] {
	(void *) M_com_badlogic_gdx_utils_ArrayMap_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap_int_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_getKeyAt_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_getValueAt_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_firstKey_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_firstValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_setKey_int_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_setValue_int_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_insert_int_java_lang_Object_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_removeIndex_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_peekKey_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_peekValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_clear_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_clear,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_shrink,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_ensureCapacity_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_resize_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_reverse,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_shuffle,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_truncate_int,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_equalsIdentity_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_entries_R_com_badlogic_gdx_utils_ArrayMap$Entries,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_values_R_com_badlogic_gdx_utils_ArrayMap$Values,
	(void *) M_com_badlogic_gdx_utils_ArrayMap_keys_R_com_badlogic_gdx_utils_ArrayMap$Keys,
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
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;I)I" },
	{ "putMissing", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Lcom/badlogic/gdx/utils/ArrayMap;)V" },
	{ "putAll", "(Lcom/badlogic/gdx/utils/ArrayMap;II)V" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "getKey", "(Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "getKeyAt", "(I)Ljava/lang/Object;" },
	{ "getValueAt", "(I)Ljava/lang/Object;" },
	{ "firstKey", "()Ljava/lang/Object;" },
	{ "firstValue", "()Ljava/lang/Object;" },
	{ "setKey", "(ILjava/lang/Object;)V" },
	{ "setValue", "(ILjava/lang/Object;)V" },
	{ "insert", "(ILjava/lang/Object;Ljava/lang/Object;)V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;Z)Z" },
	{ "indexOfKey", "(Ljava/lang/Object;)I" },
	{ "indexOfValue", "(Ljava/lang/Object;Z)I" },
	{ "removeKey", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "removeValue", "(Ljava/lang/Object;Z)Z" },
	{ "removeIndex", "(I)V" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "peekKey", "()Ljava/lang/Object;" },
	{ "peekValue", "()Ljava/lang/Object;" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "shrink", "()V" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "truncate", "(I)V" },
	{ "equalsIdentity", "(Ljava/lang/Object;)Z" },
	{ "entries", "()Lcom/badlogic/gdx/utils/ArrayMap$Entries;" },
	{ "values", "()Lcom/badlogic/gdx/utils/ArrayMap$Values;" },
	{ "keys", "()Lcom/badlogic/gdx/utils/ArrayMap$Keys;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_ArrayMap$Entries,
	&class_com_badlogic_gdx_utils_ArrayMap$Values,
	&class_com_badlogic_gdx_utils_ArrayMap$Keys,
};

static FieldMetadata fields[] {
	{ "keys", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_ArrayMap, F_keys), "[Ljava/lang/Object;", 1 },
	{ "values", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_ArrayMap, F_values), "[Ljava/lang/Object;", 1 },
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_ArrayMap, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(com_badlogic_gdx_utils_ArrayMap, F_ordered), "Z", 1 },
	{ "entries1", &class_com_badlogic_gdx_utils_ArrayMap$Entries, offsetof(com_badlogic_gdx_utils_ArrayMap, F_entries1), "Lcom/badlogic/gdx/utils/ArrayMap$Entries;", 130 },
	{ "entries2", &class_com_badlogic_gdx_utils_ArrayMap$Entries, offsetof(com_badlogic_gdx_utils_ArrayMap, F_entries2), "Lcom/badlogic/gdx/utils/ArrayMap$Entries;", 130 },
	{ "values1", &class_com_badlogic_gdx_utils_ArrayMap$Values, offsetof(com_badlogic_gdx_utils_ArrayMap, F_values1), "Lcom/badlogic/gdx/utils/ArrayMap$Values;", 130 },
	{ "values2", &class_com_badlogic_gdx_utils_ArrayMap$Values, offsetof(com_badlogic_gdx_utils_ArrayMap, F_values2), "Lcom/badlogic/gdx/utils/ArrayMap$Values;", 130 },
	{ "keys1", &class_com_badlogic_gdx_utils_ArrayMap$Keys, offsetof(com_badlogic_gdx_utils_ArrayMap, F_keys1), "Lcom/badlogic/gdx/utils/ArrayMap$Keys;", 130 },
	{ "keys2", &class_com_badlogic_gdx_utils_ArrayMap$Keys, offsetof(com_badlogic_gdx_utils_ArrayMap, F_keys2), "Lcom/badlogic/gdx/utils/ArrayMap$Keys;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ArrayMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ArrayMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ArrayMap_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ArrayMap_boolean_int_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier, 0, "(ZILcom/badlogic/gdx/utils/ArraySupplier;Lcom/badlogic/gdx/utils/ArraySupplier;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ArrayMap_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier, 0, "(Lcom/badlogic/gdx/utils/ArraySupplier;Lcom/badlogic/gdx/utils/ArraySupplier;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ArrayMap_boolean_int_java_lang_Class_java_lang_Class, 0, "(ZILjava/lang/Class;Ljava/lang/Class;)V", 131073 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ArrayMap_java_lang_Class_java_lang_Class, 0, "(Ljava/lang/Class;Ljava/lang/Class;)V", 131073 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ArrayMap_com_badlogic_gdx_utils_ArrayMap, 0, "(Lcom/badlogic/gdx/utils/ArrayMap;)V", 1 },
	{ "put", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 1 },
	{ "put", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int, VTABLE_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int, "(Ljava/lang/Object;Ljava/lang/Object;I)I", 1 },
	{ "putMissing", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putAll", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap, VTABLE_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap, "(Lcom/badlogic/gdx/utils/ArrayMap;)V", 1 },
	{ "putAll", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap_int_int, VTABLE_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap_int_int, "(Lcom/badlogic/gdx/utils/ArrayMap;II)V", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "getKey", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object, "(Ljava/lang/Object;Z)Ljava/lang/Object;", 1 },
	{ "getKeyAt", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_getKeyAt_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_getKeyAt_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "getValueAt", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_getValueAt_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_getValueAt_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "firstKey", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_firstKey_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_firstKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "firstValue", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_firstValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_firstValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setKey", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_setKey_int_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_setKey_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "setValue", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_setValue_int_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_setValue_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_insert_int_java_lang_Object_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_insert_int_java_lang_Object_java_lang_Object, "(ILjava/lang/Object;Ljava/lang/Object;)V", 1 },
	{ "containsKey", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_containsKey_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ArrayMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsValue", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "indexOfKey", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "indexOfValue", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int, VTABLE_com_badlogic_gdx_utils_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int, "(Ljava/lang/Object;Z)I", 1 },
	{ "removeKey", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "removeValue", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "removeIndex", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_removeIndex_int, VTABLE_com_badlogic_gdx_utils_ArrayMap_removeIndex_int, "(I)V", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_ArrayMap_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_ArrayMap_isEmpty_R_boolean, "()Z", 1 },
	{ "peekKey", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_peekKey_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_peekKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peekValue", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_peekValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ArrayMap_peekValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_clear_int, VTABLE_com_badlogic_gdx_utils_ArrayMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_clear, VTABLE_com_badlogic_gdx_utils_ArrayMap_clear, "()V", 1 },
	{ "shrink", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_shrink, VTABLE_com_badlogic_gdx_utils_ArrayMap_shrink, "()V", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_ensureCapacity_int, VTABLE_com_badlogic_gdx_utils_ArrayMap_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_resize_int, VTABLE_com_badlogic_gdx_utils_ArrayMap_resize_int, "(I)V", 4 },
	{ "reverse", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_reverse, VTABLE_com_badlogic_gdx_utils_ArrayMap_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_shuffle, VTABLE_com_badlogic_gdx_utils_ArrayMap_shuffle, "()V", 1 },
	{ "truncate", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_truncate_int, VTABLE_com_badlogic_gdx_utils_ArrayMap_truncate_int, "(I)V", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_ArrayMap_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ArrayMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equalsIdentity", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_equalsIdentity_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ArrayMap_equalsIdentity_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_ArrayMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_ArrayMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "entries", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_entries_R_com_badlogic_gdx_utils_ArrayMap$Entries, VTABLE_com_badlogic_gdx_utils_ArrayMap_entries_R_com_badlogic_gdx_utils_ArrayMap$Entries, "()Lcom/badlogic/gdx/utils/ArrayMap$Entries;", 1 },
	{ "values", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_values_R_com_badlogic_gdx_utils_ArrayMap$Values, VTABLE_com_badlogic_gdx_utils_ArrayMap_values_R_com_badlogic_gdx_utils_ArrayMap$Values, "()Lcom/badlogic/gdx/utils/ArrayMap$Values;", 1 },
	{ "keys", (intptr_t) M_com_badlogic_gdx_utils_ArrayMap_keys_R_com_badlogic_gdx_utils_ArrayMap$Keys, VTABLE_com_badlogic_gdx_utils_ArrayMap_keys_R_com_badlogic_gdx_utils_ArrayMap$Keys, "()Lcom/badlogic/gdx/utils/ArrayMap$Keys;", 1 },
	{ "lambda$new$1", (intptr_t) SM_com_badlogic_gdx_utils_ArrayMap_lambda$new$1_java_lang_Class_int_R_Array1_java_lang_Object, 0, "(Ljava/lang/Class;I)[Ljava/lang/Object;", 4106 },
	{ "lambda$new$0", (intptr_t) SM_com_badlogic_gdx_utils_ArrayMap_lambda$new$0_java_lang_Class_int_R_Array1_java_lang_Object, 0, "(Ljava/lang/Class;I)[Ljava/lang/Object;", 4106 },
};

Class class_com_badlogic_gdx_utils_ArrayMap{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/ArrayMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_ArrayMap),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_ArrayMap,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_ArrayMap,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_ArrayMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 52,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_ArrayMap = registerClass(&class_com_badlogic_gdx_utils_ArrayMap);

}

