#include "nro/SmallImage.h"
#include "nro/GameScr.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "lib/mGraphics.h"
#include "java/io/DataInputStream.h"
#include "main/GameCanvas.h"
#include "java/io/ByteArrayInputStream.h"
#include "nro/Service.h"
#include "nro/SmallImage.h"
#include "nro/CreateCharScr.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/MyVector.h"
#include "nro/BackgroudEffect.h"
#include "nro/Small.h"
#include "nro/mScreen.h"
#include "nro/Rms.h"
#include "java/lang/Throwable.h"
#include "nro/Char.h"
#include "java/lang/System.h"
#include "lib/mSystem.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jobject SF_nro_SmallImage_smallImg;
jobject SF_nro_SmallImage_instance;
jobject SF_nro_SmallImage_imgbig;
jobject SF_nro_SmallImage_imgNew;
jobject SF_nro_SmallImage_vKeys;
jobject SF_nro_SmallImage_imgEmpty;
jobject SF_nro_SmallImage_newSmallVersion;
jobject SF_nro_SmallImage_vt_images_watingDowload;
jint SF_nro_SmallImage_smallCount;
jshort SF_nro_SmallImage_maxSmall;

void mark_nro_SmallImage(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_SmallImage_smallImg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SmallImage_smallImg)->clazz)->markFunction)((jobject) SF_nro_SmallImage_smallImg, mark, depth + 1);
		if (SF_nro_SmallImage_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SmallImage_instance)->clazz)->markFunction)((jobject) SF_nro_SmallImage_instance, mark, depth + 1);
		if (SF_nro_SmallImage_imgbig)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SmallImage_imgbig)->clazz)->markFunction)((jobject) SF_nro_SmallImage_imgbig, mark, depth + 1);
		if (SF_nro_SmallImage_imgNew)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SmallImage_imgNew)->clazz)->markFunction)((jobject) SF_nro_SmallImage_imgNew, mark, depth + 1);
		if (SF_nro_SmallImage_vKeys)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SmallImage_vKeys)->clazz)->markFunction)((jobject) SF_nro_SmallImage_vKeys, mark, depth + 1);
		if (SF_nro_SmallImage_imgEmpty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SmallImage_imgEmpty)->clazz)->markFunction)((jobject) SF_nro_SmallImage_imgEmpty, mark, depth + 1);
		if (SF_nro_SmallImage_newSmallVersion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SmallImage_newSmallVersion)->clazz)->markFunction)((jobject) SF_nro_SmallImage_newSmallVersion, mark, depth + 1);
		if (SF_nro_SmallImage_vt_images_watingDowload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SmallImage_vt_images_watingDowload)->clazz)->markFunction)((jobject) SF_nro_SmallImage_vt_images_watingDowload, mark, depth + 1);
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
	auto self = (nro_SmallImage *) object;
}

void init_nro_SmallImage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	SM_nro_SmallImage_readImage(ctx);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_SmallImage_loadBigRMS(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:loadBigRMS", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	{
	LINE_NUMBER(28);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgbig;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (6));
	jint temp0 = jint(0);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"/img/Big0.png"_j));
	LINE_NUMBER(30);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"/img/Big1.png"_j));
	LINE_NUMBER(31);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"/img/Big2.png"_j));
	LINE_NUMBER(32);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"/img/Big3.png"_j));
	LINE_NUMBER(33);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"/img/Big4.png"_j));
	LINE_NUMBER(34);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"/img/Big5.png"_j));
	LINE_NUMBER(35);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_imgbig = sp[0].o;
	}
label_1:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_SmallImage_disposeSmall_nro_Small(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:disposeSmall", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(41);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK((frame[0].o)))->F_img;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK((frame[0].o)))->F_img;
	clinit_nro_SmallImage(ctx);
	sp[1].o = (jobject)SF_nro_SmallImage_imgEmpty;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK((frame[0].o)))->F_img;
	((func_javax_microedition_lcdui_Image_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_dispose])(ctx, sp[0].o);
	LINE_NUMBER(43);
	((nro_Small *) NULL_CHECK((frame[0].o)))->F_img = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_SmallImage_putSmall_int_javax_microedition_lcdui_Image(jcontext ctx, jint param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:putSmall", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(48);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ILOAD(0);
	if ((--sp)->i < 0) goto label_1;
	{
	jint temp0 = frame[0].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(49);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	clinit_nro_SmallImage(ctx);
	sp[1].o = (jobject)SF_nro_SmallImage_imgEmpty;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(50);
	((func_javax_microedition_lcdui_Image_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_dispose])(ctx, (frame[1].o));
	}
label_3:;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(54);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))) == nullptr) goto label_5;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)))))->F_img;
	if (sp[0].o == (frame[1].o)) goto label_5;
	}
	{
	LINE_NUMBER(55);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	SM_nro_SmallImage_disposeSmall_nro_Small(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))));
	}
label_5:;
	{
	LINE_NUMBER(57);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	jint temp0 = frame[0].i;
	clinit_nro_Small(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Small);
	init_nro_Small_javax_microedition_lcdui_Image_int(ctx, sp[1].o, (frame[1].o), (frame[0].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_SmallImage_freeBig(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:freeBig", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	{
	LINE_NUMBER(61);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgbig;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(62);
	frame[0].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgbig;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(63);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgbig;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))));
	LINE_NUMBER(64);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgbig;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)) = (jobject(nullptr));
	LINE_NUMBER(62);
	INST_IINC(0, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(66);
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_imgbig = (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(68);
	SM_java_lang_System_gc(ctx);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_SmallImage_loadBigImage(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:loadBigImage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	{
	LINE_NUMBER(72);
	SM_java_lang_System_gc(ctx);
	LINE_NUMBER(73);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgEmpty;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgEmpty;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(-2013265920));
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image_createRGBImage_Array1_int_int_int_boolean_R_javax_microedition_lcdui_Image(ctx, sp[0].o, (jint(1)), (jint(1)), (jint(1)));
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_imgEmpty = sp[0].o;
	}
label_3:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_SmallImage_init(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:init", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	{
	LINE_NUMBER(79);
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_instance = (jobject(nullptr));
	LINE_NUMBER(80);
	clinit_nro_SmallImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_SmallImage);
	init_nro_SmallImage(ctx, sp[0].o);
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_instance = sp[0].o;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_SmallImage_clearHastable(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:clearHastable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	{
	LINE_NUMBER(84);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(85);
	frame[0].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(86);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	SM_nro_SmallImage_disposeSmall_nro_Small(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))));
	LINE_NUMBER(87);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)) = (jobject(nullptr));
	LINE_NUMBER(85);
	INST_IINC(0, 1);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_SmallImage_readImage(jcontext ctx) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:readImage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	{
	LINE_NUMBER(93);
	frame[0].i = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, (((jobject) createStringLiteral(ctx, u8"NR_image"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(96);
	if ((frame[1].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(99);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[1].o, (frame[1].o));
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(100);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(101);
	sp[0].o = (jobject)createMultiArray(ctx, &class_int, {(frame[3].i), (jint(5))});
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_smallImg = sp[0].o;
	LINE_NUMBER(102);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(103);
	INST_IINC(0, 1);
	LINE_NUMBER(104);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[2].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(105);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	jint temp2 = jint(1);
	jint temp3 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[2].o));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	LINE_NUMBER(106);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	jint temp4 = jint(2);
	jint temp5 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[2].o));
	ARRAY_ACCESS(jint, sp[0].o, temp4) = temp5;
	LINE_NUMBER(107);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	jint temp6 = jint(3);
	jint temp7 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[2].o));
	ARRAY_ACCESS(jint, sp[0].o, temp6) = temp7;
	LINE_NUMBER(108);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	jint temp8 = jint(4);
	jint temp9 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[2].o));
	ARRAY_ACCESS(jint, sp[0].o, temp8) = temp9;
	LINE_NUMBER(102);
	INST_IINC(4, 1);
	goto label_12;
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(112);
	goto label_20;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(110);
	frame[1].o = sp[0].o;
	LINE_NUMBER(111);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	}
label_20:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_SmallImage_createImage_int(jcontext ctx, jint param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:createImage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(116);
	if ((frame[0].i) < 0) goto label_1;
	}
	clinit_nro_SmallImage(ctx);
	(sp++)->o = SF_nro_SmallImage_imgNew;
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = frame[0].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
label_1:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(121);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Small"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(122);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(123);
	frame[2].i = (jint(0));
	LINE_NUMBER(124);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_newSmallVersion;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	jint temp0 = frame[0].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_newSmallVersion;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	jint temp0 = (((jarray) nullCheck(ctx, (frame[1].o)))->length) % (127);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_newSmallVersion;
	if (temp0 == ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[0].i)))) goto label_7;
	}
	{
	LINE_NUMBER(125);
	frame[2].i = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(128);
	if ((frame[2].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image_createImage_Array1_byte_int_int_R_javax_microedition_lcdui_Image(ctx, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[3].o = sp[0].o;
	LINE_NUMBER(130);
	if ((frame[3].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(131);
	SM_nro_SmallImage_putSmall_int_javax_microedition_lcdui_Image(ctx, (frame[0].i), (frame[3].o));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(138);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/SmallImage/Small"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(139);
	if ((frame[2].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(140);
	SM_nro_SmallImage_putSmall_int_javax_microedition_lcdui_Image(ctx, (frame[0].i), (frame[2].o));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(145);
	jint temp0 = frame[0].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgEmpty;
	SM_nro_SmallImage_putSmall_int_javax_microedition_lcdui_Image(ctx, temp0, sp[0].o);
	LINE_NUMBER(146);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas__SelectCharScr;
	if (sp[0].o != sp[1].o) goto label_18;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestIcon_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestIcon_int])(ctx, sp[0].o, (frame[0].i));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(149);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_vt_images_watingDowload;
	clinit_nro_SmallImage(ctx);
	sp[1].o = (jobject)SF_nro_SmallImage_imgNew;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[0].i))));
	}
label_20:;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_SmallImage_createImage_lib_mGraphics_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:createImage", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(154);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (jint(0)), (frame[5].i));
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:drawSmallImage", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(158);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int_float(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (jfloat(1)));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int_float(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jfloat param6) {
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:drawSmallImage", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(162);
	if ((frame[1].i) >= 0) goto label_0;
	}
	LINE_NUMBER(163);
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(167);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgbig;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(168);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	frame[7].o = sp[0].o;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(169);
	SM_nro_SmallImage_createImage_int(ctx, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(173);
	((nro_Small *) NULL_CHECK((frame[7].o)))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK((frame[7].o)))->F_timeUpdate);
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (frame[4].i), (frame[2].i), (frame[3].i), (frame[5].i), (frame[6].f));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(178);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	LINE_NUMBER(179);
	jint temp0 = frame[1].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_35;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_35;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(1)))) >= (256)) goto label_35;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(3)))) >= (256)) goto label_35;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(2)))) >= (256)) goto label_35;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(4)))) < (256)) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
label_35:;
	{
	LINE_NUMBER(180);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	frame[7].o = sp[0].o;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(181);
	SM_nro_SmallImage_createImage_int(ctx, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(182);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(185);
	((nro_Small *) NULL_CHECK((frame[7].o)))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK((frame[7].o)))->F_timeUpdate);
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (frame[4].i), (frame[2].i), (frame[3].i), (frame[5].i), (frame[6].f));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(187);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(190);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	frame[8].i = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(0))));
	LINE_NUMBER(191);
	if ((frame[8].i) < 0) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	jint temp0 = frame[8].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgbig;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgbig;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i))) == nullptr) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	clinit_nro_SmallImage(ctx);
	sp[1].o = (jobject)SF_nro_SmallImage_imgbig;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[8].i));
	clinit_nro_SmallImage(ctx);
	sp[2].o = (jobject)SF_nro_SmallImage_smallImg;
	jint temp0 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i))), (jint(1)));
	clinit_nro_SmallImage(ctx);
	sp[2].o = (jobject)SF_nro_SmallImage_smallImg;
	jint temp1 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i))), (jint(2)));
	clinit_nro_SmallImage(ctx);
	sp[2].o = (jobject)SF_nro_SmallImage_smallImg;
	jint temp2 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i))), (jint(3)));
	clinit_nro_SmallImage(ctx);
	sp[2].o = (jobject)SF_nro_SmallImage_smallImg;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i))), (jint(4)))), (frame[4].i), (frame[2].i), (frame[3].i), (frame[5].i), (frame[6].f));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(193);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(196);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	frame[7].o = sp[0].o;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	{
	LINE_NUMBER(197);
	SM_nro_SmallImage_createImage_int(ctx, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(198);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(201);
	((nro_Small *) NULL_CHECK((frame[7].o)))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK((frame[7].o)))->F_timeUpdate);
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (frame[4].i), (frame[2].i), (frame[3].i), (frame[5].i), (frame[6].f));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(203);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(206);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (sp[0].o == sp[1].o) { popExceptionFrames(frameRef, 1); goto label_44; }
	}
	{
	LINE_NUMBER(207);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	frame[7].o = sp[0].o;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(208);
	SM_nro_SmallImage_createImage_int(ctx, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(212);
	((nro_Small *) NULL_CHECK((frame[7].o)))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK((frame[7].o)))->F_timeUpdate);
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (frame[4].i), (frame[2].i), (frame[3].i), (frame[5].i), (frame[6].f));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();
label_44:;
	LINE_NUMBER(217);
	goto label_49;
label_2:;
	LINE_NUMBER(216);
	INST_ASTORE(7);
label_49:;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8) {
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:drawSmallImage", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(221);
	if ((frame[1].i) >= 0) goto label_0;
	}
	LINE_NUMBER(222);
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(226);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgbig;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(227);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	frame[9].o = sp[0].o;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(228);
	SM_nro_SmallImage_createImage_int(ctx, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(229);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(232);
	((nro_Small *) NULL_CHECK((frame[9].o)))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK((frame[9].o)))->F_timeUpdate);
	LINE_NUMBER(233);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Small *) NULL_CHECK((frame[9].o)))->F_img;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((frame[2].i) * (frame[6].i)), (frame[5].i), (frame[6].i), (frame[7].i), (frame[3].i), (frame[4].i), (frame[8].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(237);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	LINE_NUMBER(238);
	jint temp0 = frame[1].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_35;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_35;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(1)))) >= (256)) goto label_35;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(3)))) >= (256)) goto label_35;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(2)))) >= (256)) goto label_35;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(4)))) < (256)) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
label_35:;
	{
	LINE_NUMBER(239);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	frame[9].o = sp[0].o;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(240);
	SM_nro_SmallImage_createImage_int(ctx, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(244);
	((func_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int])(ctx, (frame[9].o), (frame[0].o), (frame[7].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[8].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(248);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	frame[10].i = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(0))));
	LINE_NUMBER(249);
	if ((frame[10].i) < 0) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	jint temp0 = frame[10].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgbig;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgbig;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i))) == nullptr) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	clinit_nro_SmallImage(ctx);
	sp[1].o = (jobject)SF_nro_SmallImage_imgbig;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[10].i))), (jint(0)), ((frame[2].i) * (frame[6].i)), (frame[5].i), (frame[6].i), (frame[7].i), (frame[3].i), (frame[4].i), (frame[8].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(254);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	frame[9].o = sp[0].o;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	{
	LINE_NUMBER(255);
	SM_nro_SmallImage_createImage_int(ctx, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(256);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(259);
	((func_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int])(ctx, (frame[9].o), (frame[0].o), (frame[7].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[8].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(260);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(263);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (sp[0].o == sp[1].o) { popExceptionFrames(frameRef, 1); goto label_42; }
	}
	{
	LINE_NUMBER(264);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	frame[9].o = sp[0].o;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(265);
	SM_nro_SmallImage_createImage_int(ctx, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(266);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(269);
	((func_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int])(ctx, (frame[9].o), (frame[0].o), (frame[7].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[8].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(270);
	popStackFrame(ctx);
	INST_RETURN();
label_42:;
	LINE_NUMBER(273);
	goto label_46;
label_2:;
	LINE_NUMBER(272);
	INST_ASTORE(9);
label_46:;
	LINE_NUMBER(274);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_SmallImage_update(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	{
	LINE_NUMBER(277);
	frame[0].i = (jint(0));
	LINE_NUMBER(278);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (1000)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(279);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(280);
	frame[1].i = (jint(0));
	LINE_NUMBER(281);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(282);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_9;
	}
	LINE_NUMBER(283);
	INST_IINC(1, 1);
label_9:;
	{
	LINE_NUMBER(281);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(286);
	frame[2].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	LINE_NUMBER(287);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(288);
	INST_IINC(0, 1);
	LINE_NUMBER(290);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	frame[3].o = sp[0].o;
	((nro_Small *) NULL_CHECK(sp[0].o))->F_timeUpdate = (((jint)((nro_Small *) NULL_CHECK(sp[0].o))->F_timeUpdate) + (jint(1)));
	LINE_NUMBER(291);
	if ((frame[1].i) <= (500)) goto label_19;
	}
	{
	if ((((jint)((nro_Small *) NULL_CHECK((frame[3].o)))->F_timeUpdate) - ((jint)((nro_Small *) NULL_CHECK((frame[3].o)))->F_timePaint)) <= (10)) goto label_19;
	}
	{
	if (((jint)((nro_Small *) NULL_CHECK((frame[3].o)))->F_id) == (11120)) goto label_19;
	}
	{
	if (((jint)((nro_Small *) NULL_CHECK((frame[3].o)))->F_id) == (7599)) goto label_19;
	}
	{
	if (((jint)((nro_Small *) NULL_CHECK((frame[3].o)))->F_id) == (7676)) goto label_19;
	}
	{
	if (((jint)((nro_Small *) NULL_CHECK((frame[3].o)))->F_id) == (7677)) goto label_19;
	}
	{
	if (((jint)((nro_Small *) NULL_CHECK((frame[3].o)))->F_id) == (7678)) goto label_19;
	}
	{
	if (((jint)((nro_Small *) NULL_CHECK((frame[3].o)))->F_id) == (clinit_nro_BackgroudEffect(ctx), (jint)SF_nro_BackgroudEffect_id_water1)) goto label_19;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((func_nro_Char_isCharBodyImageID_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_isCharBodyImageID_int_R_boolean])(ctx, sp[0].o, ((jint)((nro_Small *) NULL_CHECK((frame[3].o)))->F_id));
	if (temp0 != 0) goto label_19;
	}
label_21:;
	{
	LINE_NUMBER(300);
	SM_nro_SmallImage_disposeSmall_nro_Small(ctx, (frame[3].o));
	LINE_NUMBER(301);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Small *) NULL_CHECK((frame[3].o)))->F_id)) = (jobject(nullptr));
	LINE_NUMBER(302);
	INST_IINC(1, -1);
	}
label_19:;
	{
	LINE_NUMBER(305);
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_smallCount = ((clinit_nro_SmallImage(ctx), (jint)SF_nro_SmallImage_smallCount) + (jint(1)));
	}
label_14:;
	{
	LINE_NUMBER(286);
	INST_IINC(2, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(309);
	if ((frame[0].i) <= (200)) goto label_2;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_lowGraphic;
	if ((--sp)->i == 0) goto label_2;
	LINE_NUMBER(310);
	SM_nro_SmallImage_clearHastable(ctx);
label_2:;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_SmallImage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SmallImage:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SmallImage(ctx);
	{
	LINE_NUMBER(16);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vKeys"_j))));
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_vKeys = sp[0].o;
	LINE_NUMBER(17);
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_imgEmpty = (jobject(nullptr));
	LINE_NUMBER(19);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_vt_images_watingDowload = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_SmallImage[] {
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
	{ "smallImg", getArrayClass(&class_int, 2), (intptr_t) &SF_nro_SmallImage_smallImg, "[[I", 9 },
	{ "instance", &class_nro_SmallImage, (intptr_t) &SF_nro_SmallImage_instance, "Lnro/SmallImage;", 9 },
	{ "imgbig", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_nro_SmallImage_imgbig, "[Ljavax/microedition/lcdui/Image;", 9 },
	{ "imgNew", getArrayClass(&class_nro_Small, 1), (intptr_t) &SF_nro_SmallImage_imgNew, "[Lnro/Small;", 9 },
	{ "vKeys", &class_nro_MyVector, (intptr_t) &SF_nro_SmallImage_vKeys, "Lnro/MyVector;", 9 },
	{ "imgEmpty", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_SmallImage_imgEmpty, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "newSmallVersion", getArrayClass(&class_byte, 1), (intptr_t) &SF_nro_SmallImage_newSmallVersion, "[B", 9 },
	{ "vt_images_watingDowload", &class_nro_MyVector, (intptr_t) &SF_nro_SmallImage_vt_images_watingDowload, "Lnro/MyVector;", 9 },
	{ "smallCount", &class_int, (intptr_t) &SF_nro_SmallImage_smallCount, "I", 10 },
	{ "maxSmall", &class_short, (intptr_t) &SF_nro_SmallImage_maxSmall, "S", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_SmallImage, 0, "()V", 1 },
	{ "loadBigRMS", (intptr_t) SM_nro_SmallImage_loadBigRMS, 0, "()V", 9 },
	{ "disposeSmall", (intptr_t) SM_nro_SmallImage_disposeSmall_nro_Small, 0, "(Lnro/Small;)V", 9 },
	{ "putSmall", (intptr_t) SM_nro_SmallImage_putSmall_int_javax_microedition_lcdui_Image, 0, "(ILjavax/microedition/lcdui/Image;)V", 9 },
	{ "freeBig", (intptr_t) SM_nro_SmallImage_freeBig, 0, "()V", 9 },
	{ "loadBigImage", (intptr_t) SM_nro_SmallImage_loadBigImage, 0, "()V", 9 },
	{ "init", (intptr_t) SM_nro_SmallImage_init, 0, "()V", 9 },
	{ "clearHastable", (intptr_t) SM_nro_SmallImage_clearHastable, 0, "()V", 9 },
	{ "readImage", (intptr_t) SM_nro_SmallImage_readImage, 0, "()V", 10 },
	{ "createImage", (intptr_t) SM_nro_SmallImage_createImage_int, 0, "(I)V", 9 },
	{ "createImage", (intptr_t) SM_nro_SmallImage_createImage_lib_mGraphics_int_int_int_int_int, 0, "(Llib/mGraphics;IIIII)V", 9 },
	{ "drawSmallImage", (intptr_t) SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int, 0, "(Llib/mGraphics;IIIII)V", 9 },
	{ "drawSmallImage", (intptr_t) SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int_float, 0, "(Llib/mGraphics;IIIIIF)V", 9 },
	{ "drawSmallImage", (intptr_t) SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int_int_int_int, 0, "(Llib/mGraphics;IIIIIIII)V", 9 },
	{ "update", (intptr_t) SM_nro_SmallImage_update, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_SmallImage, 0, "()V", 8 },
};

Class class_nro_SmallImage{
		.nativeName = (intptr_t) "nro/SmallImage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_SmallImage),
		.classVtable = (intptr_t) vtable_nro_SmallImage,
		.staticInitializer = (intptr_t) clinit_nro_SmallImage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_SmallImage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_SmallImage = registerClass(&class_nro_SmallImage);

}

