#include "java/io/SequenceInputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/io/SequenceInputStream.h"
#include "java/lang/Error.h"
#include "java/lang/String.h"
#include "java/util/Vector.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/NullPointerException.h"
#include "java/util/Enumeration.h"
#include "java/io/IOException.h"

extern "C" {


void mark_java_io_SequenceInputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_InputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_SequenceInputStream *) object;
	if (self->F_e)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_e)->clazz)->markFunction)((jobject) self->F_e, mark, depth + 1);
	if (self->F_in)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_in)->clazz)->markFunction)((jobject) self->F_in, mark, depth + 1);
}

void clinit_java_io_SequenceInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_InputStream(ctx);
}

void init_java_io_SequenceInputStream_java_util_Enumeration(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/SequenceInputStream:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_SequenceInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	init_java_io_InputStream(ctx, (frame[0].o));
	LINE_NUMBER(66);
	((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_e = (jref) (frame[1].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	((func_java_io_SequenceInputStream_nextStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_SequenceInputStream_nextStream])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(72);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(69);
	frame[2].o = sp[0].o;
	LINE_NUMBER(71);
	clinit_java_lang_Error(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Error);
	init_java_lang_Error_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"panic"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_io_SequenceInputStream_java_io_InputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/SequenceInputStream:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_SequenceInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(86);
	init_java_io_InputStream(ctx, (frame[0].o));
	LINE_NUMBER(87);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector_int(ctx, sp[0].o, (jint(2)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(89);
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(90);
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Vector_elements_R_java_util_Enumeration) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Vector_elements_R_java_util_Enumeration])(ctx, (frame[3].o));
	((java_io_SequenceInputStream *) NULL_CHECK(sp[0].o))->F_e = (jref) sp[1].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(93);
	((func_java_io_SequenceInputStream_nextStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_SequenceInputStream_nextStream])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(97);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(94);
	frame[4].o = sp[0].o;
	LINE_NUMBER(96);
	clinit_java_lang_Error(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Error);
	init_java_lang_Error_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"panic"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_SequenceInputStream_nextStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/SequenceInputStream:nextStream", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_e;
	jint temp0 = (jint)((func_java_util_Enumeration_hasMoreElements_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_hasMoreElements_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_e;
	sp[1].o = (jobject)((func_java_util_Enumeration_nextElement_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_nextElement_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((java_io_SequenceInputStream *) NULL_CHECK(sp[0].o))->F_in = (jref) (checkCast(ctx, &class_java_io_InputStream, sp[1].o));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(111);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(113);
	((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in = (jref) (jobject(nullptr));
	}
label_6:;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_io_SequenceInputStream_available_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/SequenceInputStream:available", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_io_SequenceInputStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/SequenceInputStream:read", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(164);
	if ((frame[1].i) == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_4:;
	{
	LINE_NUMBER(167);
	((func_java_io_SequenceInputStream_nextStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_SequenceInputStream_nextStream])(ctx, (frame[0].o));
	LINE_NUMBER(168);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_java_io_SequenceInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/SequenceInputStream:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(198);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(199);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(200);
	if ((frame[2].i) < 0) goto label_5;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_5;
	{
	if ((frame[3].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i))) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(201);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(202);
	if ((frame[3].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(207);
	if ((frame[4].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_10:;
	{
	LINE_NUMBER(210);
	((func_java_io_SequenceInputStream_nextStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_SequenceInputStream_nextStream])(ctx, (frame[0].o));
	LINE_NUMBER(211);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_java_io_SequenceInputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/SequenceInputStream:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(231);
	((func_java_io_SequenceInputStream_nextStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_SequenceInputStream_nextStream])(ctx, (frame[0].o));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((java_io_SequenceInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	if (sp[0].o != nullptr) goto label_0;
	}
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_io_SequenceInputStream[] {
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
	(void *) M_java_io_SequenceInputStream_close,
	(void *) M_java_io_SequenceInputStream_available_R_int,
	(void *) M_java_io_InputStream_mark_int,
	(void *) M_java_io_InputStream_markSupported_R_boolean,
	(void *) M_java_io_SequenceInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_io_SequenceInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_InputStream_reset,
	(void *) M_java_io_InputStream_skip_long_R_long,
	(void *) M_java_io_SequenceInputStream_nextStream,
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
	{ "close", "()V" },
	{ "available", "()I" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([B)I" },
	{ "read", "([BII)I" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
	{ "nextStream", "()V" },
};

static FieldMetadata fields[] {
	{ "e", &class_java_util_Enumeration, offsetof(java_io_SequenceInputStream, F_e), "Ljava/util/Enumeration;", 0 },
	{ "in", &class_java_io_InputStream, offsetof(java_io_SequenceInputStream, F_in), "Ljava/io/InputStream;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_SequenceInputStream_java_util_Enumeration, 0, "(Ljava/util/Enumeration;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_SequenceInputStream_java_io_InputStream_java_io_InputStream, 0, "(Ljava/io/InputStream;Ljava/io/InputStream;)V", 1 },
	{ "nextStream", (intptr_t) M_java_io_SequenceInputStream_nextStream, VTABLE_java_io_SequenceInputStream_nextStream, "()V", 16 },
	{ "available", (intptr_t) M_java_io_SequenceInputStream_available_R_int, VTABLE_java_io_SequenceInputStream_available_R_int, "()I", 1 },
	{ "read", (intptr_t) M_java_io_SequenceInputStream_read_R_int, VTABLE_java_io_SequenceInputStream_read_R_int, "()I", 1 },
	{ "read", (intptr_t) M_java_io_SequenceInputStream_read_Array1_byte_int_int_R_int, VTABLE_java_io_SequenceInputStream_read_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "close", (intptr_t) M_java_io_SequenceInputStream_close, VTABLE_java_io_SequenceInputStream_close, "()V", 1 },
};

Class class_java_io_SequenceInputStream{
		.nativeName = (intptr_t) "java/io/SequenceInputStream",
		.parentClass = (intptr_t) &class_java_io_InputStream,
		.size = sizeof(java_io_SequenceInputStream),
		.classVtable = (intptr_t) vtable_java_io_SequenceInputStream,
		.staticInitializer = (intptr_t) clinit_java_io_SequenceInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_SequenceInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_SequenceInputStream = registerClass(&class_java_io_SequenceInputStream);

}

