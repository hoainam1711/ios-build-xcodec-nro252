#include "javax/microedition/lcdui/Image.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "lib/mGraphics.h"
#include "lib/image/mImage.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Files.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/graphics/Texture.h"
#include "lib/mSystem.h"

extern "C" {

jint SF_javax_microedition_lcdui_Image_INTERVAL;
jint SF_javax_microedition_lcdui_Image_MAXTIME;
jint SF_javax_microedition_lcdui_Image_activeTextureCount;
jint SF_javax_microedition_lcdui_Image_totalCreatedTextures;
jint SF_javax_microedition_lcdui_Image_totalDisposedTextures;
jobject SF_javax_microedition_lcdui_Image_imgTemp;
jobject SF_javax_microedition_lcdui_Image_filenametemp;
jobject SF_javax_microedition_lcdui_Image_datatemp;
jobject SF_javax_microedition_lcdui_Image_imgSrcTemp;
jint SF_javax_microedition_lcdui_Image_xtemp;
jint SF_javax_microedition_lcdui_Image_ytemp;
jint SF_javax_microedition_lcdui_Image_wtemp;
jint SF_javax_microedition_lcdui_Image_htemp;
jint SF_javax_microedition_lcdui_Image_transformtemp;
jint SF_javax_microedition_lcdui_Image_status;

void mark_javax_microedition_lcdui_Image(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_javax_microedition_lcdui_Image_imgTemp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_javax_microedition_lcdui_Image_imgTemp)->clazz)->markFunction)((jobject) SF_javax_microedition_lcdui_Image_imgTemp, mark, depth + 1);
		if (SF_javax_microedition_lcdui_Image_filenametemp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_javax_microedition_lcdui_Image_filenametemp)->clazz)->markFunction)((jobject) SF_javax_microedition_lcdui_Image_filenametemp, mark, depth + 1);
		if (SF_javax_microedition_lcdui_Image_datatemp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_javax_microedition_lcdui_Image_datatemp)->clazz)->markFunction)((jobject) SF_javax_microedition_lcdui_Image_datatemp, mark, depth + 1);
		if (SF_javax_microedition_lcdui_Image_imgSrcTemp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_javax_microedition_lcdui_Image_imgSrcTemp)->clazz)->markFunction)((jobject) SF_javax_microedition_lcdui_Image_imgSrcTemp, mark, depth + 1);
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
	auto self = (javax_microedition_lcdui_Image *) object;
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_colorBlend)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorBlend)->clazz)->markFunction)((jobject) self->F_colorBlend, mark, depth + 1);
}

void init_javax_microedition_lcdui_Image(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_BLACK;
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_colorBlend = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_javax_microedition_lcdui_Image_createEmptyImage_R_javax_microedition_lcdui_Image(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:createEmptyImage", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image___createEmptyImage_R_javax_microedition_lcdui_Image(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_javax_microedition_lcdui_Image_createImage_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:createImage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image___createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_javax_microedition_lcdui_Image_createImage_Array1_byte_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:createImage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image___createImage_Array1_byte_R_javax_microedition_lcdui_Image(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_javax_microedition_lcdui_Image_createImage_int_int_R_javax_microedition_lcdui_Image(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:createImage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image___createImage_int_int_R_javax_microedition_lcdui_Image(ctx, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_javax_microedition_lcdui_Image_createImage_Array1_byte_int_int_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:createImage", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(73);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_1;
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_1;
	{
	if (((frame[1].i) + (frame[2].i)) <= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(77);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	if ((frame[2].i) != (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image___createImage_Array1_byte_R_javax_microedition_lcdui_Image(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(82);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[3].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(83);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image___createImage_Array1_byte_R_javax_microedition_lcdui_Image(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbyte SM_javax_microedition_lcdui_Image_convertbyteToByte_byte_R_byte(jcontext ctx, jbyte param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:convertbyteToByte", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(88);
	if ((frame[0].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[0].i);
	}
label_1:;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (jbyte(((frame[0].i) + (256))));
	}

	popStackFrame(ctx);
}

jobject SM_javax_microedition_lcdui_Image_createRGBImage_Array1_int_int_int_boolean_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:createRGBImage", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(96);
	clinit_javax_microedition_lcdui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_javax_microedition_lcdui_Image);
	init_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(97);
	frame[5].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(99);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(100);
	frame[6].i = (jint(0));
	}
label_17:;
	{
	if ((frame[6].i) >= (frame[1].i)) goto label_18;
	}
	{
	LINE_NUMBER(102);
	frame[7].i = (jint(0));
	}
label_20:;
	{
	if ((frame[7].i) >= (frame[2].i)) goto label_21;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_javax_microedition_lcdui_Image_setColorFromRBG_int_R_com_badlogic_gdx_graphics_Color(ctx, ((jint)ARRAY_ACCESS(jint, (frame[0].o), (((frame[7].i) * (frame[1].i)) + (frame[6].i)))));
	((func_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int])(ctx, (frame[5].o), (frame[6].i), (frame[7].i));
	LINE_NUMBER(102);
	INST_IINC(7, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(100);
	INST_IINC(6, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)SM_javax_microedition_lcdui_Image_sampleArgb_com_badlogic_gdx_graphics_Pixmap_int_int_R_int(ctx, (frame[5].o), ((frame[1].i) / (jint(2))), (jint(0)));
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_topSampleArgb = temp0;
	LINE_NUMBER(109);
	sp[0].o = frame[4].o;
	sp[1].o = frame[5].o;
	jint temp1 = (frame[1].i) / (jint(2));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[2].i) - (jint(1))));
	jint temp3 = (jint)SM_javax_microedition_lcdui_Image_sampleArgb_com_badlogic_gdx_graphics_Pixmap_int_int_R_int(ctx, sp[1].o, temp1, temp2);
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_bottomSampleArgb = temp3;
	LINE_NUMBER(110);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap(ctx, sp[1].o, (frame[5].o));
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[4].o)))->F_texture;
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[1].o);
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_w = temp4;
	LINE_NUMBER(112);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[4].o)))->F_texture;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[1].o);
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_h = temp5;
	LINE_NUMBER(113);
	SM_javax_microedition_lcdui_Image_setTextureQuality_javax_microedition_lcdui_Image(ctx, (frame[4].o));
	LINE_NUMBER(114);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_activeTextureCount = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_activeTextureCount) + (jint(1)));
	LINE_NUMBER(115);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_totalCreatedTextures = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_totalCreatedTextures) + (jint(1)));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(117);
	if ((frame[5].o) == nullptr) goto label_32;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(119);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(121);
	goto label_32;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(120);
	frame[6].o = sp[0].o;
	LINE_NUMBER(121);
	goto label_32;
	}
label_6:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(117);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_34;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(119);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(121);
	goto label_34;
label_10:;
	LINE_NUMBER(120);
	INST_ASTORE(9);
label_34:;
	{
	LINE_NUMBER(123);
	throwException(ctx, (frame[8].o));	}
label_32:;
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_javax_microedition_lcdui_Image_setColorFromRBG_int_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jint param0) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:setColorFromRBG", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(128);
	frame[1].i = ((frame[0].i) & (255));
	LINE_NUMBER(129);
	frame[2].i = (((frame[0].i) >> (8)) & (255));
	LINE_NUMBER(130);
	frame[3].i = (((frame[0].i) >> (16)) & (255));
	LINE_NUMBER(131);
	frame[4].f = ((jfloat((frame[1].i))) / (jfloat(256.0f)));
	LINE_NUMBER(132);
	frame[5].f = ((jfloat((frame[2].i))) / (jfloat(256.0f)));
	LINE_NUMBER(133);
	frame[6].f = ((jfloat((frame[3].i))) / (jfloat(256.0f)));
	LINE_NUMBER(134);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (frame[6].f), (frame[5].f), (frame[4].f), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_javax_microedition_lcdui_Image_update(jcontext ctx) {
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:update", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_javax_microedition_lcdui_Image___createImage_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:__createImage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(142);
	if ((frame[0].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[0].o), (jint(1)));
	frame[0].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(149);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_9; }
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image_createImage_Array1_byte_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	LINE_NUMBER(155);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(153);
	frame[1].o = sp[0].o;
	LINE_NUMBER(154);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"__createImage failed: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_javax_microedition_lcdui_Image___createImage_Array1_byte_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:__createImage", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(160);
	if ((frame[0].o) == nullptr) goto label_23;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(162);
	SM_lib_mSystem_println_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Create Image from byte array failed"_j))));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_24:;
	{
	LINE_NUMBER(165);
	clinit_javax_microedition_lcdui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_javax_microedition_lcdui_Image);
	init_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(166);
	frame[2].o = (jobject(nullptr));
	}
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_6; }
	}
	{
	LINE_NUMBER(169);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(170);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) < (jint(4))) goto label_28;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) & (255)) != (137)) goto label_28;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(1)))) & (255)) != (80)) goto label_28;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(2)))) & (255)) != (78)) goto label_28;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(3)))) & (255)) != (71)) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(176);
	if ((frame[4].i) != 0) goto label_31;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	frame[5].o = sp[0].o;
	LINE_NUMBER(178);
	clinit_lib_image_mImage(ctx);
	sp[0].o = (jobject)SF_lib_image_mImage_decryptCode;
	frame[6].o = sp[0].o;
	LINE_NUMBER(179);
	frame[7].i = (jint(0));
	}
label_35:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_36;
	}
	{
	LINE_NUMBER(180);
	ARRAY_ACCESS(jbyte, (frame[5].o), (frame[7].i)) = (jbyte((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[7].i))) ^ ((jint)ARRAY_ACCESS(jbyte, (frame[6].o), ((frame[7].i) % (((jarray) nullCheck(ctx, (frame[6].o)))->length)))))));
	LINE_NUMBER(179);
	INST_IINC(7, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(182);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) < (jint(4))) goto label_31;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[5].o), (jint(0)))) & (255)) != (137)) goto label_31;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[5].o), (jint(1)))) & (255)) != (80)) goto label_31;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[5].o), (jint(2)))) & (255)) != (78)) goto label_31;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[5].o), (jint(3)))) & (255)) != (71)) goto label_31;
	}
	{
	LINE_NUMBER(187);
	frame[3].o = (frame[5].o);
	}
label_31:;
	{
	LINE_NUMBER(191);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	init_com_badlogic_gdx_graphics_Pixmap_Array1_byte_int_int(ctx, sp[0].o, (frame[3].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(192);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_javax_microedition_lcdui_Image_sampleArgb_com_badlogic_gdx_graphics_Pixmap_int_int_R_int(ctx, sp[1].o, (temp0 / (jint(2))), (jint(0)));
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_topSampleArgb = temp1;
	LINE_NUMBER(193);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	jint temp3 = temp2 / (jint(2));
	jint temp4 = jint(0);
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	jint temp6 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp4, (temp5 - (jint(1))));
	jint temp7 = (jint)SM_javax_microedition_lcdui_Image_sampleArgb_com_badlogic_gdx_graphics_Pixmap_int_int_R_int(ctx, sp[1].o, temp3, temp6);
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_bottomSampleArgb = temp7;
	LINE_NUMBER(194);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap(ctx, sp[1].o, (frame[2].o));
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(195);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[1].o)))->F_texture;
	jint temp8 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[1].o);
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_w = temp8;
	LINE_NUMBER(196);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[1].o)))->F_texture;
	jint temp9 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[1].o);
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_h = temp9;
	LINE_NUMBER(197);
	SM_javax_microedition_lcdui_Image_setTextureQuality_javax_microedition_lcdui_Image(ctx, (frame[1].o));
	LINE_NUMBER(198);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_activeTextureCount = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_activeTextureCount) + (jint(1)));
	LINE_NUMBER(199);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_totalCreatedTextures = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_totalCreatedTextures) + (jint(1)));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(209);
	if ((frame[2].o) == nullptr) goto label_48;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(211);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(213);
	goto label_48;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(212);
	frame[3].o = sp[0].o;
	LINE_NUMBER(213);
	goto label_48;
	}
label_6:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	{
	sp -= 1;
	LINE_NUMBER(201);
	frame[3].o = sp[0].o;
	LINE_NUMBER(203);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CREATE IMAGE FROM ARRAY FAILED \n"_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(204);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	LINE_NUMBER(205);
	frame[4].o = (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(209);
	if ((frame[2].o) == nullptr) goto label_53;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(211);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(213);
	goto label_53;
label_10:;
	LINE_NUMBER(212);
	INST_ASTORE(5);
label_53:;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_12:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	LINE_NUMBER(209);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_54;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	LINE_NUMBER(211);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(213);
	goto label_54;
label_18:;
	LINE_NUMBER(212);
	INST_ASTORE(9);
label_54:;
	{
	LINE_NUMBER(215);
	throwException(ctx, (frame[8].o));	}
label_48:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[1].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_55;
	}
	INST_ALOAD(1);
	goto label_56;
label_55:;
	INST_ACONST_NULL();
label_56:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_javax_microedition_lcdui_Image___createEmptyImage_R_javax_microedition_lcdui_Image(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:__createEmptyImage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	{
	LINE_NUMBER(221);
	clinit_javax_microedition_lcdui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_javax_microedition_lcdui_Image);
	init_javax_microedition_lcdui_Image(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_javax_microedition_lcdui_Image___createImage_int_int_R_javax_microedition_lcdui_Image(jcontext ctx, jint param0, jint param1) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:__createImage", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(225);
	clinit_javax_microedition_lcdui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_javax_microedition_lcdui_Image);
	init_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(226);
	frame[3].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(228);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = frame[0].i;
	jint temp1 = frame[1].i;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(229);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap(ctx, sp[1].o, (frame[3].o));
	((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(230);
	SM_javax_microedition_lcdui_Image_setTextureQuality_javax_microedition_lcdui_Image(ctx, (frame[2].o));
	LINE_NUMBER(231);
	((javax_microedition_lcdui_Image *) NULL_CHECK((frame[2].o)))->F_w = (frame[0].i);
	LINE_NUMBER(232);
	((javax_microedition_lcdui_Image *) NULL_CHECK((frame[2].o)))->F_h = (frame[1].i);
	LINE_NUMBER(233);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_activeTextureCount = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_activeTextureCount) + (jint(1)));
	LINE_NUMBER(234);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_totalCreatedTextures = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_totalCreatedTextures) + (jint(1)));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(236);
	if ((frame[3].o) == nullptr) goto label_22;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(238);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(240);
	goto label_22;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(239);
	frame[4].o = sp[0].o;
	LINE_NUMBER(240);
	goto label_22;
	}
label_6:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(236);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_24;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(238);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(240);
	goto label_24;
label_10:;
	LINE_NUMBER(239);
	INST_ASTORE(6);
label_24:;
	{
	LINE_NUMBER(242);
	throwException(ctx, (frame[5].o));	}
label_22:;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_javax_microedition_lcdui_Image_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:dispose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_com_badlogic_gdx_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_dispose])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(251);
	goto label_6;
label_2:;
	LINE_NUMBER(250);
	INST_ASTORE(1);
label_6:;
	{
	LINE_NUMBER(252);
	((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (jobject(nullptr));
	LINE_NUMBER(253);
	if ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_activeTextureCount) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(254);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_activeTextureCount = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_activeTextureCount) - (jint(1)));
	}
label_8:;
	{
	LINE_NUMBER(256);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_totalDisposedTextures = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_totalDisposedTextures) + (jint(1)));
	}
label_5:;
	LINE_NUMBER(258);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:disposeSafe", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(261);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(262);
	((func_javax_microedition_lcdui_Image_dispose) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_dispose])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(264);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_javax_microedition_lcdui_Image_getImageWidth_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:getImageWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_javax_microedition_lcdui_Image_getImageHeight_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:getImageHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(273);
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getHeight_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_javax_microedition_lcdui_Image_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:getWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (((jint)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_w) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	}

	popStackFrame(ctx);
}

jint M_javax_microedition_lcdui_Image_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (((jint)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_h) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	}

	popStackFrame(ctx);
}

void SM_javax_microedition_lcdui_Image_setTextureQuality_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:setTextureQuality", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(287);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_texture;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	((func_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(290);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_javax_microedition_lcdui_Image_setFontTextureQuality_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:setFontTextureQuality", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(293);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_texture;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
	((func_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(296);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_javax_microedition_lcdui_Image_getRealImageWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:getRealImageWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return ((jint)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_w);
	}

	popStackFrame(ctx);
}

jint M_javax_microedition_lcdui_Image_getRealImageHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:getRealImageHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return ((jint)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_h);
	}

	popStackFrame(ctx);
}

jint SM_javax_microedition_lcdui_Image_argb_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:argb", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (((((frame[0].i) << (24)) | ((frame[1].i) << (16))) | ((frame[2].i) << (8))) | (frame[3].i));
	}

	popStackFrame(ctx);
}

jint SM_javax_microedition_lcdui_Image_sampleArgb_com_badlogic_gdx_graphics_Pixmap_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:sampleArgb", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(313);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(316);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(317);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(318);
	if ((frame[3].i) <= 0) goto label_5;
	}
	INST_ILOAD(4);
	if ((--sp)->i > 0) goto label_6;
label_5:;
	{
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(321);
	if ((frame[1].i) >= 0) goto label_7;
	}
	INST_ICONST(0);
	INST_ISTORE(1);
label_7:;
	{
	LINE_NUMBER(322);
	if ((frame[1].i) < (frame[3].i)) goto label_8;
	}
	{
	frame[1].i = ((frame[3].i) - (jint(1)));
	}
label_8:;
	{
	LINE_NUMBER(323);
	if ((frame[2].i) >= 0) goto label_9;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_9:;
	{
	LINE_NUMBER(324);
	if ((frame[2].i) < (frame[4].i)) goto label_10;
	}
	{
	frame[2].i = ((frame[4].i) - (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(325);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[5].i = temp0;
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return ((((frame[5].i) & (255)) << (24)) | ((bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (8))) & (jint(16777215))));
	}

	popStackFrame(ctx);
}

void M_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:getRGB", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(332);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"texture Image getRGB is NULL-----------."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(334);
	if ((frame[5].i) > 0) goto label_3;
	}
	{
	jint temp0 = (jint)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_topSampleArgb;
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(0);
	sp[-1].i = ((javax_microedition_lcdui_Image *) NULL_CHECK(sp[-1].o))->F_bottomSampleArgb;
label_4:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(335);
	frame[9].i = (jint(0));
	}
label_6:;
	{
	if ((frame[9].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_7;
	}
	{
	LINE_NUMBER(336);
	ARRAY_ACCESS(jint, (frame[1].o), (frame[9].i)) = (frame[8].i);
	LINE_NUMBER(335);
	INST_IINC(9, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(338);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_javax_microedition_lcdui_Image(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_javax_microedition_lcdui_Image_INTERVAL = jint(5);
	SF_javax_microedition_lcdui_Image_MAXTIME = jint(500);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "javax/microedition/lcdui/Image:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_javax_microedition_lcdui_Image(ctx);
	{
	LINE_NUMBER(18);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_activeTextureCount = (jint(0));
	LINE_NUMBER(19);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_totalCreatedTextures = (jint(0));
	LINE_NUMBER(20);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_totalDisposedTextures = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_javax_microedition_lcdui_Image[] {
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
	(void *) M_javax_microedition_lcdui_Image_dispose,
	(void *) M_javax_microedition_lcdui_Image_getWidth_R_int,
	(void *) M_javax_microedition_lcdui_Image_getHeight_R_int,
	(void *) M_javax_microedition_lcdui_Image_getRealImageWidth_R_int,
	(void *) M_javax_microedition_lcdui_Image_getRealImageHeight_R_int,
	(void *) M_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int,
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
	{ "dispose", "()V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getRealImageWidth", "()I" },
	{ "getRealImageHeight", "()I" },
	{ "getRGB", "([IIIIIII)V" },
};

static FieldMetadata fields[] {
	{ "INTERVAL", &class_int, (intptr_t) &SF_javax_microedition_lcdui_Image_INTERVAL, "I", 26 },
	{ "MAXTIME", &class_int, (intptr_t) &SF_javax_microedition_lcdui_Image_MAXTIME, "I", 26 },
	{ "texture", &class_com_badlogic_gdx_graphics_Texture, offsetof(javax_microedition_lcdui_Image, F_texture), "Lcom/badlogic/gdx/graphics/Texture;", 1 },
	{ "activeTextureCount", &class_int, (intptr_t) &SF_javax_microedition_lcdui_Image_activeTextureCount, "I", 9 },
	{ "totalCreatedTextures", &class_int, (intptr_t) &SF_javax_microedition_lcdui_Image_totalCreatedTextures, "I", 9 },
	{ "totalDisposedTextures", &class_int, (intptr_t) &SF_javax_microedition_lcdui_Image_totalDisposedTextures, "I", 9 },
	{ "topSampleArgb", &class_int, offsetof(javax_microedition_lcdui_Image, F_topSampleArgb), "I", 2 },
	{ "bottomSampleArgb", &class_int, offsetof(javax_microedition_lcdui_Image, F_bottomSampleArgb), "I", 2 },
	{ "imgTemp", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_javax_microedition_lcdui_Image_imgTemp, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "filenametemp", &class_java_lang_String, (intptr_t) &SF_javax_microedition_lcdui_Image_filenametemp, "Ljava/lang/String;", 9 },
	{ "datatemp", getArrayClass(&class_byte, 1), (intptr_t) &SF_javax_microedition_lcdui_Image_datatemp, "[B", 9 },
	{ "imgSrcTemp", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_javax_microedition_lcdui_Image_imgSrcTemp, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "xtemp", &class_int, (intptr_t) &SF_javax_microedition_lcdui_Image_xtemp, "I", 9 },
	{ "ytemp", &class_int, (intptr_t) &SF_javax_microedition_lcdui_Image_ytemp, "I", 9 },
	{ "wtemp", &class_int, (intptr_t) &SF_javax_microedition_lcdui_Image_wtemp, "I", 9 },
	{ "htemp", &class_int, (intptr_t) &SF_javax_microedition_lcdui_Image_htemp, "I", 9 },
	{ "transformtemp", &class_int, (intptr_t) &SF_javax_microedition_lcdui_Image_transformtemp, "I", 9 },
	{ "w", &class_int, offsetof(javax_microedition_lcdui_Image, F_w), "I", 1 },
	{ "h", &class_int, offsetof(javax_microedition_lcdui_Image, F_h), "I", 1 },
	{ "status", &class_int, (intptr_t) &SF_javax_microedition_lcdui_Image_status, "I", 9 },
	{ "colorBlend", &class_com_badlogic_gdx_graphics_Color, offsetof(javax_microedition_lcdui_Image, F_colorBlend), "Lcom/badlogic/gdx/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_javax_microedition_lcdui_Image, 0, "()V", 1 },
	{ "createEmptyImage", (intptr_t) SM_javax_microedition_lcdui_Image_createEmptyImage_R_javax_microedition_lcdui_Image, 0, "()Ljavax/microedition/lcdui/Image;", 9 },
	{ "createImage", (intptr_t) SM_javax_microedition_lcdui_Image_createImage_java_lang_String_R_javax_microedition_lcdui_Image, 0, "(Ljava/lang/String;)Ljavax/microedition/lcdui/Image;", 9 },
	{ "createImage", (intptr_t) SM_javax_microedition_lcdui_Image_createImage_Array1_byte_R_javax_microedition_lcdui_Image, 0, "([B)Ljavax/microedition/lcdui/Image;", 9 },
	{ "createImage", (intptr_t) SM_javax_microedition_lcdui_Image_createImage_int_int_R_javax_microedition_lcdui_Image, 0, "(II)Ljavax/microedition/lcdui/Image;", 9 },
	{ "createImage", (intptr_t) SM_javax_microedition_lcdui_Image_createImage_Array1_byte_int_int_R_javax_microedition_lcdui_Image, 0, "([BII)Ljavax/microedition/lcdui/Image;", 9 },
	{ "convertbyteToByte", (intptr_t) SM_javax_microedition_lcdui_Image_convertbyteToByte_byte_R_byte, 0, "(B)B", 9 },
	{ "createRGBImage", (intptr_t) SM_javax_microedition_lcdui_Image_createRGBImage_Array1_int_int_int_boolean_R_javax_microedition_lcdui_Image, 0, "([IIIZ)Ljavax/microedition/lcdui/Image;", 9 },
	{ "setColorFromRBG", (intptr_t) SM_javax_microedition_lcdui_Image_setColorFromRBG_int_R_com_badlogic_gdx_graphics_Color, 0, "(I)Lcom/badlogic/gdx/graphics/Color;", 9 },
	{ "update", (intptr_t) SM_javax_microedition_lcdui_Image_update, 0, "()V", 9 },
	{ "__createImage", (intptr_t) SM_javax_microedition_lcdui_Image___createImage_java_lang_String_R_javax_microedition_lcdui_Image, 0, "(Ljava/lang/String;)Ljavax/microedition/lcdui/Image;", 10 },
	{ "__createImage", (intptr_t) SM_javax_microedition_lcdui_Image___createImage_Array1_byte_R_javax_microedition_lcdui_Image, 0, "([B)Ljavax/microedition/lcdui/Image;", 10 },
	{ "__createEmptyImage", (intptr_t) SM_javax_microedition_lcdui_Image___createEmptyImage_R_javax_microedition_lcdui_Image, 0, "()Ljavax/microedition/lcdui/Image;", 10 },
	{ "__createImage", (intptr_t) SM_javax_microedition_lcdui_Image___createImage_int_int_R_javax_microedition_lcdui_Image, 0, "(II)Ljavax/microedition/lcdui/Image;", 9 },
	{ "dispose", (intptr_t) M_javax_microedition_lcdui_Image_dispose, VTABLE_javax_microedition_lcdui_Image_dispose, "()V", 1 },
	{ "disposeSafe", (intptr_t) SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image, 0, "(Ljavax/microedition/lcdui/Image;)V", 9 },
	{ "getImageWidth", (intptr_t) SM_javax_microedition_lcdui_Image_getImageWidth_javax_microedition_lcdui_Image_R_int, 0, "(Ljavax/microedition/lcdui/Image;)I", 9 },
	{ "getImageHeight", (intptr_t) SM_javax_microedition_lcdui_Image_getImageHeight_javax_microedition_lcdui_Image_R_int, 0, "(Ljavax/microedition/lcdui/Image;)I", 9 },
	{ "getWidth", (intptr_t) M_javax_microedition_lcdui_Image_getWidth_R_int, VTABLE_javax_microedition_lcdui_Image_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_javax_microedition_lcdui_Image_getHeight_R_int, VTABLE_javax_microedition_lcdui_Image_getHeight_R_int, "()I", 1 },
	{ "setTextureQuality", (intptr_t) SM_javax_microedition_lcdui_Image_setTextureQuality_javax_microedition_lcdui_Image, 0, "(Ljavax/microedition/lcdui/Image;)V", 9 },
	{ "setFontTextureQuality", (intptr_t) SM_javax_microedition_lcdui_Image_setFontTextureQuality_javax_microedition_lcdui_Image, 0, "(Ljavax/microedition/lcdui/Image;)V", 9 },
	{ "getRealImageWidth", (intptr_t) M_javax_microedition_lcdui_Image_getRealImageWidth_R_int, VTABLE_javax_microedition_lcdui_Image_getRealImageWidth_R_int, "()I", 1 },
	{ "getRealImageHeight", (intptr_t) M_javax_microedition_lcdui_Image_getRealImageHeight_R_int, VTABLE_javax_microedition_lcdui_Image_getRealImageHeight_R_int, "()I", 1 },
	{ "argb", (intptr_t) SM_javax_microedition_lcdui_Image_argb_int_int_int_int_R_int, 0, "(IIII)I", 9 },
	{ "sampleArgb", (intptr_t) SM_javax_microedition_lcdui_Image_sampleArgb_com_badlogic_gdx_graphics_Pixmap_int_int_R_int, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;II)I", 10 },
	{ "getRGB", (intptr_t) M_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int, VTABLE_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int, "([IIIIIII)V", 1 },
	{ "<clinit>", (intptr_t) clinit_javax_microedition_lcdui_Image, 0, "()V", 8 },
};

Class class_javax_microedition_lcdui_Image{
		.nativeName = (intptr_t) "javax/microedition/lcdui/Image",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(javax_microedition_lcdui_Image),
		.classVtable = (intptr_t) vtable_javax_microedition_lcdui_Image,
		.staticInitializer = (intptr_t) clinit_javax_microedition_lcdui_Image,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_javax_microedition_lcdui_Image,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 21,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_javax_microedition_lcdui_Image = registerClass(&class_javax_microedition_lcdui_Image);

}

