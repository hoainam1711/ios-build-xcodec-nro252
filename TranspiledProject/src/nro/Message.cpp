#include "nro/Message.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "nro/Message.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInputStream.h"
#include "java/io/DataOutputStream.h"
#include "java/io/ByteArrayInputStream.h"
#include "java/io/IOException.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_nro_Message(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Message *) object;
	if (self->F_b)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b)->clazz)->markFunction)((jobject) self->F_b, mark, depth + 1);
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
	if (self->F_dos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dos)->clazz)->markFunction)((jobject) self->F_dos, mark, depth + 1);
	if (self->F_dis)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dis)->clazz)->markFunction)((jobject) self->F_dis, mark, depth + 1);
	if (self->F_inData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inData)->clazz)->markFunction)((jobject) self->F_inData, mark, depth + 1);
}

void clinit_nro_Message(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Message(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Message:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Message(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_b = (jref) (jobject(nullptr));
	LINE_NUMBER(12);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_c = (jref) (jobject(nullptr));
	LINE_NUMBER(13);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_dos = (jref) (jobject(nullptr));
	LINE_NUMBER(14);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_dis = (jref) (jobject(nullptr));
	LINE_NUMBER(15);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_inData = (jref) (jobject(nullptr));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_Message_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Message:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Message(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_b = (jref) (jobject(nullptr));
	LINE_NUMBER(12);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_c = (jref) (jobject(nullptr));
	LINE_NUMBER(13);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_dos = (jref) (jobject(nullptr));
	LINE_NUMBER(14);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_dis = (jref) (jobject(nullptr));
	LINE_NUMBER(15);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_inData = (jref) (jobject(nullptr));
	LINE_NUMBER(21);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_command = (frame[1].i);
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream_int(ctx, sp[1].o, (64));
	((nro_Message *) NULL_CHECK(sp[0].o))->F_b = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_java_io_DataOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	sp[2].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_b;
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[1].o, sp[2].o);
	((nro_Message *) NULL_CHECK(sp[0].o))->F_c = (jref) sp[1].o;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_Message_byte_Array1_byte(jcontext ctx, jobject self, jbyte param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Message:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Message(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_b = (jref) (jobject(nullptr));
	LINE_NUMBER(12);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_c = (jref) (jobject(nullptr));
	LINE_NUMBER(13);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_dos = (jref) (jobject(nullptr));
	LINE_NUMBER(14);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_dis = (jref) (jobject(nullptr));
	LINE_NUMBER(15);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_inData = (jref) (jobject(nullptr));
	LINE_NUMBER(27);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_command = (frame[1].i);
	LINE_NUMBER(28);
	((nro_Message *) NULL_CHECK((frame[0].o)))->F_inData = (jref) (frame[2].o);
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	sp[2].o = sp[1].o;
	sp += 3;
	if ((frame[2].o) == nullptr) goto label_10;
	}
	INST_ALOAD(2);
	goto label_11;
label_10:;
	INST_ICONST(0);
	INST_NEWARRAY(&class_byte);
label_11:;
	{
	sp -= 4;
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[1].o, sp[3].o);
	((nro_Message *) NULL_CHECK(sp[0].o))->F_dos = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_java_io_DataInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	sp[2].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_dos;
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	((nro_Message *) NULL_CHECK(sp[0].o))->F_dis = (jref) sp[1].o;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_nro_Message_getData_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Message:getData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_b;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_b;
	sp[0].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_inData;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_nro_Message_readInt3Byte_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Message:readInt3Byte", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_dis;
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_nro_Message_reader_R_java_io_DataInputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Message:reader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_dis;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_nro_Message_writer_R_java_io_DataOutputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Message:writer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_c;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_nro_Message_cleanUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Message:cleanUp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_dis;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_dis;
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_c;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((nro_Message *) NULL_CHECK((frame[0].o)))->F_c;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	LINE_NUMBER(63);
	goto label_8;
label_2:;
	LINE_NUMBER(62);
	INST_ASTORE(1);
label_8:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_Message[] {
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
	(void *) M_nro_Message_getData_R_Array1_byte,
	(void *) M_nro_Message_readInt3Byte_R_int,
	(void *) M_nro_Message_reader_R_java_io_DataInputStream,
	(void *) M_nro_Message_writer_R_java_io_DataOutputStream,
	(void *) M_nro_Message_cleanUp,
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
	{ "getData", "()[B" },
	{ "readInt3Byte", "()I" },
	{ "reader", "()Ljava/io/DataInputStream;" },
	{ "writer", "()Ljava/io/DataOutputStream;" },
	{ "cleanUp", "()V" },
};

static FieldMetadata fields[] {
	{ "command", &class_byte, offsetof(nro_Message, F_command), "B", 1 },
	{ "b", &class_java_io_ByteArrayOutputStream, offsetof(nro_Message, F_b), "Ljava/io/ByteArrayOutputStream;", 2 },
	{ "c", &class_java_io_DataOutputStream, offsetof(nro_Message, F_c), "Ljava/io/DataOutputStream;", 2 },
	{ "dos", &class_java_io_ByteArrayInputStream, offsetof(nro_Message, F_dos), "Ljava/io/ByteArrayInputStream;", 2 },
	{ "dis", &class_java_io_DataInputStream, offsetof(nro_Message, F_dis), "Ljava/io/DataInputStream;", 2 },
	{ "inData", getArrayClass(&class_byte, 1), offsetof(nro_Message, F_inData), "[B", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Message, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_nro_Message_byte, 0, "(B)V", 1 },
	{ "<init>", (intptr_t) init_nro_Message_byte_Array1_byte, 0, "(B[B)V", 1 },
	{ "getData", (intptr_t) M_nro_Message_getData_R_Array1_byte, VTABLE_nro_Message_getData_R_Array1_byte, "()[B", 17 },
	{ "readInt3Byte", (intptr_t) M_nro_Message_readInt3Byte_R_int, VTABLE_nro_Message_readInt3Byte_R_int, "()I", 17 },
	{ "reader", (intptr_t) M_nro_Message_reader_R_java_io_DataInputStream, VTABLE_nro_Message_reader_R_java_io_DataInputStream, "()Ljava/io/DataInputStream;", 17 },
	{ "writer", (intptr_t) M_nro_Message_writer_R_java_io_DataOutputStream, VTABLE_nro_Message_writer_R_java_io_DataOutputStream, "()Ljava/io/DataOutputStream;", 17 },
	{ "cleanUp", (intptr_t) M_nro_Message_cleanUp, VTABLE_nro_Message_cleanUp, "()V", 17 },
};

Class class_nro_Message{
		.nativeName = (intptr_t) "nro/Message",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Message),
		.classVtable = (intptr_t) vtable_nro_Message,
		.staticInitializer = (intptr_t) clinit_nro_Message,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Message,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Message = registerClass(&class_nro_Message);

}

