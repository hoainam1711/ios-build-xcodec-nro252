#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Modifier.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/NoSuchFieldException.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/InstantiationException.h"
#include "com/badlogic/gdx/utils/reflect/Field.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ClassNotFoundException.h"
#include "com/badlogic/gdx/utils/reflect/Method.h"
#include "java/lang/NoSuchMethodException.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/reflect/ReflectionException.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/reflect/Annotation.h"
#include "com/badlogic/gdx/utils/reflect/Constructor.h"
#include "java/lang/SecurityException.h"

extern "C" {


void mark_com_badlogic_gdx_utils_reflect_ClassReflection(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_reflect_ClassReflection *) object;
}

void clinit_com_badlogic_gdx_utils_reflect_ClassReflection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_reflect_ClassReflection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_forName_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:forName", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (frame[0].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(29);
	frame[1].o = sp[0].o;
	LINE_NUMBER(30);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Class not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getSimpleName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_reflect_ClassReflection_isInstance_java_lang_Class_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:isInstance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:isAssignableFrom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(47);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_reflect_ClassReflection_isMemberClass_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:isMemberClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(52);
	jint temp0 = (jint)((func_java_lang_Class_isMemberClass_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isMemberClass_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_reflect_ClassReflection_isStaticClass_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:isStaticClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(57);
	jint temp0 = (jint)((func_java_lang_Class_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getModifiers_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_reflect_ClassReflection_isArray_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:isArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(62);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_reflect_ClassReflection_isPrimitive_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:isPrimitive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_reflect_ClassReflection_isEnum_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:isEnum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)((func_java_lang_Class_isEnum_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isEnum_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAnnotation_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:isAnnotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_java_lang_Class_isAnnotation_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isAnnotation_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_reflect_ClassReflection_isInterface_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:isInterface", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAbstract_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:isAbstract", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)((func_java_lang_Class_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getModifiers_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isAbstract_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_newInstance_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:newInstance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InstantiationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_java_lang_Class_newInstance_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_newInstance_R_java_lang_Object])(ctx, (frame[0].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(94);
	frame[1].o = sp[0].o;
	LINE_NUMBER(95);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Could not instantiate instance of class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(96);
	frame[1].o = sp[0].o;
	LINE_NUMBER(97);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Could not instantiate instance of class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getComponentType_java_lang_Class_R_java_lang_Class(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getComponentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getConstructors_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Constructor(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getConstructors", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_reflect_Constructor, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(112);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_com_badlogic_gdx_utils_reflect_Constructor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Constructor);
	init_com_badlogic_gdx_utils_reflect_Constructor_java_lang_reflect_Constructor(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(112);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getConstructor_java_lang_Class_Array1_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Constructor(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getConstructor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchMethodException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(122);
	clinit_com_badlogic_gdx_utils_reflect_Constructor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Constructor);
	sp[1].o = (jobject)((func_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, (frame[0].o), (frame[1].o));
	init_com_badlogic_gdx_utils_reflect_Constructor_java_lang_reflect_Constructor(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(123);
	frame[2].o = sp[0].o;
	LINE_NUMBER(124);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Security violation occurred while getting constructor for class: '"_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(126);
	frame[2].o = sp[0].o;
	LINE_NUMBER(127);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Constructor not found for class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredConstructor_java_lang_Class_Array1_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Constructor(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getDeclaredConstructor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchMethodException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(135);
	clinit_com_badlogic_gdx_utils_reflect_Constructor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Constructor);
	sp[1].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, (frame[0].o), (frame[1].o));
	init_com_badlogic_gdx_utils_reflect_Constructor_java_lang_reflect_Constructor(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(136);
	frame[2].o = sp[0].o;
	LINE_NUMBER(137);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Security violation while getting constructor for class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(138);
	frame[2].o = sp[0].o;
	LINE_NUMBER(139);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Constructor not found for class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getEnumConstants_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getEnumConstants", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getMethods_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Method(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getMethods", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((func_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(151);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_reflect_Method, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(152);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_com_badlogic_gdx_utils_reflect_Method(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Method);
	init_com_badlogic_gdx_utils_reflect_Method_java_lang_reflect_Method(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(152);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getMethod_java_lang_Class_java_lang_String_Array1_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Method(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getMethod", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchMethodException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(162);
	clinit_com_badlogic_gdx_utils_reflect_Method(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Method);
	sp[1].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	init_com_badlogic_gdx_utils_reflect_Method_java_lang_reflect_Method(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(163);
	frame[3].o = sp[0].o;
	LINE_NUMBER(164);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Security violation while getting method: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", for class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(165);
	frame[3].o = sp[0].o;
	LINE_NUMBER(166);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Method not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", for class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredMethods_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Method(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getDeclaredMethods", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(173);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_reflect_Method, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(174);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_com_badlogic_gdx_utils_reflect_Method(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Method);
	init_com_badlogic_gdx_utils_reflect_Method_java_lang_reflect_Method(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(174);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredMethod_java_lang_Class_java_lang_String_Array1_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Method(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getDeclaredMethod", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchMethodException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(184);
	clinit_com_badlogic_gdx_utils_reflect_Method(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Method);
	sp[1].o = (jobject)((func_java_lang_Class_getDeclaredMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	init_com_badlogic_gdx_utils_reflect_Method_java_lang_reflect_Method(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(185);
	frame[3].o = sp[0].o;
	LINE_NUMBER(186);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Security violation while getting method: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", for class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(187);
	frame[3].o = sp[0].o;
	LINE_NUMBER(188);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Method not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", for class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getFields_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Field(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getFields", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((func_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(195);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_reflect_Field, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(196);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_com_badlogic_gdx_utils_reflect_Field(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Field);
	init_com_badlogic_gdx_utils_reflect_Field_java_lang_reflect_Field(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(196);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getField_java_lang_Class_java_lang_String_R_com_badlogic_gdx_utils_reflect_Field(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getField", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(205);
	clinit_com_badlogic_gdx_utils_reflect_Field(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Field);
	sp[1].o = (jobject)((func_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field])(ctx, (frame[0].o), (frame[1].o));
	init_com_badlogic_gdx_utils_reflect_Field_java_lang_reflect_Field(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(206);
	frame[2].o = sp[0].o;
	LINE_NUMBER(207);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Security violation while getting field: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", for class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(208);
	frame[2].o = sp[0].o;
	LINE_NUMBER(209);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Field not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", for class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredFields_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Field(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getDeclaredFields", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(216);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_reflect_Field, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(217);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_com_badlogic_gdx_utils_reflect_Field(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Field);
	init_com_badlogic_gdx_utils_reflect_Field_java_lang_reflect_Field(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(217);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredField_java_lang_Class_java_lang_String_R_com_badlogic_gdx_utils_reflect_Field(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getDeclaredField", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(226);
	clinit_com_badlogic_gdx_utils_reflect_Field(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Field);
	sp[1].o = (jobject)((func_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field])(ctx, (frame[0].o), (frame[1].o));
	init_com_badlogic_gdx_utils_reflect_Field_java_lang_reflect_Field(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(227);
	frame[2].o = sp[0].o;
	LINE_NUMBER(228);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Security violation while getting field: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", for class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(229);
	frame[2].o = sp[0].o;
	LINE_NUMBER(230);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Field not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", for class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAnnotationPresent_java_lang_Class_java_lang_Class_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:isAnnotationPresent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(236);
	jint temp0 = (jint)((func_java_lang_Class_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getAnnotations_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Annotation(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getAnnotations", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(243);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(244);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_com_badlogic_gdx_utils_reflect_Annotation(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation);
	init_com_badlogic_gdx_utils_reflect_Annotation_java_lang_annotation_Annotation(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(244);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getAnnotation_java_lang_Class_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getAnnotation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_java_lang_Class_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(254);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_reflect_Annotation(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation);
	init_com_badlogic_gdx_utils_reflect_Annotation_java_lang_annotation_Annotation(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredAnnotations_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Annotation(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getDeclaredAnnotations", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(262);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(263);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(264);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_com_badlogic_gdx_utils_reflect_Annotation(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation);
	init_com_badlogic_gdx_utils_reflect_Annotation_java_lang_annotation_Annotation(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(263);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredAnnotation_java_lang_Class_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getDeclaredAnnotation", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(273);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_annotation_Annotation, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, (frame[6].o)))(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	clinit_com_badlogic_gdx_utils_reflect_Annotation(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_Annotation);
	init_com_badlogic_gdx_utils_reflect_Annotation_java_lang_annotation_Annotation(ctx, sp[0].o, (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(273);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_reflect_ClassReflection_getInterfaces_java_lang_Class_R_Array1_java_lang_Class(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/ClassReflection:getInterfaces", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_ClassReflection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_java_lang_Class_getInterfaces_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getInterfaces_R_Array1_java_lang_Class])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_reflect_ClassReflection[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_reflect_ClassReflection, 0, "()V", 1 },
	{ "forName", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_forName_java_lang_String_R_java_lang_Class, 0, "(Ljava/lang/String;)Ljava/lang/Class;", 9 },
	{ "getSimpleName", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String, 0, "(Ljava/lang/Class;)Ljava/lang/String;", 9 },
	{ "isInstance", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_isInstance_java_lang_Class_java_lang_Object_R_boolean, 0, "(Ljava/lang/Class;Ljava/lang/Object;)Z", 9 },
	{ "isAssignableFrom", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;Ljava/lang/Class;)Z", 9 },
	{ "isMemberClass", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_isMemberClass_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "isStaticClass", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_isStaticClass_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "isArray", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_isArray_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "isPrimitive", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_isPrimitive_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "isEnum", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_isEnum_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "isAnnotation", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAnnotation_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "isInterface", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_isInterface_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "isAbstract", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAbstract_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "newInstance", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_newInstance_java_lang_Class_R_java_lang_Object, 0, "(Ljava/lang/Class;)Ljava/lang/Object;", 9 },
	{ "getComponentType", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getComponentType_java_lang_Class_R_java_lang_Class, 0, "(Ljava/lang/Class;)Ljava/lang/Class;", 9 },
	{ "getConstructors", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getConstructors_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Constructor, 0, "(Ljava/lang/Class;)[Lcom/badlogic/gdx/utils/reflect/Constructor;", 9 },
	{ "getConstructor", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getConstructor_java_lang_Class_Array1_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Constructor, 0, "(Ljava/lang/Class;[Ljava/lang/Class;)Lcom/badlogic/gdx/utils/reflect/Constructor;", 137 },
	{ "getDeclaredConstructor", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredConstructor_java_lang_Class_Array1_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Constructor, 0, "(Ljava/lang/Class;[Ljava/lang/Class;)Lcom/badlogic/gdx/utils/reflect/Constructor;", 137 },
	{ "getEnumConstants", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getEnumConstants_java_lang_Class_R_Array1_java_lang_Object, 0, "(Ljava/lang/Class;)[Ljava/lang/Object;", 9 },
	{ "getMethods", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getMethods_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Method, 0, "(Ljava/lang/Class;)[Lcom/badlogic/gdx/utils/reflect/Method;", 9 },
	{ "getMethod", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getMethod_java_lang_Class_java_lang_String_Array1_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Method, 0, "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Lcom/badlogic/gdx/utils/reflect/Method;", 137 },
	{ "getDeclaredMethods", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredMethods_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Method, 0, "(Ljava/lang/Class;)[Lcom/badlogic/gdx/utils/reflect/Method;", 9 },
	{ "getDeclaredMethod", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredMethod_java_lang_Class_java_lang_String_Array1_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Method, 0, "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Lcom/badlogic/gdx/utils/reflect/Method;", 137 },
	{ "getFields", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getFields_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Field, 0, "(Ljava/lang/Class;)[Lcom/badlogic/gdx/utils/reflect/Field;", 9 },
	{ "getField", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getField_java_lang_Class_java_lang_String_R_com_badlogic_gdx_utils_reflect_Field, 0, "(Ljava/lang/Class;Ljava/lang/String;)Lcom/badlogic/gdx/utils/reflect/Field;", 9 },
	{ "getDeclaredFields", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredFields_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Field, 0, "(Ljava/lang/Class;)[Lcom/badlogic/gdx/utils/reflect/Field;", 9 },
	{ "getDeclaredField", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredField_java_lang_Class_java_lang_String_R_com_badlogic_gdx_utils_reflect_Field, 0, "(Ljava/lang/Class;Ljava/lang/String;)Lcom/badlogic/gdx/utils/reflect/Field;", 9 },
	{ "isAnnotationPresent", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAnnotationPresent_java_lang_Class_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;Ljava/lang/Class;)Z", 9 },
	{ "getAnnotations", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getAnnotations_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Annotation, 0, "(Ljava/lang/Class;)[Lcom/badlogic/gdx/utils/reflect/Annotation;", 9 },
	{ "getAnnotation", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getAnnotation_java_lang_Class_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation, 0, "(Ljava/lang/Class;Ljava/lang/Class;)Lcom/badlogic/gdx/utils/reflect/Annotation;", 9 },
	{ "getDeclaredAnnotations", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredAnnotations_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Annotation, 0, "(Ljava/lang/Class;)[Lcom/badlogic/gdx/utils/reflect/Annotation;", 9 },
	{ "getDeclaredAnnotation", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredAnnotation_java_lang_Class_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Annotation, 0, "(Ljava/lang/Class;Ljava/lang/Class;)Lcom/badlogic/gdx/utils/reflect/Annotation;", 9 },
	{ "getInterfaces", (intptr_t) SM_com_badlogic_gdx_utils_reflect_ClassReflection_getInterfaces_java_lang_Class_R_Array1_java_lang_Class, 0, "(Ljava/lang/Class;)[Ljava/lang/Class;", 9 },
};

Class class_com_badlogic_gdx_utils_reflect_ClassReflection{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/reflect/ClassReflection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_reflect_ClassReflection),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_reflect_ClassReflection,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_reflect_ClassReflection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_reflect_ClassReflection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 33,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_reflect_ClassReflection = registerClass(&class_com_badlogic_gdx_utils_reflect_ClassReflection);

}

