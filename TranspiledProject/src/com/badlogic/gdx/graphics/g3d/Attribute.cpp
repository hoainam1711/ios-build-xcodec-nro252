#include "com/badlogic/gdx/graphics/g3d/Attribute.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/Attribute.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Long.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g3d_Attribute_types;
jint SF_com_badlogic_gdx_graphics_g3d_Attribute_MAX_ATTRIBUTE_COUNT;

void mark_com_badlogic_gdx_graphics_g3d_Attribute(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_Attribute_types)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_Attribute_types)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_Attribute_types, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g3d_Attribute *) object;
}

jlong SM_com_badlogic_gdx_graphics_g3d_Attribute_getAttributeType_java_lang_String_R_long(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attribute:getAttributeType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(35);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_Attribute_types;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(36);
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_Attribute_types;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	{
	popStackFrame(ctx);
	return ((jlong(1)) << (frame[1].i));
	}
label_4:;
	{
	LINE_NUMBER(35);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_Attribute_getAttributeAlias_long_R_java_lang_String(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attribute:getAttributeAlias", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(42);
	frame[2].i = (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(43);
	if ((longCompare((frame[0].l), (jlong(0)))) == 0) goto label_2;
	}
	{
	INST_IINC(2, 1);
	if ((frame[2].i) >= (63)) goto label_2;
	}
	{
	if ((longCompare((((frame[0].l) >> (frame[2].i)) & (jlong(1))), (jlong(0)))) != 0) goto label_2;
	}
	LINE_NUMBER(44);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(45);
	if ((frame[2].i) < 0) goto label_4;
	}
	{
	jint temp0 = frame[2].i;
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_Attribute_types;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_Attribute_types;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ACONST_NULL();
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attribute:register", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(55);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_getAttributeType_java_lang_String_R_long(ctx, (frame[0].o));
	frame[1].l = temp0;
	LINE_NUMBER(56);
	if ((longCompare((frame[1].l), (jlong(0)))) <= 0) goto label_2;
	}
	INST_LLOAD(1);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
	{
	LINE_NUMBER(57);
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_Attribute_types;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) < (64)) goto label_3;
	}
	{
	LINE_NUMBER(58);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot register "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", maximum registered attribute count reached."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(60);
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_Attribute_types;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(61);
	jlong temp0 = jlong(1);
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_Attribute_types;
	popStackFrame(ctx);
	return (temp0 << (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_Attribute_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attribute:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(69);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(70);
	((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type = (frame[1].l);
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfTrailingZeros_long_R_int(ctx, (frame[1].l));
	((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK(sp[0].o))->F_typeBit = temp0;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attribute:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int])(ctx, (frame[0].o));
	if (temp0 != temp1) goto label_1;
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

jbool M_com_badlogic_gdx_graphics_g3d_Attribute_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attribute:equals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(84);
	if ((frame[1].o) != (frame[0].o)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(85);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_Attribute)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(86);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, (frame[1].o)));
	LINE_NUMBER(87);
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type), ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[2].o)))->F_type))) == 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Attribute_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attribute:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g3d_Attribute_getAttributeAlias_long_R_java_lang_String(ctx, ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attribute:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return ((7489) * ((jint)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_typeBit));
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_g3d_Attribute_MAX_ATTRIBUTE_COUNT = jint(64);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Attribute:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	{
	LINE_NUMBER(28);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_Attribute_types = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_Attribute[] {
	(void *) M_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int,
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean,
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
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "types", &class_com_badlogic_gdx_utils_Array, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_Attribute_types, "Lcom/badlogic/gdx/utils/Array;", 26 },
	{ "MAX_ATTRIBUTE_COUNT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_Attribute_MAX_ATTRIBUTE_COUNT, "I", 26 },
	{ "type", &class_long, offsetof(com_badlogic_gdx_graphics_g3d_Attribute, F_type), "J", 17 },
	{ "typeBit", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_Attribute, F_typeBit), "I", 18 },
};

static MethodMetadata methods[] {
	{ "getAttributeType", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_Attribute_getAttributeType_java_lang_String_R_long, 0, "(Ljava/lang/String;)J", 25 },
	{ "getAttributeAlias", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_Attribute_getAttributeAlias_long_R_java_lang_String, 0, "(J)Ljava/lang/String;", 25 },
	{ "register", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long, 0, "(Ljava/lang/String;)J", 28 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Attribute_long, 0, "(J)V", 4 },
	{ "copy", 0, VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute, "()Lcom/badlogic/gdx/graphics/g3d/Attribute;", 1025 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean, "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)Z", 4 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attribute_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attribute_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int, "()I", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_Attribute, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_Attribute{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/Attribute",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_Attribute),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_Attribute,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_Attribute,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_Attribute,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_Attribute = registerClass(&class_com_badlogic_gdx_graphics_g3d_Attribute);

}

