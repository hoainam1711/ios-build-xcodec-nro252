#include "com/badlogic/gdx/utils/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/reflect/InvocationTargetException.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/reflect/ReflectionException.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/reflect/Constructor.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_com_badlogic_gdx_utils_reflect_Constructor(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_reflect_Constructor *) object;
	if (self->F_constructor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_constructor)->clazz)->markFunction)((jobject) self->F_constructor, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_reflect_Constructor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_reflect_Constructor_java_lang_reflect_Constructor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Constructor:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_Constructor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((com_badlogic_gdx_utils_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_constructor = (jref) (frame[1].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Constructor:getParameterTypes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_constructor;
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Constructor:getDeclaringClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_constructor;
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_reflect_Constructor_isAccessible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Constructor:isAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_constructor;
	jint temp0 = (jint)((func_java_lang_reflect_Constructor_isAccessible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_isAccessible_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_reflect_Constructor_setAccessible_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Constructor:setAccessible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_constructor;
	((func_java_lang_reflect_Constructor_setAccessible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_setAccessible_boolean])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Constructor:newInstance", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InstantiationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_reflect_InvocationTargetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 4); goto label_8; }
	}
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_constructor;
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(54);
	frame[2].o = sp[0].o;
	LINE_NUMBER(55);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Illegal argument(s) supplied to constructor for class: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(57);
	frame[2].o = sp[0].o;
	LINE_NUMBER(58);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Could not instantiate instance of class: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(59);
	frame[2].o = sp[0].o;
	LINE_NUMBER(60);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Could not instantiate instance of class: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(61);
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	clinit_com_badlogic_gdx_utils_reflect_ReflectionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_reflect_ReflectionException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Exception occurred in constructor for class: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_reflect_ReflectionException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_reflect_Constructor[] {
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
	(void *) M_com_badlogic_gdx_utils_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_reflect_Constructor_isAccessible_R_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Constructor_setAccessible_boolean,
	(void *) M_com_badlogic_gdx_utils_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object,
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
	{ "getParameterTypes", "()[Ljava/lang/Class;" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "isAccessible", "()Z" },
	{ "setAccessible", "(Z)V" },
	{ "newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "constructor", &class_java_lang_reflect_Constructor, offsetof(com_badlogic_gdx_utils_reflect_Constructor, F_constructor), "Ljava/lang/reflect/Constructor;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_reflect_Constructor_java_lang_reflect_Constructor, 0, "(Ljava/lang/reflect/Constructor;)V", 0 },
	{ "getParameterTypes", (intptr_t) M_com_badlogic_gdx_utils_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class, VTABLE_com_badlogic_gdx_utils_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class, "()[Ljava/lang/Class;", 1 },
	{ "getDeclaringClass", (intptr_t) M_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class, VTABLE_com_badlogic_gdx_utils_reflect_Constructor_getDeclaringClass_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "isAccessible", (intptr_t) M_com_badlogic_gdx_utils_reflect_Constructor_isAccessible_R_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Constructor_isAccessible_R_boolean, "()Z", 1 },
	{ "setAccessible", (intptr_t) M_com_badlogic_gdx_utils_reflect_Constructor_setAccessible_boolean, VTABLE_com_badlogic_gdx_utils_reflect_Constructor_setAccessible_boolean, "(Z)V", 1 },
	{ "newInstance", (intptr_t) M_com_badlogic_gdx_utils_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object, "([Ljava/lang/Object;)Ljava/lang/Object;", 129 },
};

Class class_com_badlogic_gdx_utils_reflect_Constructor{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/reflect/Constructor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_reflect_Constructor),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_reflect_Constructor,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_reflect_Constructor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_reflect_Constructor,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_reflect_Constructor = registerClass(&class_com_badlogic_gdx_utils_reflect_Constructor);

}

