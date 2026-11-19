#include "lib/image/mImage.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "lib/mGraphics.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "lib/image/mImage.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_lib_image_mImage_decryptCode;

void mark_lib_image_mImage(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_image_mImage_decryptCode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_image_mImage_decryptCode)->clazz)->markFunction)((jobject) SF_lib_image_mImage_decryptCode, mark, depth + 1);
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
	auto self = (lib_image_mImage *) object;
}

void init_lib_image_mImage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/image/mImage:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_image_mImage(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_lib_image_mImage_createImage_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/image/mImage:createImage", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_image_mImage(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(13);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(15);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(18);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(19);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(21);
	sp[0].o = (jobject)SM_lib_image_mImage_createImageFromBytes_Array1_byte_R_javax_microedition_lcdui_Image(ctx, (frame[4].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(24);
	goto label_17;
label_2:;
	LINE_NUMBER(23);
	INST_ASTORE(3);
label_17:;
	{
	LINE_NUMBER(27);
	if ((frame[1].o) != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(28);
	if ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel) != (jint(4))) goto label_20;
	}
	{
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	sp += 1;
	goto label_21;
	}
label_20:;
	{
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	sp += 1;
	}
label_21:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(29);
	frame[4].o = (frame[3].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_23:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_18;
	}
	{
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(30);
	if ((frame[7].i) != (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel)) goto label_4;
	}
	goto label_25;
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(32);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[7].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_27; }
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte])(ctx, (frame[8].o));
	sp[0].o = (jobject)SM_lib_image_mImage_createImageFromBytes_Array1_byte_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(35);
	if ((frame[1].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_27; }
	}
	popExceptionFrame(frameRef);
	goto label_18;
label_27:;
	LINE_NUMBER(38);
	goto label_25;
label_6:;
	LINE_NUMBER(37);
	INST_ASTORE(8);
label_25:;
	{
	LINE_NUMBER(29);
	INST_IINC(6, 1);
	goto label_23;
	}
label_18:;
	{
	LINE_NUMBER(42);
	if ((frame[1].o) != nullptr) goto label_30;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(44);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_lib_image_mImage_createImageFromBytes_Array1_byte_R_javax_microedition_lcdui_Image(ctx, (frame[4].o));
	frame[1].o = sp[0].o;
	}
label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(50);
	goto label_30;
label_10:;
	LINE_NUMBER(49);
	INST_ASTORE(3);
label_30:;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_lib_image_mImage_createImageFromBytes_Array1_byte_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/image/mImage:createImageFromBytes", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_image_mImage(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(57);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(61);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) < (jint(4))) goto label_3;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) & (255)) != (137)) goto label_3;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(1)))) & (255)) != (80)) goto label_3;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(2)))) & (255)) != (78)) goto label_3;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(3)))) & (255)) != (71)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(67);
	if ((frame[1].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image_createImage_Array1_byte_int_int_R_javax_microedition_lcdui_Image(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(72);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (jint(0)), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(74);
	frame[3].i = (jint(0));
	}
label_10:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0);
	clinit_lib_image_mImage(ctx);
	sp[1].o = (jobject)SF_lib_image_mImage_decryptCode;
	jint temp4 = frame[3].i;
	clinit_lib_image_mImage(ctx);
	sp[2].o = (jobject)SF_lib_image_mImage_decryptCode;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((temp3 ^ ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (temp4 % (((jarray) nullCheck(ctx, sp[2].o))->length)))))));
	LINE_NUMBER(74);
	INST_IINC(3, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image_createImage_Array1_byte_int_int_R_javax_microedition_lcdui_Image(ctx, (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_lib_image_mImage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/image/mImage:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_image_mImage(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (7));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (-22);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (-10);
	clinit_lib_image_mImage(ctx);
	SF_lib_image_mImage_decryptCode = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_image_mImage[] {
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
	{ "decryptCode", getArrayClass(&class_byte, 1), (intptr_t) &SF_lib_image_mImage_decryptCode, "[B", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_image_mImage, 0, "()V", 1 },
	{ "createImage", (intptr_t) SM_lib_image_mImage_createImage_java_lang_String_R_javax_microedition_lcdui_Image, 0, "(Ljava/lang/String;)Ljavax/microedition/lcdui/Image;", 9 },
	{ "createImageFromBytes", (intptr_t) SM_lib_image_mImage_createImageFromBytes_Array1_byte_R_javax_microedition_lcdui_Image, 0, "([B)Ljavax/microedition/lcdui/Image;", 9 },
	{ "<clinit>", (intptr_t) clinit_lib_image_mImage, 0, "()V", 8 },
};

Class class_lib_image_mImage{
		.nativeName = (intptr_t) "lib/image/mImage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_image_mImage),
		.classVtable = (intptr_t) vtable_lib_image_mImage,
		.staticInitializer = (intptr_t) clinit_lib_image_mImage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_image_mImage,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_image_mImage = registerClass(&class_lib_image_mImage);

}

