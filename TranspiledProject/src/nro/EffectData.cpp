#include "nro/EffectData.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "lib/mGraphics.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInputStream.h"
#include "nro/ImageInfo.h"
#include "main/GameCanvas.h"
#include "nro/EffectData.h"
#include "java/io/ByteArrayInputStream.h"
#include "nro/Frame.h"
#include "nro/StaticObj.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/Res.h"
#include "lib/image/MyStream.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {


void mark_nro_EffectData(jobject object, jint mark, jint depth) {
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
	auto self = (nro_EffectData *) object;
	if (self->F_img)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_img)->clazz)->markFunction)((jobject) self->F_img, mark, depth + 1);
	if (self->F_imgInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgInfo)->clazz)->markFunction)((jobject) self->F_imgInfo, mark, depth + 1);
	if (self->F_frame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frame)->clazz)->markFunction)((jobject) self->F_frame, mark, depth + 1);
	if (self->F_arrFrame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrFrame)->clazz)->markFunction)((jobject) self->F_arrFrame, mark, depth + 1);
	if (self->F_anim_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_anim_data)->clazz)->markFunction)((jobject) self->F_anim_data, mark, depth + 1);
}

void clinit_nro_EffectData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_EffectData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectData:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_short, 1), (16));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_anim_data = (jref) sp[1].o;
	LINE_NUMBER(19);
	((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_typeData = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_EffectData_readData_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectData:readData", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	frame[2].o = (jobject(nullptr));
	}
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_6; }
	}
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(27);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[3].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(28);
	M_nro_EffectData_readData_java_io_DataInputStream(ctx, (frame[0].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(32);
	if ((frame[2].o) == nullptr) goto label_23;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(34);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(37);
	goto label_23;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(35);
	frame[3].o = sp[0].o;
	LINE_NUMBER(36);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	LINE_NUMBER(37);
	goto label_23;
	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(29);
	frame[3].o = sp[0].o;
	LINE_NUMBER(32);
	if ((frame[2].o) == nullptr) goto label_27;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(34);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(37);
	goto label_27;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(35);
	frame[4].o = sp[0].o;
	LINE_NUMBER(36);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
label_27:;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	LINE_NUMBER(32);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_29;
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(34);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(37);
	goto label_29;
label_16:;
	{
	sp -= 1;
	LINE_NUMBER(35);
	frame[6].o = sp[0].o;
	LINE_NUMBER(36);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[6].o));
	}
label_29:;
	{
	LINE_NUMBER(39);
	throwException(ctx, (frame[5].o));	}
label_23:;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_EffectData_readData2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectData:readData2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	frame[2].o = (jobject(nullptr));
	}
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_6; }
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(46);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[3].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(47);
	M_nro_EffectData_readEffect_java_io_DataInputStream(ctx, (frame[0].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(51);
	if ((frame[2].o) == nullptr) goto label_23;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(53);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(56);
	goto label_23;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(54);
	frame[3].o = sp[0].o;
	LINE_NUMBER(55);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	LINE_NUMBER(56);
	goto label_23;
	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(48);
	frame[3].o = sp[0].o;
	LINE_NUMBER(51);
	if ((frame[2].o) == nullptr) goto label_27;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(53);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(56);
	goto label_27;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(54);
	frame[4].o = sp[0].o;
	LINE_NUMBER(55);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
label_27:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	LINE_NUMBER(51);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_29;
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(53);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(56);
	goto label_29;
label_16:;
	{
	sp -= 1;
	LINE_NUMBER(54);
	frame[6].o = sp[0].o;
	LINE_NUMBER(55);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[6].o));
	}
label_29:;
	{
	LINE_NUMBER(58);
	throwException(ctx, (frame[5].o));	}
label_23:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_EffectData_readEffect_java_io_DataInputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectData:readEffect", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	frame[2].i = (jint(0));
	LINE_NUMBER(63);
	frame[3].i = (jint(0));
	LINE_NUMBER(64);
	frame[4].i = (jint(0));
	LINE_NUMBER(65);
	frame[5].i = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_ImageInfo, (frame[6].i));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_imgInfo = (jref) sp[1].o;
	LINE_NUMBER(71);
	frame[7].i = (jint(0));
	}
label_10:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_11;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	jint temp0 = frame[7].i;
	clinit_nro_ImageInfo(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_ImageInfo);
	init_nro_ImageInfo(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_ID = temp1;
	LINE_NUMBER(74);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i));
	jint temp2 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_x = (jshort(temp2));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i));
	jint temp3 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_y = (jshort(temp3));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i));
	jint temp4 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_x0 = (jshort(temp4));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i));
	jint temp5 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_y0 = (jshort(temp5));
	LINE_NUMBER(71);
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_Frame, (frame[7].i));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_frame = (jref) sp[1].o;
	LINE_NUMBER(83);
	frame[6].i = (jint(0));
	}
label_21:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_22;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp0 = frame[6].i;
	clinit_nro_Frame(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Frame);
	init_nro_Frame(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(85);
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[8].i = temp1;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	sp[1].o = (jobject) createArray(ctx, &class_short, (frame[8].i));
	((nro_Frame *) NULL_CHECK(sp[0].o))->F_dx = (jref) sp[1].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	sp[1].o = (jobject) createArray(ctx, &class_short, (frame[8].i));
	((nro_Frame *) NULL_CHECK(sp[0].o))->F_dy = (jref) sp[1].o;
	LINE_NUMBER(88);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[8].i));
	((nro_Frame *) NULL_CHECK(sp[0].o))->F_idImg = (jref) sp[1].o;
	LINE_NUMBER(90);
	frame[9].i = (jint(0));
	}
label_29:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_30;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dx;
	jint temp0 = frame[9].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = temp1;
	LINE_NUMBER(92);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dy;
	jint temp2 = frame[9].i;
	jint temp3 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp2) = temp3;
	LINE_NUMBER(93);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_idImg;
	jint temp4 = frame[9].i;
	jint temp5 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = temp5;
	LINE_NUMBER(94);
	if ((frame[6].i) != 0) goto label_35;
	}
	{
	LINE_NUMBER(95);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dx;
	if (temp0 <= ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i)))) goto label_37;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dx;
	frame[2].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i)));
	}
label_37:;
	{
	LINE_NUMBER(99);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dy;
	if (temp0 <= ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i)))) goto label_39;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dy;
	frame[3].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i)));
	}
label_39:;
	{
	LINE_NUMBER(103);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dx;
	jint temp1 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_idImg;
	if (temp0 >= (temp1 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[9].i)))))))->F_x0))) goto label_41;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dx;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_idImg;
	frame[4].i = (temp0 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[9].i)))))))->F_x0));
	}
label_41:;
	{
	LINE_NUMBER(107);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dy;
	jint temp1 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_idImg;
	if (temp0 >= (temp1 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[9].i)))))))->F_y0))) goto label_43;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dy;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_idImg;
	frame[5].i = (temp0 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[9].i)))))))->F_y0));
	}
label_43:;
	{
	LINE_NUMBER(111);
	((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_width = ((frame[4].i) - (frame[2].i));
	LINE_NUMBER(112);
	((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_height = ((frame[5].i) - (frame[3].i));
	}
label_35:;
	{
	LINE_NUMBER(90);
	INST_IINC(9, 1);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(83);
	INST_IINC(6, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject) createArray(ctx, &class_short, temp0);
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_arrFrame = (jref) sp[1].o;
	LINE_NUMBER(119);
	frame[6].i = (jint(0));
	}
label_47:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_arrFrame;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_arrFrame;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = temp1;
	LINE_NUMBER(119);
	INST_IINC(6, 1);
	goto label_47;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(124);
	goto label_50;
label_2:;
	LINE_NUMBER(123);
	INST_ASTORE(6);
label_50:;
	LINE_NUMBER(125);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_EffectData_readData_java_io_DataInputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectData:readData", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	frame[2].i = (jint(0));
	LINE_NUMBER(129);
	frame[3].i = (jint(0));
	LINE_NUMBER(130);
	frame[4].i = (jint(0));
	LINE_NUMBER(131);
	frame[5].i = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(135);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"small num= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_ImageInfo, (frame[6].i));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_imgInfo = (jref) sp[1].o;
	LINE_NUMBER(138);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	jint temp0 = frame[7].i;
	clinit_nro_ImageInfo(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_ImageInfo);
	init_nro_ImageInfo(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(140);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_ID = temp1;
	LINE_NUMBER(141);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i));
	jint temp2 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_x = (jshort(temp2));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i));
	jint temp3 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_y = (jshort(temp3));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i));
	jint temp4 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_x0 = (jshort(temp4));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i));
	jint temp5 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_y0 = (jshort(temp5));
	LINE_NUMBER(138);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_Frame, (frame[7].i));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_frame = (jref) sp[1].o;
	LINE_NUMBER(151);
	frame[6].i = (jint(0));
	}
label_22:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_23;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp0 = frame[6].i;
	clinit_nro_Frame(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Frame);
	init_nro_Frame(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(153);
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[8].i = temp1;
	LINE_NUMBER(154);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	sp[1].o = (jobject) createArray(ctx, &class_short, (frame[8].i));
	((nro_Frame *) NULL_CHECK(sp[0].o))->F_dx = (jref) sp[1].o;
	LINE_NUMBER(155);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	sp[1].o = (jobject) createArray(ctx, &class_short, (frame[8].i));
	((nro_Frame *) NULL_CHECK(sp[0].o))->F_dy = (jref) sp[1].o;
	LINE_NUMBER(156);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[8].i));
	((nro_Frame *) NULL_CHECK(sp[0].o))->F_idImg = (jref) sp[1].o;
	LINE_NUMBER(158);
	frame[9].i = (jint(0));
	}
label_30:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_31;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dx;
	jint temp0 = frame[9].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = temp1;
	LINE_NUMBER(160);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dy;
	jint temp2 = frame[9].i;
	jint temp3 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp2) = temp3;
	LINE_NUMBER(161);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_idImg;
	jint temp4 = frame[9].i;
	jint temp5 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = temp5;
	LINE_NUMBER(162);
	if ((frame[6].i) != 0) goto label_36;
	}
	{
	LINE_NUMBER(163);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dx;
	if (temp0 <= ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i)))) goto label_38;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dx;
	frame[2].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i)));
	}
label_38:;
	{
	LINE_NUMBER(167);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dy;
	if (temp0 <= ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i)))) goto label_40;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dy;
	frame[3].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i)));
	}
label_40:;
	{
	LINE_NUMBER(171);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dx;
	jint temp1 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_idImg;
	if (temp0 >= (temp1 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[9].i)))))))->F_x0))) goto label_42;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dx;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_idImg;
	frame[4].i = (temp0 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[9].i)))))))->F_x0));
	}
label_42:;
	{
	LINE_NUMBER(175);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dy;
	jint temp1 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_idImg;
	if (temp0 >= (temp1 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[9].i)))))))->F_y0))) goto label_44;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_dy;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[9].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_idImg;
	frame[5].i = (temp0 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[9].i)))))))->F_y0));
	}
label_44:;
	{
	LINE_NUMBER(179);
	((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_width = ((frame[4].i) - (frame[2].i));
	LINE_NUMBER(180);
	((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_height = ((frame[5].i) - (frame[3].i));
	}
label_36:;
	{
	LINE_NUMBER(158);
	INST_IINC(9, 1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(151);
	INST_IINC(6, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	frame[9].i = temp0;
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_short, (frame[9].i));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_arrFrame = (jref) sp[1].o;
	LINE_NUMBER(187);
	if (((jint)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_ID) < (201)) goto label_49;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(189);
	frame[2].i = (jint(0));
	LINE_NUMBER(190);
	frame[11].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(191);
	frame[12].i = (jint(0));
	LINE_NUMBER(193);
	frame[5].i = (jint(0));
	}
label_55:;
	{
	if ((frame[5].i) >= (frame[9].i)) goto label_56;
	}
	{
	LINE_NUMBER(194);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(195);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[11].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(196);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_arrFrame;
	ARRAY_ACCESS(jshort, sp[0].o, (frame[5].i)) = (frame[7].i);
	LINE_NUMBER(197);
	if (((frame[7].i) + (500)) < (500)) goto label_61;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = frame[10].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = (frame[7].i);
	LINE_NUMBER(199);
	frame[12].i = (jint(1));
	goto label_64;
	}
label_61:;
	{
	LINE_NUMBER(201);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[7].i) + (500)));
	frame[13].i = (jshort(temp0));
	LINE_NUMBER(202);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_anim_data;
	jint temp1 = frame[13].i;
	sp[1].o = (jobject) createArray(ctx, &class_short, (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(203);
	sp[0].o = frame[10].o;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_anim_data;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[13].i))), (jint(0)), (frame[2].i));
	LINE_NUMBER(204);
	frame[2].i = (jint(0));
	}
label_64:;
	{
	LINE_NUMBER(193);
	INST_IINC(5, 1);
	goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(208);
	if ((frame[12].i) != 0) goto label_68;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_anim_data;
	jint temp0 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_short, (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(210);
	sp[0].o = frame[10].o;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_anim_data;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (jint(0)), (frame[2].i));
	goto label_71;
	}
label_68:;
	{
	LINE_NUMBER(212);
	frame[5].i = (jint(0));
	}
label_72:;
	{
	if ((frame[5].i) >= (16)) goto label_71;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_anim_data;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))) != nullptr) goto label_74;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_anim_data;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_anim_data;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2))));
	}
label_74:;
	{
	LINE_NUMBER(212);
	INST_IINC(5, 1);
	goto label_72;
	}
label_71:;
	LINE_NUMBER(219);
	goto label_1;
label_49:;
	{
	LINE_NUMBER(220);
	frame[8].i = (jint(0));
	}
label_76:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_1;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_arrFrame;
	jint temp0 = frame[8].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = temp1;
	LINE_NUMBER(220);
	INST_IINC(8, 1);
	goto label_76;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(226);
	goto label_79;
label_2:;
	LINE_NUMBER(225);
	INST_ASTORE(6);
label_79:;
	LINE_NUMBER(227);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_EffectData_readDataNewBoss_Array1_byte_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectData:readDataNewBoss", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(230);
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(231);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(232);
	M_nro_EffectData_a_java_io_DataInputStream_byte(ctx, (frame[0].o), (frame[4].o), (frame[2].i));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_EffectData_readData_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectData:readData", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(237);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(238);
	M_nro_EffectData_readData_java_io_DataInputStream(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectData:paintFrame", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == 0) goto label_5;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(245);
	frame[8].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK((frame[7].o)))->F_dx;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK((frame[7].o)))->F_idImg;
	frame[9].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[8].i)));
	LINE_NUMBER(247);
	frame[10].o = (frame[0].o);
	LINE_NUMBER(251);
	frame[12].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[12].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[10].o)))->F_imgInfo;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_13;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[10].o)))->F_imgInfo;
	if (((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i)))))->F_ID) != (frame[9].i)) goto label_15;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[10].o)))->F_imgInfo;
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i)));
	LINE_NUMBER(254);
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(251);
	INST_IINC(12, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(258);
	frame[11].o = (jobject(nullptr));
	}
label_18:;
	{
	LINE_NUMBER(261);
	frame[12].o = (frame[11].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(264);
	if ((frame[5].i) != (jint(-1))) goto label_19;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp0 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_x;
	jint temp1 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_y;
	jint temp2 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_x0;
	jint temp3 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_y0;
	jint temp4 = jint(0);
	jint temp5 = frame[3].i;
	sp[2].o = (jobject)((nro_Frame *) NULL_CHECK((frame[7].o)))->F_dx;
	jint temp6 = temp5 + ((jint)ARRAY_ACCESS(jshort, sp[2].o, (frame[8].i)));
	jint temp7 = frame[4].i;
	sp[2].o = (jobject)((nro_Frame *) NULL_CHECK((frame[7].o)))->F_dy;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, temp4, temp6, (temp7 + ((jint)ARRAY_ACCESS(jshort, sp[2].o, (frame[8].i)))), (jint(0)));
	goto label_1;
	}
label_19:;
	{
	LINE_NUMBER(266);
	if ((frame[5].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp0 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_x;
	jint temp1 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_y;
	jint temp2 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_x0;
	jint temp3 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_y0;
	jint temp4 = jint(0);
	jint temp5 = frame[3].i;
	sp[2].o = (jobject)((nro_Frame *) NULL_CHECK((frame[7].o)))->F_dx;
	jint temp6 = temp5 + ((jint)ARRAY_ACCESS(jshort, sp[2].o, (frame[8].i)));
	jint temp7 = frame[4].i;
	sp[2].o = (jobject)((nro_Frame *) NULL_CHECK((frame[7].o)))->F_dy;
	jint temp8 = temp7 + ((jint)ARRAY_ACCESS(jshort, sp[2].o, (frame[8].i)));
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp[6].i = temp4;
	sp[7].i = temp6;
	sp[8].i = temp8;
	sp += 9;
	if ((frame[6].i) >= (jint(4))) goto label_23;
	}
	INST_ILOAD(6);
	if ((--sp)->i <= 0) goto label_23;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_transY;
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 10;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, sp[7].i, (sp[8].i - sp[9].i), (jint(0)));
	goto label_1;
	}
label_21:;
	{
	LINE_NUMBER(268);
	if ((frame[5].i) != (jint(1))) goto label_25;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp0 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_x;
	jint temp1 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_y;
	jint temp2 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_x0;
	jint temp3 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_y0;
	jint temp4 = jint(2);
	jint temp5 = frame[3].i;
	sp[2].o = (jobject)((nro_Frame *) NULL_CHECK((frame[7].o)))->F_dx;
	jint temp6 = temp5 - ((jint)ARRAY_ACCESS(jshort, sp[2].o, (frame[8].i)));
	jint temp7 = frame[4].i;
	sp[2].o = (jobject)((nro_Frame *) NULL_CHECK((frame[7].o)))->F_dy;
	jint temp8 = temp7 + ((jint)ARRAY_ACCESS(jshort, sp[2].o, (frame[8].i)));
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp[6].i = temp4;
	sp[7].i = temp6;
	sp[8].i = temp8;
	sp += 9;
	if ((frame[6].i) >= (jint(4))) goto label_27;
	}
	INST_ILOAD(6);
	if ((--sp)->i <= 0) goto label_27;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_transY;
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 10;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, sp[7].i, (sp[8].i - sp[9].i), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_RIGHT));
	goto label_1;
	}
label_25:;
	{
	LINE_NUMBER(270);
	if ((frame[5].i) != (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp0 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_x;
	jint temp1 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_y;
	jint temp2 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_x0;
	jint temp3 = (jint)((nro_ImageInfo *) NULL_CHECK((frame[12].o)))->F_y0;
	jint temp4 = 7;
	jint temp5 = frame[3].i;
	sp[2].o = (jobject)((nro_Frame *) NULL_CHECK((frame[7].o)))->F_dx;
	jint temp6 = temp5 - ((jint)ARRAY_ACCESS(jshort, sp[2].o, (frame[8].i)));
	jint temp7 = frame[4].i;
	sp[2].o = (jobject)((nro_Frame *) NULL_CHECK((frame[7].o)))->F_dy;
	jint temp8 = temp7 + ((jint)ARRAY_ACCESS(jshort, sp[2].o, (frame[8].i)));
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp[6].i = temp4;
	sp[7].i = temp6;
	sp[8].i = temp8;
	sp += 9;
	if ((frame[6].i) >= (jint(4))) goto label_30;
	}
	INST_ILOAD(6);
	if ((--sp)->i <= 0) goto label_30;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_transY;
	goto label_31;
label_30:;
	INST_ICONST(0);
label_31:;
	{
	sp -= 10;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, sp[7].i, (sp[8].i - sp[9].i), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(274);
	goto label_32;
label_2:;
	LINE_NUMBER(273);
	INST_ASTORE(13);
label_32:;
	{
	LINE_NUMBER(245);
	INST_IINC(8, 1);
	goto label_8;
	}
label_5:;
	LINE_NUMBER(278);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_EffectData_a_java_io_DataInputStream_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectData:a", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(281);
	frame[3].i = (jint(0));
	LINE_NUMBER(282);
	frame[4].i = (jint(0));
	LINE_NUMBER(283);
	frame[5].i = (jint(0));
	LINE_NUMBER(284);
	frame[6].i = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(287);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_ImageInfo, (frame[7].i));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_imgInfo = (jref) sp[1].o;
	LINE_NUMBER(291);
	frame[8].i = (jint(0));
	}
label_10:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_11;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	jint temp0 = frame[8].i;
	clinit_nro_ImageInfo(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_ImageInfo);
	init_nro_ImageInfo(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(293);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_ID = temp1;
	LINE_NUMBER(294);
	if ((frame[2].i) != (jint(1))) goto label_15;
	}
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i));
	jint temp0 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_x = (jshort(temp0));
	LINE_NUMBER(296);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i));
	jint temp1 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_y = (jshort(temp1));
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(299);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_y = temp1;
	}
label_18:;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i));
	jint temp0 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_x0 = (jshort(temp0));
	LINE_NUMBER(303);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i));
	jint temp1 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	((nro_ImageInfo *) NULL_CHECK(sp[0].o))->F_y0 = (jshort(temp1));
	LINE_NUMBER(291);
	INST_IINC(8, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(306);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	frame[9].i = temp0;
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_Frame, (frame[9].i));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_frame = (jref) sp[1].o;
	LINE_NUMBER(309);
	frame[2].i = (jint(0));
	}
label_24:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_25;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp0 = frame[2].i;
	clinit_nro_Frame(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Frame);
	init_nro_Frame(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(311);
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	frame[7].i = temp1;
	LINE_NUMBER(312);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject) createArray(ctx, &class_short, (frame[7].i));
	((nro_Frame *) NULL_CHECK(sp[0].o))->F_dx = (jref) sp[1].o;
	LINE_NUMBER(313);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject) createArray(ctx, &class_short, (frame[7].i));
	((nro_Frame *) NULL_CHECK(sp[0].o))->F_dy = (jref) sp[1].o;
	LINE_NUMBER(314);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[7].i));
	((nro_Frame *) NULL_CHECK(sp[0].o))->F_idImg = (jref) sp[1].o;
	LINE_NUMBER(316);
	frame[8].i = (jint(0));
	}
label_32:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_33;
	}
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_dx;
	jint temp0 = frame[8].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = temp1;
	LINE_NUMBER(318);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_dy;
	jint temp2 = frame[8].i;
	jint temp3 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp2) = temp3;
	LINE_NUMBER(319);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_idImg;
	jint temp4 = frame[8].i;
	jint temp5 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = temp5;
	LINE_NUMBER(320);
	if ((frame[2].i) != 0) goto label_38;
	}
	{
	LINE_NUMBER(321);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_dx;
	if (temp0 <= ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[8].i)))) goto label_40;
	}
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_dx;
	frame[3].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[8].i)));
	}
label_40:;
	{
	LINE_NUMBER(325);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_dy;
	if (temp0 <= ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[8].i)))) goto label_42;
	}
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_dy;
	frame[4].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[8].i)));
	}
label_42:;
	{
	LINE_NUMBER(329);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_dx;
	jint temp1 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[8].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_idImg;
	if (temp0 >= (temp1 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[8].i)))))))->F_x0))) goto label_44;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_dx;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[8].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_idImg;
	frame[5].i = (temp0 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[8].i)))))))->F_x0));
	}
label_44:;
	{
	LINE_NUMBER(333);
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_dy;
	jint temp1 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[8].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_idImg;
	if (temp0 >= (temp1 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[8].i)))))))->F_y0))) goto label_46;
	}
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_dy;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[8].i));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_imgInfo;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[1].o = (jobject)((nro_Frame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_idImg;
	frame[6].i = (temp0 + ((jint)((nro_ImageInfo *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[8].i)))))))->F_y0));
	}
label_46:;
	{
	LINE_NUMBER(337);
	((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_width = ((frame[5].i) - (frame[3].i));
	LINE_NUMBER(338);
	((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_height = ((frame[6].i) - (frame[4].i));
	}
label_38:;
	{
	LINE_NUMBER(316);
	INST_IINC(8, 1);
	goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(309);
	frame[2].i = (jbyte(((frame[2].i) + (jint(1)))));
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(343);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject) createArray(ctx, &class_short, temp0);
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_arrFrame = (jref) sp[1].o;
	LINE_NUMBER(345);
	frame[2].i = (jint(0));
	}
label_50:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_arrFrame;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[0].o)))->F_arrFrame;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = temp1;
	LINE_NUMBER(345);
	frame[2].i = (jbyte(((frame[2].i) + (jint(1)))));
	goto label_50;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(350);
	goto label_53;
label_2:;
	LINE_NUMBER(349);
	INST_ASTORE(7);
label_53:;
	LINE_NUMBER(351);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_EffectData[] {
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
	(void *) M_nro_EffectData_readData_java_lang_String,
	(void *) M_nro_EffectData_readData2_java_lang_String,
	(void *) M_nro_EffectData_readEffect_java_io_DataInputStream,
	(void *) M_nro_EffectData_readData_java_io_DataInputStream,
	(void *) M_nro_EffectData_readDataNewBoss_Array1_byte_byte,
	(void *) M_nro_EffectData_readData_Array1_byte,
	(void *) M_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int,
	(void *) M_nro_EffectData_a_java_io_DataInputStream_byte,
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
	{ "readData", "(Ljava/lang/String;)V" },
	{ "readData2", "(Ljava/lang/String;)V" },
	{ "readEffect", "(Ljava/io/DataInputStream;)V" },
	{ "readData", "(Ljava/io/DataInputStream;)V" },
	{ "readDataNewBoss", "([BB)V" },
	{ "readData", "([B)V" },
	{ "paintFrame", "(Llib/mGraphics;IIIII)V" },
	{ "a", "(Ljava/io/DataInputStream;B)V" },
};

static FieldMetadata fields[] {
	{ "img", &class_javax_microedition_lcdui_Image, offsetof(nro_EffectData, F_img), "Ljavax/microedition/lcdui/Image;", 1 },
	{ "imgInfo", getArrayClass(&class_nro_ImageInfo, 1), offsetof(nro_EffectData, F_imgInfo), "[Lnro/ImageInfo;", 2 },
	{ "frame", getArrayClass(&class_nro_Frame, 1), offsetof(nro_EffectData, F_frame), "[Lnro/Frame;", 2 },
	{ "arrFrame", getArrayClass(&class_short, 1), offsetof(nro_EffectData, F_arrFrame), "[S", 1 },
	{ "anim_data", getArrayClass(&class_short, 2), offsetof(nro_EffectData, F_anim_data), "[[S", 1 },
	{ "ID", &class_int, offsetof(nro_EffectData, F_ID), "I", 1 },
	{ "typeData", &class_int, offsetof(nro_EffectData, F_typeData), "I", 1 },
	{ "width", &class_int, offsetof(nro_EffectData, F_width), "I", 1 },
	{ "height", &class_int, offsetof(nro_EffectData, F_height), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_EffectData, 0, "()V", 1 },
	{ "readData", (intptr_t) M_nro_EffectData_readData_java_lang_String, VTABLE_nro_EffectData_readData_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "readData2", (intptr_t) M_nro_EffectData_readData2_java_lang_String, VTABLE_nro_EffectData_readData2_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "readEffect", (intptr_t) M_nro_EffectData_readEffect_java_io_DataInputStream, VTABLE_nro_EffectData_readEffect_java_io_DataInputStream, "(Ljava/io/DataInputStream;)V", 2 },
	{ "readData", (intptr_t) M_nro_EffectData_readData_java_io_DataInputStream, VTABLE_nro_EffectData_readData_java_io_DataInputStream, "(Ljava/io/DataInputStream;)V", 2 },
	{ "readDataNewBoss", (intptr_t) M_nro_EffectData_readDataNewBoss_Array1_byte_byte, VTABLE_nro_EffectData_readDataNewBoss_Array1_byte_byte, "([BB)V", 17 },
	{ "readData", (intptr_t) M_nro_EffectData_readData_Array1_byte, VTABLE_nro_EffectData_readData_Array1_byte, "([B)V", 17 },
	{ "paintFrame", (intptr_t) M_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int, VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int, "(Llib/mGraphics;IIIII)V", 17 },
	{ "a", (intptr_t) M_nro_EffectData_a_java_io_DataInputStream_byte, VTABLE_nro_EffectData_a_java_io_DataInputStream_byte, "(Ljava/io/DataInputStream;B)V", 2 },
};

Class class_nro_EffectData{
		.nativeName = (intptr_t) "nro/EffectData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_EffectData),
		.classVtable = (intptr_t) vtable_nro_EffectData,
		.staticInitializer = (intptr_t) clinit_nro_EffectData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_EffectData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_EffectData = registerClass(&class_nro_EffectData);

}

