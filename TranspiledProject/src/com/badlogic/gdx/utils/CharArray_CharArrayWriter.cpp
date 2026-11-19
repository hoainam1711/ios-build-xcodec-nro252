#include "com/badlogic/gdx/utils/CharArray_CharArrayWriter.h"
#include "com/badlogic/gdx/utils/CharArray_CharArrayWriter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/Writer.h"
#include "com/badlogic/gdx/utils/CharArray.h"

extern "C" {


void mark_com_badlogic_gdx_utils_CharArray$CharArrayWriter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_Writer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_CharArray$CharArrayWriter *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_CharArray$CharArrayWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Writer(ctx);
}

void init_com_badlogic_gdx_utils_CharArray$CharArrayWriter_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayWriter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray$CharArrayWriter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2248);
	((com_badlogic_gdx_utils_CharArray$CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_io_Writer(ctx, (frame[0].o));
	LINE_NUMBER(2249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayWriter:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(2252);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayWriter:flush", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(2255);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayWriter:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2258);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_Array1_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_Array1_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(2259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayWriter:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2262);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(2263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayWriter:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2266);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, (jchar((frame[1].i))));
	LINE_NUMBER(2267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayWriter:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2270);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(2271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayWriter:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2274);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayWriter *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(2275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_CharArray$CharArrayWriter[] {
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
	(void *) M_java_io_Writer_append_char_R_java_lang_Appendable,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_close,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_flush,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char_int_int,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_int,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String_int_int,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer,
	(void *) M_java_io_Writer_append_char_R_java_io_Writer,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer,
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
	{ "append", "(C)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" },
	{ "close", "()V" },
	{ "flush", "()V" },
	{ "write", "([C)V" },
	{ "write", "([CII)V" },
	{ "write", "(I)V" },
	{ "write", "(Ljava/lang/String;)V" },
	{ "write", "(Ljava/lang/String;II)V" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;" },
	{ "append", "(C)Ljava/io/Writer;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_com_badlogic_gdx_utils_CharArray, offsetof(com_badlogic_gdx_utils_CharArray$CharArrayWriter, F_this$0), "Lcom/badlogic/gdx/utils/CharArray;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray$CharArrayWriter_com_badlogic_gdx_utils_CharArray, 0, "(Lcom/badlogic/gdx/utils/CharArray;)V", 0 },
	{ "close", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_close, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_close, "()V", 1 },
	{ "flush", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_flush, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_flush, "()V", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char, "([C)V", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char_int_int, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char_int_int, "([CII)V", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_int, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_int, "(I)V", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String_int_int, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String_int_int, "(Ljava/lang/String;II)V", 1 },
};

Class class_com_badlogic_gdx_utils_CharArray$CharArrayWriter{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/CharArray$CharArrayWriter",
		.parentClass = (intptr_t) &class_java_io_Writer,
		.size = sizeof(com_badlogic_gdx_utils_CharArray$CharArrayWriter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_CharArray$CharArrayWriter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_CharArray$CharArrayWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_CharArray$CharArrayWriter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_CharArray,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_CharArray$CharArrayWriter = registerClass(&class_com_badlogic_gdx_utils_CharArray$CharArrayWriter);

}

