#include "com/badlogic/gdx/utils/reflect/Method.h"
#include "java/lang/reflect/Modifier.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/reflect/InvocationTargetException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/reflect/Method.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/reflect/ReflectionException.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/reflect/Annotation.h"

extern "C" {


void mark_com_badlogic_gdx_utils_reflect_Method(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_reflect_Method *) object;
	if (self->F_method)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_method)->clazz)->markFunction)((jobject) self->F_method, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_reflect_Method(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_reflect_Method_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_Method(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method = (jref) (frame[1].o);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Method_getReturnType_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:getReturnType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Method_getParameterTypes_R_Array1_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:getParameterTypes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Method_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:getDeclaringClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Method_isAccessible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:isAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_isAccessible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_isAccessible_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_reflect_Method_setAccessible_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:setAccessible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	((func_java_lang_reflect_Method_setAccessible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_setAccessible_boolean])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Method_isAbstract_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:isAbstract", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isAbstract_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Method_isDefaultAccess_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:isDefaultAccess", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_reflect_Method_isPrivate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Method_isPrivate_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_reflect_Method_isProtected_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Method_isProtected_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_reflect_Method_isPublic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Method_isPublic_R_boolean])(ctx, (frame[0].o));
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

jbool M_com_badlogic_gdx_utils_reflect_Method_isFinal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:isFinal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isFinal_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Method_isPrivate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:isPrivate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPrivate_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Method_isProtected_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:isProtected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isProtected_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Method_isPublic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:isPublic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Method_isNative_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:isNative", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isNative_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Method_isStatic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:isStatic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Method_isVarArgs_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:isVarArgs", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_isVarArgs_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_isVarArgs_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:invoke", 8 };
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
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_reflect_InvocationTargetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	sp[0].o = (jobject)((func_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(109);
	frame[3].o = sp[0].o;
	LINE_NUMBER(110);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Illegal argument(s) supplied to method: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(111);
	frame[3].o = sp[0].o;
	LINE_NUMBER(112);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Illegal access to method: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(113);
	frame[3].o = sp[0].o;
	LINE_NUMBER(114);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Exception occurred in method: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:isAnnotationPresent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Method_getDeclaredAnnotations_R_Array1_com_badlogic_gdx_utils_reflect_Annotation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:getDeclaredAnnotations", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(127);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(128);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_com_badlogic_gdx_utils_reflect_Annotation(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation);
	init_com_badlogic_gdx_utils_reflect_Annotation_java_lang_annotation_Annotation(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(128);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Method_getDeclaredAnnotation_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Method:getDeclaredAnnotation", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Method *) NULL_CHECK((frame[0].o)))->F_method;
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(138);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(141);
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
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_annotation_Annotation, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, (frame[6].o)))(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(143);
	clinit_com_badlogic_gdx_utils_reflect_Annotation(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation);
	init_com_badlogic_gdx_utils_reflect_Annotation_java_lang_annotation_Annotation(ctx, sp[0].o, (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(141);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_reflect_Method[] {
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
	(void *) M_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_getReturnType_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_getParameterTypes_R_Array1_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_getDeclaringClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_isAccessible_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_setAccessible_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_isAbstract_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_isDefaultAccess_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_isFinal_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_isPrivate_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_isProtected_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_isPublic_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_isNative_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_isStatic_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_isVarArgs_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_getDeclaredAnnotations_R_Array1_com_badlogic_gdx_utils_reflect_Annotation,
	(void *) M_com_badlogic_gdx_utils_reflect_Method_getDeclaredAnnotation_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation,
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
	{ "getReturnType", "()Ljava/lang/Class;" },
	{ "getParameterTypes", "()[Ljava/lang/Class;" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "isAccessible", "()Z" },
	{ "setAccessible", "(Z)V" },
	{ "isAbstract", "()Z" },
	{ "isDefaultAccess", "()Z" },
	{ "isFinal", "()Z" },
	{ "isPrivate", "()Z" },
	{ "isProtected", "()Z" },
	{ "isPublic", "()Z" },
	{ "isNative", "()Z" },
	{ "isStatic", "()Z" },
	{ "isVarArgs", "()Z" },
	{ "invoke", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isAnnotationPresent", "(Ljava/lang/Class;)Z" },
	{ "getDeclaredAnnotations", "()[Lcom/badlogic/gdx/utils/reflect/Annotation;" },
	{ "getDeclaredAnnotation", "(Ljava/lang/Class;)Lcom/badlogic/gdx/utils/reflect/Annotation;" },
};

static FieldMetadata fields[] {
	{ "method", &class_java_lang_reflect_Method, offsetof(com_badlogic_gdx_utils_reflect_Method, F_method), "Ljava/lang/reflect/Method;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_reflect_Method_java_lang_reflect_Method, 0, "(Ljava/lang/reflect/Method;)V", 0 },
	{ "getName", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getReturnType", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_getReturnType_R_java_lang_Class, VTABLE_com_badlogic_gdx_utils_reflect_Method_getReturnType_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "getParameterTypes", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_getParameterTypes_R_Array1_java_lang_Class, VTABLE_com_badlogic_gdx_utils_reflect_Method_getParameterTypes_R_Array1_java_lang_Class, "()[Ljava/lang/Class;", 1 },
	{ "getDeclaringClass", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_getDeclaringClass_R_java_lang_Class, VTABLE_com_badlogic_gdx_utils_reflect_Method_getDeclaringClass_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "isAccessible", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_isAccessible_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_isAccessible_R_boolean, "()Z", 1 },
	{ "setAccessible", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_setAccessible_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_setAccessible_boolean, "(Z)V", 1 },
	{ "isAbstract", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_isAbstract_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_isAbstract_R_boolean, "()Z", 1 },
	{ "isDefaultAccess", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_isDefaultAccess_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_isDefaultAccess_R_boolean, "()Z", 1 },
	{ "isFinal", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_isFinal_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_isFinal_R_boolean, "()Z", 1 },
	{ "isPrivate", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_isPrivate_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_isPrivate_R_boolean, "()Z", 1 },
	{ "isProtected", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_isProtected_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_isProtected_R_boolean, "()Z", 1 },
	{ "isPublic", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_isPublic_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_isPublic_R_boolean, "()Z", 1 },
	{ "isNative", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_isNative_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_isNative_R_boolean, "()Z", 1 },
	{ "isStatic", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_isStatic_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_isStatic_R_boolean, "()Z", 1 },
	{ "isVarArgs", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_isVarArgs_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_isVarArgs_R_boolean, "()Z", 1 },
	{ "invoke", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", 129 },
	{ "isAnnotationPresent", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean, "(Ljava/lang/Class;)Z", 1 },
	{ "getDeclaredAnnotations", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_getDeclaredAnnotations_R_Array1_com_badlogic_gdx_utils_reflect_Annotation, VTABLE_com_badlogic_gdx_utils_reflect_Method_getDeclaredAnnotations_R_Array1_com_badlogic_gdx_utils_reflect_Annotation, "()[Lcom/badlogic/gdx/utils/reflect/Annotation;", 1 },
	{ "getDeclaredAnnotation", (intptr_t) M_com_badlogic_gdx_utils_reflect_Method_getDeclaredAnnotation_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation, VTABLE_com_badlogic_gdx_utils_reflect_Method_getDeclaredAnnotation_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation, "(Ljava/lang/Class;)Lcom/badlogic/gdx/utils/reflect/Annotation;", 1 },
};

Class class_com_badlogic_gdx_utils_reflect_Method{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/reflect/Method",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_reflect_Method),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_reflect_Method,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_reflect_Method,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_reflect_Method,
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
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_reflect_Method = registerClass(&class_com_badlogic_gdx_utils_reflect_Method);

}

