#include "com/badlogic/gdx/utils/CharArray_CharArrayReader.h"
#include "java/lang/Object.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "com/badlogic/gdx/utils/CharArray.h"
#include "java/io/Reader.h"
#include "com/badlogic/gdx/utils/CharArray_CharArrayReader.h"

extern "C" {


void mark_com_badlogic_gdx_utils_CharArray$CharArrayReader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_Reader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_CharArray$CharArrayReader *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_CharArray$CharArrayReader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Reader(ctx);
}

void init_com_badlogic_gdx_utils_CharArray$CharArrayReader_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayReader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray$CharArrayReader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2201);
	((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_io_Reader(ctx, (frame[0].o));
	LINE_NUMBER(2202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray$CharArrayReader_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayReader:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(2205);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray$CharArrayReader_mark_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayReader:mark", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2208);
	((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_mark = ((jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_pos);
	LINE_NUMBER(2209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray$CharArrayReader_markSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayReader:markSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2212);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayReader:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2216);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray$CharArrayReader_ready_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_ready_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2217);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK(sp[1].o))->F_pos;
	((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_com_badlogic_gdx_utils_CharArray_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_charAt_int_R_char])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayReader:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2221);
	if ((frame[2].i) < 0) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[2].i) > (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_1;
	}
	{
	if (((frame[2].i) + (frame[3].i)) > (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_1;
	}
	{
	if (((frame[2].i) + (frame[3].i)) >= 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2222);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2223);
	if ((frame[3].i) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(2224);
	jint temp0 = (jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(2225);
	jint temp0 = ((jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_pos) + (frame[3].i);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[3].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) - ((jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_pos));
	}
label_5:;
	{
	LINE_NUMBER(2226);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_utils_CharArray_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_getChars_int_int_Array1_char_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_pos), (((jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_pos) + (frame[3].i)), (frame[1].o), (frame[2].i));
	LINE_NUMBER(2227);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK(sp[0].o))->F_pos) + (frame[3].i));
	LINE_NUMBER(2228);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray$CharArrayReader_ready_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayReader:ready", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2232);
	jint temp0 = (jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
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

void M_com_badlogic_gdx_utils_CharArray$CharArrayReader_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayReader:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2236);
	((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_pos = ((jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_mark);
	LINE_NUMBER(2237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_CharArray$CharArrayReader_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray$CharArrayReader:skip", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(2240);
	jlong temp0 = (jlong(((jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_pos))) + (frame[1].l);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((longCompare(temp0, (jlong(((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size))))) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[1].l = (jlong((((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) - ((jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK((frame[0].o)))->F_pos))));
	}
label_1:;
	{
	LINE_NUMBER(2241);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_2;
	}
	INST_LCONST(0);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
	{
	LINE_NUMBER(2242);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((com_badlogic_gdx_utils_CharArray$CharArrayReader *) NULL_CHECK(sp[0].o))->F_pos) + (jint((frame[1].l))));
	LINE_NUMBER(2243);
	popStackFrame(ctx);
	return (frame[1].l);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_CharArray$CharArrayReader[] {
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
	(void *) M_java_io_Reader_read_java_nio_CharBuffer_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_close,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_mark_int,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_markSupported_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_R_int,
	(void *) M_java_io_Reader_read_Array1_char_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_Array1_char_int_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_ready_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_reset,
	(void *) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_skip_long_R_long,
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
	{ "read", "(Ljava/nio/CharBuffer;)I" },
	{ "close", "()V" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([C)I" },
	{ "read", "([CII)I" },
	{ "ready", "()Z" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
};

static FieldMetadata fields[] {
	{ "mark", &class_int, offsetof(com_badlogic_gdx_utils_CharArray$CharArrayReader, F_mark), "I", 2 },
	{ "pos", &class_int, offsetof(com_badlogic_gdx_utils_CharArray$CharArrayReader, F_pos), "I", 2 },
	{ "this$0", &class_com_badlogic_gdx_utils_CharArray, offsetof(com_badlogic_gdx_utils_CharArray$CharArrayReader, F_this$0), "Lcom/badlogic/gdx/utils/CharArray;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray$CharArrayReader_com_badlogic_gdx_utils_CharArray, 0, "(Lcom/badlogic/gdx/utils/CharArray;)V", 0 },
	{ "close", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_close, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_close, "()V", 1 },
	{ "mark", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_mark_int, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_mark_int, "(I)V", 1 },
	{ "markSupported", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_markSupported_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_markSupported_R_boolean, "()Z", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_R_int, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_R_int, "()I", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_Array1_char_int_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_Array1_char_int_int_R_int, "([CII)I", 1 },
	{ "ready", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_ready_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_ready_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_reset, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_reset, "()V", 1 },
	{ "skip", (intptr_t) M_com_badlogic_gdx_utils_CharArray$CharArrayReader_skip_long_R_long, VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_skip_long_R_long, "(J)J", 1 },
};

Class class_com_badlogic_gdx_utils_CharArray$CharArrayReader{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/CharArray$CharArrayReader",
		.parentClass = (intptr_t) &class_java_io_Reader,
		.size = sizeof(com_badlogic_gdx_utils_CharArray$CharArrayReader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_CharArray$CharArrayReader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_CharArray$CharArrayReader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_CharArray$CharArrayReader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_CharArray,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_CharArray$CharArrayReader = registerClass(&class_com_badlogic_gdx_utils_CharArray$CharArrayReader);

}

