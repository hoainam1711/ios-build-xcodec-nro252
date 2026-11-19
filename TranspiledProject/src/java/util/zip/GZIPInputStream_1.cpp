#include "java/util/zip/GZIPInputStream_1.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/util/zip/GZIPInputStream.h"
#include "java/util/zip/GZIPInputStream_1.h"
#include "java/io/FilterInputStream.h"

extern "C" {


void mark_java_util_zip_GZIPInputStream$1(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_zip_GZIPInputStream$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_zip_GZIPInputStream$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterInputStream(ctx);
}

void init_java_util_zip_GZIPInputStream$1_java_util_zip_GZIPInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_GZIPInputStream$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(217);
	((java_util_zip_GZIPInputStream$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_io_FilterInputStream_java_io_InputStream(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_GZIPInputStream$1_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/GZIPInputStream$1:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_zip_GZIPInputStream$1[] {
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
	(void *) M_java_util_zip_GZIPInputStream$1_close,
	(void *) M_java_io_FilterInputStream_available_R_int,
	(void *) M_java_io_FilterInputStream_mark_int,
	(void *) M_java_io_FilterInputStream_markSupported_R_boolean,
	(void *) M_java_io_FilterInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_io_FilterInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_FilterInputStream_reset,
	(void *) M_java_io_FilterInputStream_skip_long_R_long,
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
};

static FieldMetadata fields[] {
	{ "this$0", &class_java_util_zip_GZIPInputStream, offsetof(java_util_zip_GZIPInputStream$1, F_this$0), "Ljava/util/zip/GZIPInputStream;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_GZIPInputStream$1_java_util_zip_GZIPInputStream_java_io_InputStream, 0, "(Ljava/util/zip/GZIPInputStream;Ljava/io/InputStream;)V", 0 },
	{ "close", (intptr_t) M_java_util_zip_GZIPInputStream$1_close, VTABLE_java_util_zip_GZIPInputStream$1_close, "()V", 1 },
};

Class class_java_util_zip_GZIPInputStream$1{
		.nativeName = (intptr_t) "java/util/zip/GZIPInputStream$1",
		.parentClass = (intptr_t) &class_java_io_FilterInputStream,
		.size = sizeof(java_util_zip_GZIPInputStream$1),
		.classVtable = (intptr_t) vtable_java_util_zip_GZIPInputStream$1,
		.staticInitializer = (intptr_t) clinit_java_util_zip_GZIPInputStream$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_GZIPInputStream$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_util_zip_GZIPInputStream$1 = registerClass(&class_java_util_zip_GZIPInputStream$1);

}

