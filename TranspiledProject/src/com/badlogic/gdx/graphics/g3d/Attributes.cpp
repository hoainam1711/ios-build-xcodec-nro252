#include "com/badlogic/gdx/graphics/g3d/Attributes.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/Attribute.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/util/Iterator.h"
#include "java/lang/Comparable.h"
#include "java/util/Comparator.h"
#include "com/badlogic/gdx/graphics/g3d/Attributes.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_Attributes(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_Attributes *) object;
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_Attributes(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_Attributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Attributes(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK(sp[0].o))->F_attributes = (jref) sp[1].o;
	LINE_NUMBER(28);
	((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_sorted = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Attributes_sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:sort", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	if (((jint)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_sorted) != 0) goto label_1;
	}
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_utils_Array_sort_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_sort_java_util_Comparator])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(34);
	((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_sorted = (jint(1));
	}
label_1:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_graphics_g3d_Attributes_getMask_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:getMask", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return ((jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_mask);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Attributes_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(46);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attributes_has_long_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_has_long_R_boolean])(ctx, (frame[0].o), (frame[1].l));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	INST_ISTORE(3);
label_2:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[0].o))))->F_type), (frame[1].l))) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(46);
	INST_IINC(3, 1);
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Attributes_get_java_lang_Class_long_R_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Attributes_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[2].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Attributes_get_com_badlogic_gdx_utils_Array_long_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(60);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	if ((longCompare((((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[0].o))))->F_type) & (frame[2].l)), (jlong(0)))) == 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[4].i));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[1].o)));
	}
label_4:;
	{
	LINE_NUMBER(60);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Attributes_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_mask = (jlong(0));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_Attributes_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Attributes_enable_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:enable", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK(sp[0].o))->F_mask = (((jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK(sp[0].o))->F_mask) | (frame[1].l));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Attributes_disable_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:disable", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK(sp[0].o))->F_mask = (((jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK(sp[0].o))->F_mask) & ((frame[1].l) ^ (jlong(-1ll))));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attributes_indexOf_long_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_indexOf_long_R_int])(ctx, (frame[0].o), ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type));
	frame[2].i = temp0;
	LINE_NUMBER(87);
	if ((frame[2].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(88);
	M_com_badlogic_gdx_graphics_g3d_Attributes_enable_long(ctx, (frame[0].o), ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(90);
	((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_sorted = (jint(0));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_utils_Array_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_set_int_java_lang_Object])(ctx, sp[0].o, (frame[2].i), (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(94);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_sort) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_sort])(ctx, (frame[0].o));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(100);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(101);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(107);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(108);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(109);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(116);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(117);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(118);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(119);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Attributes_set_Array1_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(126);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(125);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Attributes_set_java_lang_Iterable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[0].o));
	LINE_NUMBER(133);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (frame[3].o));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Attributes_remove_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:remove", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	frame[3].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_1:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].l = ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[0].o))))->F_type);
	LINE_NUMBER(141);
	if ((longCompare(((frame[1].l) & (frame[4].l)), (frame[4].l))) != 0) goto label_5;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(143);
	M_com_badlogic_gdx_graphics_g3d_Attributes_disable_long(ctx, (frame[0].o), (frame[4].l));
	LINE_NUMBER(144);
	((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_sorted = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(139);
	INST_IINC(3, -1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(147);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_sort) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_sort])(ctx, (frame[0].o));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_Attributes_has_long_R_boolean(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:has", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(154);
	if ((longCompare((frame[1].l), (jlong(0)))) == 0) goto label_1;
	}
	{
	if ((longCompare((((jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_mask) & (frame[1].l)), (frame[1].l))) != 0) goto label_1;
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

jint M_com_badlogic_gdx_graphics_g3d_Attributes_indexOf_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:indexOf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(159);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attributes_has_long_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_has_long_R_boolean])(ctx, (frame[0].o), (frame[1].l));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	INST_ISTORE(3);
label_2:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[0].o))))->F_type), (frame[1].l))) != 0) goto label_4;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(159);
	INST_IINC(3, 1);
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:same", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(169);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(170);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_mask), ((jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[1].o)))->F_mask))) == 0) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(171);
	if ((frame[2].i) != 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(172);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_sort) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_sort])(ctx, (frame[0].o));
	LINE_NUMBER(173);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_sort) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_sort])(ctx, (frame[1].o));
	LINE_NUMBER(174);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[1].o)))->F_attributes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[1].o)));
	if (temp0 != 0) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(174);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:same", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_Attributes_compare_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:compare", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (jint((((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type) - ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[2].o)))->F_type))));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Attributes_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_Attributes_attributesHash_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:attributesHash", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_sort) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_sort])(ctx, (frame[0].o));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	frame[1].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(202);
	frame[2].l = ((jlong(71ll)) + ((jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_mask));
	LINE_NUMBER(203);
	frame[4].i = (jint(1));
	LINE_NUMBER(204);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(205);
	jlong temp0 = frame[2].l;
	jlong temp1 = (jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_mask;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[0].o)));
	jlong temp3 = temp1 * (jlong(temp2));
	jint temp4 = ((frame[4].i) * (7)) & (jint(65535));
	frame[4].i = temp4;
	frame[2].l = (temp0 + (temp3 * (jlong(temp4))));
	LINE_NUMBER(204);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (jint(((frame[2].l) ^ ((frame[2].l) >> (32)))));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_Attributes_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attributes_attributesHash_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_attributesHash_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_Attributes_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_Attributes)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(217);
	if ((frame[1].o) != (frame[0].o)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(218);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_boolean_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attributes, (frame[1].o))), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_com_badlogic_gdx_graphics_g3d_Attributes_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:compareTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(224);
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_mask), ((jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[1].o)))->F_mask))) == 0) goto label_2;
	}
	{
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_mask), ((jlong)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[1].o)))->F_mask))) >= 0) goto label_3;
	}
	INST_ICONST(-1);
	goto label_4;
label_3:;
	INST_ICONST(1);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(225);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_sort) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_sort])(ctx, (frame[0].o));
	LINE_NUMBER(226);
	((func_com_badlogic_gdx_graphics_g3d_Attributes_sort) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_sort])(ctx, (frame[1].o));
	LINE_NUMBER(227);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Attributes *) NULL_CHECK((frame[1].o)))->F_attributes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attribute_compareTo_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_compareTo_java_lang_Object_R_int])(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, sp[1].o)));
	frame[3].i = temp0;
	LINE_NUMBER(229);
	if ((frame[3].i) == 0) goto label_11;
	}
	INST_ILOAD(3);
	if ((--sp)->i >= 0) goto label_12;
	INST_ICONST(-1);
	goto label_13;
label_12:;
	INST_ILOAD(3);
	if ((--sp)->i <= 0) goto label_14;
	INST_ICONST(1);
	goto label_13;
label_14:;
	INST_ICONST(0);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(227);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_Attributes_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:compare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(24);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attributes_compare_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_compare_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, (frame[1].o))), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, (frame[2].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attributes:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_com_badlogic_gdx_graphics_g3d_Attributes_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_com_badlogic_gdx_graphics_g3d_Attributes_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attributes, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_Attributes[] {
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_equals_java_lang_Object_R_boolean,
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
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_java_util_Comparator, &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "mask", &class_long, offsetof(com_badlogic_gdx_graphics_g3d_Attributes, F_mask), "J", 4 },
	{ "attributes", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_Attributes, F_attributes), "Lcom/badlogic/gdx/utils/Array;", 20 },
	{ "sorted", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_Attributes, F_sorted), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Attributes, 0, "()V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_sort, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_sort, "()V", 17 },
	{ "getMask", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_getMask_R_long, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_getMask_R_long, "()J", 17 },
	{ "get", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute, "(J)Lcom/badlogic/gdx/graphics/g3d/Attribute;", 17 },
	{ "get", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_get_java_lang_Class_long_R_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_get_java_lang_Class_long_R_com_badlogic_gdx_graphics_g3d_Attribute, "(Ljava/lang/Class;J)Lcom/badlogic/gdx/graphics/g3d/Attribute;", 17 },
	{ "get", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_get_com_badlogic_gdx_utils_Array_long_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_get_com_badlogic_gdx_utils_Array_long_R_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;J)Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_clear, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_clear, "()V", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_size_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_size_R_int, "()I", 1 },
	{ "enable", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_enable_long, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_enable_long, "(J)V", 18 },
	{ "disable", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_disable_long, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_disable_long, "(J)V", 18 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute, "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)V", 17 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute, "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)V", 17 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute, "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)V", 17 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute, "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)V", 17 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_set_Array1_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_Array1_com_badlogic_gdx_graphics_g3d_Attribute, "([Lcom/badlogic/gdx/graphics/g3d/Attribute;)V", 145 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_set_java_lang_Iterable, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_set_java_lang_Iterable, "(Ljava/lang/Iterable;)V", 17 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_remove_long, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_remove_long, "(J)V", 17 },
	{ "has", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_has_long_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_has_long_R_boolean, "(J)Z", 17 },
	{ "indexOf", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_indexOf_long_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_indexOf_long_R_int, "(J)I", 4 },
	{ "same", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_boolean_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_boolean_R_boolean, "(Lcom/badlogic/gdx/graphics/g3d/Attributes;Z)Z", 17 },
	{ "same", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_R_boolean, "(Lcom/badlogic/gdx/graphics/g3d/Attributes;)Z", 17 },
	{ "compare", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_compare_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_compare_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_R_int, "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)I", 17 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 17 },
	{ "attributesHash", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_attributesHash_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_attributesHash_R_int, "()I", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_com_badlogic_gdx_graphics_g3d_Attributes_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_com_badlogic_gdx_graphics_g3d_Attributes_R_int, "(Lcom/badlogic/gdx/graphics/g3d/Attributes;)I", 1 },
	{ "compare", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 4161 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_com_badlogic_gdx_graphics_g3d_Attributes{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/Attributes",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_Attributes),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_Attributes,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_Attributes,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_Attributes,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_Attributes = registerClass(&class_com_badlogic_gdx_graphics_g3d_Attributes);

}

