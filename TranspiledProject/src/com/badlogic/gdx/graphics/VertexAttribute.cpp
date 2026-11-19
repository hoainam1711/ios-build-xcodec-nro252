#include "com/badlogic/gdx/graphics/VertexAttribute.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/VertexAttribute.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_VertexAttribute(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_VertexAttribute *) object;
	if (self->F_alias)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_alias)->clazz)->markFunction)((jobject) self->F_alias, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(51);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o), (jint(0)));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if ((frame[1].i) != (jint(4))) goto label_1;
	}
	INST_SIPUSH(5121);
	goto label_2;
label_1:;
	INST_SIPUSH(5126);
label_2:;
	{
	if ((frame[1].i) != (jint(4))) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 5;
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_int_boolean_java_lang_String_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, (frame[3].o), (frame[4].i));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_VertexAttribute_int_int_int_boolean_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(75);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_int_boolean_java_lang_String_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].o), (jint(0)));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_VertexAttribute_int_int_int_boolean_java_lang_String_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jobject param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(88);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(89);
	((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_usage = (frame[1].i);
	LINE_NUMBER(90);
	((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_numComponents = (frame[2].i);
	LINE_NUMBER(91);
	((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_type = (frame[3].i);
	LINE_NUMBER(92);
	((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_normalized = (frame[4].i);
	LINE_NUMBER(93);
	((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_alias = (jref) (frame[5].o);
	LINE_NUMBER(94);
	((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_unit = (frame[6].i);
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(ctx, (frame[1].i));
	((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(sp[0].o))->F_usageIndex = temp0;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_VertexAttribute_copy_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:copy", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	jint temp0 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_usage;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_alias;
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_int_boolean_java_lang_String_int(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o, ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_unit));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_VertexAttribute_Position_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:Position", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	{
	LINE_NUMBER(105);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[0].o, (jint(1)), (jint(3)), (((jobject) createStringLiteral(ctx, u8"a_position"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_VertexAttribute_TexCoords_int_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jint param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:TexCoords", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(109);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	jint temp0 = 16;
	jint temp1 = jint(2);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"a_texCoord"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_VertexAttribute_Normal_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:Normal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	{
	LINE_NUMBER(113);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[0].o, (8), (jint(3)), (((jobject) createStringLiteral(ctx, u8"a_normal"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_VertexAttribute_ColorPacked_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:ColorPacked", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	{
	LINE_NUMBER(117);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_int_boolean_java_lang_String(ctx, sp[0].o, (jint(4)), (jint(4)), (5121), (jint(1)), (((jobject) createStringLiteral(ctx, u8"a_color"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_VertexAttribute_ColorUnpacked_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:ColorUnpacked", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	{
	LINE_NUMBER(121);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_int_boolean_java_lang_String(ctx, sp[0].o, (jint(2)), (jint(4)), (5126), (jint(0)), (((jobject) createStringLiteral(ctx, u8"a_color"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_VertexAttribute_Tangent_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:Tangent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	{
	LINE_NUMBER(125);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[0].o, (128), (jint(3)), (((jobject) createStringLiteral(ctx, u8"a_tangent"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_VertexAttribute_Binormal_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:Binormal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	{
	LINE_NUMBER(129);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[0].o, (256), (jint(3)), (((jobject) createStringLiteral(ctx, u8"a_binormal"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_VertexAttribute_BoneWeight_int_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jint param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:BoneWeight", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(133);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	jint temp0 = 64;
	jint temp1 = jint(2);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"a_boneWeight"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_VertexAttribute_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_VertexAttribute)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttribute_equals_com_badlogic_gdx_graphics_VertexAttribute_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttribute_equals_com_badlogic_gdx_graphics_VertexAttribute_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_VertexAttribute_equals_com_badlogic_gdx_graphics_VertexAttribute_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_usage) != ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[1].o)))->F_usage)) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_numComponents) != ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[1].o)))->F_numComponents)) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_type) != ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[1].o)))->F_type)) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_normalized) != ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[1].o)))->F_normalized)) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_alias;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[1].o)))->F_alias;
	LINE_NUMBER(147);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_unit) != ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[1].o)))->F_unit)) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttribute_getKey_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:getKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return ((((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_usageIndex) << (8)) + (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_unit) & (255)));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttribute_getSizeInBytes_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:getSizeInBytes", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	switch(((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_type)) {
		case 5120: goto label_1;
		case 5121: goto label_1;
		case 5122: goto label_2;
		case 5123: goto label_2;
		case 5124: goto label_3;
		case 5125: goto label_3;
		case 5126: goto label_3;
		case 5127: goto label_4;
		case 5128: goto label_4;
		case 5129: goto label_4;
		case 5130: goto label_4;
		case 5131: goto label_4;
		case 5132: goto label_3;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return ((jint(4)) * ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_numComponents));
	}
label_1:;
	{
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_numComponents);
	}
label_2:;
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return ((jint(2)) * ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_numComponents));
	}
label_4:;
	{
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_VertexAttribute_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttribute:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttribute_getKey_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttribute_getKey_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(176);
	frame[1].i = (((541) * (frame[1].i)) + ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_numComponents));
	LINE_NUMBER(177);
	jint temp1 = (541) * (frame[1].i);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_alias;
	jint temp2 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	frame[1].i = (temp1 + temp2);
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_VertexAttribute[] {
	(void *) M_com_badlogic_gdx_graphics_VertexAttribute_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttribute_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttribute_copy_R_com_badlogic_gdx_graphics_VertexAttribute,
	(void *) M_com_badlogic_gdx_graphics_VertexAttribute_equals_com_badlogic_gdx_graphics_VertexAttribute_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_VertexAttribute_getKey_R_int,
	(void *) M_com_badlogic_gdx_graphics_VertexAttribute_getSizeInBytes_R_int,
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
	{ "copy", "()Lcom/badlogic/gdx/graphics/VertexAttribute;" },
	{ "equals", "(Lcom/badlogic/gdx/graphics/VertexAttribute;)Z" },
	{ "getKey", "()I" },
	{ "getSizeInBytes", "()I" },
};

static FieldMetadata fields[] {
	{ "usage", &class_int, offsetof(com_badlogic_gdx_graphics_VertexAttribute, F_usage), "I", 17 },
	{ "numComponents", &class_int, offsetof(com_badlogic_gdx_graphics_VertexAttribute, F_numComponents), "I", 17 },
	{ "normalized", &class_boolean, offsetof(com_badlogic_gdx_graphics_VertexAttribute, F_normalized), "Z", 17 },
	{ "type", &class_int, offsetof(com_badlogic_gdx_graphics_VertexAttribute, F_type), "I", 17 },
	{ "offset", &class_int, offsetof(com_badlogic_gdx_graphics_VertexAttribute, F_offset), "I", 1 },
	{ "alias", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_VertexAttribute, F_alias), "Ljava/lang/String;", 1 },
	{ "unit", &class_int, offsetof(com_badlogic_gdx_graphics_VertexAttribute, F_unit), "I", 1 },
	{ "usageIndex", &class_int, offsetof(com_badlogic_gdx_graphics_VertexAttribute, F_usageIndex), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String, 0, "(IILjava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String_int, 0, "(IILjava/lang/String;I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_VertexAttribute_int_int_int_boolean_java_lang_String, 0, "(IIIZLjava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_VertexAttribute_int_int_int_boolean_java_lang_String_int, 0, "(IIIZLjava/lang/String;I)V", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttribute_copy_R_com_badlogic_gdx_graphics_VertexAttribute, VTABLE_com_badlogic_gdx_graphics_VertexAttribute_copy_R_com_badlogic_gdx_graphics_VertexAttribute, "()Lcom/badlogic/gdx/graphics/VertexAttribute;", 1 },
	{ "Position", (intptr_t) SM_com_badlogic_gdx_graphics_VertexAttribute_Position_R_com_badlogic_gdx_graphics_VertexAttribute, 0, "()Lcom/badlogic/gdx/graphics/VertexAttribute;", 9 },
	{ "TexCoords", (intptr_t) SM_com_badlogic_gdx_graphics_VertexAttribute_TexCoords_int_R_com_badlogic_gdx_graphics_VertexAttribute, 0, "(I)Lcom/badlogic/gdx/graphics/VertexAttribute;", 9 },
	{ "Normal", (intptr_t) SM_com_badlogic_gdx_graphics_VertexAttribute_Normal_R_com_badlogic_gdx_graphics_VertexAttribute, 0, "()Lcom/badlogic/gdx/graphics/VertexAttribute;", 9 },
	{ "ColorPacked", (intptr_t) SM_com_badlogic_gdx_graphics_VertexAttribute_ColorPacked_R_com_badlogic_gdx_graphics_VertexAttribute, 0, "()Lcom/badlogic/gdx/graphics/VertexAttribute;", 9 },
	{ "ColorUnpacked", (intptr_t) SM_com_badlogic_gdx_graphics_VertexAttribute_ColorUnpacked_R_com_badlogic_gdx_graphics_VertexAttribute, 0, "()Lcom/badlogic/gdx/graphics/VertexAttribute;", 9 },
	{ "Tangent", (intptr_t) SM_com_badlogic_gdx_graphics_VertexAttribute_Tangent_R_com_badlogic_gdx_graphics_VertexAttribute, 0, "()Lcom/badlogic/gdx/graphics/VertexAttribute;", 9 },
	{ "Binormal", (intptr_t) SM_com_badlogic_gdx_graphics_VertexAttribute_Binormal_R_com_badlogic_gdx_graphics_VertexAttribute, 0, "()Lcom/badlogic/gdx/graphics/VertexAttribute;", 9 },
	{ "BoneWeight", (intptr_t) SM_com_badlogic_gdx_graphics_VertexAttribute_BoneWeight_int_R_com_badlogic_gdx_graphics_VertexAttribute, 0, "(I)Lcom/badlogic/gdx/graphics/VertexAttribute;", 9 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttribute_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_graphics_VertexAttribute_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttribute_equals_com_badlogic_gdx_graphics_VertexAttribute_R_boolean, VTABLE_com_badlogic_gdx_graphics_VertexAttribute_equals_com_badlogic_gdx_graphics_VertexAttribute_R_boolean, "(Lcom/badlogic/gdx/graphics/VertexAttribute;)Z", 1 },
	{ "getKey", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttribute_getKey_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttribute_getKey_R_int, "()I", 1 },
	{ "getSizeInBytes", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttribute_getSizeInBytes_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttribute_getSizeInBytes_R_int, "()I", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttribute_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_VertexAttribute_hashCode_R_int, "()I", 1 },
};

Class class_com_badlogic_gdx_graphics_VertexAttribute{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/VertexAttribute",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_VertexAttribute),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_VertexAttribute,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_VertexAttribute,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_VertexAttribute,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_VertexAttribute = registerClass(&class_com_badlogic_gdx_graphics_VertexAttribute);

}

