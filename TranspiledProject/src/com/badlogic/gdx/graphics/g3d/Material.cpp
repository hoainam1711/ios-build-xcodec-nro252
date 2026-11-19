#include "com/badlogic/gdx/graphics/g3d/Material.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/g3d/Attribute.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/g3d/Attributes.h"
#include "java/util/Comparator.h"
#include "com/badlogic/gdx/graphics/g3d/Material.h"
#include "java/lang/Iterable.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_g3d_Material_counter;

void mark_com_badlogic_gdx_graphics_g3d_Material(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g3d_Attributes(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g3d_Material *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g3d_Material(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"mtl"_j))));
	jint temp0 = (clinit_com_badlogic_gdx_graphics_g3d_Material(ctx), (jint)SF_com_badlogic_gdx_graphics_g3d_Material_counter) + (jint(1));
	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	SF_com_badlogic_gdx_graphics_g3d_Material_counter = temp0;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	init_com_badlogic_gdx_graphics_g3d_Attributes(ctx, (frame[0].o));
	LINE_NUMBER(33);
	((com_badlogic_gdx_graphics_g3d_Material *) NULL_CHECK((frame[0].o)))->F_id = (jref) (frame[1].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_Material_Array1_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	init_com_badlogic_gdx_graphics_g3d_Material(ctx, (frame[0].o));
	LINE_NUMBER(39);
	((func_com_badlogic_gdx_graphics_g3d_Material_set_Array1_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_Array1_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String_Array1_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(44);
	init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(45);
	((func_com_badlogic_gdx_graphics_g3d_Material_set_Array1_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_Array1_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_Material_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	init_com_badlogic_gdx_graphics_g3d_Material(ctx, (frame[0].o));
	LINE_NUMBER(51);
	((func_com_badlogic_gdx_graphics_g3d_Material_set_java_lang_Iterable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_java_lang_Iterable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(56);
	init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(57);
	((func_com_badlogic_gdx_graphics_g3d_Material_set_java_lang_Iterable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_java_lang_Iterable])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_Material_com_badlogic_gdx_graphics_g3d_Material(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Material *) NULL_CHECK((frame[1].o)))->F_id;
	init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String_com_badlogic_gdx_graphics_g3d_Material(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String_com_badlogic_gdx_graphics_g3d_Material(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(67);
	init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Material_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[0].o));
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Attribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[4].o));
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Material_copy_R_com_badlogic_gdx_graphics_g3d_Material(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_Material);
	init_com_badlogic_gdx_graphics_g3d_Material_com_badlogic_gdx_graphics_g3d_Material(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_Material_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_Attributes_hashCode_R_int(ctx, (frame[0].o));
	jint temp1 = jint(3);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Material *) NULL_CHECK((frame[0].o)))->F_id;
	jint temp2 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 + (temp1 * temp2));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_Material_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_Material)) == 0) goto label_1;
	}
	{
	if ((frame[1].o) == (frame[0].o)) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Material *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Material, (frame[1].o)))))->F_id;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Material *) NULL_CHECK((frame[0].o)))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_Attributes_equals_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_Material(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_Attributes(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Material:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	{
	LINE_NUMBER(22);
	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	SF_com_badlogic_gdx_graphics_g3d_Material_counter = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_Material[] {
	(void *) M_com_badlogic_gdx_graphics_g3d_Material_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Material_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_compare_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_Comparator_reversed_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_sort,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_getMask_R_long,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_get_java_lang_Class_long_R_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_get_com_badlogic_gdx_utils_Array_long_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_clear,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_size_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_enable_long,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_disable_long,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_Array1_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_java_lang_Iterable,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_remove_long,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_has_long_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_indexOf_long_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_compare_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_attributesHash_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_com_badlogic_gdx_graphics_g3d_Attributes_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Material_copy_R_com_badlogic_gdx_graphics_g3d_Material,
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
	{ "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "reversed", "()Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;)Ljava/util/Comparator;" },
	{ "thenComparingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;" },
	{ "thenComparingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;" },
	{ "thenComparingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;" },
	{ "lambda$thenComparing$0", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "sort", "()V" },
	{ "getMask", "()J" },
	{ "get", "(J)Lcom/badlogic/gdx/graphics/g3d/Attribute;" },
	{ "get", "(Ljava/lang/Class;J)Lcom/badlogic/gdx/graphics/g3d/Attribute;" },
	{ "get", "(Lcom/badlogic/gdx/utils/Array;J)Lcom/badlogic/gdx/utils/Array;" },
	{ "clear", "()V" },
	{ "size", "()I" },
	{ "enable", "(J)V" },
	{ "disable", "(J)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)V" },
	{ "set", "([Lcom/badlogic/gdx/graphics/g3d/Attribute;)V" },
	{ "set", "(Ljava/lang/Iterable;)V" },
	{ "remove", "(J)V" },
	{ "has", "(J)Z" },
	{ "indexOf", "(J)I" },
	{ "same", "(Lcom/badlogic/gdx/graphics/g3d/Attributes;Z)Z" },
	{ "same", "(Lcom/badlogic/gdx/graphics/g3d/Attributes;)Z" },
	{ "compare", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)I" },
	{ "attributesHash", "()I" },
	{ "compareTo", "(Lcom/badlogic/gdx/graphics/g3d/Attributes;)I" },
	{ "copy", "()Lcom/badlogic/gdx/graphics/g3d/Material;" },
};

static FieldMetadata fields[] {
	{ "counter", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_Material_counter, "I", 10 },
	{ "id", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_Material, F_id), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Material, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Material_Array1_com_badlogic_gdx_graphics_g3d_Attribute, 0, "([Lcom/badlogic/gdx/graphics/g3d/Attribute;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String_Array1_com_badlogic_gdx_graphics_g3d_Attribute, 0, "(Ljava/lang/String;[Lcom/badlogic/gdx/graphics/g3d/Attribute;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Material_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String_com_badlogic_gdx_utils_Array, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Material_com_badlogic_gdx_graphics_g3d_Material, 0, "(Lcom/badlogic/gdx/graphics/g3d/Material;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String_com_badlogic_gdx_graphics_g3d_Material, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/g3d/Material;)V", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Material_copy_R_com_badlogic_gdx_graphics_g3d_Material, VTABLE_com_badlogic_gdx_graphics_g3d_Material_copy_R_com_badlogic_gdx_graphics_g3d_Material, "()Lcom/badlogic/gdx/graphics/g3d/Material;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Material_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_Material_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Material_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_Material_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_Material, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_Material{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/Material",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_Attributes,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_Material),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_Material,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_Material,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_Material,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_Material = registerClass(&class_com_badlogic_gdx_graphics_g3d_Material);

}

