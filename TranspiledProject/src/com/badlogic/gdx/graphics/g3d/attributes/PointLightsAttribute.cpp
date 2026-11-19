#include "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute.h"
#include "com/badlogic/gdx/graphics/g3d/Attribute.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute.h"
#include "com/badlogic/gdx/graphics/g3d/environment/PointLight.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Alias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Type;

void mark_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Alias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Alias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Alias, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute *) object;
	if (self->F_lights)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lights)->clazz)->markFunction)((jobject) self->F_lights, mark, depth + 1);
}

jbool SM_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_is_long_R_boolean(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute:is", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(18);
	if ((longCompare(((frame[0].l) & (clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Type)), (frame[0].l))) != 0) goto label_1;
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

void init_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_com_badlogic_gdx_graphics_g3d_Attribute_long(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Type));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(1)));
	((com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute *) NULL_CHECK(sp[0].o))->F_lights = (jref) sp[1].o;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	init_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx, (frame[0].o));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute *) NULL_CHECK((frame[0].o)))->F_lights;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute *) NULL_CHECK((frame[1].o)))->F_lights;
	((func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute:hashCode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(41);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute *) NULL_CHECK((frame[0].o)))->F_lights;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_environment_PointLight, sp[0].o));
	LINE_NUMBER(42);
	jint temp0 = (1231) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[3].o) != nullptr) goto label_5;
	}
	INST_ICONST(0);
	goto label_6;
label_5:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp++;
label_6:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute:compareTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type), ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type))) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type), ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type))) >= 0) goto label_2;
	}
	INST_ICONST(-1);
	goto label_3;
label_2:;
	INST_ICONST(1);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute:copy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Alias = ((jobject) createStringLiteral(ctx, u8"pointLights"_j));
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx);
	{
	LINE_NUMBER(15);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"pointLights"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Type = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute[] {
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_hashCode_R_int,
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
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_compareTo_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int,
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
	{ "copy", "()Lcom/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute;" },
	{ "compareTo", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)I" },
};

static FieldMetadata fields[] {
	{ "Alias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Alias, "Ljava/lang/String;", 25 },
	{ "Type", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Type, "J", 25 },
	{ "lights", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute, F_lights), "Lcom/badlogic/gdx/utils/Array;", 17 },
};

static MethodMetadata methods[] {
	{ "is", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_is_long_R_boolean, 0, "(J)Z", 25 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute, 0, "(Lcom/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute;)V", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_copy_R_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute, "()Lcom/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_hashCode_R_int, "()I", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int, "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)I", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute, "()Lcom/badlogic/gdx/graphics/g3d/Attribute;", 4161 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_compareTo_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_Attribute,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute = registerClass(&class_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute);

}

