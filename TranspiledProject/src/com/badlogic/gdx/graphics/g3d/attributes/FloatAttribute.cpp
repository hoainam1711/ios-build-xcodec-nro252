#include "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute.h"
#include "com/badlogic/gdx/graphics/g3d/Attribute.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_ShininessAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_Shininess;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_AlphaTestAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_AlphaTest;

void mark_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_ShininessAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_ShininessAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_ShininessAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_AlphaTestAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_AlphaTestAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_AlphaTestAlias, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute *) object;
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_createShininess_float_R_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(jcontext ctx, jfloat param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute:createShininess", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(28);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_long_float(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_Shininess), (frame[0].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_createAlphaTest_float_R_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(jcontext ctx, jfloat param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute:createAlphaTest", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(35);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_long_float(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_AlphaTest), (frame[0].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(41);
	init_com_badlogic_gdx_graphics_g3d_Attribute_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_long_float(jcontext ctx, jobject self, jlong param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].f = param1;
	{
	LINE_NUMBER(45);
	init_com_badlogic_gdx_graphics_g3d_Attribute_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute *) NULL_CHECK((frame[0].o)))->F_value = (frame[3].f);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_long_float(ctx, sp[0].o, ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(57);
	jint temp1 = (977) * (frame[1].i);
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute *) NULL_CHECK((frame[0].o)))->F_value));
	frame[1].i = (temp1 + temp2);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute:compareTo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type), ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type))) == 0) goto label_1;
	}
	{
	popStackFrame(ctx);
	return (jint((((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type) - ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type))));
	}
label_1:;
	{
	LINE_NUMBER(64);
	frame[2].f = ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute, (frame[1].o)))))->F_value);
	LINE_NUMBER(65);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute *) NULL_CHECK((frame[0].o)))->F_value), (frame[2].f));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute *) NULL_CHECK((frame[0].o)))->F_value), (frame[2].f), 1)) >= 0) goto label_5;
	}
	INST_ICONST(-1);
	goto label_4;
label_5:;
	INST_ICONST(1);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_ShininessAlias = ((jobject) createStringLiteral(ctx, u8"shininess"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_AlphaTestAlias = ((jobject) createStringLiteral(ctx, u8"alphaTest"_j));
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx);
	{
	LINE_NUMBER(25);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"shininess"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_Shininess = temp0;
	LINE_NUMBER(32);
	jlong temp1 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"alphaTest"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_AlphaTest = temp1;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute[] {
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_hashCode_R_int,
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
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_compareTo_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int,
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
	{ "compareTo", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)I" },
};

static FieldMetadata fields[] {
	{ "ShininessAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_ShininessAlias, "Ljava/lang/String;", 25 },
	{ "Shininess", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_Shininess, "J", 25 },
	{ "AlphaTestAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_AlphaTestAlias, "Ljava/lang/String;", 25 },
	{ "AlphaTest", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_AlphaTest, "J", 25 },
	{ "value", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute, F_value), "F", 1 },
};

static MethodMetadata methods[] {
	{ "createShininess", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_createShininess_float_R_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute, 0, "(F)Lcom/badlogic/gdx/graphics/g3d/attributes/FloatAttribute;", 9 },
	{ "createAlphaTest", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_createAlphaTest_float_R_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute, 0, "(F)Lcom/badlogic/gdx/graphics/g3d/attributes/FloatAttribute;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_long_float, 0, "(JF)V", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute, "()Lcom/badlogic/gdx/graphics/g3d/Attribute;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_hashCode_R_int, "()I", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int, "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)I", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_compareTo_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_Attribute,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute = registerClass(&class_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute);

}

