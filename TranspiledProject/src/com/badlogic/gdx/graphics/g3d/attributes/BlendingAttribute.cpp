#include "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute.h"
#include "com/badlogic/gdx/graphics/g3d/Attribute.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_Alias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_Type;

void mark_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_Alias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_Alias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_Alias, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g3d_Attribute(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) object;
}

jbool SM_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_is_long_R_boolean(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:is", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(29);
	if ((longCompare(((frame[0].l) & (clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_Type)), (frame[0].l))) != 0) goto label_1;
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

void init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(44);
	init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_boolean_int_int_float(jcontext ctx, jobject self, jbool param0, jint param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(48);
	init_com_badlogic_gdx_graphics_g3d_Attribute_long(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_Type));
	LINE_NUMBER(41);
	((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_opacity = (jfloat(1));
	LINE_NUMBER(49);
	((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_blended = (frame[1].i);
	LINE_NUMBER(50);
	((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_sourceFunction = (frame[2].i);
	LINE_NUMBER(51);
	((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_destFunction = (frame[3].i);
	LINE_NUMBER(52);
	((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_opacity = (frame[4].f);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(56);
	init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_boolean_int_int_float(ctx, (frame[0].o), (jint(1)), (frame[1].i), (frame[2].i), (frame[3].f));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(60);
	init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_int_int_float(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jfloat(1)));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_boolean_float(jcontext ctx, jobject self, jbool param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(64);
	init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_boolean_int_int_float(ctx, (frame[0].o), (frame[1].i), (770), (771), (frame[2].f));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(68);
	init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_boolean_float(ctx, (frame[0].o), (jint(1)), (frame[1].f));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[1].o)))->F_blended) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_4;
	INST_SIPUSH(770);
	goto label_5;
label_4:;
	INST_ALOAD(1);
	sp[-1].i = ((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK(sp[-1].o))->F_sourceFunction;
label_5:;
	{
	LINE_NUMBER(73);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	INST_SIPUSH(771);
	goto label_7;
label_6:;
	INST_ALOAD(1);
	sp[-1].i = ((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK(sp[-1].o))->F_destFunction;
label_7:;
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_8;
	INST_FCONST(1);
	goto label_9;
label_8:;
	INST_ALOAD(1);
	sp[-1].f = ((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK(sp[-1].o))->F_opacity;
label_9:;
	{
	sp -= 5;
	LINE_NUMBER(72);
	init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_boolean_int_int_float(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].f);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(84);
	jint temp1 = (947) * (frame[1].i);
	sp[0].i = temp1;
	sp += 1;
	if (((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_blended) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(85);
	frame[1].i = (((947) * (frame[1].i)) + ((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_sourceFunction));
	LINE_NUMBER(86);
	frame[1].i = (((947) * (frame[1].i)) + ((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_destFunction));
	LINE_NUMBER(87);
	jint temp0 = (947) * (frame[1].i);
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_opacity));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:compareTo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type), ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type))) == 0) goto label_1;
	}
	{
	popStackFrame(ctx);
	return (jint((((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type) - ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type))));
	}
label_1:;
	{
	LINE_NUMBER(94);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute, (frame[1].o)));
	LINE_NUMBER(95);
	if (((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_blended) == ((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[2].o)))->F_blended)) goto label_3;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_blended) == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(-1);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(96);
	if (((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_sourceFunction) == ((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[2].o)))->F_sourceFunction)) goto label_6;
	}
	{
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_sourceFunction) - ((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[2].o)))->F_sourceFunction));
	}
label_6:;
	{
	LINE_NUMBER(97);
	if (((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_destFunction) == ((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[2].o)))->F_destFunction)) goto label_7;
	}
	{
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_destFunction) - ((jint)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[2].o)))->F_destFunction));
	}
label_7:;
	{
	LINE_NUMBER(98);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_opacity), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[2].o)))->F_opacity));
	if (temp0 == 0) goto label_8;
	}
	INST_ICONST(0);
	goto label_9;
label_8:;
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[0].o)))->F_opacity), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute *) NULL_CHECK((frame[2].o)))->F_opacity), 1)) >= 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_9;
label_10:;
	INST_ICONST(-1);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:copy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_Alias = ((jobject) createStringLiteral(ctx, u8"blended"_j));
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	{
	LINE_NUMBER(26);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"blended"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_Type = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute[] {
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attribute_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attribute_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_compareTo_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "copy", "()Lcom/badlogic/gdx/graphics/g3d/Attribute;" },
	{ "equals", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)Z" },
	{ "copy", "()Lcom/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute;" },
	{ "compareTo", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)I" },
};

static FieldMetadata fields[] {
	{ "Alias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_Alias, "Ljava/lang/String;", 25 },
	{ "Type", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_Type, "J", 25 },
	{ "blended", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute, F_blended), "Z", 1 },
	{ "sourceFunction", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute, F_sourceFunction), "I", 1 },
	{ "destFunction", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute, F_destFunction), "I", 1 },
	{ "opacity", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute, F_opacity), "F", 1 },
};

static MethodMetadata methods[] {
	{ "is", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_is_long_R_boolean, 0, "(J)Z", 25 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_boolean_int_int_float, 0, "(ZIIF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_int_int_float, 0, "(IIF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_boolean_float, 0, "(ZF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_float, 0, "(F)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute, 0, "(Lcom/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute;)V", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute, "()Lcom/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_hashCode_R_int, "()I", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int, "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)I", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute, "()Lcom/badlogic/gdx/graphics/g3d/Attribute;", 4161 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_compareTo_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_Attribute,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute = registerClass(&class_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute);

}

