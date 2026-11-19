#include "lib/image/MyStream.h"
#include "java/lang/Math.h"
#include "java/io/InputStream.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "nro/Controller2.h"
#include "java/util/Random.h"
#include "java/lang/String.h"
#include "java/util/Vector.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "lib/image/MyStream.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"

extern "C" {


void mark_lib_image_MyStream(jobject object, jint mark, jint depth) {
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
	auto self = (lib_image_MyStream *) object;
	if (self->F_b)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b)->clazz)->markFunction)((jobject) self->F_b, mark, depth + 1);
	if (self->F_a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_a)->clazz)->markFunction)((jobject) self->F_a, mark, depth + 1);
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
}

void clinit_lib_image_MyStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_image_MyStream_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/image/MyStream:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_image_MyStream(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_java_util_Random(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[1].o);
	((lib_image_MyStream *) NULL_CHECK(sp[0].o))->F_b = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_java_util_Vector(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[1].o);
	((lib_image_MyStream *) NULL_CHECK(sp[0].o))->F_a = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(16711680));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(16776960));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(65280));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(16777215));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (255);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(65535));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(15790320));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(12632256));
	((lib_image_MyStream *) NULL_CHECK(sp[0].o))->F_c = (jref) sp[1].o;
	LINE_NUMBER(21);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (72)) goto label_6;
	}
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((lib_image_MyStream *) NULL_CHECK((frame[0].o)))->F_a;
	clinit_nro_Controller2(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Controller2);
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[2].o = (jobject)((lib_image_MyStream *) NULL_CHECK((frame[0].o)))->F_b;
	jint temp2 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[2].o);
	jint temp3 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp2 % (8)));
	jint temp4 = temp3 + (jint(3));
	jint temp5 = (frame[3].i) * (jint(5));
	sp[2].o = (jobject)((lib_image_MyStream *) NULL_CHECK((frame[0].o)))->F_c;
	sp[3].o = (jobject)((lib_image_MyStream *) NULL_CHECK((frame[0].o)))->F_b;
	jint temp6 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[3].o);
	sp[3].o = (jobject)((lib_image_MyStream *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp7 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp6 % (((jarray) nullCheck(ctx, sp[3].o))->length)));
	init_nro_Controller2_int_int_int_int_int(ctx, sp[1].o, temp0, temp1, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[2].o, temp7)));
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(21);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_lib_image_MyStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/image/MyStream:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_image_MyStream(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/image/MyStream:readFile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_image_MyStream(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(33);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	frame[1].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(38);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(39);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(44);
	INST_ACONST_NULL();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(46);
	frame[1].o = sp[0].o;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_lib_image_MyStream[] {
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
	{ "b", &class_java_util_Random, offsetof(lib_image_MyStream, F_b), "Ljava/util/Random;", 2 },
	{ "a", &class_java_util_Vector, offsetof(lib_image_MyStream, F_a), "Ljava/util/Vector;", 1 },
	{ "c", getArrayClass(&class_int, 1), offsetof(lib_image_MyStream, F_c), "[I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_image_MyStream_int_int_int_int, 0, "(IIII)V", 1 },
	{ "<init>", (intptr_t) init_lib_image_MyStream, 0, "()V", 1 },
	{ "readFile", (intptr_t) SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream, 0, "(Ljava/lang/String;)Ljava/io/InputStream;", 9 },
};

Class class_lib_image_MyStream{
		.nativeName = (intptr_t) "lib/image/MyStream",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_image_MyStream),
		.classVtable = (intptr_t) vtable_lib_image_MyStream,
		.staticInitializer = (intptr_t) clinit_lib_image_MyStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_image_MyStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_image_MyStream = registerClass(&class_lib_image_MyStream);

}

