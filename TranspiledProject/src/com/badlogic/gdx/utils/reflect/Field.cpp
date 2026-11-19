#include "com/badlogic/gdx/utils/reflect/Field.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/reflect/Modifier.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/ParameterizedType.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/reflect/GenericArrayType.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/reflect/Type.h"
#include "com/badlogic/gdx/utils/reflect/Field.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/reflect/ArrayReflection.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/reflect/Annotation.h"
#include "com/badlogic/gdx/utils/reflect/ReflectionException.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_com_badlogic_gdx_utils_reflect_Field(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_reflect_Field *) object;
	if (self->F_field)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field)->clazz)->markFunction)((jobject) self->F_field, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_reflect_Field(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_reflect_Field_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_Field(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field = (jref) (frame[1].o);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:getDeclaringClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Field_isAccessible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:isAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAccessible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_isAccessible_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_reflect_Field_setAccessible_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:setAccessible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	((func_java_lang_reflect_Field_setAccessible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_setAccessible_boolean])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Field_isDefaultAccess_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:isDefaultAccess", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_reflect_Field_isPrivate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_isPrivate_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_reflect_Field_isProtected_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_isProtected_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_reflect_Field_isPublic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_isPublic_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_reflect_Field_isFinal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:isFinal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isFinal_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Field_isPrivate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:isPrivate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPrivate_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Field_isProtected_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:isProtected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isProtected_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Field_isPublic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:isPublic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Field_isStatic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:isStatic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Field_isTransient_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:isTransient", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isTransient_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Field_isVolatile_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:isVolatile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isVolatile_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Field_isSynthetic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:isSynthetic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_isSynthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_isSynthetic_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Field_getElementType_int_R_java_lang_Class(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:getElementType", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(106);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_reflect_ParameterizedType)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_java_lang_reflect_ParameterizedType_getActualTypeArguments_R_Array1_java_lang_reflect_Type) resolveInterfaceMethod(ctx, &class_java_lang_reflect_ParameterizedType, INDEX_java_lang_reflect_ParameterizedType_getActualTypeArguments_R_Array1_java_lang_reflect_Type, (checkCast(ctx, &class_java_lang_reflect_ParameterizedType, (frame[2].o)))))(ctx, (checkCast(ctx, &class_java_lang_reflect_ParameterizedType, (frame[2].o))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(108);
	if (((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1))) < (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(109);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(110);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Class)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Class, (frame[4].o)));
	}
label_7:;
	{
	LINE_NUMBER(112);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_reflect_ParameterizedType)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_java_lang_reflect_ParameterizedType_getRawType_R_java_lang_reflect_Type) resolveInterfaceMethod(ctx, &class_java_lang_reflect_ParameterizedType, INDEX_java_lang_reflect_ParameterizedType_getRawType_R_java_lang_reflect_Type, (checkCast(ctx, &class_java_lang_reflect_ParameterizedType, (frame[4].o)))))(ctx, (checkCast(ctx, &class_java_lang_reflect_ParameterizedType, (frame[4].o))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	}
label_9:;
	{
	LINE_NUMBER(114);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_reflect_GenericArrayType)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_java_lang_reflect_GenericArrayType_getGenericComponentType_R_java_lang_reflect_Type) resolveInterfaceMethod(ctx, &class_java_lang_reflect_GenericArrayType, INDEX_java_lang_reflect_GenericArrayType_getGenericComponentType_R_java_lang_reflect_Type, (checkCast(ctx, &class_java_lang_reflect_GenericArrayType, (frame[4].o)))))(ctx, (checkCast(ctx, &class_java_lang_reflect_GenericArrayType, (frame[4].o))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(116);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_Class)) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ArrayReflection_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (checkCast(ctx, &class_java_lang_Class, (frame[5].o))), (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:isAnnotationPresent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Field_getDeclaredAnnotations_R_Array1_com_badlogic_gdx_utils_reflect_Annotation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:getDeclaredAnnotations", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(132);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(133);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_com_badlogic_gdx_utils_reflect_Annotation(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation);
	init_com_badlogic_gdx_utils_reflect_Annotation_java_lang_annotation_Annotation(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(133);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Field_getDeclaredAnnotation_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:getDeclaredAnnotation", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(143);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(146);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_5;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_annotation_Annotation, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, (frame[6].o)))(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(148);
	clinit_com_badlogic_gdx_utils_reflect_Annotation(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation);
	init_com_badlogic_gdx_utils_reflect_Annotation_java_lang_annotation_Annotation(ctx, sp[0].o, (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(146);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(158);
	frame[2].o = sp[0].o;
	LINE_NUMBER(159);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Object is not an instance of "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(160);
	frame[2].o = sp[0].o;
	LINE_NUMBER(161);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Illegal access to field: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_reflect_Field_set_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Field:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Field *) NULL_CHECK((frame[0].o)))->F_field;
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(173);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(169);
	frame[3].o = sp[0].o;
	LINE_NUMBER(170);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Argument not valid for field: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(171);
	frame[3].o = sp[0].o;
	LINE_NUMBER(172);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Illegal access to field: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_reflect_Field[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_isAccessible_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_setAccessible_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_isDefaultAccess_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_isFinal_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_isPrivate_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_isProtected_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_isPublic_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_isStatic_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_isTransient_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_isVolatile_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_isSynthetic_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_getElementType_int_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_getDeclaredAnnotations_R_Array1_com_badlogic_gdx_utils_reflect_Annotation,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_getDeclaredAnnotation_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_reflect_Field_set_java_lang_Object_java_lang_Object,
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
	{ "getName", "()Ljava/lang/String;" },
	{ "getType", "()Ljava/lang/Class;" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "isAccessible", "()Z" },
	{ "setAccessible", "(Z)V" },
	{ "isDefaultAccess", "()Z" },
	{ "isFinal", "()Z" },
	{ "isPrivate", "()Z" },
	{ "isProtected", "()Z" },
	{ "isPublic", "()Z" },
	{ "isStatic", "()Z" },
	{ "isTransient", "()Z" },
	{ "isVolatile", "()Z" },
	{ "isSynthetic", "()Z" },
	{ "getElementType", "(I)Ljava/lang/Class;" },
	{ "isAnnotationPresent", "(Ljava/lang/Class;)Z" },
	{ "getDeclaredAnnotations", "()[Lcom/badlogic/gdx/utils/reflect/Annotation;" },
	{ "getDeclaredAnnotation", "(Ljava/lang/Class;)Lcom/badlogic/gdx/utils/reflect/Annotation;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "set", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
};

static FieldMetadata fields[] {
	{ "field", &class_java_lang_reflect_Field, offsetof(com_badlogic_gdx_utils_reflect_Field, F_field), "Ljava/lang/reflect/Field;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_reflect_Field_java_lang_reflect_Field, 0, "(Ljava/lang/reflect/Field;)V", 0 },
	{ "getName", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getType", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class, VTABLE_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "getDeclaringClass", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class, VTABLE_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "isAccessible", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_isAccessible_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_isAccessible_R_boolean, "()Z", 1 },
	{ "setAccessible", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_setAccessible_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_setAccessible_boolean, "(Z)V", 1 },
	{ "isDefaultAccess", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_isDefaultAccess_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_isDefaultAccess_R_boolean, "()Z", 1 },
	{ "isFinal", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_isFinal_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_isFinal_R_boolean, "()Z", 1 },
	{ "isPrivate", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_isPrivate_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_isPrivate_R_boolean, "()Z", 1 },
	{ "isProtected", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_isProtected_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_isProtected_R_boolean, "()Z", 1 },
	{ "isPublic", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_isPublic_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_isPublic_R_boolean, "()Z", 1 },
	{ "isStatic", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_isStatic_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_isStatic_R_boolean, "()Z", 1 },
	{ "isTransient", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_isTransient_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_isTransient_R_boolean, "()Z", 1 },
	{ "isVolatile", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_isVolatile_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_isVolatile_R_boolean, "()Z", 1 },
	{ "isSynthetic", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_isSynthetic_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_isSynthetic_R_boolean, "()Z", 1 },
	{ "getElementType", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_getElementType_int_R_java_lang_Class, VTABLE_com_badlogic_gdx_utils_reflect_Field_getElementType_int_R_java_lang_Class, "(I)Ljava/lang/Class;", 1 },
	{ "isAnnotationPresent", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean, "(Ljava/lang/Class;)Z", 1 },
	{ "getDeclaredAnnotations", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_getDeclaredAnnotations_R_Array1_com_badlogic_gdx_utils_reflect_Annotation, VTABLE_com_badlogic_gdx_utils_reflect_Field_getDeclaredAnnotations_R_Array1_com_badlogic_gdx_utils_reflect_Annotation, "()[Lcom/badlogic/gdx/utils/reflect/Annotation;", 1 },
	{ "getDeclaredAnnotation", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_getDeclaredAnnotation_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation, VTABLE_com_badlogic_gdx_utils_reflect_Field_getDeclaredAnnotation_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation, "(Ljava/lang/Class;)Lcom/badlogic/gdx/utils/reflect/Annotation;", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_reflect_Field_set_java_lang_Object_java_lang_Object, VTABLE_com_badlogic_gdx_utils_reflect_Field_set_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 1 },
};

Class class_com_badlogic_gdx_utils_reflect_Field{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/reflect/Field",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_reflect_Field),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_reflect_Field,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_reflect_Field,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_reflect_Field,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_reflect_Field = registerClass(&class_com_badlogic_gdx_utils_reflect_Field);

}

