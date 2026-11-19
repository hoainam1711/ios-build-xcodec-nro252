#include "java/util/zip/CheckedInputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/io/FilterInputStream.h"
#include "java/util/zip/Checksum.h"
#include "java/util/zip/CheckedInputStream.h"

extern "C" {


void mark_java_util_zip_CheckedInputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_FilterInputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_zip_CheckedInputStream *) object;
	if (self->F_cksum)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cksum)->clazz)->markFunction)((jobject) self->F_cksum, mark, depth + 1);
}

void clinit_java_util_zip_CheckedInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterInputStream(ctx);
}

void init_java_util_zip_CheckedInputStream_java_io_InputStream_java_util_zip_Checksum(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CheckedInputStream:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_CheckedInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(49);
	init_java_io_FilterInputStream_java_io_InputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(50);
	((java_util_zip_CheckedInputStream *) NULL_CHECK((frame[0].o)))->F_cksum = (jref) (frame[2].o);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_CheckedInputStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CheckedInputStream:read", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(60);
	if ((frame[1].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((java_util_zip_CheckedInputStream *) NULL_CHECK((frame[0].o)))->F_cksum;
	((func_java_util_zip_Checksum_update_int) resolveInterfaceMethod(ctx, &class_java_util_zip_Checksum, INDEX_java_util_zip_Checksum_update_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_CheckedInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CheckedInputStream:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[3].i = temp0;
	LINE_NUMBER(83);
	if ((frame[3].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((java_util_zip_CheckedInputStream *) NULL_CHECK((frame[0].o)))->F_cksum;
	((func_java_util_zip_Checksum_update_Array1_byte_int_int) resolveInterfaceMethod(ctx, &class_java_util_zip_Checksum, INDEX_java_util_zip_Checksum_update_Array1_byte_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	}
label_2:;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jlong M_java_util_zip_CheckedInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CheckedInputStream:skip", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (512));
	frame[3].o = sp[0].o;
	LINE_NUMBER(97);
	frame[4].l = (jlong(0));
	}
label_2:;
	{
	LINE_NUMBER(98);
	if ((longCompare((frame[4].l), (frame[1].l))) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(99);
	frame[6].l = ((frame[1].l) - (frame[4].l));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	jint temp0 = jint(0);
	sp[2].i = temp0;
	sp += 3;
	if ((longCompare((frame[6].l), (jlong((((jarray) nullCheck(ctx, (frame[3].o)))->length))))) >= 0) goto label_6;
	}
	{
	jint temp0 = jint((frame[6].l));
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(3);
	INST_ARRAYLENGTH();
label_7:;
	{
	sp -= 4;
	jint temp0 = (jint)((func_java_util_zip_CheckedInputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CheckedInputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i);
	frame[6].l = (jlong(temp0));
	LINE_NUMBER(101);
	if ((longCompare((frame[6].l), (jlong(-1ll)))) != 0) goto label_9;
	}
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (frame[4].l);
	}
label_9:;
	{
	LINE_NUMBER(104);
	frame[4].l = ((frame[4].l) + (frame[6].l));
	LINE_NUMBER(105);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (frame[4].l);
	}

	popStackFrame(ctx);
}

jobject M_java_util_zip_CheckedInputStream_getChecksum_R_java_util_zip_Checksum(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CheckedInputStream:getChecksum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((java_util_zip_CheckedInputStream *) NULL_CHECK((frame[0].o)))->F_cksum;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_CheckedInputStream[] {
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
	(void *) M_java_io_FilterInputStream_close,
	(void *) M_java_io_FilterInputStream_available_R_int,
	(void *) M_java_io_FilterInputStream_mark_int,
	(void *) M_java_io_FilterInputStream_markSupported_R_boolean,
	(void *) M_java_util_zip_CheckedInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_util_zip_CheckedInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_FilterInputStream_reset,
	(void *) M_java_util_zip_CheckedInputStream_skip_long_R_long,
	(void *) M_java_util_zip_CheckedInputStream_getChecksum_R_java_util_zip_Checksum,
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
	{ "getChecksum", "()Ljava/util/zip/Checksum;" },
};

static FieldMetadata fields[] {
	{ "cksum", &class_java_util_zip_Checksum, offsetof(java_util_zip_CheckedInputStream, F_cksum), "Ljava/util/zip/Checksum;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_CheckedInputStream_java_io_InputStream_java_util_zip_Checksum, 0, "(Ljava/io/InputStream;Ljava/util/zip/Checksum;)V", 1 },
	{ "read", (intptr_t) M_java_util_zip_CheckedInputStream_read_R_int, VTABLE_java_util_zip_CheckedInputStream_read_R_int, "()I", 1 },
	{ "read", (intptr_t) M_java_util_zip_CheckedInputStream_read_Array1_byte_int_int_R_int, VTABLE_java_util_zip_CheckedInputStream_read_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "skip", (intptr_t) M_java_util_zip_CheckedInputStream_skip_long_R_long, VTABLE_java_util_zip_CheckedInputStream_skip_long_R_long, "(J)J", 1 },
	{ "getChecksum", (intptr_t) M_java_util_zip_CheckedInputStream_getChecksum_R_java_util_zip_Checksum, VTABLE_java_util_zip_CheckedInputStream_getChecksum_R_java_util_zip_Checksum, "()Ljava/util/zip/Checksum;", 1 },
};

Class class_java_util_zip_CheckedInputStream{
		.nativeName = (intptr_t) "java/util/zip/CheckedInputStream",
		.parentClass = (intptr_t) &class_java_io_FilterInputStream,
		.size = sizeof(java_util_zip_CheckedInputStream),
		.classVtable = (intptr_t) vtable_java_util_zip_CheckedInputStream,
		.staticInitializer = (intptr_t) clinit_java_util_zip_CheckedInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_CheckedInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_CheckedInputStream = registerClass(&class_java_util_zip_CheckedInputStream);

}

