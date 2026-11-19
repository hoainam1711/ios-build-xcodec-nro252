#include "nro/ImgByName.h"
#include "nro/ImgByName.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Hashtable.h"
#include "lib/mGraphics.h"
#include "java/util/Vector.h"
#include "java/lang/AutoCloseable.h"
#include "nro/mHashTable.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/MainImage.h"
#include "java/io/OutputStream.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/MyVector.h"
#include "java/io/DataOutputStream.h"
#include "java/util/Enumeration.h"
#include "nro/Rms.h"
#include "java/lang/Throwable.h"
#include "java/io/ByteArrayOutputStream.h"

extern "C" {

jobject SF_nro_ImgByName_hashImagePath;

void mark_nro_ImgByName(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ImgByName_hashImagePath)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ImgByName_hashImagePath)->clazz)->markFunction)((jobject) SF_nro_ImgByName_hashImagePath, mark, depth + 1);
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
	auto self = (nro_ImgByName *) object;
}

void init_nro_ImgByName(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ImgByName:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ImgByName(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ImgByName_SetImage_java_lang_String_javax_microedition_lcdui_Image_byte(jcontext ctx, jobject param0, jobject param1, jbyte param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ImgByName:SetImage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ImgByName(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(15);
	clinit_nro_ImgByName(ctx);
	sp[0].o = (jobject)SF_nro_ImgByName_hashImagePath;
	sp[0].o = (jobject)((func_nro_mHashTable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[3].o = (checkCast(ctx, &class_nro_MainImage, sp[0].o));
	LINE_NUMBER(16);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((nro_MainImage *) NULL_CHECK((frame[3].o)))->F_img;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((nro_MainImage *) NULL_CHECK((frame[3].o)))->F_img;
	if (sp[0].o == (frame[1].o)) goto label_2;
	}
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((nro_MainImage *) NULL_CHECK((frame[3].o)))->F_img;
	((func_javax_microedition_lcdui_Image_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_dispose])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(19);
	clinit_nro_ImgByName(ctx);
	sp[0].o = (jobject)SF_nro_ImgByName_hashImagePath;
	sp[1].o = frame[0].o;
	clinit_nro_MainImage(ctx);
	sp[2].o = gcAlloc(ctx, &class_nro_MainImage);
	init_nro_MainImage_javax_microedition_lcdui_Image_byte(ctx, sp[2].o, (frame[1].o), (frame[2].i));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ImgByName_getImagePath_java_lang_String_nro_mHashTable_R_nro_MainImage(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ImgByName:getImagePath", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ImgByName(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_nro_mHashTable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_mHashTable_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[0].o));
	sp[0].o = checkCast(ctx, &class_nro_MainImage, sp[0].o);
	frame[2].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(25);
	clinit_nro_MainImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MainImage);
	init_nro_MainImage(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)SM_nro_ImgByName_getFromRms_java_lang_String_R_nro_MainImage(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(28);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_MainImage *) NULL_CHECK((frame[3].o)))->F_img;
	((nro_MainImage *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	LINE_NUMBER(29);
	((nro_MainImage *) NULL_CHECK((frame[2].o)))->F_nFrame = ((jint)((nro_MainImage *) NULL_CHECK((frame[3].o)))->F_nFrame);
	}
label_6:;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(35);
	((nro_MainImage *) NULL_CHECK((frame[2].o)))->F_count = ((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) / (jlong(1000ll)));
	LINE_NUMBER(36);
	sp[0].o = (jobject)((nro_MainImage *) NULL_CHECK((frame[2].o)))->F_img;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(37);
	sp[0].o = frame[2].o;
	((nro_MainImage *) NULL_CHECK(sp[0].o))->F_timeImageNull = (((jint)((nro_MainImage *) NULL_CHECK(sp[0].o))->F_timeImageNull) - (jint(1)));
	LINE_NUMBER(38);
	if (((jint)((nro_MainImage *) NULL_CHECK((frame[2].o)))->F_timeImageNull) > 0) goto label_10;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_getImgByName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getImgByName_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(40);
	((nro_MainImage *) NULL_CHECK((frame[2].o)))->F_timeImageNull = (200);
	}
label_10:;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_nro_ImgByName_getFromRms_java_lang_String_R_nro_MainImage(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ImgByName:getFromRms", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ImgByName(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(49);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ImgByName_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(54);
	clinit_nro_MainImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MainImage);
	init_nro_MainImage(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	((nro_MainImage *) NULL_CHECK(sp[0].o))->F_nFrame = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0))));
	LINE_NUMBER(55);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_javax_microedition_lcdui_Image_createImage_Array1_byte_int_int_R_javax_microedition_lcdui_Image(ctx, (frame[1].o), (jint(1)), ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1))));
	((nro_MainImage *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[2].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(57);
	frame[2].o = sp[0].o;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_nro_ImgByName_saveRMS_java_lang_String_byte_Array1_byte(jcontext ctx, jobject param0, jbyte param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ImgByName:saveRMS", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ImgByName(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(65);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ImgByName_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(66);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(67);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(70);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[4].o), (frame[1].i));
	LINE_NUMBER(72);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(73);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[4].o), ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[5].i))));
	LINE_NUMBER(72);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[3].o));
	SM_nro_Rms_saveRMS_java_lang_String_Array1_byte(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(80);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(78);
	frame[5].o = sp[0].o;
	LINE_NUMBER(79);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
label_13:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ImgByName_checkDelHash_nro_mHashTable_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ImgByName:checkDelHash", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ImgByName(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(84);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"checkDelHash"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_nro_mHashTable_keys_R_java_util_Enumeration) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_mHashTable_keys_R_java_util_Enumeration])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)((func_java_util_Enumeration_hasMoreElements_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_hasMoreElements_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_java_util_Enumeration_nextElement_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_nextElement_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_nro_mHashTable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_mHashTable_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_nro_MainImage, sp[0].o));
	LINE_NUMBER(90);
	if ((longCompare((((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) / (jlong(1000ll))) - ((jlong)((nro_MainImage *) NULL_CHECK((frame[5].o)))->F_count)), (jlong(600ll)))) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(91);
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, (frame[2].o), (frame[4].o));
	}
label_7:;
	LINE_NUMBER(93);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(95);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_10;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[4].i));
	sp[0].o = (jobject)((func_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	frame[5].o = (checkCast(ctx, &class_nro_MainImage, sp[0].o));
	LINE_NUMBER(97);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((nro_MainImage *) NULL_CHECK((frame[5].o)))->F_img;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(99);
	((nro_MainImage *) NULL_CHECK((frame[5].o)))->F_img = (jref) (jobject(nullptr));
	}
label_13:;
	{
	LINE_NUMBER(95);
	INST_IINC(4, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_ImgByName(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ImgByName:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ImgByName(ctx);
	{
	LINE_NUMBER(12);
	clinit_nro_mHashTable(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_mHashTable);
	init_nro_mHashTable_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"h ImgByName"_j))));
	clinit_nro_ImgByName(ctx);
	SF_nro_ImgByName_hashImagePath = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ImgByName[] {
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
	{ "hashImagePath", &class_nro_mHashTable, (intptr_t) &SF_nro_ImgByName_hashImagePath, "Lnro/mHashTable;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ImgByName, 0, "()V", 1 },
	{ "SetImage", (intptr_t) SM_nro_ImgByName_SetImage_java_lang_String_javax_microedition_lcdui_Image_byte, 0, "(Ljava/lang/String;Ljavax/microedition/lcdui/Image;B)V", 9 },
	{ "getImagePath", (intptr_t) SM_nro_ImgByName_getImagePath_java_lang_String_nro_mHashTable_R_nro_MainImage, 0, "(Ljava/lang/String;Lnro/mHashTable;)Lnro/MainImage;", 9 },
	{ "getFromRms", (intptr_t) SM_nro_ImgByName_getFromRms_java_lang_String_R_nro_MainImage, 0, "(Ljava/lang/String;)Lnro/MainImage;", 10 },
	{ "saveRMS", (intptr_t) SM_nro_ImgByName_saveRMS_java_lang_String_byte_Array1_byte, 0, "(Ljava/lang/String;B[B)V", 9 },
	{ "checkDelHash", (intptr_t) SM_nro_ImgByName_checkDelHash_nro_mHashTable_int, 0, "(Lnro/mHashTable;I)V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_ImgByName, 0, "()V", 8 },
};

Class class_nro_ImgByName{
		.nativeName = (intptr_t) "nro/ImgByName",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ImgByName),
		.classVtable = (intptr_t) vtable_nro_ImgByName,
		.staticInitializer = (intptr_t) clinit_nro_ImgByName,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ImgByName,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ImgByName = registerClass(&class_nro_ImgByName);

}

