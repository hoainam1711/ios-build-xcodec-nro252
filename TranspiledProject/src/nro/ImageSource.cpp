#include "nro/ImageSource.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Vector.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInputStream.h"
#include "nro/Service.h"
#include "java/io/ByteArrayInputStream.h"
#include "java/io/OutputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/MyVector.h"
#include "nro/ImageSource.h"
#include "nro/Res.h"
#include "java/io/DataOutputStream.h"
#include "java/io/IOException.h"
#include "nro/Rms.h"
#include "java/lang/Throwable.h"
#include "java/io/ByteArrayOutputStream.h"

extern "C" {

jobject SF_nro_ImageSource_vSource;
jobject SF_nro_ImageSource_vRms;

void mark_nro_ImageSource(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ImageSource_vSource)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ImageSource_vSource)->clazz)->markFunction)((jobject) SF_nro_ImageSource_vSource, mark, depth + 1);
		if (SF_nro_ImageSource_vRms)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ImageSource_vRms)->clazz)->markFunction)((jobject) SF_nro_ImageSource_vRms, mark, depth + 1);
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
	auto self = (nro_ImageSource *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
}

void init_nro_ImageSource_java_lang_String_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ImageSource:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ImageSource(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((nro_ImageSource *) NULL_CHECK((frame[0].o)))->F_id = (jref) (frame[1].o);
	LINE_NUMBER(17);
	((nro_ImageSource *) NULL_CHECK((frame[0].o)))->F_version = (frame[2].i);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ImageSource_checkRMS(jcontext ctx) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ImageSource:checkRMS", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ImageSource(ctx);
	{
	LINE_NUMBER(21);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(23);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, (((jobject) createStringLiteral(ctx, u8"ImageSource"_j))));
	frame[1].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_imageSource_nro_MyVector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_imageSource_nro_MyVector])(ctx, sp[0].o, (frame[0].o));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(26);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_nro_ImageSource(ctx);
	SF_nro_ImageSource_vRms = sp[0].o;
	LINE_NUMBER(27);
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(28);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(32);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[3].o));
	frame[4].i = temp0;
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, temp0);
	frame[5].o = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(35);
	frame[7].i = (jint(0));
	}
label_15:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_16;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = frame[5].o;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[3].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[6].o;
	jint temp1 = frame[7].i;
	jint temp2 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[3].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = temp2;
	LINE_NUMBER(38);
	clinit_nro_ImageSource(ctx);
	sp[0].o = (jobject)SF_nro_ImageSource_vRms;
	clinit_nro_ImageSource(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_ImageSource);
	init_nro_ImageSource_java_lang_String_byte(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))), ((jint)ARRAY_ACCESS(jbyte, (frame[6].o), (frame[7].i))));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(35);
	INST_IINC(7, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(41);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(44);
	goto label_21;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(42);
	frame[4].o = sp[0].o;
	LINE_NUMBER(43);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[4].o));
	}
label_21:;
	{
	LINE_NUMBER(46);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vS size= "_j))));
	clinit_nro_ImageSource(ctx);
	sp[1].o = (jobject)SF_nro_ImageSource_vSource;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" vRMS size= "_j))));
	clinit_nro_ImageSource(ctx);
	sp[1].o = (jobject)SF_nro_ImageSource_vRms;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_imageSource_nro_MyVector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_imageSource_nro_MyVector])(ctx, sp[0].o, (frame[0].o));
	}
label_9:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ImageSource_saveRMS(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ImageSource:saveRMS", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ImageSource(ctx);
	{
	LINE_NUMBER(52);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(53);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(56);
	sp[0].o = frame[1].o;
	clinit_nro_ImageSource(ctx);
	sp[1].o = (jobject)SF_nro_ImageSource_vSource;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(58);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_ImageSource(ctx);
	sp[0].o = (jobject)SF_nro_ImageSource_vSource;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_8;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = frame[1].o;
	clinit_nro_ImageSource(ctx);
	sp[1].o = (jobject)SF_nro_ImageSource_vSource;
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((nro_ImageSource *) NULL_CHECK((checkCast(ctx, &class_nro_ImageSource, sp[1].o))))->F_id;
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	sp[0].o = frame[1].o;
	clinit_nro_ImageSource(ctx);
	sp[1].o = (jobject)SF_nro_ImageSource_vSource;
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)((nro_ImageSource *) NULL_CHECK((checkCast(ctx, &class_nro_ImageSource, sp[1].o))))->F_version));
	LINE_NUMBER(58);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(63);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"ImageSource"_j));
	sp[1].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[0].o));
	SM_nro_Rms_saveRMS_java_lang_String_Array1_byte(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(67);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(65);
	frame[2].o = sp[0].o;
	LINE_NUMBER(66);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_13:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_ImageSource(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ImageSource:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ImageSource(ctx);
	{
	LINE_NUMBER(12);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_nro_ImageSource(ctx);
	SF_nro_ImageSource_vSource = sp[0].o;
	LINE_NUMBER(13);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_nro_ImageSource(ctx);
	SF_nro_ImageSource_vRms = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ImageSource[] {
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

static FieldMetadata fields[] {
	{ "version", &class_byte, offsetof(nro_ImageSource, F_version), "B", 2 },
	{ "id", &class_java_lang_String, offsetof(nro_ImageSource, F_id), "Ljava/lang/String;", 1 },
	{ "vSource", &class_nro_MyVector, (intptr_t) &SF_nro_ImageSource_vSource, "Lnro/MyVector;", 9 },
	{ "vRms", &class_nro_MyVector, (intptr_t) &SF_nro_ImageSource_vRms, "Lnro/MyVector;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ImageSource_java_lang_String_byte, 0, "(Ljava/lang/String;B)V", 1 },
	{ "checkRMS", (intptr_t) SM_nro_ImageSource_checkRMS, 0, "()V", 9 },
	{ "saveRMS", (intptr_t) SM_nro_ImageSource_saveRMS, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_ImageSource, 0, "()V", 8 },
};

Class class_nro_ImageSource{
		.nativeName = (intptr_t) "nro/ImageSource",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ImageSource),
		.classVtable = (intptr_t) vtable_nro_ImageSource,
		.staticInitializer = (intptr_t) clinit_nro_ImageSource,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ImageSource,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ImageSource = registerClass(&class_nro_ImageSource);

}

