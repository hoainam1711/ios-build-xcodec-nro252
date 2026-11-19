#include "com/badlogic/gdx/graphics/VertexAttributes.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/VertexAttributes_ReadonlyIterator.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/VertexAttributes_ReadonlyIterable.h"
#include "java/lang/Comparable.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/graphics/VertexAttributes_Usage.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/VertexAttributes.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/VertexAttribute.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_VertexAttributes(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_VertexAttributes *) object;
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
	if (self->F_iterable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterable)->clazz)->markFunction)((jobject) self->F_iterable, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_VertexAttributes_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttributes(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_mask = (jlong(-1ll));
	LINE_NUMBER(55);
	((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_boneWeightUnits = (jint(-1));
	LINE_NUMBER(58);
	((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_textureCoordinates = (jint(-1));
	LINE_NUMBER(64);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_5;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"attributes must be >= 1"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(67);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_8;
	}
	{
	LINE_NUMBER(68);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(67);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(70);
	((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes = (jref) (frame[2].o);
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_VertexAttributes_calculateOffsets_R_int(ctx, (frame[0].o));
	((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize = temp0;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttributes_getOffset_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:getOffset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_findByUsage_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_findByUsage_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(78);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[3].o)))->F_offset) / (jint(4)));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttributes_getOffset_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:getOffset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(85);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_getOffset_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_getOffset_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_VertexAttributes_findByUsage_int_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:findByUsage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(92);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), (frame[3].i));
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(sp[0].o))->F_usage) != (frame[1].i)) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(92);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttributes_calculateOffsets_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:calculateOffsets", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	frame[1].i = (jint(0));
	LINE_NUMBER(99);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(101);
	((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[3].o)))->F_offset = (frame[1].i);
	LINE_NUMBER(102);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_VertexAttribute_getSizeInBytes_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttribute_getSizeInBytes_R_int])(ctx, (frame[3].o));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(99);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttributes_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_VertexAttributes_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"["_j))));
	LINE_NUMBER(122);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"("_j))));
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_alias;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(126);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_usage));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(128);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_numComponents));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(130);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_offset));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8")"_j))));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(122);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"]"_j))));
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_VertexAttributes_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:equals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(141);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_VertexAttributes)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(142);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes, (frame[1].o)));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[2].o)))->F_attributes;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(144);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[2].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttribute_equals_com_badlogic_gdx_graphics_VertexAttribute_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttribute_equals_com_badlogic_gdx_graphics_VertexAttribute_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	if (temp0 != 0) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(144);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttributes_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:hashCode", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	jint temp0 = 61;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	frame[1].l = (jlong((temp0 * (((jarray) nullCheck(ctx, sp[0].o))->length))));
	LINE_NUMBER(153);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(154);
	jlong temp0 = (frame[1].l) * (jlong(61ll));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_VertexAttribute_hashCode_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttribute_hashCode_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))));
	frame[1].l = (temp0 + (jlong(temp1)));
	LINE_NUMBER(153);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return (jint(((frame[1].l) ^ ((frame[1].l) >> (32)))));
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_graphics_VertexAttributes_getMask_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:getMask", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_mask), (jlong(-1ll)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(163);
	frame[1].l = (jlong(0));
	LINE_NUMBER(164);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(165);
	jlong temp0 = frame[1].l;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	frame[1].l = (temp0 | (jlong(((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_usage))));
	LINE_NUMBER(164);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(167);
	((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_mask = (frame[1].l);
	}
label_1:;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return ((jlong)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_mask);
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_graphics_VertexAttributes_getMaskWithSizePacked_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:getMaskWithSizePacked", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_graphics_VertexAttributes_getMask_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_getMask_R_long])(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp0 | ((jlong((((jarray) nullCheck(ctx, sp[0].o))->length))) << (32)));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttributes_getBoneWeights_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:getBoneWeights", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_boneWeightUnits) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(181);
	((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_boneWeightUnits = (jint(0));
	LINE_NUMBER(182);
	frame[1].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(184);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[2].o)))->F_usage) != (64)) goto label_7;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_boneWeightUnits), (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[2].o)))->F_unit) + (jint(1))));
	((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_boneWeightUnits = temp0;
	}
label_7:;
	{
	LINE_NUMBER(182);
	INST_IINC(1, 1);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_boneWeightUnits);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttributes_getTextureCoordinates_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:getTextureCoordinates", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_textureCoordinates) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(195);
	((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_textureCoordinates = (jint(0));
	LINE_NUMBER(196);
	frame[1].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(198);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[2].o)))->F_usage) != (16)) goto label_7;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_textureCoordinates), (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[2].o)))->F_unit) + (jint(1))));
	((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_textureCoordinates = temp0;
	}
label_7:;
	{
	LINE_NUMBER(196);
	INST_IINC(1, 1);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_textureCoordinates);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttributes_compareTo_com_badlogic_gdx_graphics_VertexAttributes_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:compareTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[1].o)))->F_attributes;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[1].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp0 - (((jarray) nullCheck(ctx, sp[0].o))->length));
	}
label_1:;
	{
	LINE_NUMBER(209);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_graphics_VertexAttributes_getMask_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_getMask_R_long])(ctx, (frame[0].o));
	frame[2].l = temp0;
	LINE_NUMBER(210);
	jlong temp1 = (jlong)((func_com_badlogic_gdx_graphics_VertexAttributes_getMask_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_getMask_R_long])(ctx, (frame[1].o));
	frame[4].l = temp1;
	LINE_NUMBER(211);
	if ((longCompare((frame[2].l), (frame[4].l))) == 0) goto label_4;
	}
	{
	if ((longCompare((frame[2].l), (frame[4].l))) >= 0) goto label_5;
	}
	INST_ICONST(-1);
	goto label_6;
label_5:;
	INST_ICONST(1);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	frame[6].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_7:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[1].o)))->F_attributes;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	LINE_NUMBER(215);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[7].o)))->F_usage) == ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[8].o)))->F_usage)) goto label_12;
	}
	{
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[7].o)))->F_usage) - ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[8].o)))->F_usage));
	}
label_12:;
	{
	LINE_NUMBER(216);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[7].o)))->F_unit) == ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[8].o)))->F_unit)) goto label_13;
	}
	{
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[7].o)))->F_unit) - ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[8].o)))->F_unit));
	}
label_13:;
	{
	LINE_NUMBER(217);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[7].o)))->F_numComponents) == ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[8].o)))->F_numComponents)) goto label_14;
	}
	{
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[7].o)))->F_numComponents) - ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[8].o)))->F_numComponents));
	}
label_14:;
	{
	LINE_NUMBER(218);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[7].o)))->F_normalized) == ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[8].o)))->F_normalized)) goto label_15;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[7].o)))->F_normalized) == 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(-1);
label_17:;
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(219);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[7].o)))->F_type) == ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[8].o)))->F_type)) goto label_18;
	}
	{
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[7].o)))->F_type) - ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[8].o)))->F_type));
	}
label_18:;
	{
	LINE_NUMBER(212);
	INST_IINC(6, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_VertexAttributes_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_iterable;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_attributes;
	init_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable_Array1_java_lang_Object(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_iterable = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[0].o)))->F_iterable;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttributes_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_compareTo_com_badlogic_gdx_graphics_VertexAttributes_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_compareTo_com_badlogic_gdx_graphics_VertexAttributes_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_VertexAttributes[] {
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_compareTo_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_getOffset_int_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_getOffset_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_findByUsage_int_R_com_badlogic_gdx_graphics_VertexAttribute,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_calculateOffsets_R_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_size_R_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_getMask_R_long,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_getMaskWithSizePacked_R_long,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_getBoneWeights_R_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_getTextureCoordinates_R_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes_compareTo_com_badlogic_gdx_graphics_VertexAttributes_R_int,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getOffset", "(II)I" },
	{ "getOffset", "(I)I" },
	{ "findByUsage", "(I)Lcom/badlogic/gdx/graphics/VertexAttribute;" },
	{ "calculateOffsets", "()I" },
	{ "size", "()I" },
	{ "get", "(I)Lcom/badlogic/gdx/graphics/VertexAttribute;" },
	{ "getMask", "()J" },
	{ "getMaskWithSizePacked", "()J" },
	{ "getBoneWeights", "()I" },
	{ "getTextureCoordinates", "()I" },
	{ "compareTo", "(Lcom/badlogic/gdx/graphics/VertexAttributes;)I" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_java_lang_Comparable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_VertexAttributes$Usage,
	&class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable,
	&class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator,
};

static FieldMetadata fields[] {
	{ "attributes", getArrayClass(&class_com_badlogic_gdx_graphics_VertexAttribute, 1), offsetof(com_badlogic_gdx_graphics_VertexAttributes, F_attributes), "[Lcom/badlogic/gdx/graphics/VertexAttribute;", 18 },
	{ "vertexSize", &class_int, offsetof(com_badlogic_gdx_graphics_VertexAttributes, F_vertexSize), "I", 17 },
	{ "mask", &class_long, offsetof(com_badlogic_gdx_graphics_VertexAttributes, F_mask), "J", 2 },
	{ "boneWeightUnits", &class_int, offsetof(com_badlogic_gdx_graphics_VertexAttributes, F_boneWeightUnits), "I", 2 },
	{ "textureCoordinates", &class_int, offsetof(com_badlogic_gdx_graphics_VertexAttributes, F_textureCoordinates), "I", 2 },
	{ "iterable", &class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable, offsetof(com_badlogic_gdx_graphics_VertexAttributes, F_iterable), "Lcom/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterable;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_VertexAttributes_Array1_com_badlogic_gdx_graphics_VertexAttribute, 0, "([Lcom/badlogic/gdx/graphics/VertexAttribute;)V", 129 },
	{ "getOffset", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_getOffset_int_int_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_getOffset_int_int_R_int, "(II)I", 1 },
	{ "getOffset", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_getOffset_int_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_getOffset_int_R_int, "(I)I", 1 },
	{ "findByUsage", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_findByUsage_int_R_com_badlogic_gdx_graphics_VertexAttribute, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_findByUsage_int_R_com_badlogic_gdx_graphics_VertexAttribute, "(I)Lcom/badlogic/gdx/graphics/VertexAttribute;", 1 },
	{ "calculateOffsets", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_calculateOffsets_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_calculateOffsets_R_int, "()I", 2 },
	{ "size", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_size_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int, "()I", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute, "(I)Lcom/badlogic/gdx/graphics/VertexAttribute;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_hashCode_R_int, "()I", 1 },
	{ "getMask", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_getMask_R_long, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_getMask_R_long, "()J", 1 },
	{ "getMaskWithSizePacked", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_getMaskWithSizePacked_R_long, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_getMaskWithSizePacked_R_long, "()J", 1 },
	{ "getBoneWeights", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_getBoneWeights_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_getBoneWeights_R_int, "()I", 1 },
	{ "getTextureCoordinates", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_getTextureCoordinates_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_getTextureCoordinates_R_int, "()I", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_compareTo_com_badlogic_gdx_graphics_VertexAttributes_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_compareTo_com_badlogic_gdx_graphics_VertexAttributes_R_int, "(Lcom/badlogic/gdx/graphics/VertexAttributes;)I", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes_compareTo_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttributes_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_com_badlogic_gdx_graphics_VertexAttributes{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/VertexAttributes",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_VertexAttributes),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_VertexAttributes,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_VertexAttributes,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_VertexAttributes,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_VertexAttributes = registerClass(&class_com_badlogic_gdx_graphics_VertexAttributes);

}

